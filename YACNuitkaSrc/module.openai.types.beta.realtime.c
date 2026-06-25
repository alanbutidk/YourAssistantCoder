/* Generated code for Python module 'openai$types$beta$realtime'
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



/* The "module_openai$types$beta$realtime" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$beta$realtime;
PyDictObject *moduledict_openai$types$beta$realtime;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_c0760630ed38e8aa80130ab81decf450_tuple;
PyObject *const_str_digest_8934366facfd9e426c9738bb9266ccb6;
PyObject *const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple;
PyObject *const_str_digest_4d763f35a2a2d020fa628221d7073347;
PyObject *const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple;
PyObject *const_str_plain_realtime;
PyObject *const_tuple_fcef03cade0d67fa046c7c22fbddc587_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_session;
PyObject *const_tuple_str_plain_Session_tuple;
PyObject *const_str_plain_Session;
PyObject *const_str_plain_error_event;
PyObject *const_tuple_str_plain_ErrorEvent_tuple;
PyObject *const_str_plain_ErrorEvent;
PyObject *const_str_plain_conversation_item;
PyObject *const_tuple_str_plain_ConversationItem_tuple;
PyObject *const_str_plain_ConversationItem;
PyObject *const_str_plain_realtime_response;
PyObject *const_tuple_str_plain_RealtimeResponse_tuple;
PyObject *const_str_plain_RealtimeResponse;
PyObject *const_str_plain_response_done_event;
PyObject *const_tuple_str_plain_ResponseDoneEvent_tuple;
PyObject *const_str_plain_ResponseDoneEvent;
PyObject *const_str_plain_session_update_event;
PyObject *const_tuple_str_plain_SessionUpdateEvent_tuple;
PyObject *const_str_plain_SessionUpdateEvent;
PyObject *const_str_plain_realtime_client_event;
PyObject *const_tuple_str_plain_RealtimeClientEvent_tuple;
PyObject *const_str_plain_RealtimeClientEvent;
PyObject *const_str_plain_realtime_server_event;
PyObject *const_tuple_str_plain_RealtimeServerEvent_tuple;
PyObject *const_str_plain_RealtimeServerEvent;
PyObject *const_str_plain_response_cancel_event;
PyObject *const_tuple_str_plain_ResponseCancelEvent_tuple;
PyObject *const_str_plain_ResponseCancelEvent;
PyObject *const_str_plain_response_create_event;
PyObject *const_tuple_str_plain_ResponseCreateEvent_tuple;
PyObject *const_str_plain_ResponseCreateEvent;
PyObject *const_str_plain_session_create_params;
PyObject *const_tuple_str_plain_SessionCreateParams_tuple;
PyObject *const_str_plain_SessionCreateParams;
PyObject *const_str_plain_session_created_event;
PyObject *const_tuple_str_plain_SessionCreatedEvent_tuple;
PyObject *const_str_plain_SessionCreatedEvent;
PyObject *const_str_plain_session_updated_event;
PyObject *const_tuple_str_plain_SessionUpdatedEvent_tuple;
PyObject *const_str_plain_SessionUpdatedEvent;
PyObject *const_str_plain_transcription_session;
PyObject *const_tuple_str_plain_TranscriptionSession_tuple;
PyObject *const_str_plain_TranscriptionSession;
PyObject *const_str_plain_response_created_event;
PyObject *const_tuple_str_plain_ResponseCreatedEvent_tuple;
PyObject *const_str_plain_ResponseCreatedEvent;
PyObject *const_str_plain_conversation_item_param;
PyObject *const_tuple_str_plain_ConversationItemParam_tuple;
PyObject *const_str_plain_ConversationItemParam;
PyObject *const_str_plain_realtime_connect_params;
PyObject *const_tuple_str_plain_RealtimeConnectParams_tuple;
PyObject *const_str_plain_RealtimeConnectParams;
PyObject *const_str_plain_realtime_response_usage;
PyObject *const_tuple_str_plain_RealtimeResponseUsage_tuple;
PyObject *const_str_plain_RealtimeResponseUsage;
PyObject *const_str_plain_session_create_response;
PyObject *const_tuple_str_plain_SessionCreateResponse_tuple;
PyObject *const_str_plain_SessionCreateResponse;
PyObject *const_str_plain_realtime_response_status;
PyObject *const_tuple_str_plain_RealtimeResponseStatus_tuple;
PyObject *const_str_plain_RealtimeResponseStatus;
PyObject *const_str_plain_response_text_done_event;
PyObject *const_tuple_str_plain_ResponseTextDoneEvent_tuple;
PyObject *const_str_plain_ResponseTextDoneEvent;
PyObject *const_str_plain_conversation_item_content;
PyObject *const_tuple_str_plain_ConversationItemContent_tuple;
PyObject *const_str_plain_ConversationItemContent;
PyObject *const_str_plain_rate_limits_updated_event;
PyObject *const_tuple_str_plain_RateLimitsUpdatedEvent_tuple;
PyObject *const_str_plain_RateLimitsUpdatedEvent;
PyObject *const_str_plain_response_audio_done_event;
PyObject *const_tuple_str_plain_ResponseAudioDoneEvent_tuple;
PyObject *const_str_plain_ResponseAudioDoneEvent;
PyObject *const_str_plain_response_text_delta_event;
PyObject *const_tuple_str_plain_ResponseTextDeltaEvent_tuple;
PyObject *const_str_plain_ResponseTextDeltaEvent;
PyObject *const_str_plain_conversation_created_event;
PyObject *const_tuple_str_plain_ConversationCreatedEvent_tuple;
PyObject *const_str_plain_ConversationCreatedEvent;
PyObject *const_str_plain_response_audio_delta_event;
PyObject *const_tuple_str_plain_ResponseAudioDeltaEvent_tuple;
PyObject *const_str_plain_ResponseAudioDeltaEvent;
PyObject *const_str_plain_session_update_event_param;
PyObject *const_tuple_str_plain_SessionUpdateEventParam_tuple;
PyObject *const_str_plain_SessionUpdateEventParam;
PyObject *const_str_plain_realtime_client_event_param;
PyObject *const_tuple_str_plain_RealtimeClientEventParam_tuple;
PyObject *const_str_plain_RealtimeClientEventParam;
PyObject *const_str_plain_response_cancel_event_param;
PyObject *const_tuple_str_plain_ResponseCancelEventParam_tuple;
PyObject *const_str_plain_ResponseCancelEventParam;
PyObject *const_str_plain_response_create_event_param;
PyObject *const_tuple_str_plain_ResponseCreateEventParam_tuple;
PyObject *const_str_plain_ResponseCreateEventParam;
PyObject *const_str_plain_transcription_session_update;
PyObject *const_tuple_str_plain_TranscriptionSessionUpdate_tuple;
PyObject *const_str_plain_TranscriptionSessionUpdate;
PyObject *const_str_plain_conversation_item_create_event;
PyObject *const_tuple_str_plain_ConversationItemCreateEvent_tuple;
PyObject *const_str_plain_ConversationItemCreateEvent;
PyObject *const_str_plain_conversation_item_delete_event;
PyObject *const_tuple_str_plain_ConversationItemDeleteEvent_tuple;
PyObject *const_str_plain_ConversationItemDeleteEvent;
PyObject *const_str_plain_input_audio_buffer_clear_event;
PyObject *const_tuple_str_plain_InputAudioBufferClearEvent_tuple;
PyObject *const_str_plain_InputAudioBufferClearEvent;
PyObject *const_str_plain_conversation_item_content_param;
PyObject *const_tuple_str_plain_ConversationItemContentParam_tuple;
PyObject *const_str_plain_ConversationItemContentParam;
PyObject *const_str_plain_conversation_item_created_event;
PyObject *const_tuple_str_plain_ConversationItemCreatedEvent_tuple;
PyObject *const_str_plain_ConversationItemCreatedEvent;
PyObject *const_str_plain_conversation_item_deleted_event;
PyObject *const_tuple_str_plain_ConversationItemDeletedEvent_tuple;
PyObject *const_str_plain_ConversationItemDeletedEvent;
PyObject *const_str_plain_input_audio_buffer_append_event;
PyObject *const_tuple_str_plain_InputAudioBufferAppendEvent_tuple;
PyObject *const_str_plain_InputAudioBufferAppendEvent;
PyObject *const_str_plain_input_audio_buffer_commit_event;
PyObject *const_tuple_str_plain_InputAudioBufferCommitEvent_tuple;
PyObject *const_str_plain_InputAudioBufferCommitEvent;
PyObject *const_str_plain_response_output_item_done_event;
PyObject *const_tuple_str_plain_ResponseOutputItemDoneEvent_tuple;
PyObject *const_str_plain_ResponseOutputItemDoneEvent;
PyObject *const_str_plain_conversation_item_retrieve_event;
PyObject *const_tuple_str_plain_ConversationItemRetrieveEvent_tuple;
PyObject *const_str_plain_ConversationItemRetrieveEvent;
PyObject *const_str_plain_conversation_item_truncate_event;
PyObject *const_tuple_str_plain_ConversationItemTruncateEvent_tuple;
PyObject *const_str_plain_ConversationItemTruncateEvent;
PyObject *const_str_plain_conversation_item_with_reference;
PyObject *const_tuple_str_plain_ConversationItemWithReference_tuple;
PyObject *const_str_plain_ConversationItemWithReference;
PyObject *const_str_plain_input_audio_buffer_cleared_event;
PyObject *const_tuple_str_plain_InputAudioBufferClearedEvent_tuple;
PyObject *const_str_plain_InputAudioBufferClearedEvent;
PyObject *const_str_plain_response_content_part_done_event;
PyObject *const_tuple_str_plain_ResponseContentPartDoneEvent_tuple;
PyObject *const_str_plain_ResponseContentPartDoneEvent;
PyObject *const_str_plain_response_output_item_added_event;
PyObject *const_tuple_str_plain_ResponseOutputItemAddedEvent_tuple;
PyObject *const_str_plain_ResponseOutputItemAddedEvent;
PyObject *const_str_plain_conversation_item_truncated_event;
PyObject *const_tuple_str_plain_ConversationItemTruncatedEvent_tuple;
PyObject *const_str_plain_ConversationItemTruncatedEvent;
PyObject *const_str_plain_response_content_part_added_event;
PyObject *const_tuple_str_plain_ResponseContentPartAddedEvent_tuple;
PyObject *const_str_plain_ResponseContentPartAddedEvent;
PyObject *const_str_plain_input_audio_buffer_committed_event;
PyObject *const_tuple_str_plain_InputAudioBufferCommittedEvent_tuple;
PyObject *const_str_plain_InputAudioBufferCommittedEvent;
PyObject *const_str_plain_transcription_session_update_param;
PyObject *const_tuple_str_plain_TranscriptionSessionUpdateParam_tuple;
PyObject *const_str_plain_TranscriptionSessionUpdateParam;
PyObject *const_str_plain_transcription_session_create_params;
PyObject *const_tuple_str_plain_TranscriptionSessionCreateParams_tuple;
PyObject *const_str_plain_TranscriptionSessionCreateParams;
PyObject *const_str_plain_transcription_session_updated_event;
PyObject *const_tuple_str_plain_TranscriptionSessionUpdatedEvent_tuple;
PyObject *const_str_plain_TranscriptionSessionUpdatedEvent;
PyObject *const_str_plain_conversation_item_create_event_param;
PyObject *const_tuple_str_plain_ConversationItemCreateEventParam_tuple;
PyObject *const_str_plain_ConversationItemCreateEventParam;
PyObject *const_str_plain_conversation_item_delete_event_param;
PyObject *const_tuple_str_plain_ConversationItemDeleteEventParam_tuple;
PyObject *const_str_plain_ConversationItemDeleteEventParam;
PyObject *const_str_plain_input_audio_buffer_clear_event_param;
PyObject *const_tuple_str_plain_InputAudioBufferClearEventParam_tuple;
PyObject *const_str_plain_InputAudioBufferClearEventParam;
PyObject *const_str_plain_response_audio_transcript_done_event;
PyObject *const_tuple_str_plain_ResponseAudioTranscriptDoneEvent_tuple;
PyObject *const_str_plain_ResponseAudioTranscriptDoneEvent;
PyObject *const_str_plain_input_audio_buffer_append_event_param;
PyObject *const_tuple_str_plain_InputAudioBufferAppendEventParam_tuple;
PyObject *const_str_plain_InputAudioBufferAppendEventParam;
PyObject *const_str_plain_input_audio_buffer_commit_event_param;
PyObject *const_tuple_str_plain_InputAudioBufferCommitEventParam_tuple;
PyObject *const_str_plain_InputAudioBufferCommitEventParam;
PyObject *const_str_plain_response_audio_transcript_delta_event;
PyObject *const_tuple_str_plain_ResponseAudioTranscriptDeltaEvent_tuple;
PyObject *const_str_plain_ResponseAudioTranscriptDeltaEvent;
PyObject *const_str_plain_conversation_item_retrieve_event_param;
PyObject *const_tuple_str_plain_ConversationItemRetrieveEventParam_tuple;
PyObject *const_str_plain_ConversationItemRetrieveEventParam;
PyObject *const_str_plain_conversation_item_truncate_event_param;
PyObject *const_tuple_str_plain_ConversationItemTruncateEventParam_tuple;
PyObject *const_str_plain_ConversationItemTruncateEventParam;
PyObject *const_str_plain_conversation_item_with_reference_param;
PyObject *const_tuple_str_plain_ConversationItemWithReferenceParam_tuple;
PyObject *const_str_plain_ConversationItemWithReferenceParam;
PyObject *const_str_plain_input_audio_buffer_speech_started_event;
PyObject *const_tuple_str_plain_InputAudioBufferSpeechStartedEvent_tuple;
PyObject *const_str_plain_InputAudioBufferSpeechStartedEvent;
PyObject *const_str_plain_input_audio_buffer_speech_stopped_event;
PyObject *const_tuple_str_plain_InputAudioBufferSpeechStoppedEvent_tuple;
PyObject *const_str_plain_InputAudioBufferSpeechStoppedEvent;
PyObject *const_str_digest_7ca10734868c9e71eef094920fbc18a5;
PyObject *const_tuple_str_plain_ResponseFunctionCallArgumentsDoneEvent_tuple;
PyObject *const_str_plain_ResponseFunctionCallArgumentsDoneEvent;
PyObject *const_str_digest_4b1771f20cc66dbc0ca5aadc0c0b9ccb;
PyObject *const_tuple_str_plain_ResponseFunctionCallArgumentsDeltaEvent_tuple;
PyObject *const_str_plain_ResponseFunctionCallArgumentsDeltaEvent;
PyObject *const_str_digest_2a2c0f6b84436c24f725c670ac995300;
PyObject *const_tuple_str_digest_c5c05f4559e59191cd8f4da86de983cc_tuple;
PyObject *const_str_digest_c5c05f4559e59191cd8f4da86de983cc;
PyObject *const_str_digest_22fc1dc388aebcce4181e2927aaf9e98;
PyObject *const_tuple_str_digest_36b86d56ee418d6968aa8e8d1a2412f8_tuple;
PyObject *const_str_digest_36b86d56ee418d6968aa8e8d1a2412f8;
PyObject *const_str_digest_3435f1d9bfd0cb5f22552ea2ea827764;
PyObject *const_tuple_str_digest_f2ae5b644ad8df2ab94078698d350cd0_tuple;
PyObject *const_str_digest_f2ae5b644ad8df2ab94078698d350cd0;
PyObject *const_str_digest_6a1990652204ae2a527deca2004a47dd;
PyObject *const_str_digest_b424be6679f4a4ba0cd63dfb32341c0c;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[225];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.beta.realtime"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_8934366facfd9e426c9738bb9266ccb6);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d763f35a2a2d020fa628221d7073347);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_realtime);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_fcef03cade0d67fa046c7c22fbddc587_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_session);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Session_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_Session);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_error_event);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ErrorEvent_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorEvent);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItem_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItem);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_response);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeResponse_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeResponse);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_done_event);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseDoneEvent_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseDoneEvent);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_update_event);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionUpdateEvent_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionUpdateEvent);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_client_event);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeClientEvent_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeClientEvent);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_server_event);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeServerEvent_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeServerEvent);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_cancel_event);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCancelEvent_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCancelEvent);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_create_event);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCreateEvent_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCreateEvent);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_create_params);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionCreateParams_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionCreateParams);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_created_event);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionCreatedEvent_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionCreatedEvent);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_updated_event);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionUpdatedEvent_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionUpdatedEvent);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_transcription_session);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranscriptionSession_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_TranscriptionSession);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_created_event);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCreatedEvent_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCreatedEvent);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_param);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemParam_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemParam);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_connect_params);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeConnectParams_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeConnectParams);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_response_usage);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeResponseUsage_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeResponseUsage);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_create_response);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionCreateResponse_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionCreateResponse);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_response_status);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeResponseStatus_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeResponseStatus);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_text_done_event);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseTextDoneEvent_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseTextDoneEvent);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_content);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemContent_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemContent);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_rate_limits_updated_event);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RateLimitsUpdatedEvent_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_RateLimitsUpdatedEvent);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_done_event);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioDoneEvent_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioDoneEvent);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_text_delta_event);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseTextDeltaEvent_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseTextDeltaEvent);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_created_event);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationCreatedEvent_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationCreatedEvent);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_delta_event);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioDeltaEvent_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioDeltaEvent);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_update_event_param);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionUpdateEventParam_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionUpdateEventParam);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_client_event_param);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeClientEventParam_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeClientEventParam);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_cancel_event_param);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCancelEventParam_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCancelEventParam);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_create_event_param);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCreateEventParam_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCreateEventParam);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_transcription_session_update);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranscriptionSessionUpdate_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_TranscriptionSessionUpdate);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_create_event);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemCreateEvent_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemCreateEvent);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_delete_event);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemDeleteEvent_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemDeleteEvent);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_clear_event);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferClearEvent_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferClearEvent);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_content_param);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemContentParam_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemContentParam);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_created_event);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemCreatedEvent_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemCreatedEvent);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_deleted_event);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemDeletedEvent_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemDeletedEvent);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_append_event);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferAppendEvent_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferAppendEvent);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_commit_event);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferCommitEvent_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferCommitEvent);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_output_item_done_event);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseOutputItemDoneEvent_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_retrieve_event);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemRetrieveEvent_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemRetrieveEvent);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_truncate_event);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemTruncateEvent_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemTruncateEvent);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_with_reference);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemWithReference_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemWithReference);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_cleared_event);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferClearedEvent_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferClearedEvent);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_content_part_done_event);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseContentPartDoneEvent_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContentPartDoneEvent);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_output_item_added_event);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseOutputItemAddedEvent_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_truncated_event);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemTruncatedEvent_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemTruncatedEvent);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_content_part_added_event);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseContentPartAddedEvent_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContentPartAddedEvent);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_committed_event);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferCommittedEvent_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferCommittedEvent);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_transcription_session_update_param);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranscriptionSessionUpdateParam_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_TranscriptionSessionUpdateParam);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_transcription_session_create_params);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranscriptionSessionCreateParams_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_TranscriptionSessionCreateParams);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_transcription_session_updated_event);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranscriptionSessionUpdatedEvent_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_TranscriptionSessionUpdatedEvent);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_create_event_param);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemCreateEventParam_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemCreateEventParam);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_delete_event_param);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemDeleteEventParam_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemDeleteEventParam);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_clear_event_param);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferClearEventParam_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferClearEventParam);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_transcript_done_event);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDoneEvent_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_append_event_param);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferAppendEventParam_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferAppendEventParam);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_commit_event_param);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferCommitEventParam_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferCommitEventParam);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_transcript_delta_event);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDeltaEvent_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_retrieve_event_param);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemRetrieveEventParam_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemRetrieveEventParam);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_truncate_event_param);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemTruncateEventParam_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemTruncateEventParam);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_with_reference_param);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemWithReferenceParam_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemWithReferenceParam);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_speech_started_event);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferSpeechStartedEvent_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferSpeechStartedEvent);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_speech_stopped_event);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferSpeechStoppedEvent_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferSpeechStoppedEvent);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ca10734868c9e71eef094920fbc18a5);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDoneEvent_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b1771f20cc66dbc0ca5aadc0c0b9ccb);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDeltaEvent_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a2c0f6b84436c24f725c670ac995300);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c5c05f4559e59191cd8f4da86de983cc_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5c05f4559e59191cd8f4da86de983cc);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_digest_22fc1dc388aebcce4181e2927aaf9e98);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_36b86d56ee418d6968aa8e8d1a2412f8_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_36b86d56ee418d6968aa8e8d1a2412f8);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_3435f1d9bfd0cb5f22552ea2ea827764);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f2ae5b644ad8df2ab94078698d350cd0_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2ae5b644ad8df2ab94078698d350cd0);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a1990652204ae2a527deca2004a47dd);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_b424be6679f4a4ba0cd63dfb32341c0c);
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
void checkModuleConstants_openai$types$beta$realtime(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_8934366facfd9e426c9738bb9266ccb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8934366facfd9e426c9738bb9266ccb6);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d763f35a2a2d020fa628221d7073347));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d763f35a2a2d020fa628221d7073347);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_realtime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_realtime);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_fcef03cade0d67fa046c7c22fbddc587_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fcef03cade0d67fa046c7c22fbddc587_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Session_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Session_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_Session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Session);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_error_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error_event);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ErrorEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ErrorEvent_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ErrorEvent);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItem_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItem_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItem);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_realtime_response);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RealtimeResponse_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RealtimeResponse);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_done_event);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseDoneEvent_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseDoneEvent);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_update_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_update_event);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionUpdateEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SessionUpdateEvent_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionUpdateEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionUpdateEvent);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_client_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_realtime_client_event);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeClientEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RealtimeClientEvent_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeClientEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RealtimeClientEvent);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_server_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_realtime_server_event);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeServerEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RealtimeServerEvent_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeServerEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RealtimeServerEvent);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_cancel_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_cancel_event);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCancelEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseCancelEvent_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCancelEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseCancelEvent);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_create_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_create_event);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCreateEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseCreateEvent_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCreateEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseCreateEvent);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_create_params);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SessionCreateParams_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionCreateParams);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_created_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_created_event);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionCreatedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SessionCreatedEvent_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionCreatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionCreatedEvent);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_updated_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_updated_event);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionUpdatedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SessionUpdatedEvent_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionUpdatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionUpdatedEvent);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_transcription_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transcription_session);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranscriptionSession_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TranscriptionSession_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_TranscriptionSession));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TranscriptionSession);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_created_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_created_event);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCreatedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseCreatedEvent_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCreatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseCreatedEvent);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_param);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemParam_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemParam);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_connect_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_realtime_connect_params);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeConnectParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RealtimeConnectParams_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeConnectParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RealtimeConnectParams);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_response_usage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_realtime_response_usage);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeResponseUsage_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RealtimeResponseUsage_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeResponseUsage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RealtimeResponseUsage);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_create_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_create_response);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionCreateResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SessionCreateResponse_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionCreateResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionCreateResponse);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_response_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_realtime_response_status);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeResponseStatus_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RealtimeResponseStatus_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeResponseStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RealtimeResponseStatus);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_text_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_text_done_event);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseTextDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseTextDoneEvent_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseTextDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseTextDoneEvent);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_content);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemContent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemContent_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemContent);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_rate_limits_updated_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rate_limits_updated_event);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RateLimitsUpdatedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RateLimitsUpdatedEvent_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_RateLimitsUpdatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RateLimitsUpdatedEvent);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_audio_done_event);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseAudioDoneEvent_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseAudioDoneEvent);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_text_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_text_delta_event);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseTextDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseTextDeltaEvent_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseTextDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseTextDeltaEvent);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_created_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_created_event);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationCreatedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationCreatedEvent_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationCreatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationCreatedEvent);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_audio_delta_event);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseAudioDeltaEvent_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseAudioDeltaEvent);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_update_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_update_event_param);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SessionUpdateEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SessionUpdateEventParam_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionUpdateEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionUpdateEventParam);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_client_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_realtime_client_event_param);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RealtimeClientEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RealtimeClientEventParam_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_RealtimeClientEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RealtimeClientEventParam);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_cancel_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_cancel_event_param);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCancelEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseCancelEventParam_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCancelEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseCancelEventParam);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_create_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_create_event_param);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCreateEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseCreateEventParam_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCreateEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseCreateEventParam);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_transcription_session_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transcription_session_update);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranscriptionSessionUpdate_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TranscriptionSessionUpdate_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_TranscriptionSessionUpdate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TranscriptionSessionUpdate);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_create_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_create_event);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemCreateEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemCreateEvent_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemCreateEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemCreateEvent);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_delete_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_delete_event);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemDeleteEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemDeleteEvent_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemDeleteEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemDeleteEvent);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_clear_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_buffer_clear_event);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferClearEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputAudioBufferClearEvent_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferClearEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputAudioBufferClearEvent);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_content_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_content_param);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemContentParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemContentParam_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemContentParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemContentParam);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_created_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_created_event);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemCreatedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemCreatedEvent_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemCreatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemCreatedEvent);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_deleted_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_deleted_event);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemDeletedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemDeletedEvent_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemDeletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemDeletedEvent);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_append_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_buffer_append_event);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferAppendEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputAudioBufferAppendEvent_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferAppendEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputAudioBufferAppendEvent);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_commit_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_buffer_commit_event);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferCommitEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputAudioBufferCommitEvent_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferCommitEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputAudioBufferCommitEvent);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_output_item_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_output_item_done_event);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseOutputItemDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseOutputItemDoneEvent_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseOutputItemDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_retrieve_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_retrieve_event);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemRetrieveEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemRetrieveEvent_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemRetrieveEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemRetrieveEvent);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_truncate_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_truncate_event);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemTruncateEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemTruncateEvent_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemTruncateEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemTruncateEvent);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_with_reference));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_with_reference);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemWithReference_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemWithReference_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemWithReference));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemWithReference);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_cleared_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_buffer_cleared_event);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferClearedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputAudioBufferClearedEvent_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferClearedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputAudioBufferClearedEvent);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_content_part_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_content_part_done_event);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseContentPartDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseContentPartDoneEvent_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContentPartDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseContentPartDoneEvent);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_output_item_added_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_output_item_added_event);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseOutputItemAddedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseOutputItemAddedEvent_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseOutputItemAddedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_truncated_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_truncated_event);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemTruncatedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemTruncatedEvent_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemTruncatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemTruncatedEvent);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_content_part_added_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_content_part_added_event);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseContentPartAddedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseContentPartAddedEvent_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContentPartAddedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseContentPartAddedEvent);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_committed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_buffer_committed_event);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferCommittedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputAudioBufferCommittedEvent_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferCommittedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputAudioBufferCommittedEvent);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_transcription_session_update_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transcription_session_update_param);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranscriptionSessionUpdateParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TranscriptionSessionUpdateParam_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_TranscriptionSessionUpdateParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TranscriptionSessionUpdateParam);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_transcription_session_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transcription_session_create_params);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranscriptionSessionCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TranscriptionSessionCreateParams_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_TranscriptionSessionCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TranscriptionSessionCreateParams);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_transcription_session_updated_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transcription_session_updated_event);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranscriptionSessionUpdatedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TranscriptionSessionUpdatedEvent_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_TranscriptionSessionUpdatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TranscriptionSessionUpdatedEvent);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_create_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_create_event_param);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemCreateEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemCreateEventParam_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemCreateEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemCreateEventParam);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_delete_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_delete_event_param);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemDeleteEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemDeleteEventParam_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemDeleteEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemDeleteEventParam);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_clear_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_buffer_clear_event_param);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferClearEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputAudioBufferClearEventParam_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferClearEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputAudioBufferClearEventParam);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_transcript_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_audio_transcript_done_event);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDoneEvent_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_append_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_buffer_append_event_param);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferAppendEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputAudioBufferAppendEventParam_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferAppendEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputAudioBufferAppendEventParam);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_commit_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_buffer_commit_event_param);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferCommitEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputAudioBufferCommitEventParam_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferCommitEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputAudioBufferCommitEventParam);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_transcript_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_audio_transcript_delta_event);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDeltaEvent_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_retrieve_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_retrieve_event_param);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemRetrieveEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemRetrieveEventParam_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemRetrieveEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemRetrieveEventParam);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_truncate_event_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_truncate_event_param);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemTruncateEventParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemTruncateEventParam_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemTruncateEventParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemTruncateEventParam);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_item_with_reference_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_item_with_reference_param);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationItemWithReferenceParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationItemWithReferenceParam_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationItemWithReferenceParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationItemWithReferenceParam);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_speech_started_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_buffer_speech_started_event);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferSpeechStartedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputAudioBufferSpeechStartedEvent_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferSpeechStartedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputAudioBufferSpeechStartedEvent);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_buffer_speech_stopped_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_buffer_speech_stopped_event);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputAudioBufferSpeechStoppedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputAudioBufferSpeechStoppedEvent_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputAudioBufferSpeechStoppedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputAudioBufferSpeechStoppedEvent);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ca10734868c9e71eef094920fbc18a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ca10734868c9e71eef094920fbc18a5);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDoneEvent_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b1771f20cc66dbc0ca5aadc0c0b9ccb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b1771f20cc66dbc0ca5aadc0c0b9ccb);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDeltaEvent_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a2c0f6b84436c24f725c670ac995300));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a2c0f6b84436c24f725c670ac995300);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c5c05f4559e59191cd8f4da86de983cc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c5c05f4559e59191cd8f4da86de983cc_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5c05f4559e59191cd8f4da86de983cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5c05f4559e59191cd8f4da86de983cc);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_digest_22fc1dc388aebcce4181e2927aaf9e98));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22fc1dc388aebcce4181e2927aaf9e98);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_36b86d56ee418d6968aa8e8d1a2412f8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_36b86d56ee418d6968aa8e8d1a2412f8_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_36b86d56ee418d6968aa8e8d1a2412f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36b86d56ee418d6968aa8e8d1a2412f8);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_3435f1d9bfd0cb5f22552ea2ea827764));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3435f1d9bfd0cb5f22552ea2ea827764);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f2ae5b644ad8df2ab94078698d350cd0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f2ae5b644ad8df2ab94078698d350cd0_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2ae5b644ad8df2ab94078698d350cd0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2ae5b644ad8df2ab94078698d350cd0);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a1990652204ae2a527deca2004a47dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a1990652204ae2a527deca2004a47dd);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_b424be6679f4a4ba0cd63dfb32341c0c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b424be6679f4a4ba0cd63dfb32341c0c);
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
static PyObject *module_var_accessor_openai$types$beta$realtime$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_9eabe04692f9dd95700e5106d2cd50fa;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6a1990652204ae2a527deca2004a47dd); CHECK_OBJECT(module_filename_obj);
code_objects_9eabe04692f9dd95700e5106d2cd50fa = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_b424be6679f4a4ba0cd63dfb32341c0c, mod_consts.const_str_digest_b424be6679f4a4ba0cd63dfb32341c0c, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$types$beta$realtime[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$beta$realtime);
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
        module_openai$types$beta$realtime,
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
        function_table_openai$types$beta$realtime,
        sizeof(function_table_openai$types$beta$realtime) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.beta.realtime";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$beta$realtime(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$beta$realtime");

    // Store the module for future use.
    module_openai$types$beta$realtime = module;

    moduledict_openai$types$beta$realtime = MODULE_DICT(module_openai$types$beta$realtime);

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
        PRINT_STRING("openai$types$beta$realtime: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$beta$realtime: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$beta$realtime: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.realtime" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$beta$realtime\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$beta$realtime,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$realtime,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$realtime,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$realtime,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$realtime,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$beta$realtime);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$beta$realtime);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$beta$realtime = MAKE_MODULE_FRAME(code_objects_9eabe04692f9dd95700e5106d2cd50fa, module_openai$types$beta$realtime);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 5);
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
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_8;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
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
tmp_args_element_value_3 = mod_consts.const_str_digest_8934366facfd9e426c9738bb9266ccb6;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
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
tmp_args_element_value_5 = mod_consts.const_str_digest_4d763f35a2a2d020fa628221d7073347;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


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
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_7 = NULL;
    }
}
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
tmp_args_element_value_6 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_7 = mod_consts.const_str_plain_realtime;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 3, tmp_list_element_1);
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_8 = NULL;
    }
}
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_8, mod_consts.const_tuple_fcef03cade0d67fa046c7c22fbddc587_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 4, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$beta$realtime$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$beta$realtime$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_openai$types$beta$realtime$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_openai$types$beta$realtime$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_session;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Session_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 5;
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
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_Session,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Session);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_Session, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_error_event;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ErrorEvent_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 6;
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
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ErrorEvent,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ErrorEvent);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorEvent, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_conversation_item;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ConversationItem_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 7;
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
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItem,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ConversationItem);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItem, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_realtime_response;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_RealtimeResponse_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 8;
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
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_RealtimeResponse,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_RealtimeResponse);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_RealtimeResponse, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_response_done_event;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_ResponseDoneEvent_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 9;
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
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ResponseDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseDoneEvent, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_session_update_event;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_SessionUpdateEvent_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 10;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_SessionUpdateEvent,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_SessionUpdateEvent);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionUpdateEvent, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_realtime_client_event;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_RealtimeClientEvent_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 11;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_RealtimeClientEvent,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_RealtimeClientEvent);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_RealtimeClientEvent, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_realtime_server_event;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_RealtimeServerEvent_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 12;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_RealtimeServerEvent,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_RealtimeServerEvent);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_RealtimeServerEvent, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_response_cancel_event;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_ResponseCancelEvent_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 13;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseCancelEvent,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ResponseCancelEvent);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCancelEvent, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_response_create_event;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_ResponseCreateEvent_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 14;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseCreateEvent,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_ResponseCreateEvent);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCreateEvent, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_session_create_params;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_SessionCreateParams_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 15;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_SessionCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_SessionCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionCreateParams, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_session_created_event;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_SessionCreatedEvent_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 16;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_SessionCreatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_SessionCreatedEvent);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionCreatedEvent, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_session_updated_event;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_SessionUpdatedEvent_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 17;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_SessionUpdatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_SessionUpdatedEvent);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionUpdatedEvent, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_transcription_session;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_TranscriptionSession_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 18;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_TranscriptionSession,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_TranscriptionSession);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_TranscriptionSession, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_response_created_event;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_ResponseCreatedEvent_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 19;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseCreatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_ResponseCreatedEvent);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCreatedEvent, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_conversation_item_param;
tmp_globals_arg_value_16 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_ConversationItemParam_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 20;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemParam,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_ConversationItemParam);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemParam, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_realtime_connect_params;
tmp_globals_arg_value_17 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_RealtimeConnectParams_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 21;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_RealtimeConnectParams,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_RealtimeConnectParams);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_RealtimeConnectParams, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_realtime_response_usage;
tmp_globals_arg_value_18 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_RealtimeResponseUsage_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 22;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_RealtimeResponseUsage,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_RealtimeResponseUsage);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_RealtimeResponseUsage, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_session_create_response;
tmp_globals_arg_value_19 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_SessionCreateResponse_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 23;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_SessionCreateResponse,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_SessionCreateResponse);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionCreateResponse, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_realtime_response_status;
tmp_globals_arg_value_20 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_RealtimeResponseStatus_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 24;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_RealtimeResponseStatus,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_RealtimeResponseStatus);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_RealtimeResponseStatus, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain_response_text_done_event;
tmp_globals_arg_value_21 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_plain_ResponseTextDoneEvent_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 25;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseTextDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_ResponseTextDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDoneEvent, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_plain_conversation_item_content;
tmp_globals_arg_value_22 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_plain_ConversationItemContent_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 26;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemContent,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_ConversationItemContent);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemContent, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_plain_rate_limits_updated_event;
tmp_globals_arg_value_23 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_plain_RateLimitsUpdatedEvent_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 27;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_RateLimitsUpdatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_RateLimitsUpdatedEvent);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_RateLimitsUpdatedEvent, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_plain_response_audio_done_event;
tmp_globals_arg_value_24 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_plain_ResponseAudioDoneEvent_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 28;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseAudioDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_ResponseAudioDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDoneEvent, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_25;
PyObject *tmp_globals_arg_value_25;
PyObject *tmp_locals_arg_value_25;
PyObject *tmp_fromlist_value_25;
PyObject *tmp_level_value_25;
tmp_name_value_25 = mod_consts.const_str_plain_response_text_delta_event;
tmp_globals_arg_value_25 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_25 = Py_None;
tmp_fromlist_value_25 = mod_consts.const_tuple_str_plain_ResponseTextDeltaEvent_tuple;
tmp_level_value_25 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 29;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseTextDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_ResponseTextDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDeltaEvent, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_26;
PyObject *tmp_locals_arg_value_26;
PyObject *tmp_fromlist_value_26;
PyObject *tmp_level_value_26;
tmp_name_value_26 = mod_consts.const_str_plain_conversation_created_event;
tmp_globals_arg_value_26 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_26 = Py_None;
tmp_fromlist_value_26 = mod_consts.const_tuple_str_plain_ConversationCreatedEvent_tuple;
tmp_level_value_26 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 30;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationCreatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_ConversationCreatedEvent);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationCreatedEvent, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_27;
PyObject *tmp_globals_arg_value_27;
PyObject *tmp_locals_arg_value_27;
PyObject *tmp_fromlist_value_27;
PyObject *tmp_level_value_27;
tmp_name_value_27 = mod_consts.const_str_plain_response_audio_delta_event;
tmp_globals_arg_value_27 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_27 = Py_None;
tmp_fromlist_value_27 = mod_consts.const_tuple_str_plain_ResponseAudioDeltaEvent_tuple;
tmp_level_value_27 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 31;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseAudioDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_ResponseAudioDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDeltaEvent, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_28;
PyObject *tmp_globals_arg_value_28;
PyObject *tmp_locals_arg_value_28;
PyObject *tmp_fromlist_value_28;
PyObject *tmp_level_value_28;
tmp_name_value_28 = mod_consts.const_str_plain_session_update_event_param;
tmp_globals_arg_value_28 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_28 = Py_None;
tmp_fromlist_value_28 = mod_consts.const_tuple_str_plain_SessionUpdateEventParam_tuple;
tmp_level_value_28 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 32;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_SessionUpdateEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_SessionUpdateEventParam);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionUpdateEventParam, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_29;
PyObject *tmp_globals_arg_value_29;
PyObject *tmp_locals_arg_value_29;
PyObject *tmp_fromlist_value_29;
PyObject *tmp_level_value_29;
tmp_name_value_29 = mod_consts.const_str_plain_realtime_client_event_param;
tmp_globals_arg_value_29 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_29 = Py_None;
tmp_fromlist_value_29 = mod_consts.const_tuple_str_plain_RealtimeClientEventParam_tuple;
tmp_level_value_29 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 33;
tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_RealtimeClientEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_RealtimeClientEventParam);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_RealtimeClientEventParam, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_30;
PyObject *tmp_globals_arg_value_30;
PyObject *tmp_locals_arg_value_30;
PyObject *tmp_fromlist_value_30;
PyObject *tmp_level_value_30;
tmp_name_value_30 = mod_consts.const_str_plain_response_cancel_event_param;
tmp_globals_arg_value_30 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_30 = Py_None;
tmp_fromlist_value_30 = mod_consts.const_tuple_str_plain_ResponseCancelEventParam_tuple;
tmp_level_value_30 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 34;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseCancelEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_ResponseCancelEventParam);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCancelEventParam, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_31;
PyObject *tmp_globals_arg_value_31;
PyObject *tmp_locals_arg_value_31;
PyObject *tmp_fromlist_value_31;
PyObject *tmp_level_value_31;
tmp_name_value_31 = mod_consts.const_str_plain_response_create_event_param;
tmp_globals_arg_value_31 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_31 = Py_None;
tmp_fromlist_value_31 = mod_consts.const_tuple_str_plain_ResponseCreateEventParam_tuple;
tmp_level_value_31 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 35;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseCreateEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_ResponseCreateEventParam);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCreateEventParam, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_32;
PyObject *tmp_globals_arg_value_32;
PyObject *tmp_locals_arg_value_32;
PyObject *tmp_fromlist_value_32;
PyObject *tmp_level_value_32;
tmp_name_value_32 = mod_consts.const_str_plain_transcription_session_update;
tmp_globals_arg_value_32 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_32 = Py_None;
tmp_fromlist_value_32 = mod_consts.const_tuple_str_plain_TranscriptionSessionUpdate_tuple;
tmp_level_value_32 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 36;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_TranscriptionSessionUpdate,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_TranscriptionSessionUpdate);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_TranscriptionSessionUpdate, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_33;
PyObject *tmp_globals_arg_value_33;
PyObject *tmp_locals_arg_value_33;
PyObject *tmp_fromlist_value_33;
PyObject *tmp_level_value_33;
tmp_name_value_33 = mod_consts.const_str_plain_conversation_item_create_event;
tmp_globals_arg_value_33 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_33 = Py_None;
tmp_fromlist_value_33 = mod_consts.const_tuple_str_plain_ConversationItemCreateEvent_tuple;
tmp_level_value_33 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 37;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemCreateEvent,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_ConversationItemCreateEvent);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemCreateEvent, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_34;
PyObject *tmp_globals_arg_value_34;
PyObject *tmp_locals_arg_value_34;
PyObject *tmp_fromlist_value_34;
PyObject *tmp_level_value_34;
tmp_name_value_34 = mod_consts.const_str_plain_conversation_item_delete_event;
tmp_globals_arg_value_34 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_34 = Py_None;
tmp_fromlist_value_34 = mod_consts.const_tuple_str_plain_ConversationItemDeleteEvent_tuple;
tmp_level_value_34 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 38;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemDeleteEvent,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_ConversationItemDeleteEvent);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemDeleteEvent, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_35;
PyObject *tmp_name_value_35;
PyObject *tmp_globals_arg_value_35;
PyObject *tmp_locals_arg_value_35;
PyObject *tmp_fromlist_value_35;
PyObject *tmp_level_value_35;
tmp_name_value_35 = mod_consts.const_str_plain_input_audio_buffer_clear_event;
tmp_globals_arg_value_35 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_35 = Py_None;
tmp_fromlist_value_35 = mod_consts.const_tuple_str_plain_InputAudioBufferClearEvent_tuple;
tmp_level_value_35 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 39;
tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
if (tmp_import_name_from_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_InputAudioBufferClearEvent,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_InputAudioBufferClearEvent);
}

CHECK_OBJECT(tmp_import_name_from_35);
Py_DECREF(tmp_import_name_from_35);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_InputAudioBufferClearEvent, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_36;
PyObject *tmp_name_value_36;
PyObject *tmp_globals_arg_value_36;
PyObject *tmp_locals_arg_value_36;
PyObject *tmp_fromlist_value_36;
PyObject *tmp_level_value_36;
tmp_name_value_36 = mod_consts.const_str_plain_conversation_item_content_param;
tmp_globals_arg_value_36 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_36 = Py_None;
tmp_fromlist_value_36 = mod_consts.const_tuple_str_plain_ConversationItemContentParam_tuple;
tmp_level_value_36 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 40;
tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
if (tmp_import_name_from_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemContentParam,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_ConversationItemContentParam);
}

CHECK_OBJECT(tmp_import_name_from_36);
Py_DECREF(tmp_import_name_from_36);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemContentParam, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_37;
PyObject *tmp_name_value_37;
PyObject *tmp_globals_arg_value_37;
PyObject *tmp_locals_arg_value_37;
PyObject *tmp_fromlist_value_37;
PyObject *tmp_level_value_37;
tmp_name_value_37 = mod_consts.const_str_plain_conversation_item_created_event;
tmp_globals_arg_value_37 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_37 = Py_None;
tmp_fromlist_value_37 = mod_consts.const_tuple_str_plain_ConversationItemCreatedEvent_tuple;
tmp_level_value_37 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 41;
tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
if (tmp_import_name_from_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemCreatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_ConversationItemCreatedEvent);
}

CHECK_OBJECT(tmp_import_name_from_37);
Py_DECREF(tmp_import_name_from_37);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemCreatedEvent, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_38;
PyObject *tmp_name_value_38;
PyObject *tmp_globals_arg_value_38;
PyObject *tmp_locals_arg_value_38;
PyObject *tmp_fromlist_value_38;
PyObject *tmp_level_value_38;
tmp_name_value_38 = mod_consts.const_str_plain_conversation_item_deleted_event;
tmp_globals_arg_value_38 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_38 = Py_None;
tmp_fromlist_value_38 = mod_consts.const_tuple_str_plain_ConversationItemDeletedEvent_tuple;
tmp_level_value_38 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 42;
tmp_import_name_from_38 = IMPORT_MODULE5(tstate, tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
if (tmp_import_name_from_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemDeletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_ConversationItemDeletedEvent);
}

CHECK_OBJECT(tmp_import_name_from_38);
Py_DECREF(tmp_import_name_from_38);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemDeletedEvent, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_39;
PyObject *tmp_name_value_39;
PyObject *tmp_globals_arg_value_39;
PyObject *tmp_locals_arg_value_39;
PyObject *tmp_fromlist_value_39;
PyObject *tmp_level_value_39;
tmp_name_value_39 = mod_consts.const_str_plain_input_audio_buffer_append_event;
tmp_globals_arg_value_39 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_39 = Py_None;
tmp_fromlist_value_39 = mod_consts.const_tuple_str_plain_InputAudioBufferAppendEvent_tuple;
tmp_level_value_39 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 43;
tmp_import_name_from_39 = IMPORT_MODULE5(tstate, tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
if (tmp_import_name_from_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_InputAudioBufferAppendEvent,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_InputAudioBufferAppendEvent);
}

CHECK_OBJECT(tmp_import_name_from_39);
Py_DECREF(tmp_import_name_from_39);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_InputAudioBufferAppendEvent, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_40;
PyObject *tmp_name_value_40;
PyObject *tmp_globals_arg_value_40;
PyObject *tmp_locals_arg_value_40;
PyObject *tmp_fromlist_value_40;
PyObject *tmp_level_value_40;
tmp_name_value_40 = mod_consts.const_str_plain_input_audio_buffer_commit_event;
tmp_globals_arg_value_40 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_40 = Py_None;
tmp_fromlist_value_40 = mod_consts.const_tuple_str_plain_InputAudioBufferCommitEvent_tuple;
tmp_level_value_40 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 44;
tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
if (tmp_import_name_from_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_InputAudioBufferCommitEvent,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_InputAudioBufferCommitEvent);
}

CHECK_OBJECT(tmp_import_name_from_40);
Py_DECREF(tmp_import_name_from_40);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_InputAudioBufferCommitEvent, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_41;
PyObject *tmp_name_value_41;
PyObject *tmp_globals_arg_value_41;
PyObject *tmp_locals_arg_value_41;
PyObject *tmp_fromlist_value_41;
PyObject *tmp_level_value_41;
tmp_name_value_41 = mod_consts.const_str_plain_response_output_item_done_event;
tmp_globals_arg_value_41 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_41 = Py_None;
tmp_fromlist_value_41 = mod_consts.const_tuple_str_plain_ResponseOutputItemDoneEvent_tuple;
tmp_level_value_41 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 45;
tmp_import_name_from_41 = IMPORT_MODULE5(tstate, tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
if (tmp_import_name_from_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseOutputItemDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_41);
Py_DECREF(tmp_import_name_from_41);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemDoneEvent, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_42;
PyObject *tmp_name_value_42;
PyObject *tmp_globals_arg_value_42;
PyObject *tmp_locals_arg_value_42;
PyObject *tmp_fromlist_value_42;
PyObject *tmp_level_value_42;
tmp_name_value_42 = mod_consts.const_str_plain_conversation_item_retrieve_event;
tmp_globals_arg_value_42 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_42 = Py_None;
tmp_fromlist_value_42 = mod_consts.const_tuple_str_plain_ConversationItemRetrieveEvent_tuple;
tmp_level_value_42 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 46;
tmp_import_name_from_42 = IMPORT_MODULE5(tstate, tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
if (tmp_import_name_from_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemRetrieveEvent,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_ConversationItemRetrieveEvent);
}

CHECK_OBJECT(tmp_import_name_from_42);
Py_DECREF(tmp_import_name_from_42);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemRetrieveEvent, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_43;
PyObject *tmp_name_value_43;
PyObject *tmp_globals_arg_value_43;
PyObject *tmp_locals_arg_value_43;
PyObject *tmp_fromlist_value_43;
PyObject *tmp_level_value_43;
tmp_name_value_43 = mod_consts.const_str_plain_conversation_item_truncate_event;
tmp_globals_arg_value_43 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_43 = Py_None;
tmp_fromlist_value_43 = mod_consts.const_tuple_str_plain_ConversationItemTruncateEvent_tuple;
tmp_level_value_43 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 47;
tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
if (tmp_import_name_from_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemTruncateEvent,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_ConversationItemTruncateEvent);
}

CHECK_OBJECT(tmp_import_name_from_43);
Py_DECREF(tmp_import_name_from_43);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemTruncateEvent, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_44;
PyObject *tmp_name_value_44;
PyObject *tmp_globals_arg_value_44;
PyObject *tmp_locals_arg_value_44;
PyObject *tmp_fromlist_value_44;
PyObject *tmp_level_value_44;
tmp_name_value_44 = mod_consts.const_str_plain_conversation_item_with_reference;
tmp_globals_arg_value_44 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_44 = Py_None;
tmp_fromlist_value_44 = mod_consts.const_tuple_str_plain_ConversationItemWithReference_tuple;
tmp_level_value_44 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 48;
tmp_import_name_from_44 = IMPORT_MODULE5(tstate, tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
if (tmp_import_name_from_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemWithReference,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_ConversationItemWithReference);
}

CHECK_OBJECT(tmp_import_name_from_44);
Py_DECREF(tmp_import_name_from_44);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemWithReference, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_45;
PyObject *tmp_name_value_45;
PyObject *tmp_globals_arg_value_45;
PyObject *tmp_locals_arg_value_45;
PyObject *tmp_fromlist_value_45;
PyObject *tmp_level_value_45;
tmp_name_value_45 = mod_consts.const_str_plain_input_audio_buffer_cleared_event;
tmp_globals_arg_value_45 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_45 = Py_None;
tmp_fromlist_value_45 = mod_consts.const_tuple_str_plain_InputAudioBufferClearedEvent_tuple;
tmp_level_value_45 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 49;
tmp_import_name_from_45 = IMPORT_MODULE5(tstate, tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
if (tmp_import_name_from_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_InputAudioBufferClearedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_InputAudioBufferClearedEvent);
}

CHECK_OBJECT(tmp_import_name_from_45);
Py_DECREF(tmp_import_name_from_45);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_InputAudioBufferClearedEvent, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_46;
PyObject *tmp_name_value_46;
PyObject *tmp_globals_arg_value_46;
PyObject *tmp_locals_arg_value_46;
PyObject *tmp_fromlist_value_46;
PyObject *tmp_level_value_46;
tmp_name_value_46 = mod_consts.const_str_plain_response_content_part_done_event;
tmp_globals_arg_value_46 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_46 = Py_None;
tmp_fromlist_value_46 = mod_consts.const_tuple_str_plain_ResponseContentPartDoneEvent_tuple;
tmp_level_value_46 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 50;
tmp_import_name_from_46 = IMPORT_MODULE5(tstate, tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
if (tmp_import_name_from_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseContentPartDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_ResponseContentPartDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_46);
Py_DECREF(tmp_import_name_from_46);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartDoneEvent, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_47;
PyObject *tmp_name_value_47;
PyObject *tmp_globals_arg_value_47;
PyObject *tmp_locals_arg_value_47;
PyObject *tmp_fromlist_value_47;
PyObject *tmp_level_value_47;
tmp_name_value_47 = mod_consts.const_str_plain_response_output_item_added_event;
tmp_globals_arg_value_47 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_47 = Py_None;
tmp_fromlist_value_47 = mod_consts.const_tuple_str_plain_ResponseOutputItemAddedEvent_tuple;
tmp_level_value_47 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 51;
tmp_import_name_from_47 = IMPORT_MODULE5(tstate, tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
if (tmp_import_name_from_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseOutputItemAddedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
}

CHECK_OBJECT(tmp_import_name_from_47);
Py_DECREF(tmp_import_name_from_47);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemAddedEvent, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_48;
PyObject *tmp_name_value_48;
PyObject *tmp_globals_arg_value_48;
PyObject *tmp_locals_arg_value_48;
PyObject *tmp_fromlist_value_48;
PyObject *tmp_level_value_48;
tmp_name_value_48 = mod_consts.const_str_plain_conversation_item_truncated_event;
tmp_globals_arg_value_48 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_48 = Py_None;
tmp_fromlist_value_48 = mod_consts.const_tuple_str_plain_ConversationItemTruncatedEvent_tuple;
tmp_level_value_48 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 52;
tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
if (tmp_import_name_from_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemTruncatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_ConversationItemTruncatedEvent);
}

CHECK_OBJECT(tmp_import_name_from_48);
Py_DECREF(tmp_import_name_from_48);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemTruncatedEvent, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_49;
PyObject *tmp_name_value_49;
PyObject *tmp_globals_arg_value_49;
PyObject *tmp_locals_arg_value_49;
PyObject *tmp_fromlist_value_49;
PyObject *tmp_level_value_49;
tmp_name_value_49 = mod_consts.const_str_plain_response_content_part_added_event;
tmp_globals_arg_value_49 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_49 = Py_None;
tmp_fromlist_value_49 = mod_consts.const_tuple_str_plain_ResponseContentPartAddedEvent_tuple;
tmp_level_value_49 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 53;
tmp_import_name_from_49 = IMPORT_MODULE5(tstate, tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
if (tmp_import_name_from_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseContentPartAddedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_ResponseContentPartAddedEvent);
}

CHECK_OBJECT(tmp_import_name_from_49);
Py_DECREF(tmp_import_name_from_49);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartAddedEvent, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_50;
PyObject *tmp_name_value_50;
PyObject *tmp_globals_arg_value_50;
PyObject *tmp_locals_arg_value_50;
PyObject *tmp_fromlist_value_50;
PyObject *tmp_level_value_50;
tmp_name_value_50 = mod_consts.const_str_plain_input_audio_buffer_committed_event;
tmp_globals_arg_value_50 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_50 = Py_None;
tmp_fromlist_value_50 = mod_consts.const_tuple_str_plain_InputAudioBufferCommittedEvent_tuple;
tmp_level_value_50 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 54;
tmp_import_name_from_50 = IMPORT_MODULE5(tstate, tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
if (tmp_import_name_from_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_InputAudioBufferCommittedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_InputAudioBufferCommittedEvent);
}

CHECK_OBJECT(tmp_import_name_from_50);
Py_DECREF(tmp_import_name_from_50);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_InputAudioBufferCommittedEvent, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_51;
PyObject *tmp_name_value_51;
PyObject *tmp_globals_arg_value_51;
PyObject *tmp_locals_arg_value_51;
PyObject *tmp_fromlist_value_51;
PyObject *tmp_level_value_51;
tmp_name_value_51 = mod_consts.const_str_plain_transcription_session_update_param;
tmp_globals_arg_value_51 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_51 = Py_None;
tmp_fromlist_value_51 = mod_consts.const_tuple_str_plain_TranscriptionSessionUpdateParam_tuple;
tmp_level_value_51 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 55;
tmp_import_name_from_51 = IMPORT_MODULE5(tstate, tmp_name_value_51, tmp_globals_arg_value_51, tmp_locals_arg_value_51, tmp_fromlist_value_51, tmp_level_value_51);
if (tmp_import_name_from_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_TranscriptionSessionUpdateParam,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_TranscriptionSessionUpdateParam);
}

CHECK_OBJECT(tmp_import_name_from_51);
Py_DECREF(tmp_import_name_from_51);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_TranscriptionSessionUpdateParam, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_52;
PyObject *tmp_name_value_52;
PyObject *tmp_globals_arg_value_52;
PyObject *tmp_locals_arg_value_52;
PyObject *tmp_fromlist_value_52;
PyObject *tmp_level_value_52;
tmp_name_value_52 = mod_consts.const_str_plain_transcription_session_create_params;
tmp_globals_arg_value_52 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_52 = Py_None;
tmp_fromlist_value_52 = mod_consts.const_tuple_str_plain_TranscriptionSessionCreateParams_tuple;
tmp_level_value_52 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 56;
tmp_import_name_from_52 = IMPORT_MODULE5(tstate, tmp_name_value_52, tmp_globals_arg_value_52, tmp_locals_arg_value_52, tmp_fromlist_value_52, tmp_level_value_52);
if (tmp_import_name_from_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_TranscriptionSessionCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain_TranscriptionSessionCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_52);
Py_DECREF(tmp_import_name_from_52);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_TranscriptionSessionCreateParams, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_53;
PyObject *tmp_name_value_53;
PyObject *tmp_globals_arg_value_53;
PyObject *tmp_locals_arg_value_53;
PyObject *tmp_fromlist_value_53;
PyObject *tmp_level_value_53;
tmp_name_value_53 = mod_consts.const_str_plain_transcription_session_updated_event;
tmp_globals_arg_value_53 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_53 = Py_None;
tmp_fromlist_value_53 = mod_consts.const_tuple_str_plain_TranscriptionSessionUpdatedEvent_tuple;
tmp_level_value_53 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 57;
tmp_import_name_from_53 = IMPORT_MODULE5(tstate, tmp_name_value_53, tmp_globals_arg_value_53, tmp_locals_arg_value_53, tmp_fromlist_value_53, tmp_level_value_53);
if (tmp_import_name_from_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_TranscriptionSessionUpdatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain_TranscriptionSessionUpdatedEvent);
}

CHECK_OBJECT(tmp_import_name_from_53);
Py_DECREF(tmp_import_name_from_53);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_TranscriptionSessionUpdatedEvent, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_54;
PyObject *tmp_name_value_54;
PyObject *tmp_globals_arg_value_54;
PyObject *tmp_locals_arg_value_54;
PyObject *tmp_fromlist_value_54;
PyObject *tmp_level_value_54;
tmp_name_value_54 = mod_consts.const_str_plain_conversation_item_create_event_param;
tmp_globals_arg_value_54 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_54 = Py_None;
tmp_fromlist_value_54 = mod_consts.const_tuple_str_plain_ConversationItemCreateEventParam_tuple;
tmp_level_value_54 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 58;
tmp_import_name_from_54 = IMPORT_MODULE5(tstate, tmp_name_value_54, tmp_globals_arg_value_54, tmp_locals_arg_value_54, tmp_fromlist_value_54, tmp_level_value_54);
if (tmp_import_name_from_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_54)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_54,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemCreateEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts.const_str_plain_ConversationItemCreateEventParam);
}

CHECK_OBJECT(tmp_import_name_from_54);
Py_DECREF(tmp_import_name_from_54);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemCreateEventParam, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_55;
PyObject *tmp_name_value_55;
PyObject *tmp_globals_arg_value_55;
PyObject *tmp_locals_arg_value_55;
PyObject *tmp_fromlist_value_55;
PyObject *tmp_level_value_55;
tmp_name_value_55 = mod_consts.const_str_plain_conversation_item_delete_event_param;
tmp_globals_arg_value_55 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_55 = Py_None;
tmp_fromlist_value_55 = mod_consts.const_tuple_str_plain_ConversationItemDeleteEventParam_tuple;
tmp_level_value_55 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 59;
tmp_import_name_from_55 = IMPORT_MODULE5(tstate, tmp_name_value_55, tmp_globals_arg_value_55, tmp_locals_arg_value_55, tmp_fromlist_value_55, tmp_level_value_55);
if (tmp_import_name_from_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_55)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_55,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemDeleteEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts.const_str_plain_ConversationItemDeleteEventParam);
}

CHECK_OBJECT(tmp_import_name_from_55);
Py_DECREF(tmp_import_name_from_55);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemDeleteEventParam, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_import_name_from_56;
PyObject *tmp_name_value_56;
PyObject *tmp_globals_arg_value_56;
PyObject *tmp_locals_arg_value_56;
PyObject *tmp_fromlist_value_56;
PyObject *tmp_level_value_56;
tmp_name_value_56 = mod_consts.const_str_plain_input_audio_buffer_clear_event_param;
tmp_globals_arg_value_56 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_56 = Py_None;
tmp_fromlist_value_56 = mod_consts.const_tuple_str_plain_InputAudioBufferClearEventParam_tuple;
tmp_level_value_56 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 60;
tmp_import_name_from_56 = IMPORT_MODULE5(tstate, tmp_name_value_56, tmp_globals_arg_value_56, tmp_locals_arg_value_56, tmp_fromlist_value_56, tmp_level_value_56);
if (tmp_import_name_from_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_56)) {
    tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_56,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_InputAudioBufferClearEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts.const_str_plain_InputAudioBufferClearEventParam);
}

CHECK_OBJECT(tmp_import_name_from_56);
Py_DECREF(tmp_import_name_from_56);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_InputAudioBufferClearEventParam, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_57;
PyObject *tmp_name_value_57;
PyObject *tmp_globals_arg_value_57;
PyObject *tmp_locals_arg_value_57;
PyObject *tmp_fromlist_value_57;
PyObject *tmp_level_value_57;
tmp_name_value_57 = mod_consts.const_str_plain_response_audio_transcript_done_event;
tmp_globals_arg_value_57 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_57 = Py_None;
tmp_fromlist_value_57 = mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDoneEvent_tuple;
tmp_level_value_57 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 61;
tmp_import_name_from_57 = IMPORT_MODULE5(tstate, tmp_name_value_57, tmp_globals_arg_value_57, tmp_locals_arg_value_57, tmp_fromlist_value_57, tmp_level_value_57);
if (tmp_import_name_from_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_57)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_57,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_57);
Py_DECREF(tmp_import_name_from_57);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_import_name_from_58;
PyObject *tmp_name_value_58;
PyObject *tmp_globals_arg_value_58;
PyObject *tmp_locals_arg_value_58;
PyObject *tmp_fromlist_value_58;
PyObject *tmp_level_value_58;
tmp_name_value_58 = mod_consts.const_str_plain_input_audio_buffer_append_event_param;
tmp_globals_arg_value_58 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_58 = Py_None;
tmp_fromlist_value_58 = mod_consts.const_tuple_str_plain_InputAudioBufferAppendEventParam_tuple;
tmp_level_value_58 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 62;
tmp_import_name_from_58 = IMPORT_MODULE5(tstate, tmp_name_value_58, tmp_globals_arg_value_58, tmp_locals_arg_value_58, tmp_fromlist_value_58, tmp_level_value_58);
if (tmp_import_name_from_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_58)) {
    tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_58,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_InputAudioBufferAppendEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts.const_str_plain_InputAudioBufferAppendEventParam);
}

CHECK_OBJECT(tmp_import_name_from_58);
Py_DECREF(tmp_import_name_from_58);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_InputAudioBufferAppendEventParam, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_import_name_from_59;
PyObject *tmp_name_value_59;
PyObject *tmp_globals_arg_value_59;
PyObject *tmp_locals_arg_value_59;
PyObject *tmp_fromlist_value_59;
PyObject *tmp_level_value_59;
tmp_name_value_59 = mod_consts.const_str_plain_input_audio_buffer_commit_event_param;
tmp_globals_arg_value_59 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_59 = Py_None;
tmp_fromlist_value_59 = mod_consts.const_tuple_str_plain_InputAudioBufferCommitEventParam_tuple;
tmp_level_value_59 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 63;
tmp_import_name_from_59 = IMPORT_MODULE5(tstate, tmp_name_value_59, tmp_globals_arg_value_59, tmp_locals_arg_value_59, tmp_fromlist_value_59, tmp_level_value_59);
if (tmp_import_name_from_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_59)) {
    tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_59,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_InputAudioBufferCommitEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts.const_str_plain_InputAudioBufferCommitEventParam);
}

CHECK_OBJECT(tmp_import_name_from_59);
Py_DECREF(tmp_import_name_from_59);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_InputAudioBufferCommitEventParam, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_import_name_from_60;
PyObject *tmp_name_value_60;
PyObject *tmp_globals_arg_value_60;
PyObject *tmp_locals_arg_value_60;
PyObject *tmp_fromlist_value_60;
PyObject *tmp_level_value_60;
tmp_name_value_60 = mod_consts.const_str_plain_response_audio_transcript_delta_event;
tmp_globals_arg_value_60 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_60 = Py_None;
tmp_fromlist_value_60 = mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDeltaEvent_tuple;
tmp_level_value_60 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 64;
tmp_import_name_from_60 = IMPORT_MODULE5(tstate, tmp_name_value_60, tmp_globals_arg_value_60, tmp_locals_arg_value_60, tmp_fromlist_value_60, tmp_level_value_60);
if (tmp_import_name_from_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_60)) {
    tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_60,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_60);
Py_DECREF(tmp_import_name_from_60);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_import_name_from_61;
PyObject *tmp_name_value_61;
PyObject *tmp_globals_arg_value_61;
PyObject *tmp_locals_arg_value_61;
PyObject *tmp_fromlist_value_61;
PyObject *tmp_level_value_61;
tmp_name_value_61 = mod_consts.const_str_plain_conversation_item_retrieve_event_param;
tmp_globals_arg_value_61 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_61 = Py_None;
tmp_fromlist_value_61 = mod_consts.const_tuple_str_plain_ConversationItemRetrieveEventParam_tuple;
tmp_level_value_61 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 67;
tmp_import_name_from_61 = IMPORT_MODULE5(tstate, tmp_name_value_61, tmp_globals_arg_value_61, tmp_locals_arg_value_61, tmp_fromlist_value_61, tmp_level_value_61);
if (tmp_import_name_from_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_61)) {
    tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_61,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemRetrieveEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts.const_str_plain_ConversationItemRetrieveEventParam);
}

CHECK_OBJECT(tmp_import_name_from_61);
Py_DECREF(tmp_import_name_from_61);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemRetrieveEventParam, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_import_name_from_62;
PyObject *tmp_name_value_62;
PyObject *tmp_globals_arg_value_62;
PyObject *tmp_locals_arg_value_62;
PyObject *tmp_fromlist_value_62;
PyObject *tmp_level_value_62;
tmp_name_value_62 = mod_consts.const_str_plain_conversation_item_truncate_event_param;
tmp_globals_arg_value_62 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_62 = Py_None;
tmp_fromlist_value_62 = mod_consts.const_tuple_str_plain_ConversationItemTruncateEventParam_tuple;
tmp_level_value_62 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 70;
tmp_import_name_from_62 = IMPORT_MODULE5(tstate, tmp_name_value_62, tmp_globals_arg_value_62, tmp_locals_arg_value_62, tmp_fromlist_value_62, tmp_level_value_62);
if (tmp_import_name_from_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_62)) {
    tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_62,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemTruncateEventParam,
        const_int_0
    );
} else {
    tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts.const_str_plain_ConversationItemTruncateEventParam);
}

CHECK_OBJECT(tmp_import_name_from_62);
Py_DECREF(tmp_import_name_from_62);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemTruncateEventParam, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_import_name_from_63;
PyObject *tmp_name_value_63;
PyObject *tmp_globals_arg_value_63;
PyObject *tmp_locals_arg_value_63;
PyObject *tmp_fromlist_value_63;
PyObject *tmp_level_value_63;
tmp_name_value_63 = mod_consts.const_str_plain_conversation_item_with_reference_param;
tmp_globals_arg_value_63 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_63 = Py_None;
tmp_fromlist_value_63 = mod_consts.const_tuple_str_plain_ConversationItemWithReferenceParam_tuple;
tmp_level_value_63 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 73;
tmp_import_name_from_63 = IMPORT_MODULE5(tstate, tmp_name_value_63, tmp_globals_arg_value_63, tmp_locals_arg_value_63, tmp_fromlist_value_63, tmp_level_value_63);
if (tmp_import_name_from_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_63)) {
    tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_63,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ConversationItemWithReferenceParam,
        const_int_0
    );
} else {
    tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts.const_str_plain_ConversationItemWithReferenceParam);
}

CHECK_OBJECT(tmp_import_name_from_63);
Py_DECREF(tmp_import_name_from_63);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationItemWithReferenceParam, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_import_name_from_64;
PyObject *tmp_name_value_64;
PyObject *tmp_globals_arg_value_64;
PyObject *tmp_locals_arg_value_64;
PyObject *tmp_fromlist_value_64;
PyObject *tmp_level_value_64;
tmp_name_value_64 = mod_consts.const_str_plain_input_audio_buffer_speech_started_event;
tmp_globals_arg_value_64 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_64 = Py_None;
tmp_fromlist_value_64 = mod_consts.const_tuple_str_plain_InputAudioBufferSpeechStartedEvent_tuple;
tmp_level_value_64 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 76;
tmp_import_name_from_64 = IMPORT_MODULE5(tstate, tmp_name_value_64, tmp_globals_arg_value_64, tmp_locals_arg_value_64, tmp_fromlist_value_64, tmp_level_value_64);
if (tmp_import_name_from_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_64)) {
    tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_64,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_InputAudioBufferSpeechStartedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts.const_str_plain_InputAudioBufferSpeechStartedEvent);
}

CHECK_OBJECT(tmp_import_name_from_64);
Py_DECREF(tmp_import_name_from_64);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_InputAudioBufferSpeechStartedEvent, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_import_name_from_65;
PyObject *tmp_name_value_65;
PyObject *tmp_globals_arg_value_65;
PyObject *tmp_locals_arg_value_65;
PyObject *tmp_fromlist_value_65;
PyObject *tmp_level_value_65;
tmp_name_value_65 = mod_consts.const_str_plain_input_audio_buffer_speech_stopped_event;
tmp_globals_arg_value_65 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_65 = Py_None;
tmp_fromlist_value_65 = mod_consts.const_tuple_str_plain_InputAudioBufferSpeechStoppedEvent_tuple;
tmp_level_value_65 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 79;
tmp_import_name_from_65 = IMPORT_MODULE5(tstate, tmp_name_value_65, tmp_globals_arg_value_65, tmp_locals_arg_value_65, tmp_fromlist_value_65, tmp_level_value_65);
if (tmp_import_name_from_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_65)) {
    tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_65,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_InputAudioBufferSpeechStoppedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts.const_str_plain_InputAudioBufferSpeechStoppedEvent);
}

CHECK_OBJECT(tmp_import_name_from_65);
Py_DECREF(tmp_import_name_from_65);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_InputAudioBufferSpeechStoppedEvent, tmp_assign_source_70);
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_import_name_from_66;
PyObject *tmp_name_value_66;
PyObject *tmp_globals_arg_value_66;
PyObject *tmp_locals_arg_value_66;
PyObject *tmp_fromlist_value_66;
PyObject *tmp_level_value_66;
tmp_name_value_66 = mod_consts.const_str_digest_7ca10734868c9e71eef094920fbc18a5;
tmp_globals_arg_value_66 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_66 = Py_None;
tmp_fromlist_value_66 = mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDoneEvent_tuple;
tmp_level_value_66 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 82;
tmp_import_name_from_66 = IMPORT_MODULE5(tstate, tmp_name_value_66, tmp_globals_arg_value_66, tmp_locals_arg_value_66, tmp_fromlist_value_66, tmp_level_value_66);
if (tmp_import_name_from_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_66)) {
    tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_66,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_66);
Py_DECREF(tmp_import_name_from_66);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent, tmp_assign_source_71);
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_import_name_from_67;
PyObject *tmp_name_value_67;
PyObject *tmp_globals_arg_value_67;
PyObject *tmp_locals_arg_value_67;
PyObject *tmp_fromlist_value_67;
PyObject *tmp_level_value_67;
tmp_name_value_67 = mod_consts.const_str_digest_4b1771f20cc66dbc0ca5aadc0c0b9ccb;
tmp_globals_arg_value_67 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_67 = Py_None;
tmp_fromlist_value_67 = mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDeltaEvent_tuple;
tmp_level_value_67 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 85;
tmp_import_name_from_67 = IMPORT_MODULE5(tstate, tmp_name_value_67, tmp_globals_arg_value_67, tmp_locals_arg_value_67, tmp_fromlist_value_67, tmp_level_value_67);
if (tmp_import_name_from_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_67)) {
    tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_67,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_67);
Py_DECREF(tmp_import_name_from_67);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent, tmp_assign_source_72);
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_import_name_from_68;
PyObject *tmp_name_value_68;
PyObject *tmp_globals_arg_value_68;
PyObject *tmp_locals_arg_value_68;
PyObject *tmp_fromlist_value_68;
PyObject *tmp_level_value_68;
tmp_name_value_68 = mod_consts.const_str_digest_2a2c0f6b84436c24f725c670ac995300;
tmp_globals_arg_value_68 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_68 = Py_None;
tmp_fromlist_value_68 = mod_consts.const_tuple_str_digest_c5c05f4559e59191cd8f4da86de983cc_tuple;
tmp_level_value_68 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 88;
tmp_import_name_from_68 = IMPORT_MODULE5(tstate, tmp_name_value_68, tmp_globals_arg_value_68, tmp_locals_arg_value_68, tmp_fromlist_value_68, tmp_level_value_68);
if (tmp_import_name_from_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_68)) {
    tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_68,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_digest_c5c05f4559e59191cd8f4da86de983cc,
        const_int_0
    );
} else {
    tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts.const_str_digest_c5c05f4559e59191cd8f4da86de983cc);
}

CHECK_OBJECT(tmp_import_name_from_68);
Py_DECREF(tmp_import_name_from_68);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_digest_c5c05f4559e59191cd8f4da86de983cc, tmp_assign_source_73);
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_import_name_from_69;
PyObject *tmp_name_value_69;
PyObject *tmp_globals_arg_value_69;
PyObject *tmp_locals_arg_value_69;
PyObject *tmp_fromlist_value_69;
PyObject *tmp_level_value_69;
tmp_name_value_69 = mod_consts.const_str_digest_22fc1dc388aebcce4181e2927aaf9e98;
tmp_globals_arg_value_69 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_69 = Py_None;
tmp_fromlist_value_69 = mod_consts.const_tuple_str_digest_36b86d56ee418d6968aa8e8d1a2412f8_tuple;
tmp_level_value_69 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 91;
tmp_import_name_from_69 = IMPORT_MODULE5(tstate, tmp_name_value_69, tmp_globals_arg_value_69, tmp_locals_arg_value_69, tmp_fromlist_value_69, tmp_level_value_69);
if (tmp_import_name_from_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_69)) {
    tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_69,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_digest_36b86d56ee418d6968aa8e8d1a2412f8,
        const_int_0
    );
} else {
    tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts.const_str_digest_36b86d56ee418d6968aa8e8d1a2412f8);
}

CHECK_OBJECT(tmp_import_name_from_69);
Py_DECREF(tmp_import_name_from_69);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_digest_36b86d56ee418d6968aa8e8d1a2412f8, tmp_assign_source_74);
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_import_name_from_70;
PyObject *tmp_name_value_70;
PyObject *tmp_globals_arg_value_70;
PyObject *tmp_locals_arg_value_70;
PyObject *tmp_fromlist_value_70;
PyObject *tmp_level_value_70;
tmp_name_value_70 = mod_consts.const_str_digest_3435f1d9bfd0cb5f22552ea2ea827764;
tmp_globals_arg_value_70 = (PyObject *)moduledict_openai$types$beta$realtime;
tmp_locals_arg_value_70 = Py_None;
tmp_fromlist_value_70 = mod_consts.const_tuple_str_digest_f2ae5b644ad8df2ab94078698d350cd0_tuple;
tmp_level_value_70 = const_int_pos_1;
frame_frame_openai$types$beta$realtime->m_frame.f_lineno = 94;
tmp_import_name_from_70 = IMPORT_MODULE5(tstate, tmp_name_value_70, tmp_globals_arg_value_70, tmp_locals_arg_value_70, tmp_fromlist_value_70, tmp_level_value_70);
if (tmp_import_name_from_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_70)) {
    tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_70,
        (PyObject *)moduledict_openai$types$beta$realtime,
        mod_consts.const_str_digest_f2ae5b644ad8df2ab94078698d350cd0,
        const_int_0
    );
} else {
    tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts.const_str_digest_f2ae5b644ad8df2ab94078698d350cd0);
}

CHECK_OBJECT(tmp_import_name_from_70);
Py_DECREF(tmp_import_name_from_70);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)mod_consts.const_str_digest_f2ae5b644ad8df2ab94078698d350cd0, tmp_assign_source_75);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$beta$realtime);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$beta$realtime", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.realtime" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$beta$realtime);
    return module_openai$types$beta$realtime;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$beta$realtime", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

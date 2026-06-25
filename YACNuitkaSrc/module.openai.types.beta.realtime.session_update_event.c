/* Generated code for Python module 'openai$types$beta$realtime$session_update_event'
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



/* The "module_openai$types$beta$realtime$session_update_event" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$beta$realtime$session_update_event;
PyDictObject *moduledict_openai$types$beta$realtime$session_update_event;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Literal_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_BaseModel_tuple;
PyObject *const_int_pos_4;
PyObject *const_str_plain_BaseModel;
PyObject *const_list_79ce7d4340069a952da87366a0b32cc2_list;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_SessionClientSecretExpiresAfter;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_24bc7ed4b314b42c4140ff2779093eda;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_22;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_created_at;
PyObject *const_str_plain_anchor;
PyObject *const_str_plain_seconds;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_SessionClientSecret;
PyObject *const_int_pos_36;
PyObject *const_str_plain_expires_after;
PyObject *const_str_plain_SessionInputAudioNoiseReduction;
PyObject *const_int_pos_41;
PyObject *const_tuple_str_plain_near_field_str_plain_far_field_tuple;
PyObject *const_str_plain_SessionInputAudioTranscription;
PyObject *const_int_pos_50;
PyObject *const_str_plain_language;
PyObject *const_str_plain_str;
PyObject *const_str_plain_model;
PyObject *const_str_plain_prompt;
PyObject *const_str_plain_SessionTool;
PyObject *const_int_pos_75;
PyObject *const_str_plain_description;
PyObject *const_str_plain_parameters;
PyObject *const_str_plain_object;
PyObject *const_str_plain_function;
PyObject *const_str_plain_SessionTracingTracingConfiguration;
PyObject *const_int_pos_92;
PyObject *const_str_plain_group_id;
PyObject *const_str_plain_metadata;
PyObject *const_str_plain_workflow_name;
PyObject *const_str_plain_auto;
PyObject *const_str_plain_SessionTracing;
PyObject *const_str_plain_SessionTurnDetection;
PyObject *const_int_pos_115;
PyObject *const_str_plain_create_response;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_eagerness;
PyObject *const_tuple_str_plain_low_str_plain_medium_str_plain_high_str_plain_auto_tuple;
PyObject *const_str_plain_interrupt_response;
PyObject *const_str_plain_prefix_padding_ms;
PyObject *const_str_plain_silence_duration_ms;
PyObject *const_str_plain_threshold;
PyObject *const_str_plain_float;
PyObject *const_tuple_str_plain_server_vad_str_plain_semantic_vad_tuple;
PyObject *const_str_plain_Session;
PyObject *const_int_pos_164;
PyObject *const_str_plain_client_secret;
PyObject *const_str_plain_input_audio_format;
PyObject *const_tuple_str_plain_pcm16_str_plain_g711_ulaw_str_plain_g711_alaw_tuple;
PyObject *const_str_plain_input_audio_noise_reduction;
PyObject *const_str_plain_input_audio_transcription;
PyObject *const_str_plain_instructions;
PyObject *const_str_plain_max_response_output_tokens;
PyObject *const_str_plain_inf;
PyObject *const_str_plain_modalities;
PyObject *const_tuple_str_plain_text_str_plain_audio_tuple;
PyObject *const_tuple_d1499913a3b2967af94f0ee697126ecf_tuple;
PyObject *const_str_plain_output_audio_format;
PyObject *const_str_plain_speed;
PyObject *const_str_plain_temperature;
PyObject *const_str_plain_tool_choice;
PyObject *const_str_plain_tools;
PyObject *const_str_plain_tracing;
PyObject *const_str_plain_turn_detection;
PyObject *const_str_plain_voice;
PyObject *const_tuple_c4eb0fd19e1e2b4c7c5ec37943d64565_tuple;
PyObject *const_str_plain_SessionUpdateEvent;
PyObject *const_int_pos_302;
PyObject *const_str_plain_session;
PyObject *const_str_digest_f3a46fb29e57f8e76ee7a9e6f4bb5157;
PyObject *const_str_plain_event_id;
PyObject *const_str_digest_7f680550b8d0d30c2a3d44de1ec9ba10;
PyObject *const_str_digest_1deefe8189178f8eedd7c5c82245818a;
PyObject *const_tuple_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[95];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.beta.realtime.session_update_event"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_TypeAlias_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_list_79ce7d4340069a952da87366a0b32cc2_list);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionClientSecretExpiresAfter);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_22);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_created_at);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_anchor);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_seconds);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionClientSecret);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_36);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_expires_after);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionInputAudioNoiseReduction);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_41);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_near_field_str_plain_far_field_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionInputAudioTranscription);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_50);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_language);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_prompt);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionTool);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_int_pos_75);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_description);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_parameters);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_object);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_function);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionTracingTracingConfiguration);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_92);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_group_id);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_workflow_name);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionTracing);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionTurnDetection);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_int_pos_115);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_response);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_eagerness);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_low_str_plain_medium_str_plain_high_str_plain_auto_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_interrupt_response);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_prefix_padding_ms);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_silence_duration_ms);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_threshold);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_float);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_server_vad_str_plain_semantic_vad_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_Session);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_164);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_secret);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_format);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pcm16_str_plain_g711_ulaw_str_plain_g711_alaw_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_noise_reduction);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_transcription);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_instructions);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_response_output_tokens);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_inf);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_modalities);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_str_plain_audio_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_d1499913a3b2967af94f0ee697126ecf_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_output_audio_format);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_speed);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_temperature);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_choice);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_tools);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_tracing);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_turn_detection);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_voice);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_c4eb0fd19e1e2b4c7c5ec37943d64565_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_SessionUpdateEvent);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_int_pos_302);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_session);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3a46fb29e57f8e76ee7a9e6f4bb5157);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_event_id);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f680550b8d0d30c2a3d44de1ec9ba10);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_1deefe8189178f8eedd7c5c82245818a);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
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
void checkModuleConstants_openai$types$beta$realtime$session_update_event(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Literal_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BaseModel_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_list_79ce7d4340069a952da87366a0b32cc2_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_79ce7d4340069a952da87366a0b32cc2_list);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionClientSecretExpiresAfter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionClientSecretExpiresAfter);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_22));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_22);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_created_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_created_at);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_anchor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_anchor);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_seconds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seconds);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionClientSecret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionClientSecret);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_36));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_36);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_expires_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expires_after);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionInputAudioNoiseReduction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionInputAudioNoiseReduction);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_41));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_41);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_near_field_str_plain_far_field_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_near_field_str_plain_far_field_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionInputAudioTranscription));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionInputAudioTranscription);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_50));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_50);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_language));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_language);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_prompt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prompt);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionTool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionTool);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_int_pos_75));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_75);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_description);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parameters);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_object);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_function));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionTracingTracingConfiguration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionTracingTracingConfiguration);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_92));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_92);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_group_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group_id);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_workflow_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_workflow_name);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionTracing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionTracing);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionTurnDetection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionTurnDetection);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_int_pos_115));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_115);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_response);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_eagerness));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eagerness);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_low_str_plain_medium_str_plain_high_str_plain_auto_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_low_str_plain_medium_str_plain_high_str_plain_auto_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_interrupt_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_interrupt_response);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_prefix_padding_ms));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prefix_padding_ms);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_silence_duration_ms));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_silence_duration_ms);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_threshold));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threshold);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_float));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_float);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_server_vad_str_plain_semantic_vad_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_server_vad_str_plain_semantic_vad_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_Session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Session);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_164));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_164);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_secret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_secret);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_format);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pcm16_str_plain_g711_ulaw_str_plain_g711_alaw_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pcm16_str_plain_g711_ulaw_str_plain_g711_alaw_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_noise_reduction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_noise_reduction);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_transcription));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_transcription);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_instructions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_instructions);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_response_output_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_response_output_tokens);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_inf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inf);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_modalities));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modalities);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_str_plain_audio_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_text_str_plain_audio_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_d1499913a3b2967af94f0ee697126ecf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d1499913a3b2967af94f0ee697126ecf_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_output_audio_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output_audio_format);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_speed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_speed);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_temperature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_temperature);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_choice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_choice);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tools);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_tracing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tracing);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_turn_detection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_turn_detection);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_voice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_voice);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_c4eb0fd19e1e2b4c7c5ec37943d64565_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c4eb0fd19e1e2b4c7c5ec37943d64565_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_SessionUpdateEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SessionUpdateEvent);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_int_pos_302));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_302);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3a46fb29e57f8e76ee7a9e6f4bb5157));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3a46fb29e57f8e76ee7a9e6f4bb5157);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_event_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_event_id);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f680550b8d0d30c2a3d44de1ec9ba10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f680550b8d0d30c2a3d44de1ec9ba10);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_1deefe8189178f8eedd7c5c82245818a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1deefe8189178f8eedd7c5c82245818a);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 17
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
static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$BaseModel(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseModel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseModel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseModel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseModel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$List(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$Session(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Session);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Session);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Session, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Session);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Session, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Session);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Session);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Session);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$SessionClientSecret(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionClientSecret);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionClientSecret);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionClientSecret, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionClientSecret);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionClientSecret, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionClientSecret);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionClientSecret);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionClientSecret);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$SessionClientSecretExpiresAfter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionClientSecretExpiresAfter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionClientSecretExpiresAfter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionClientSecretExpiresAfter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionClientSecretExpiresAfter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionClientSecretExpiresAfter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionClientSecretExpiresAfter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionClientSecretExpiresAfter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionClientSecretExpiresAfter);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$SessionInputAudioNoiseReduction(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionInputAudioNoiseReduction);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionInputAudioNoiseReduction);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionInputAudioNoiseReduction, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionInputAudioNoiseReduction);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionInputAudioNoiseReduction, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionInputAudioNoiseReduction);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionInputAudioNoiseReduction);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionInputAudioNoiseReduction);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$SessionInputAudioTranscription(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionInputAudioTranscription);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionInputAudioTranscription);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionInputAudioTranscription, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionInputAudioTranscription);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionInputAudioTranscription, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionInputAudioTranscription);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionInputAudioTranscription);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionInputAudioTranscription);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$SessionTool(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionTool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionTool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionTool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionTool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTool);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$SessionTracing(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTracing);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionTracing);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionTracing, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionTracing);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionTracing, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTracing);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTracing);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTracing);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$SessionTracingTracingConfiguration(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTracingTracingConfiguration);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionTracingTracingConfiguration);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionTracingTracingConfiguration, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionTracingTracingConfiguration);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionTracingTracingConfiguration, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTracingTracingConfiguration);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTracingTracingConfiguration);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTracingTracingConfiguration);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$SessionTurnDetection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTurnDetection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionTurnDetection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionTurnDetection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SessionTurnDetection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SessionTurnDetection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTurnDetection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTurnDetection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTurnDetection);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$TypeAlias(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$realtime$session_update_event$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$realtime$session_update_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$realtime$session_update_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ae165ef59b1629ef41bc3d187afdd5ef;
static PyCodeObject *code_objects_89456694f0c30c7e9d279de2c6fc65fa;
static PyCodeObject *code_objects_430719d835239115a5ffec13be01e06a;
static PyCodeObject *code_objects_140d146f02892bcb64f4441bffd63d27;
static PyCodeObject *code_objects_e673a319f071df8604c6db3efb087684;
static PyCodeObject *code_objects_d10eb7ef52560acd919fa80ffb09164f;
static PyCodeObject *code_objects_03d250f3133c9ad5c18504f8003dc617;
static PyCodeObject *code_objects_ab124a3f9375b7b0d2cc594bb0160bb6;
static PyCodeObject *code_objects_a49d5bdb3dbdffc739eaf2f8bb141a32;
static PyCodeObject *code_objects_eef1a2475ece4af69dfea78d51d149fd;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7f680550b8d0d30c2a3d44de1ec9ba10); CHECK_OBJECT(module_filename_obj);
code_objects_ae165ef59b1629ef41bc3d187afdd5ef = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_1deefe8189178f8eedd7c5c82245818a, mod_consts.const_str_digest_1deefe8189178f8eedd7c5c82245818a, NULL, NULL, 0, 0, 0);
code_objects_89456694f0c30c7e9d279de2c6fc65fa = MAKE_CODE_OBJECT(module_filename_obj, 164, 0, mod_consts.const_str_plain_Session, mod_consts.const_str_plain_Session, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_430719d835239115a5ffec13be01e06a = MAKE_CODE_OBJECT(module_filename_obj, 36, 0, mod_consts.const_str_plain_SessionClientSecret, mod_consts.const_str_plain_SessionClientSecret, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_140d146f02892bcb64f4441bffd63d27 = MAKE_CODE_OBJECT(module_filename_obj, 22, 0, mod_consts.const_str_plain_SessionClientSecretExpiresAfter, mod_consts.const_str_plain_SessionClientSecretExpiresAfter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e673a319f071df8604c6db3efb087684 = MAKE_CODE_OBJECT(module_filename_obj, 41, 0, mod_consts.const_str_plain_SessionInputAudioNoiseReduction, mod_consts.const_str_plain_SessionInputAudioNoiseReduction, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d10eb7ef52560acd919fa80ffb09164f = MAKE_CODE_OBJECT(module_filename_obj, 50, 0, mod_consts.const_str_plain_SessionInputAudioTranscription, mod_consts.const_str_plain_SessionInputAudioTranscription, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_03d250f3133c9ad5c18504f8003dc617 = MAKE_CODE_OBJECT(module_filename_obj, 75, 0, mod_consts.const_str_plain_SessionTool, mod_consts.const_str_plain_SessionTool, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ab124a3f9375b7b0d2cc594bb0160bb6 = MAKE_CODE_OBJECT(module_filename_obj, 92, 0, mod_consts.const_str_plain_SessionTracingTracingConfiguration, mod_consts.const_str_plain_SessionTracingTracingConfiguration, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a49d5bdb3dbdffc739eaf2f8bb141a32 = MAKE_CODE_OBJECT(module_filename_obj, 115, 0, mod_consts.const_str_plain_SessionTurnDetection, mod_consts.const_str_plain_SessionTurnDetection, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_eef1a2475ece4af69dfea78d51d149fd = MAKE_CODE_OBJECT(module_filename_obj, 302, 0, mod_consts.const_str_plain_SessionUpdateEvent, mod_consts.const_str_plain_SessionUpdateEvent, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


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

static function_impl_code const function_table_openai$types$beta$realtime$session_update_event[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$beta$realtime$session_update_event);
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
        module_openai$types$beta$realtime$session_update_event,
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
        function_table_openai$types$beta$realtime$session_update_event,
        sizeof(function_table_openai$types$beta$realtime$session_update_event) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.beta.realtime.session_update_event";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$beta$realtime$session_update_event(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$beta$realtime$session_update_event");

    // Store the module for future use.
    module_openai$types$beta$realtime$session_update_event = module;

    moduledict_openai$types$beta$realtime$session_update_event = MODULE_DICT(module_openai$types$beta$realtime$session_update_event);

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
        PRINT_STRING("openai$types$beta$realtime$session_update_event: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$beta$realtime$session_update_event: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$beta$realtime$session_update_event: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.realtime.session_update_event" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$beta$realtime$session_update_event\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$beta$realtime$session_update_event,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$realtime$session_update_event,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$realtime$session_update_event,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$realtime$session_update_event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$realtime$session_update_event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$beta$realtime$session_update_event);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$beta$realtime$session_update_event);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__bases = NULL;
PyObject *tmp_class_container$class_creation_7__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_class_container$class_creation_9__bases = NULL;
PyObject *tmp_class_container$class_creation_9__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__metaclass = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime$session_update_event;
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
PyObject *locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
PyObject *locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime$session_update_event$$$class__8_Session_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
PyObject *locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$beta$realtime$session_update_event = MAKE_MODULE_FRAME(code_objects_ae165ef59b1629ef41bc3d187afdd5ef, module_openai$types$beta$realtime$session_update_event);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime$session_update_event);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime$session_update_event) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$beta$realtime$session_update_event$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$beta$realtime$session_update_event$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_5);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$types$beta$realtime$session_update_event,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai$types$beta$realtime$session_update_event,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_7);
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
        (PyObject *)moduledict_openai$types$beta$realtime$session_update_event,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_8);
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
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$beta$realtime$session_update_event;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Literal_str_plain_TypeAlias_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 4;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$types$beta$realtime$session_update_event,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$types$beta$realtime$session_update_event,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$beta$realtime$session_update_event;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_BaseModel_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_4;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 6;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$types$beta$realtime$session_update_event,
        mod_consts.const_str_plain_BaseModel,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BaseModel);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_LIST10(tstate, mod_consts.const_list_79ce7d4340069a952da87366a0b32cc2_list);
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_openai$types$beta$realtime$session_update_event$BaseModel(tstate);
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


exception_lineno = 22;

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


exception_lineno = 22;

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


exception_lineno = 22;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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


exception_lineno = 22;

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


exception_lineno = 22;

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


exception_lineno = 22;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_SessionClientSecretExpiresAfter;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 22;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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


exception_lineno = 22;

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
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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


exception_lineno = 22;

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


exception_lineno = 22;

    goto try_except_handler_3;
}
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 22;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 22;
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
locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_SessionClientSecretExpiresAfter;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_22;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
frame_frame_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_2 = MAKE_CLASS_FRAME(tstate, code_objects_140d146f02892bcb64f4441bffd63d27, module_openai$types$beta$realtime$session_update_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_2);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_7 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_7 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_2 = mod_consts.const_str_plain_created_at;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_1 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_1);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_anchor;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, mod_consts.const_str_plain_seconds, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_expression_value_8 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_3 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, const_str_plain_int);

if (tmp_subscript_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_3 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_subscript_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_2 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_2);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_seconds;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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


exception_lineno = 22;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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
tmp_tuple_element_4 = mod_consts.const_str_plain_SessionClientSecretExpiresAfter;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 22;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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
Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22);
locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22);
locals_openai$types$beta$realtime$session_update_event$$$class__1_SessionClientSecretExpiresAfter_22 = NULL;
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
exception_lineno = 22;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionClientSecretExpiresAfter, tmp_assign_source_20);
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
tmp_tuple_element_5 = module_var_accessor_openai$types$beta$realtime$session_update_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

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


exception_lineno = 36;

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
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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
tmp_expression_value_9 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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


exception_lineno = 36;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_25;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_SessionClientSecret;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 36;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_26;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_4, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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


exception_lineno = 36;

    goto try_except_handler_6;
}
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 36;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 36;
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
locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_SessionClientSecret;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_36;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_8;
}
frame_frame_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_3 = MAKE_CLASS_FRAME(tstate, code_objects_430719d835239115a5ffec13be01e06a, module_openai$types$beta$realtime$session_update_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_3);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_3) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36, mod_consts.const_str_plain_expires_after, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_expression_value_15 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_15 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_subscript_value_5 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36, mod_consts.const_str_plain_SessionClientSecretExpiresAfter);

if (tmp_subscript_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_5 = module_var_accessor_openai$types$beta$realtime$session_update_event$SessionClientSecretExpiresAfter(tstate);
if (unlikely(tmp_subscript_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SessionClientSecretExpiresAfter);
}

if (tmp_subscript_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_15);

exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_subscript_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscribed_3 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_3);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_expires_after;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_3);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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


exception_lineno = 36;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_SessionClientSecret;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 36;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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
Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36);
locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36);
locals_openai$types$beta$realtime$session_update_event$$$class__2_SessionClientSecret_36 = NULL;
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
exception_lineno = 36;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionClientSecret, tmp_assign_source_28);
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
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_openai$types$beta$realtime$session_update_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto try_except_handler_9;
}
tmp_assign_source_30 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_31 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_16 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_6, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_33;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_SessionInputAudioNoiseReduction;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 41;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_34;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_5, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_9;
}
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 41;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 41;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_35;
}
branch_end_7:;
{
PyObject *tmp_assign_source_36;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_SessionInputAudioNoiseReduction;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_41;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_11;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_11;
}
frame_frame_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_4 = MAKE_CLASS_FRAME(tstate, code_objects_e673a319f071df8604c6db3efb087684, module_openai$types$beta$realtime$session_update_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_4);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_4) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41, const_str_plain_type, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_7;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_8;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_expression_value_22 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_22 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_expression_value_23 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_23 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_22);

exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_subscript_value_8 = mod_consts.const_tuple_str_plain_near_field_str_plain_far_field_tuple;
tmp_subscript_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_subscript_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_22);

exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscribed_4 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_4);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_4 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_11;
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


exception_lineno = 41;

    goto try_except_handler_11;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_11;
}
branch_no_9:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_SessionInputAudioNoiseReduction;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 41;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_37;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_36 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_36);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41);
locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41);
locals_openai$types$beta$realtime$session_update_event$$$class__3_SessionInputAudioNoiseReduction_41 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 41;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionInputAudioNoiseReduction, tmp_assign_source_36);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_38;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_openai$types$beta$realtime$session_update_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto try_except_handler_12;
}
tmp_assign_source_38 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_13);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_39 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_24 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_9, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_41 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_41;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
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
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_SessionInputAudioTranscription;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 50;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_42;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_27 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
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
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_28;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_28, tmp_name_value_6, tmp_default_value_4);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_29;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_29 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_29 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_12;
}
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 50;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 50;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_43;
}
branch_end_10:;
{
PyObject *tmp_assign_source_44;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_SessionInputAudioTranscription;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_50;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_14;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_14;
}
frame_frame_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_5 = MAKE_CLASS_FRAME(tstate, code_objects_d10eb7ef52560acd919fa80ffb09164f, module_openai$types$beta$realtime$session_update_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_5);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_5) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain_language, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_10;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_expression_value_30 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_30 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_10 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain_str);

if (tmp_subscript_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_10);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_5 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_5);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_language;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain_model, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_11;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_expression_value_31 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_31 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_11 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain_str);

if (tmp_subscript_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_11);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
CHECK_OBJECT(tmp_subscript_value_11);
Py_DECREF(tmp_subscript_value_11);
if (tmp_ass_subvalue_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_6 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_6);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_6);

exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_model;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
CHECK_OBJECT(tmp_ass_subvalue_6);
Py_DECREF(tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain_prompt, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_12;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_expression_value_32 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_32 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_12 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain_str);

if (tmp_subscript_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_12 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_12);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_ass_subvalue_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_7 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_7);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_prompt;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
CHECK_OBJECT(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_14;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_14;
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


exception_lineno = 50;

    goto try_except_handler_14;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_14;
}
branch_no_12:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_16 = mod_consts.const_str_plain_SessionInputAudioTranscription;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 50;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_14;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_45;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_44 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_44);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50);
locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50);
locals_openai$types$beta$realtime$session_update_event$$$class__4_SessionInputAudioTranscription_50 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 50;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionInputAudioTranscription, tmp_assign_source_44);
}
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_46;
PyObject *tmp_tuple_element_17;
tmp_tuple_element_17 = module_var_accessor_openai$types$beta$realtime$session_update_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto try_except_handler_15;
}
tmp_assign_source_46 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_17);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_47 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_33 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_13, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_49 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_49;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_35;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
tmp_tuple_element_18 = mod_consts.const_str_plain_SessionTool;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 75;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_50;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_36 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_37;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_37 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_37, tmp_name_value_7, tmp_default_value_5);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_38;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_38 == NULL));
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_15;
}
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 75;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 75;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_51;
}
branch_end_13:;
{
PyObject *tmp_assign_source_52;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_SessionTool;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_75;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_17;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_17;
}
frame_frame_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_6 = MAKE_CLASS_FRAME(tstate, code_objects_03d250f3133c9ad5c18504f8003dc617, module_openai$types$beta$realtime$session_update_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_6);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_6) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain_description, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_14;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_expression_value_39 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_39 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_expression_value_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_subscript_value_14 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain_str);

if (tmp_subscript_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_14);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
CHECK_OBJECT(tmp_subscript_value_14);
Py_DECREF(tmp_subscript_value_14);
if (tmp_ass_subvalue_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscribed_8 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_8);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_8);

exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_description;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
CHECK_OBJECT(tmp_ass_subvalue_8);
Py_DECREF(tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_15;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_expression_value_40 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_40 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_expression_value_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_subscript_value_15 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain_str);

if (tmp_subscript_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_15 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_15);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
CHECK_OBJECT(tmp_subscript_value_15);
Py_DECREF(tmp_subscript_value_15);
if (tmp_ass_subvalue_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscribed_9 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_9);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_9);

exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_9 = const_str_plain_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
CHECK_OBJECT(tmp_ass_subvalue_9);
Py_DECREF(tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain_parameters, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_16;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_expression_value_41 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_41 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_expression_value_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_subscript_value_16 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain_object);

if (tmp_subscript_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_16 = (PyObject *)&PyBaseObject_Type;
        Py_INCREF(tmp_subscript_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_ass_subvalue_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_16);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
CHECK_OBJECT(tmp_subscript_value_16);
Py_DECREF(tmp_subscript_value_16);
if (tmp_ass_subvalue_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscribed_10 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_10);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_10);

exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_parameters;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
CHECK_OBJECT(tmp_ass_subvalue_10);
Py_DECREF(tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, const_str_plain_type, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_17;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_18;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_expression_value_42 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_42 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_expression_value_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_expression_value_43 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_43 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_42);

exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_expression_value_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_subscript_value_18 = mod_consts.const_str_plain_function;
tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_18);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_subscript_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_42);

exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subvalue_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_17);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
CHECK_OBJECT(tmp_subscript_value_17);
Py_DECREF(tmp_subscript_value_17);
if (tmp_ass_subvalue_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscribed_11 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_11);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_11);

exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_11 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
CHECK_OBJECT(tmp_ass_subvalue_11);
Py_DECREF(tmp_ass_subvalue_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_17;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_17;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_17;
}
branch_no_15:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_20 = mod_consts.const_str_plain_SessionTool;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 75;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_17;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_53;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_52 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_52);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75);
locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75);
locals_openai$types$beta$realtime$session_update_event$$$class__5_SessionTool_75 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 75;
goto try_except_handler_15;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTool, tmp_assign_source_52);
}
goto try_end_7;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
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
// Tried code:
{
PyObject *tmp_assign_source_54;
PyObject *tmp_tuple_element_21;
tmp_tuple_element_21 = module_var_accessor_openai$types$beta$realtime$session_update_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_assign_source_54 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_54, 0, tmp_tuple_element_21);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_55 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_19;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_44 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_19 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_19, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_57;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_condition_result_22 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_46;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_tuple_element_22 = mod_consts.const_str_plain_SessionTracingTracingConfiguration;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 92;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_58;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_47 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_23 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_48;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_8, tmp_default_value_6);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_49;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 92;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 92;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_59;
}
branch_end_16:;
{
PyObject *tmp_assign_source_60;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain_SessionTracingTracingConfiguration;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_92;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
frame_frame_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_7 = MAKE_CLASS_FRAME(tstate, code_objects_ab124a3f9375b7b0d2cc594bb0160bb6, module_openai$types$beta$realtime$session_update_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_7);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_7) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain_group_id, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_20;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_expression_value_50 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_50 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_50 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_50);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_subscript_value_20 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain_str);

if (tmp_subscript_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_ass_subvalue_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_20);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
CHECK_OBJECT(tmp_subscript_value_20);
Py_DECREF(tmp_subscript_value_20);
if (tmp_ass_subvalue_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscribed_12 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_12);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_12);

exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_group_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
CHECK_OBJECT(tmp_ass_subvalue_12);
Py_DECREF(tmp_ass_subvalue_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain_metadata, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_21;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_expression_value_51 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_51 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_51 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_51);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_subscript_value_21 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain_object);

if (tmp_subscript_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_21 = (PyObject *)&PyBaseObject_Type;
        Py_INCREF(tmp_subscript_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_ass_subvalue_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_21);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
CHECK_OBJECT(tmp_subscript_value_21);
Py_DECREF(tmp_subscript_value_21);
if (tmp_ass_subvalue_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscribed_13 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_13);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_13);

exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_metadata;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
CHECK_OBJECT(tmp_ass_subvalue_13);
Py_DECREF(tmp_ass_subvalue_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain_workflow_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_expression_value_52;
PyObject *tmp_subscript_value_22;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_expression_value_52 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_52 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_subscript_value_22 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain_str);

if (tmp_subscript_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_ass_subvalue_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_22);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
CHECK_OBJECT(tmp_subscript_value_22);
Py_DECREF(tmp_subscript_value_22);
if (tmp_ass_subvalue_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscribed_14 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_14);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_14);

exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_workflow_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
CHECK_OBJECT(tmp_ass_subscribed_14);
Py_DECREF(tmp_ass_subscribed_14);
CHECK_OBJECT(tmp_ass_subvalue_14);
Py_DECREF(tmp_ass_subvalue_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_20;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
branch_no_18:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_24 = mod_consts.const_str_plain_SessionTracingTracingConfiguration;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
tmp_tuple_element_24 = locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 92;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_61;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_60 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_60);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92);
locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92);
locals_openai$types$beta$realtime$session_update_event$$$class__6_SessionTracingTracingConfiguration_92 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 92;
goto try_except_handler_18;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTracingTracingConfiguration, tmp_assign_source_60);
}
goto try_end_8;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
Py_DECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
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
PyObject *tmp_assign_source_62;
PyObject *tmp_expression_value_53;
PyObject *tmp_subscript_value_23;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_54;
PyObject *tmp_subscript_value_24;
tmp_expression_value_53 = module_var_accessor_openai$types$beta$realtime$session_update_event$Union(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto frame_exception_exit_1;
}
tmp_expression_value_54 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto frame_exception_exit_1;
}
tmp_subscript_value_24 = mod_consts.const_str_plain_auto;
tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_24);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto frame_exception_exit_1;
}
tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_23, 0, tmp_tuple_element_25);
tmp_tuple_element_25 = module_var_accessor_openai$types$beta$realtime$session_update_event$SessionTracingTracingConfiguration(tstate);
if (unlikely(tmp_tuple_element_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SessionTracingTracingConfiguration);
}

if (tmp_tuple_element_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM0(tmp_subscript_value_23, 1, tmp_tuple_element_25);
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_subscript_value_23);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_assign_source_62 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_23);
CHECK_OBJECT(tmp_subscript_value_23);
Py_DECREF(tmp_subscript_value_23);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTracing, tmp_assign_source_62);
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_ass_subvalue_15 = module_var_accessor_openai$types$beta$realtime$session_update_event$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_15 = module_var_accessor_openai$types$beta$realtime$session_update_event$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_SessionTracing;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_63;
PyObject *tmp_tuple_element_26;
tmp_tuple_element_26 = module_var_accessor_openai$types$beta$realtime$session_update_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;

    goto try_except_handler_21;
}
tmp_assign_source_63 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_63, 0, tmp_tuple_element_26);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_64 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_25;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_55 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_25 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_25, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_66 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_66;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_56;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_56 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
tmp_condition_result_26 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_57;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_57 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
tmp_tuple_element_27 = mod_consts.const_str_plain_SessionTurnDetection;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 115;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_67;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_58 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_28;
PyObject *tmp_expression_value_59;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_9, tmp_default_value_7);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_60;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_60 == NULL));
tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_60);
Py_DECREF(tmp_expression_value_60);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_28);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 115;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 115;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_68;
}
branch_end_19:;
{
PyObject *tmp_assign_source_69;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_plain_SessionTurnDetection;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_115;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_23;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_23;
}
frame_frame_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_8 = MAKE_CLASS_FRAME(tstate, code_objects_a49d5bdb3dbdffc739eaf2f8bb141a32, module_openai$types$beta$realtime$session_update_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_8);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_8) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_create_response, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_26;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_expression_value_61 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_61 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_61 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_61);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_26 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_bool);

if (tmp_subscript_value_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_26 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_subscript_value_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_ass_subvalue_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_26);
CHECK_OBJECT(tmp_expression_value_61);
Py_DECREF(tmp_expression_value_61);
CHECK_OBJECT(tmp_subscript_value_26);
Py_DECREF(tmp_subscript_value_26);
if (tmp_ass_subvalue_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscribed_16 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_16);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_16);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain_create_response;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
CHECK_OBJECT(tmp_ass_subscribed_16);
Py_DECREF(tmp_ass_subscribed_16);
CHECK_OBJECT(tmp_ass_subvalue_16);
Py_DECREF(tmp_ass_subvalue_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_eagerness, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_ass_subvalue_17;
PyObject *tmp_expression_value_62;
PyObject *tmp_subscript_value_27;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_28;
PyObject *tmp_ass_subscribed_17;
PyObject *tmp_ass_subscript_17;
tmp_expression_value_62 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_62 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_62 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_62);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_expression_value_63 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_63 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_63 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_62);

exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_63);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_28 = mod_consts.const_tuple_str_plain_low_str_plain_medium_str_plain_high_str_plain_auto_tuple;
tmp_subscript_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_28);
CHECK_OBJECT(tmp_expression_value_63);
Py_DECREF(tmp_expression_value_63);
if (tmp_subscript_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_62);

exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subvalue_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_27);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
CHECK_OBJECT(tmp_subscript_value_27);
Py_DECREF(tmp_subscript_value_27);
if (tmp_ass_subvalue_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscribed_17 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_17);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_17);

exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_17 = mod_consts.const_str_plain_eagerness;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
CHECK_OBJECT(tmp_ass_subscribed_17);
Py_DECREF(tmp_ass_subscribed_17);
CHECK_OBJECT(tmp_ass_subvalue_17);
Py_DECREF(tmp_ass_subvalue_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_interrupt_response, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_ass_subvalue_18;
PyObject *tmp_expression_value_64;
PyObject *tmp_subscript_value_29;
PyObject *tmp_ass_subscribed_18;
PyObject *tmp_ass_subscript_18;
tmp_expression_value_64 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_64 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_64 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_64);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_29 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_bool);

if (tmp_subscript_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_29 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_subscript_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_ass_subvalue_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_29);
CHECK_OBJECT(tmp_expression_value_64);
Py_DECREF(tmp_expression_value_64);
CHECK_OBJECT(tmp_subscript_value_29);
Py_DECREF(tmp_subscript_value_29);
if (tmp_ass_subvalue_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscribed_18 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_18);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_18);

exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_18 = mod_consts.const_str_plain_interrupt_response;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
CHECK_OBJECT(tmp_ass_subscribed_18);
Py_DECREF(tmp_ass_subscribed_18);
CHECK_OBJECT(tmp_ass_subvalue_18);
Py_DECREF(tmp_ass_subvalue_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_prefix_padding_ms, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_ass_subvalue_19;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_30;
PyObject *tmp_ass_subscribed_19;
PyObject *tmp_ass_subscript_19;
tmp_expression_value_65 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_65 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_65 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_65);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_30 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain_int);

if (tmp_subscript_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_30 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_subscript_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_ass_subvalue_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_30);
CHECK_OBJECT(tmp_expression_value_65);
Py_DECREF(tmp_expression_value_65);
CHECK_OBJECT(tmp_subscript_value_30);
Py_DECREF(tmp_subscript_value_30);
if (tmp_ass_subvalue_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscribed_19 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_19);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_19);

exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_19 = mod_consts.const_str_plain_prefix_padding_ms;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
CHECK_OBJECT(tmp_ass_subscribed_19);
Py_DECREF(tmp_ass_subscribed_19);
CHECK_OBJECT(tmp_ass_subvalue_19);
Py_DECREF(tmp_ass_subvalue_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_silence_duration_ms, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_ass_subvalue_20;
PyObject *tmp_expression_value_66;
PyObject *tmp_subscript_value_31;
PyObject *tmp_ass_subscribed_20;
PyObject *tmp_ass_subscript_20;
tmp_expression_value_66 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_66 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_66 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_66);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_31 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain_int);

if (tmp_subscript_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_31 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_subscript_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_ass_subvalue_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_31);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
CHECK_OBJECT(tmp_subscript_value_31);
Py_DECREF(tmp_subscript_value_31);
if (tmp_ass_subvalue_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscribed_20 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_20);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_20);

exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_20 = mod_consts.const_str_plain_silence_duration_ms;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
CHECK_OBJECT(tmp_ass_subscribed_20);
Py_DECREF(tmp_ass_subscribed_20);
CHECK_OBJECT(tmp_ass_subvalue_20);
Py_DECREF(tmp_ass_subvalue_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_threshold, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_ass_subvalue_21;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_32;
PyObject *tmp_ass_subscribed_21;
PyObject *tmp_ass_subscript_21;
tmp_expression_value_67 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_67 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_67 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_67);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_32 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_float);

if (tmp_subscript_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_32 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_subscript_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_ass_subvalue_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_32);
CHECK_OBJECT(tmp_expression_value_67);
Py_DECREF(tmp_expression_value_67);
CHECK_OBJECT(tmp_subscript_value_32);
Py_DECREF(tmp_subscript_value_32);
if (tmp_ass_subvalue_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscribed_21 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_21);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_21);

exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_21 = mod_consts.const_str_plain_threshold;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
CHECK_OBJECT(tmp_ass_subscribed_21);
Py_DECREF(tmp_ass_subscribed_21);
CHECK_OBJECT(tmp_ass_subvalue_21);
Py_DECREF(tmp_ass_subvalue_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain_type, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_ass_subvalue_22;
PyObject *tmp_expression_value_68;
PyObject *tmp_subscript_value_33;
PyObject *tmp_expression_value_69;
PyObject *tmp_subscript_value_34;
PyObject *tmp_ass_subscribed_22;
PyObject *tmp_ass_subscript_22;
tmp_expression_value_68 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_68 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_68 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_68);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_expression_value_69 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_69 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_69 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_68);

exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_69);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_34 = mod_consts.const_tuple_str_plain_server_vad_str_plain_semantic_vad_tuple;
tmp_subscript_value_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_34);
CHECK_OBJECT(tmp_expression_value_69);
Py_DECREF(tmp_expression_value_69);
if (tmp_subscript_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_68);

exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subvalue_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_33);
CHECK_OBJECT(tmp_expression_value_68);
Py_DECREF(tmp_expression_value_68);
CHECK_OBJECT(tmp_subscript_value_33);
Py_DECREF(tmp_subscript_value_33);
if (tmp_ass_subvalue_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscribed_22 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_22);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_22);

exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_22 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
CHECK_OBJECT(tmp_ass_subscribed_22);
Py_DECREF(tmp_ass_subscribed_22);
CHECK_OBJECT(tmp_ass_subvalue_22);
Py_DECREF(tmp_ass_subvalue_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_23;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_23;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_23;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_23;
}
branch_no_21:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_29 = mod_consts.const_str_plain_SessionTurnDetection;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_29);
tmp_tuple_element_29 = locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 115;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_23;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_70;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_69 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_69);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115);
locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115);
locals_openai$types$beta$realtime$session_update_event$$$class__7_SessionTurnDetection_115 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 115;
goto try_except_handler_21;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionTurnDetection, tmp_assign_source_69);
}
goto try_end_9;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
Py_DECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
Py_DECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
Py_DECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_outline_return_value_8;
// Tried code:
{
PyObject *tmp_assign_source_71;
PyObject *tmp_tuple_element_30;
tmp_tuple_element_30 = module_var_accessor_openai$types$beta$realtime$session_update_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;

    goto try_except_handler_24;
}
tmp_assign_source_71 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_71, 0, tmp_tuple_element_30);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_72 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_70;
PyObject *tmp_subscript_value_35;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_70 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_35 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_70, tmp_subscript_value_35, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_74 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_74;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_71;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_71, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
tmp_condition_result_30 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_75;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_72;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_72 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
tmp_tuple_element_31 = mod_consts.const_str_plain_Session;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 164;
tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_75;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_73;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_73 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_73, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_31 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_31 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_32;
PyObject *tmp_expression_value_74;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_74, tmp_name_value_10, tmp_default_value_8);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_75;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_75 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_75 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_75);
Py_DECREF(tmp_expression_value_75);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_32);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_24;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_24;
}
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 164;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 164;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_24;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_76;
}
branch_end_22:;
{
PyObject *tmp_assign_source_77;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_plain_Session;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_int_pos_164;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_26;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_26;
}
frame_frame_openai$types$beta$realtime$session_update_event$$$class__8_Session_9 = MAKE_CLASS_FRAME(tstate, code_objects_89456694f0c30c7e9d279de2c6fc65fa, module_openai$types$beta$realtime$session_update_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime$session_update_event$$$class__8_Session_9);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime$session_update_event$$$class__8_Session_9) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_client_secret, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_23;
PyObject *tmp_expression_value_76;
PyObject *tmp_subscript_value_36;
PyObject *tmp_ass_subscribed_23;
PyObject *tmp_ass_subscript_23;
tmp_expression_value_76 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_76 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_76 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_76);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_36 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_SessionClientSecret);

if (tmp_subscript_value_36 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_36 = module_var_accessor_openai$types$beta$realtime$session_update_event$SessionClientSecret(tstate);
if (unlikely(tmp_subscript_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SessionClientSecret);
}

if (tmp_subscript_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_76);

exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_subscript_value_36);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subvalue_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_36);
CHECK_OBJECT(tmp_expression_value_76);
Py_DECREF(tmp_expression_value_76);
CHECK_OBJECT(tmp_subscript_value_36);
Py_DECREF(tmp_subscript_value_36);
if (tmp_ass_subvalue_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_23 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_23);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_23);

exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_23 = mod_consts.const_str_plain_client_secret;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
CHECK_OBJECT(tmp_ass_subscribed_23);
Py_DECREF(tmp_ass_subscribed_23);
CHECK_OBJECT(tmp_ass_subvalue_23);
Py_DECREF(tmp_ass_subvalue_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_input_audio_format, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_24;
PyObject *tmp_expression_value_77;
PyObject *tmp_subscript_value_37;
PyObject *tmp_expression_value_78;
PyObject *tmp_subscript_value_38;
PyObject *tmp_ass_subscribed_24;
PyObject *tmp_ass_subscript_24;
tmp_expression_value_77 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_77 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_77 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_77 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_77 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_77);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_expression_value_78 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_78 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_78 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_77);

exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_78);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_38 = mod_consts.const_tuple_str_plain_pcm16_str_plain_g711_ulaw_str_plain_g711_alaw_tuple;
tmp_subscript_value_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_38);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_subscript_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_77);

exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subvalue_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_37);
CHECK_OBJECT(tmp_expression_value_77);
Py_DECREF(tmp_expression_value_77);
CHECK_OBJECT(tmp_subscript_value_37);
Py_DECREF(tmp_subscript_value_37);
if (tmp_ass_subvalue_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_24 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_24);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_24);

exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_24 = mod_consts.const_str_plain_input_audio_format;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
CHECK_OBJECT(tmp_ass_subscribed_24);
Py_DECREF(tmp_ass_subscribed_24);
CHECK_OBJECT(tmp_ass_subvalue_24);
Py_DECREF(tmp_ass_subvalue_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_input_audio_noise_reduction, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_25;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_39;
PyObject *tmp_ass_subscribed_25;
PyObject *tmp_ass_subscript_25;
tmp_expression_value_79 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_79 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_79 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_79 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_79 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_79);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_39 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_SessionInputAudioNoiseReduction);

if (tmp_subscript_value_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_39 = module_var_accessor_openai$types$beta$realtime$session_update_event$SessionInputAudioNoiseReduction(tstate);
if (unlikely(tmp_subscript_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SessionInputAudioNoiseReduction);
}

if (tmp_subscript_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_79);

exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_subscript_value_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subvalue_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_39);
CHECK_OBJECT(tmp_expression_value_79);
Py_DECREF(tmp_expression_value_79);
CHECK_OBJECT(tmp_subscript_value_39);
Py_DECREF(tmp_subscript_value_39);
if (tmp_ass_subvalue_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_25 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_25);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_25);

exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_25 = mod_consts.const_str_plain_input_audio_noise_reduction;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
CHECK_OBJECT(tmp_ass_subscribed_25);
Py_DECREF(tmp_ass_subscribed_25);
CHECK_OBJECT(tmp_ass_subvalue_25);
Py_DECREF(tmp_ass_subvalue_25);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_input_audio_transcription, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_26;
PyObject *tmp_expression_value_80;
PyObject *tmp_subscript_value_40;
PyObject *tmp_ass_subscribed_26;
PyObject *tmp_ass_subscript_26;
tmp_expression_value_80 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_80 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_80 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_80);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_40 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_SessionInputAudioTranscription);

if (tmp_subscript_value_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_40 = module_var_accessor_openai$types$beta$realtime$session_update_event$SessionInputAudioTranscription(tstate);
if (unlikely(tmp_subscript_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SessionInputAudioTranscription);
}

if (tmp_subscript_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_80);

exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_subscript_value_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subvalue_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_40);
CHECK_OBJECT(tmp_expression_value_80);
Py_DECREF(tmp_expression_value_80);
CHECK_OBJECT(tmp_subscript_value_40);
Py_DECREF(tmp_subscript_value_40);
if (tmp_ass_subvalue_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_26 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_26);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_26);

exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_26 = mod_consts.const_str_plain_input_audio_transcription;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
CHECK_OBJECT(tmp_ass_subscribed_26);
Py_DECREF(tmp_ass_subscribed_26);
CHECK_OBJECT(tmp_ass_subvalue_26);
Py_DECREF(tmp_ass_subvalue_26);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_instructions, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_27;
PyObject *tmp_expression_value_81;
PyObject *tmp_subscript_value_41;
PyObject *tmp_ass_subscribed_27;
PyObject *tmp_ass_subscript_27;
tmp_expression_value_81 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_81 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_81 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_81 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_81);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_41 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_str);

if (tmp_subscript_value_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_41 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subvalue_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_41);
CHECK_OBJECT(tmp_expression_value_81);
Py_DECREF(tmp_expression_value_81);
CHECK_OBJECT(tmp_subscript_value_41);
Py_DECREF(tmp_subscript_value_41);
if (tmp_ass_subvalue_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_27 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_27);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_27);

exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_27 = mod_consts.const_str_plain_instructions;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
CHECK_OBJECT(tmp_ass_subscribed_27);
Py_DECREF(tmp_ass_subscribed_27);
CHECK_OBJECT(tmp_ass_subvalue_27);
Py_DECREF(tmp_ass_subvalue_27);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_max_response_output_tokens, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_28;
PyObject *tmp_expression_value_82;
PyObject *tmp_subscript_value_42;
PyObject *tmp_tuple_element_33;
PyObject *tmp_ass_subscribed_28;
PyObject *tmp_ass_subscript_28;
tmp_expression_value_82 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Union);

if (tmp_expression_value_82 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_82 = module_var_accessor_openai$types$beta$realtime$session_update_event$Union(tstate);
if (unlikely(tmp_expression_value_82 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_82 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_82);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_tuple_element_33 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain_int);

if (tmp_tuple_element_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_33 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_83;
PyObject *tmp_subscript_value_43;
PyTuple_SET_ITEM(tmp_subscript_value_42, 0, tmp_tuple_element_33);
tmp_expression_value_83 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_83 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_83 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_83 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_83 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_2 = "o";
    goto tuple_build_exception_10;
}
        Py_INCREF(tmp_expression_value_83);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

tmp_subscript_value_43 = mod_consts.const_str_plain_inf;
tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_43);
CHECK_OBJECT(tmp_expression_value_83);
Py_DECREF(tmp_expression_value_83);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "o";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_subscript_value_42, 1, tmp_tuple_element_33);
tmp_tuple_element_33 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_42, 2, tmp_tuple_element_33);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_expression_value_82);
Py_DECREF(tmp_subscript_value_42);
goto frame_exception_exit_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_ass_subvalue_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_42);
CHECK_OBJECT(tmp_expression_value_82);
Py_DECREF(tmp_expression_value_82);
CHECK_OBJECT(tmp_subscript_value_42);
Py_DECREF(tmp_subscript_value_42);
if (tmp_ass_subvalue_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_28 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_28);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_28);

exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_28 = mod_consts.const_str_plain_max_response_output_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
CHECK_OBJECT(tmp_ass_subscribed_28);
Py_DECREF(tmp_ass_subscribed_28);
CHECK_OBJECT(tmp_ass_subvalue_28);
Py_DECREF(tmp_ass_subvalue_28);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_modalities, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_29;
PyObject *tmp_expression_value_84;
PyObject *tmp_subscript_value_44;
PyObject *tmp_expression_value_85;
PyObject *tmp_subscript_value_45;
PyObject *tmp_expression_value_86;
PyObject *tmp_subscript_value_46;
PyObject *tmp_ass_subscribed_29;
PyObject *tmp_ass_subscript_29;
tmp_expression_value_84 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_84 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_84 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_84 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_84 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_84);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_expression_value_85 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_List);

if (tmp_expression_value_85 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_85 = module_var_accessor_openai$types$beta$realtime$session_update_event$List(tstate);
if (unlikely(tmp_expression_value_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_84);

exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_85);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_expression_value_86 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_86 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_86 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_86 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_86 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_85);

exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_86);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_46 = mod_consts.const_tuple_str_plain_text_str_plain_audio_tuple;
tmp_subscript_value_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_86, tmp_subscript_value_46);
CHECK_OBJECT(tmp_expression_value_86);
Py_DECREF(tmp_expression_value_86);
if (tmp_subscript_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_85);

exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_subscript_value_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_45);
CHECK_OBJECT(tmp_expression_value_85);
Py_DECREF(tmp_expression_value_85);
CHECK_OBJECT(tmp_subscript_value_45);
Py_DECREF(tmp_subscript_value_45);
if (tmp_subscript_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_84);

exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subvalue_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_44);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
CHECK_OBJECT(tmp_subscript_value_44);
Py_DECREF(tmp_subscript_value_44);
if (tmp_ass_subvalue_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_29 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_29);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_29);

exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_29 = mod_consts.const_str_plain_modalities;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
CHECK_OBJECT(tmp_ass_subscribed_29);
Py_DECREF(tmp_ass_subscribed_29);
CHECK_OBJECT(tmp_ass_subvalue_29);
Py_DECREF(tmp_ass_subvalue_29);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_model, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_30;
PyObject *tmp_expression_value_87;
PyObject *tmp_subscript_value_47;
PyObject *tmp_expression_value_88;
PyObject *tmp_subscript_value_48;
PyObject *tmp_ass_subscribed_30;
PyObject *tmp_ass_subscript_30;
tmp_expression_value_87 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_87 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_87 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_87 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_87 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_87);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_expression_value_88 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_88 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_88 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_88 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_88 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_87);

exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_88);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_48 = mod_consts.const_tuple_d1499913a3b2967af94f0ee697126ecf_tuple;
tmp_subscript_value_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_88, tmp_subscript_value_48);
CHECK_OBJECT(tmp_expression_value_88);
Py_DECREF(tmp_expression_value_88);
if (tmp_subscript_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_87);

exception_lineno = 228;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subvalue_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_87, tmp_subscript_value_47);
CHECK_OBJECT(tmp_expression_value_87);
Py_DECREF(tmp_expression_value_87);
CHECK_OBJECT(tmp_subscript_value_47);
Py_DECREF(tmp_subscript_value_47);
if (tmp_ass_subvalue_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_30 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_30);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_30);

exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_30 = mod_consts.const_str_plain_model;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
CHECK_OBJECT(tmp_ass_subscribed_30);
Py_DECREF(tmp_ass_subscribed_30);
CHECK_OBJECT(tmp_ass_subvalue_30);
Py_DECREF(tmp_ass_subvalue_30);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_output_audio_format, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_31;
PyObject *tmp_expression_value_89;
PyObject *tmp_subscript_value_49;
PyObject *tmp_expression_value_90;
PyObject *tmp_subscript_value_50;
PyObject *tmp_ass_subscribed_31;
PyObject *tmp_ass_subscript_31;
tmp_expression_value_89 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_89 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_89 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_89 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_89 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_89);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_expression_value_90 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_90 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_90 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_90 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_90 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_89);

exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_90);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_50 = mod_consts.const_tuple_str_plain_pcm16_str_plain_g711_ulaw_str_plain_g711_alaw_tuple;
tmp_subscript_value_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_90, tmp_subscript_value_50);
CHECK_OBJECT(tmp_expression_value_90);
Py_DECREF(tmp_expression_value_90);
if (tmp_subscript_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_89);

exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subvalue_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_49);
CHECK_OBJECT(tmp_expression_value_89);
Py_DECREF(tmp_expression_value_89);
CHECK_OBJECT(tmp_subscript_value_49);
Py_DECREF(tmp_subscript_value_49);
if (tmp_ass_subvalue_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_31 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_31);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_31);

exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_31 = mod_consts.const_str_plain_output_audio_format;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
CHECK_OBJECT(tmp_ass_subscribed_31);
Py_DECREF(tmp_ass_subscribed_31);
CHECK_OBJECT(tmp_ass_subvalue_31);
Py_DECREF(tmp_ass_subvalue_31);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_speed, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_32;
PyObject *tmp_expression_value_91;
PyObject *tmp_subscript_value_51;
PyObject *tmp_ass_subscribed_32;
PyObject *tmp_ass_subscript_32;
tmp_expression_value_91 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_91 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_91 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_91 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_91 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_91);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_51 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_float);

if (tmp_subscript_value_51 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_51 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_subscript_value_51);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subvalue_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_91, tmp_subscript_value_51);
CHECK_OBJECT(tmp_expression_value_91);
Py_DECREF(tmp_expression_value_91);
CHECK_OBJECT(tmp_subscript_value_51);
Py_DECREF(tmp_subscript_value_51);
if (tmp_ass_subvalue_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_32 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_32);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_32);

exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_32 = mod_consts.const_str_plain_speed;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
CHECK_OBJECT(tmp_ass_subscribed_32);
Py_DECREF(tmp_ass_subscribed_32);
CHECK_OBJECT(tmp_ass_subvalue_32);
Py_DECREF(tmp_ass_subvalue_32);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_temperature, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_33;
PyObject *tmp_expression_value_92;
PyObject *tmp_subscript_value_52;
PyObject *tmp_ass_subscribed_33;
PyObject *tmp_ass_subscript_33;
tmp_expression_value_92 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_92 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_92 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_92 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_92);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_52 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_float);

if (tmp_subscript_value_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_52 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_subscript_value_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subvalue_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_92, tmp_subscript_value_52);
CHECK_OBJECT(tmp_expression_value_92);
Py_DECREF(tmp_expression_value_92);
CHECK_OBJECT(tmp_subscript_value_52);
Py_DECREF(tmp_subscript_value_52);
if (tmp_ass_subvalue_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_33 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_33);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_33);

exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_33 = mod_consts.const_str_plain_temperature;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
CHECK_OBJECT(tmp_ass_subscribed_33);
Py_DECREF(tmp_ass_subscribed_33);
CHECK_OBJECT(tmp_ass_subvalue_33);
Py_DECREF(tmp_ass_subvalue_33);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_tool_choice, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_34;
PyObject *tmp_expression_value_93;
PyObject *tmp_subscript_value_53;
PyObject *tmp_ass_subscribed_34;
PyObject *tmp_ass_subscript_34;
tmp_expression_value_93 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_93 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_93 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_93 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_93 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_93);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_53 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_str);

if (tmp_subscript_value_53 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_53 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_53);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subvalue_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_93, tmp_subscript_value_53);
CHECK_OBJECT(tmp_expression_value_93);
Py_DECREF(tmp_expression_value_93);
CHECK_OBJECT(tmp_subscript_value_53);
Py_DECREF(tmp_subscript_value_53);
if (tmp_ass_subvalue_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_34 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_34);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_34);

exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_34 = mod_consts.const_str_plain_tool_choice;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
CHECK_OBJECT(tmp_ass_subscribed_34);
Py_DECREF(tmp_ass_subscribed_34);
CHECK_OBJECT(tmp_ass_subvalue_34);
Py_DECREF(tmp_ass_subvalue_34);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_tools, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_35;
PyObject *tmp_expression_value_94;
PyObject *tmp_subscript_value_54;
PyObject *tmp_expression_value_95;
PyObject *tmp_subscript_value_55;
PyObject *tmp_ass_subscribed_35;
PyObject *tmp_ass_subscript_35;
tmp_expression_value_94 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_94 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_94 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_94 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_94 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_94);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_expression_value_95 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_List);

if (tmp_expression_value_95 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_95 = module_var_accessor_openai$types$beta$realtime$session_update_event$List(tstate);
if (unlikely(tmp_expression_value_95 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_95 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_94);

exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_95);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_55 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_SessionTool);

if (tmp_subscript_value_55 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_55 = module_var_accessor_openai$types$beta$realtime$session_update_event$SessionTool(tstate);
if (unlikely(tmp_subscript_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SessionTool);
}

if (tmp_subscript_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_94);
Py_DECREF(tmp_expression_value_95);

exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_subscript_value_55);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_54 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_95, tmp_subscript_value_55);
CHECK_OBJECT(tmp_expression_value_95);
Py_DECREF(tmp_expression_value_95);
CHECK_OBJECT(tmp_subscript_value_55);
Py_DECREF(tmp_subscript_value_55);
if (tmp_subscript_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_94);

exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subvalue_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_54);
CHECK_OBJECT(tmp_expression_value_94);
Py_DECREF(tmp_expression_value_94);
CHECK_OBJECT(tmp_subscript_value_54);
Py_DECREF(tmp_subscript_value_54);
if (tmp_ass_subvalue_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_35 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_35);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_35);

exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_35 = mod_consts.const_str_plain_tools;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
CHECK_OBJECT(tmp_ass_subscribed_35);
Py_DECREF(tmp_ass_subscribed_35);
CHECK_OBJECT(tmp_ass_subvalue_35);
Py_DECREF(tmp_ass_subvalue_35);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_tracing, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_36;
PyObject *tmp_expression_value_96;
PyObject *tmp_subscript_value_56;
PyObject *tmp_ass_subscribed_36;
PyObject *tmp_ass_subscript_36;
tmp_expression_value_96 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_96 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_96 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_96 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_96 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_96);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_56 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_SessionTracing);

if (tmp_subscript_value_56 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_56 = module_var_accessor_openai$types$beta$realtime$session_update_event$SessionTracing(tstate);
if (unlikely(tmp_subscript_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SessionTracing);
}

if (tmp_subscript_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_96);

exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_subscript_value_56);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subvalue_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_96, tmp_subscript_value_56);
CHECK_OBJECT(tmp_expression_value_96);
Py_DECREF(tmp_expression_value_96);
CHECK_OBJECT(tmp_subscript_value_56);
Py_DECREF(tmp_subscript_value_56);
if (tmp_ass_subvalue_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_36 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_36);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_36);

exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_36 = mod_consts.const_str_plain_tracing;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
CHECK_OBJECT(tmp_ass_subscribed_36);
Py_DECREF(tmp_ass_subscribed_36);
CHECK_OBJECT(tmp_ass_subvalue_36);
Py_DECREF(tmp_ass_subvalue_36);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_turn_detection, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_37;
PyObject *tmp_expression_value_97;
PyObject *tmp_subscript_value_57;
PyObject *tmp_ass_subscribed_37;
PyObject *tmp_ass_subscript_37;
tmp_expression_value_97 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_97 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_97 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_97 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_97 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_97);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_57 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_SessionTurnDetection);

if (tmp_subscript_value_57 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_57 = module_var_accessor_openai$types$beta$realtime$session_update_event$SessionTurnDetection(tstate);
if (unlikely(tmp_subscript_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SessionTurnDetection);
}

if (tmp_subscript_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_97);

exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_subscript_value_57);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subvalue_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_97, tmp_subscript_value_57);
CHECK_OBJECT(tmp_expression_value_97);
Py_DECREF(tmp_expression_value_97);
CHECK_OBJECT(tmp_subscript_value_57);
Py_DECREF(tmp_subscript_value_57);
if (tmp_ass_subvalue_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_37 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_37);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_37);

exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_37 = mod_consts.const_str_plain_turn_detection;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
CHECK_OBJECT(tmp_ass_subscribed_37);
Py_DECREF(tmp_ass_subscribed_37);
CHECK_OBJECT(tmp_ass_subvalue_37);
Py_DECREF(tmp_ass_subvalue_37);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_voice, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_38;
PyObject *tmp_expression_value_98;
PyObject *tmp_subscript_value_58;
PyObject *tmp_tuple_element_34;
PyObject *tmp_ass_subscribed_38;
PyObject *tmp_ass_subscript_38;
tmp_expression_value_98 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Union);

if (tmp_expression_value_98 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_98 = module_var_accessor_openai$types$beta$realtime$session_update_event$Union(tstate);
if (unlikely(tmp_expression_value_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_98);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_tuple_element_34 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_str);

if (tmp_tuple_element_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_34 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_58 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_99;
PyObject *tmp_subscript_value_59;
PyTuple_SET_ITEM(tmp_subscript_value_58, 0, tmp_tuple_element_34);
tmp_expression_value_99 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_99 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_99 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_99 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_99 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
        Py_INCREF(tmp_expression_value_99);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_11;
    }
}

tmp_subscript_value_59 = mod_consts.const_tuple_c4eb0fd19e1e2b4c7c5ec37943d64565_tuple;
tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_99, tmp_subscript_value_59);
CHECK_OBJECT(tmp_expression_value_99);
Py_DECREF(tmp_expression_value_99);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_subscript_value_58, 1, tmp_tuple_element_34);
tmp_tuple_element_34 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_58, 2, tmp_tuple_element_34);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_expression_value_98);
Py_DECREF(tmp_subscript_value_58);
goto frame_exception_exit_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_ass_subvalue_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_98, tmp_subscript_value_58);
CHECK_OBJECT(tmp_expression_value_98);
Py_DECREF(tmp_expression_value_98);
CHECK_OBJECT(tmp_subscript_value_58);
Py_DECREF(tmp_subscript_value_58);
if (tmp_ass_subvalue_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_38 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_38);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_38);

exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_38 = mod_consts.const_str_plain_voice;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
CHECK_OBJECT(tmp_ass_subscribed_38);
Py_DECREF(tmp_ass_subscribed_38);
CHECK_OBJECT(tmp_ass_subvalue_38);
Py_DECREF(tmp_ass_subvalue_38);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime$session_update_event$$$class__8_Session_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime$session_update_event$$$class__8_Session_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime$session_update_event$$$class__8_Session_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$realtime$session_update_event$$$class__8_Session_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$realtime$session_update_event$$$class__8_Session_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_26;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_26;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_26;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_26;
}
branch_no_24:;
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_35 = mod_consts.const_str_plain_Session;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_35);
tmp_tuple_element_35 = locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 164;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto try_except_handler_26;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_78;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_77 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_77);
goto try_return_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164);
locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164 = NULL;
goto try_return_handler_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164);
locals_openai$types$beta$realtime$session_update_event$$$class__8_Session_164 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_25;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 164;
goto try_except_handler_24;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Session, tmp_assign_source_77);
}
goto try_end_10;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
Py_DECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
Py_DECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
Py_DECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_79;
PyObject *tmp_tuple_element_36;
tmp_tuple_element_36 = module_var_accessor_openai$types$beta$realtime$session_update_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 302;

    goto try_except_handler_27;
}
tmp_assign_source_79 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_79, 0, tmp_tuple_element_36);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_79;
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_80 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_80;
}
{
PyObject *tmp_assign_source_81;
tmp_assign_source_81 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_100;
PyObject *tmp_subscript_value_60;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_100 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_60 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_100, tmp_subscript_value_60, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_82 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_82;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_101;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_101, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
tmp_condition_result_34 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_83;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_102;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_102 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
tmp_tuple_element_37 = mod_consts.const_str_plain_SessionUpdateEvent;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 302;
tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_83;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_103;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_103 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_103, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_35 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_make_exception_arg_9;
PyObject *tmp_mod_expr_left_9;
PyObject *tmp_mod_expr_right_9;
PyObject *tmp_tuple_element_38;
PyObject *tmp_expression_value_104;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_104 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_104, tmp_name_value_11, tmp_default_value_9);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_105;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_105 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_105 == NULL));
tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_105);
Py_DECREF(tmp_expression_value_105);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_38);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_27;
}
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 302;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 302;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_27;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_84;
tmp_assign_source_84 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_84;
}
branch_end_25:;
{
PyObject *tmp_assign_source_85;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_24bc7ed4b314b42c4140ff2779093eda;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_plain_SessionUpdateEvent;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_int_pos_302;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_29;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_29;
}
frame_frame_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_10 = MAKE_CLASS_FRAME(tstate, code_objects_eef1a2475ece4af69dfea78d51d149fd, module_openai$types$beta$realtime$session_update_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_10);
assert(Py_REFCNT(frame_frame_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_10) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_39;
PyObject *tmp_ass_subscribed_39;
PyObject *tmp_ass_subscript_39;
tmp_ass_subvalue_39 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, mod_consts.const_str_plain_Session);

if (tmp_ass_subvalue_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_39 = module_var_accessor_openai$types$beta$realtime$session_update_event$Session(tstate);
if (unlikely(tmp_ass_subvalue_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Session);
}

if (tmp_ass_subvalue_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_ass_subvalue_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_ass_subscribed_39 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_39);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_39);

exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_39 = mod_consts.const_str_plain_session;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
CHECK_OBJECT(tmp_ass_subscribed_39);
Py_DECREF(tmp_ass_subscribed_39);
CHECK_OBJECT(tmp_ass_subvalue_39);
Py_DECREF(tmp_ass_subvalue_39);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_subvalue_40;
PyObject *tmp_expression_value_106;
PyObject *tmp_subscript_value_61;
PyObject *tmp_ass_subscribed_40;
PyObject *tmp_ass_subscript_40;
tmp_expression_value_106 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_106 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_106 = module_var_accessor_openai$types$beta$realtime$session_update_event$Literal(tstate);
if (unlikely(tmp_expression_value_106 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_106 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_expression_value_106);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_subscript_value_61 = mod_consts.const_str_digest_f3a46fb29e57f8e76ee7a9e6f4bb5157;
tmp_ass_subvalue_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_106, tmp_subscript_value_61);
CHECK_OBJECT(tmp_expression_value_106);
Py_DECREF(tmp_expression_value_106);
if (tmp_ass_subvalue_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscribed_40 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_40);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_40);

exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_40 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
CHECK_OBJECT(tmp_ass_subscribed_40);
Py_DECREF(tmp_ass_subscribed_40);
CHECK_OBJECT(tmp_ass_subvalue_40);
Py_DECREF(tmp_ass_subvalue_40);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, mod_consts.const_str_plain_event_id, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
{
PyObject *tmp_ass_subvalue_41;
PyObject *tmp_expression_value_107;
PyObject *tmp_subscript_value_62;
PyObject *tmp_ass_subscribed_41;
PyObject *tmp_ass_subscript_41;
tmp_expression_value_107 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_107 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_107 = module_var_accessor_openai$types$beta$realtime$session_update_event$Optional(tstate);
if (unlikely(tmp_expression_value_107 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_107 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_expression_value_107);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_subscript_value_62 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, mod_consts.const_str_plain_str);

if (tmp_subscript_value_62 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_62 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_62);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_ass_subvalue_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_107, tmp_subscript_value_62);
CHECK_OBJECT(tmp_expression_value_107);
Py_DECREF(tmp_expression_value_107);
CHECK_OBJECT(tmp_subscript_value_62);
Py_DECREF(tmp_subscript_value_62);
if (tmp_ass_subvalue_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscribed_41 = PyObject_GetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_41);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_41);

exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_41 = mod_consts.const_str_plain_event_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
CHECK_OBJECT(tmp_ass_subscribed_41);
Py_DECREF(tmp_ass_subscribed_41);
CHECK_OBJECT(tmp_ass_subvalue_41);
Py_DECREF(tmp_ass_subvalue_41);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_29;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_29;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_29;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_29;
}
branch_no_27:;
{
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_39;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_39 = mod_consts.const_str_plain_SessionUpdateEvent;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_39 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_39);
tmp_tuple_element_39 = locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_openai$types$beta$realtime$session_update_event->m_frame.f_lineno = 302;
tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto try_except_handler_29;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_86;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_85 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_85);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302);
locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302 = NULL;
goto try_return_handler_28;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302);
locals_openai$types$beta$realtime$session_update_event$$$class__9_SessionUpdateEvent_302 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_28;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 302;
goto try_except_handler_27;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)mod_consts.const_str_plain_SessionUpdateEvent, tmp_assign_source_85);
}
goto try_end_11;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
Py_DECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
Py_DECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
Py_DECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
tmp_outline_return_value_9 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_9);
goto outline_result_17;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_17:;
CHECK_OBJECT(tmp_outline_return_value_9);
Py_DECREF(tmp_outline_return_value_9);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$realtime$session_update_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$realtime$session_update_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$realtime$session_update_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$beta$realtime$session_update_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_10:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$beta$realtime$session_update_event", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.realtime.session_update_event" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$beta$realtime$session_update_event);
    return module_openai$types$beta$realtime$session_update_event;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$realtime$session_update_event, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$beta$realtime$session_update_event", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

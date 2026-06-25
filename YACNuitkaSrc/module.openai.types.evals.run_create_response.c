/* Generated code for Python module 'openai$types$evals$run_create_response'
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



/* The "module_openai$types$evals$run_create_response" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$evals$run_create_response;
PyDictObject *moduledict_openai$types$evals$run_create_response;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Dict;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_Annotated;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb;
PyObject *const_str_plain_Field;
PyObject *const_str_plain_FieldInfo;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_PropertyInfo_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_PropertyInfo;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_BaseModel_tuple;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_plain_eval_api_error;
PyObject *const_tuple_str_plain_EvalAPIError_tuple;
PyObject *const_str_plain_EvalAPIError;
PyObject *const_str_digest_59c8a13fa8f20493bad6a03415046cb3;
PyObject *const_tuple_str_plain_Tool_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_Tool;
PyObject *const_str_digest_a7eb5e415022d14f9c9f0fd6b759a39d;
PyObject *const_tuple_str_plain_Metadata_tuple;
PyObject *const_str_plain_Metadata;
PyObject *const_str_digest_8ba80a8df1a0bbd82bbdc92938453b55;
PyObject *const_tuple_str_plain_ReasoningEffort_tuple;
PyObject *const_str_plain_ReasoningEffort;
PyObject *const_str_digest_b42a5311a2cd2489acede87841e5b778;
PyObject *const_tuple_str_plain_ResponseInputText_tuple;
PyObject *const_str_plain_ResponseInputText;
PyObject *const_str_plain_create_eval_jsonl_run_data_source;
PyObject *const_tuple_str_plain_CreateEvalJSONLRunDataSource_tuple;
PyObject *const_str_plain_CreateEvalJSONLRunDataSource;
PyObject *const_str_digest_4fd20739b4d7c892a171fa481355ab89;
PyObject *const_tuple_str_plain_ResponseFormatTextConfig_tuple;
PyObject *const_str_plain_ResponseFormatTextConfig;
PyObject *const_str_plain_create_eval_completions_run_data_source;
PyObject *const_tuple_str_plain_CreateEvalCompletionsRunDataSource_tuple;
PyObject *const_str_plain_CreateEvalCompletionsRunDataSource;
PyObject *const_list_64443c022ba73aec2a00e0ea0881a932_list;
PyObject *const_str_plain___prepare__;
PyObject *const_str_digest_cf895de0a0492eba1b9796193789b2a2;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_1a78b938890ef66a05b7774c37e0f596;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_45;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_str;
PyObject *const_str_plain_object;
PyObject *const_str_plain_item;
PyObject *const_str_plain_sample;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_DataSourceResponsesSourceFileContent;
PyObject *const_int_pos_51;
PyObject *const_str_plain_content;
PyObject *const_str_plain_file_content;
PyObject *const_str_plain_DataSourceResponsesSourceFileID;
PyObject *const_int_pos_59;
PyObject *const_str_plain_id;
PyObject *const_str_plain_file_id;
PyObject *const_str_plain_DataSourceResponsesSourceResponses;
PyObject *const_int_pos_67;
PyObject *const_str_plain_responses;
PyObject *const_str_plain_created_after;
PyObject *const_str_plain_created_before;
PyObject *const_str_plain_instructions_search;
PyObject *const_str_plain_metadata;
PyObject *const_str_plain_model;
PyObject *const_str_plain_reasoning_effort;
PyObject *const_str_plain_temperature;
PyObject *const_str_plain_float;
PyObject *const_str_plain_tools;
PyObject *const_str_plain_top_p;
PyObject *const_str_plain_users;
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_tuple_str_plain_discriminator_tuple;
PyObject *const_str_plain_DataSourceResponsesSource;
PyObject *const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b;
PyObject *const_int_pos_126;
PyObject *const_str_plain_role;
PyObject *const_str_digest_3a816797d82890e15a2e2d04aead8074;
PyObject *const_int_pos_134;
PyObject *const_str_plain_text;
PyObject *const_str_plain_output_text;
PyObject *const_str_digest_9df16d8811d3de0651214e92b3cf7724;
PyObject *const_int_pos_142;
PyObject *const_str_plain_image_url;
PyObject *const_str_plain_input_image;
PyObject *const_str_plain_detail;
PyObject *const_str_digest_b00d9842b803eb78daa98badb5539f5d;
PyObject *const_str_digest_4263e7684cdc169058191de9022ee02d;
PyObject *const_int_pos_165;
PyObject *const_tuple_635249ff24a913f7a76e1cd8b156b1b3_tuple;
PyObject *const_str_plain_message;
PyObject *const_str_digest_5dc160dc470135c65d366b842c399a93;
PyObject *const_str_plain_DataSourceResponsesInputMessagesTemplate;
PyObject *const_int_pos_185;
PyObject *const_str_plain_template;
PyObject *const_str_digest_f256ef9c531a872a7f661fab81b965b9;
PyObject *const_int_pos_196;
PyObject *const_str_plain_item_reference;
PyObject *const_str_plain_DataSourceResponsesInputMessages;
PyObject *const_str_plain_DataSourceResponsesSamplingParamsText;
PyObject *const_int_pos_210;
PyObject *const_str_plain_DataSourceResponsesSamplingParams;
PyObject *const_int_pos_228;
PyObject *const_str_plain_max_completion_tokens;
PyObject *const_str_plain_seed;
PyObject *const_str_plain_DataSourceResponses;
PyObject *const_int_pos_269;
PyObject *const_str_plain_source;
PyObject *const_str_plain_input_messages;
PyObject *const_str_plain_sampling_params;
PyObject *const_str_plain_DataSource;
PyObject *const_str_plain_PerModelUsage;
PyObject *const_int_pos_296;
PyObject *const_str_plain_cached_tokens;
PyObject *const_str_plain_completion_tokens;
PyObject *const_str_plain_invocation_count;
PyObject *const_tuple_str_plain_model_name_tuple;
PyObject *const_tuple_str_plain_alias_tuple;
PyObject *const_str_plain_run_model_name;
PyObject *const_str_plain_prompt_tokens;
PyObject *const_str_plain_total_tokens;
PyObject *const_str_plain_PerTestingCriteriaResult;
PyObject *const_int_pos_316;
PyObject *const_str_plain_failed;
PyObject *const_str_plain_passed;
PyObject *const_str_plain_testing_criteria;
PyObject *const_str_plain_ResultCounts;
PyObject *const_int_pos_327;
PyObject *const_str_plain_errored;
PyObject *const_str_plain_total;
PyObject *const_str_plain_RunCreateResponse;
PyObject *const_int_pos_341;
PyObject *const_str_plain_created_at;
PyObject *const_str_plain_data_source;
PyObject *const_str_plain_error;
PyObject *const_str_plain_eval_id;
PyObject *const_str_digest_7499bf2538c0839fc1b72a63e936bd73;
PyObject *const_str_plain_per_model_usage;
PyObject *const_str_plain_per_testing_criteria_results;
PyObject *const_str_plain_report_url;
PyObject *const_str_plain_result_counts;
PyObject *const_str_plain_status;
PyObject *const_str_digest_03d18d44d93f784e9c58224f18af0ad4;
PyObject *const_str_digest_5b835416383d646b623d6355739ed5eb;
PyObject *const_tuple_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[158];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.evals.run_create_response"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dict);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_Field);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_FieldInfo);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_api_error);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalAPIError_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalAPIError);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_59c8a13fa8f20493bad6a03415046cb3);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Tool_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tool);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7eb5e415022d14f9c9f0fd6b759a39d);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Metadata_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ba80a8df1a0bbd82bbdc92938453b55);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReasoningEffort_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReasoningEffort);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_b42a5311a2cd2489acede87841e5b778);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseInputText_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseInputText);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_eval_jsonl_run_data_source);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CreateEvalJSONLRunDataSource_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEvalJSONLRunDataSource);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_4fd20739b4d7c892a171fa481355ab89);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFormatTextConfig_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatTextConfig);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_eval_completions_run_data_source);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CreateEvalCompletionsRunDataSource_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_list_64443c022ba73aec2a00e0ea0881a932_list);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_object);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_item);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_sample);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSourceFileContent);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_int_pos_51);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_content);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSourceFileID);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_int_pos_59);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_id);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSourceResponses);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_int_pos_67);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_responses);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_created_after);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_created_before);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_instructions_search);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_reasoning_effort);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_temperature);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_float);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_tools);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_top_p);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_users);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSource);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_int_pos_126);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_role);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_134);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_output_text);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_int_pos_142);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_url);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_image);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_detail);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_int_pos_165);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_635249ff24a913f7a76e1cd8b156b1b3_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_185);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_template);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_int_pos_196);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_item_reference);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesInputMessages);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_210);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSamplingParams);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_228);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_completion_tokens);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_seed);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponses);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_269);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_source);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_messages);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_sampling_params);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSource);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_PerModelUsage);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_int_pos_296);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_tokens);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_completion_tokens);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_invocation_count);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_name_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alias_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_model_name);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_prompt_tokens);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_total_tokens);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_PerTestingCriteriaResult);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_int_pos_316);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_failed);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_passed);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_testing_criteria);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResultCounts);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_327);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_errored);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_total);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunCreateResponse);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_int_pos_341);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_created_at);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_data_source);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_id);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_7499bf2538c0839fc1b72a63e936bd73);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_per_model_usage);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_per_testing_criteria_results);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_report_url);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_result_counts);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_03d18d44d93f784e9c58224f18af0ad4);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b835416383d646b623d6355739ed5eb);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
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
void checkModuleConstants_openai$types$evals$run_create_response(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dict);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Annotated);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_Field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Field);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_FieldInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FieldInfo);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PropertyInfo);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BaseModel_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_api_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_api_error);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalAPIError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalAPIError_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalAPIError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalAPIError);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_59c8a13fa8f20493bad6a03415046cb3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59c8a13fa8f20493bad6a03415046cb3);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Tool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Tool_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tool);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7eb5e415022d14f9c9f0fd6b759a39d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7eb5e415022d14f9c9f0fd6b759a39d);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Metadata_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Metadata_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Metadata);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ba80a8df1a0bbd82bbdc92938453b55));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ba80a8df1a0bbd82bbdc92938453b55);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReasoningEffort_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReasoningEffort_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReasoningEffort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReasoningEffort);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_b42a5311a2cd2489acede87841e5b778));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b42a5311a2cd2489acede87841e5b778);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseInputText_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseInputText_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseInputText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseInputText);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_eval_jsonl_run_data_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_eval_jsonl_run_data_source);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CreateEvalJSONLRunDataSource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CreateEvalJSONLRunDataSource_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEvalJSONLRunDataSource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateEvalJSONLRunDataSource);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_4fd20739b4d7c892a171fa481355ab89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4fd20739b4d7c892a171fa481355ab89);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFormatTextConfig_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFormatTextConfig_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatTextConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFormatTextConfig);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_eval_completions_run_data_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_eval_completions_run_data_source);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CreateEvalCompletionsRunDataSource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CreateEvalCompletionsRunDataSource_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_list_64443c022ba73aec2a00e0ea0881a932_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_64443c022ba73aec2a00e0ea0881a932_list);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_int_pos_45));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_45);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_object);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_item);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_sample));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sample);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSourceFileContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSourceResponsesSourceFileContent);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_int_pos_51));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_51);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_content);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSourceFileID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSourceResponsesSourceFileID);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_int_pos_59));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_59);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_id);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSourceResponses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSourceResponsesSourceResponses);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_int_pos_67));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_67);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_responses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_responses);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_created_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_created_after);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_created_before));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_created_before);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_instructions_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_instructions_search);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_reasoning_effort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reasoning_effort);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_temperature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_temperature);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_float));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_float);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tools);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_top_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_top_p);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_users));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_users);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_discriminator_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSourceResponsesSource);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_int_pos_126));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_126);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_role);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_134));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_134);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_output_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output_text);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_int_pos_142));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_142);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_url);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_image));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_image);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_detail));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_detail);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_int_pos_165));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_165);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_635249ff24a913f7a76e1cd8b156b1b3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_635249ff24a913f7a76e1cd8b156b1b3_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_185));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_185);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_template));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_template);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_int_pos_196));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_196);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_item_reference));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_item_reference);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesInputMessages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSourceResponsesInputMessages);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_210));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_210);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponsesSamplingParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSourceResponsesSamplingParams);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_228));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_228);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_completion_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_completion_tokens);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_seed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seed);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSourceResponses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSourceResponses);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_269));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_269);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_source);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_messages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_messages);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_sampling_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sampling_params);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSource);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_PerModelUsage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PerModelUsage);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_int_pos_296));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_296);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cached_tokens);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_completion_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completion_tokens);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_invocation_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invocation_count);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_name_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_alias_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_model_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_model_name);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_prompt_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prompt_tokens);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_total_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total_tokens);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_PerTestingCriteriaResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PerTestingCriteriaResult);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_int_pos_316));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_316);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_failed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_failed);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_passed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_passed);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_testing_criteria));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_testing_criteria);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResultCounts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResultCounts);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_327));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_327);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_errored));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errored);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_total));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunCreateResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunCreateResponse);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_int_pos_341));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_341);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_created_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_created_at);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_data_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data_source);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_id);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_7499bf2538c0839fc1b72a63e936bd73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7499bf2538c0839fc1b72a63e936bd73);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_per_model_usage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_per_model_usage);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_per_testing_criteria_results));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_per_testing_criteria_results);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_report_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_report_url);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_result_counts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result_counts);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_03d18d44d93f784e9c58224f18af0ad4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03d18d44d93f784e9c58224f18af0ad4);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b835416383d646b623d6355739ed5eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b835416383d646b623d6355739ed5eb);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 40
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
static PyObject *module_var_accessor_openai$types$evals$run_create_response$Annotated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$BaseModel(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$CreateEvalCompletionsRunDataSource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$CreateEvalJSONLRunDataSource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvalJSONLRunDataSource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CreateEvalJSONLRunDataSource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CreateEvalJSONLRunDataSource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CreateEvalJSONLRunDataSource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CreateEvalJSONLRunDataSource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvalJSONLRunDataSource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvalJSONLRunDataSource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvalJSONLRunDataSource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSource(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponses(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponses);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponses);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponses, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponses);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponses, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponses);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponses);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponses);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessages(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesInputMessages);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesInputMessages);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesInputMessages, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesInputMessages);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesInputMessages, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesInputMessages);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesInputMessages);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesInputMessages);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesItemReference(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplate(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplateChatMessage(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplateEvalItem(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplateEvalItemContent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSamplingParams(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSamplingParams);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSamplingParams);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSamplingParams, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSamplingParams);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSamplingParams, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSamplingParams);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSamplingParams);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSamplingParams);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSamplingParamsText(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSource(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSourceFileContent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceFileContent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSourceFileContent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSourceFileContent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSourceFileContent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSourceFileContent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceFileContent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceFileContent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceFileContent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSourceFileContentContent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSourceFileID(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceFileID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSourceFileID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSourceFileID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSourceFileID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSourceFileID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceFileID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceFileID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceFileID);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSourceResponses(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceResponses);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSourceResponses);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSourceResponses, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSourceResponsesSourceResponses);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSourceResponsesSourceResponses, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceResponses);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceResponses);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceResponses);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$Dict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Dict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Dict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Dict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Dict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$EvalAPIError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalAPIError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalAPIError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalAPIError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalAPIError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalAPIError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalAPIError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalAPIError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalAPIError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$List(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$Literal(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$Metadata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Metadata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Metadata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Metadata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Metadata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Metadata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Metadata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Metadata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Metadata);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$PerModelUsage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PerModelUsage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PerModelUsage);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PerModelUsage, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PerModelUsage);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PerModelUsage, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PerModelUsage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PerModelUsage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PerModelUsage);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$PerTestingCriteriaResult(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PerTestingCriteriaResult);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PerTestingCriteriaResult);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PerTestingCriteriaResult, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PerTestingCriteriaResult);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PerTestingCriteriaResult, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PerTestingCriteriaResult);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PerTestingCriteriaResult);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PerTestingCriteriaResult);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$PropertyInfo(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$ReasoningEffort(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ReasoningEffort);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReasoningEffort);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReasoningEffort, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReasoningEffort);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReasoningEffort, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ReasoningEffort);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ReasoningEffort);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReasoningEffort);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$ResponseFormatTextConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatTextConfig);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFormatTextConfig);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFormatTextConfig, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFormatTextConfig);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFormatTextConfig, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatTextConfig);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatTextConfig);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatTextConfig);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$ResponseInputText(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInputText);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseInputText);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseInputText, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseInputText);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseInputText, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInputText);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInputText);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInputText);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$ResultCounts(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultCounts);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResultCounts);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResultCounts, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResultCounts);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResultCounts, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultCounts);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultCounts);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultCounts);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$Tool(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Tool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Tool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Tool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tool);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$TypeAlias(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$evals$run_create_response$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$evals$run_create_response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$evals$run_create_response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$evals$run_create_response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_bad0c9dcc3931933975724de44009147;
static PyCodeObject *code_objects_074aa86eb30754a712420e7de2c01d99;
static PyCodeObject *code_objects_7577e59c4dc1d57da539bd9a535fe1ba;
static PyCodeObject *code_objects_1ff97b3b09f91a44345f091f7dfcf7af;
static PyCodeObject *code_objects_799f266c20ac9f9196e2afb69ec2d6b0;
static PyCodeObject *code_objects_b1f44994e95a506256076c97ff04f23b;
static PyCodeObject *code_objects_2bc2a6b0b6c84bee9283e82252b8decd;
static PyCodeObject *code_objects_29dab6b0ebbafb6c2bf1f6e81b90ed28;
static PyCodeObject *code_objects_b99094f186ac14d99bab5cb856e37ccd;
static PyCodeObject *code_objects_688229755c8f65ab406f3f34109d3f53;
static PyCodeObject *code_objects_302e8d9102a788f071bdd71f79ab591d;
static PyCodeObject *code_objects_1fca3471a77ff7c7396c1e44d18e6ddd;
static PyCodeObject *code_objects_da2f6048a5a06f4494ce2e02d11dd775;
static PyCodeObject *code_objects_b2172140ff9c81b8075944c8c1853df0;
static PyCodeObject *code_objects_cb608a85ed473fa95e5a2592b19e275e;
static PyCodeObject *code_objects_6037a0878a85ea6524b18c4274d7b9d3;
static PyCodeObject *code_objects_94568f162de8332f2e7bddb0b5945a68;
static PyCodeObject *code_objects_866c6e34cb1cd0b9a6051e48049e2092;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_03d18d44d93f784e9c58224f18af0ad4); CHECK_OBJECT(module_filename_obj);
code_objects_bad0c9dcc3931933975724de44009147 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_5b835416383d646b623d6355739ed5eb, mod_consts.const_str_digest_5b835416383d646b623d6355739ed5eb, NULL, NULL, 0, 0, 0);
code_objects_074aa86eb30754a712420e7de2c01d99 = MAKE_CODE_OBJECT(module_filename_obj, 269, 0, mod_consts.const_str_plain_DataSourceResponses, mod_consts.const_str_plain_DataSourceResponses, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7577e59c4dc1d57da539bd9a535fe1ba = MAKE_CODE_OBJECT(module_filename_obj, 196, 0, mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9, mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1ff97b3b09f91a44345f091f7dfcf7af = MAKE_CODE_OBJECT(module_filename_obj, 185, 0, mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate, mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_799f266c20ac9f9196e2afb69ec2d6b0 = MAKE_CODE_OBJECT(module_filename_obj, 126, 0, mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b, mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b1f44994e95a506256076c97ff04f23b = MAKE_CODE_OBJECT(module_filename_obj, 165, 0, mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d, mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2bc2a6b0b6c84bee9283e82252b8decd = MAKE_CODE_OBJECT(module_filename_obj, 142, 0, mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724, mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_29dab6b0ebbafb6c2bf1f6e81b90ed28 = MAKE_CODE_OBJECT(module_filename_obj, 134, 0, mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074, mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b99094f186ac14d99bab5cb856e37ccd = MAKE_CODE_OBJECT(module_filename_obj, 228, 0, mod_consts.const_str_plain_DataSourceResponsesSamplingParams, mod_consts.const_str_plain_DataSourceResponsesSamplingParams, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_688229755c8f65ab406f3f34109d3f53 = MAKE_CODE_OBJECT(module_filename_obj, 210, 0, mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText, mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_302e8d9102a788f071bdd71f79ab591d = MAKE_CODE_OBJECT(module_filename_obj, 51, 0, mod_consts.const_str_plain_DataSourceResponsesSourceFileContent, mod_consts.const_str_plain_DataSourceResponsesSourceFileContent, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1fca3471a77ff7c7396c1e44d18e6ddd = MAKE_CODE_OBJECT(module_filename_obj, 45, 0, mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2, mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_da2f6048a5a06f4494ce2e02d11dd775 = MAKE_CODE_OBJECT(module_filename_obj, 59, 0, mod_consts.const_str_plain_DataSourceResponsesSourceFileID, mod_consts.const_str_plain_DataSourceResponsesSourceFileID, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b2172140ff9c81b8075944c8c1853df0 = MAKE_CODE_OBJECT(module_filename_obj, 67, 0, mod_consts.const_str_plain_DataSourceResponsesSourceResponses, mod_consts.const_str_plain_DataSourceResponsesSourceResponses, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_cb608a85ed473fa95e5a2592b19e275e = MAKE_CODE_OBJECT(module_filename_obj, 296, 0, mod_consts.const_str_plain_PerModelUsage, mod_consts.const_str_plain_PerModelUsage, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6037a0878a85ea6524b18c4274d7b9d3 = MAKE_CODE_OBJECT(module_filename_obj, 316, 0, mod_consts.const_str_plain_PerTestingCriteriaResult, mod_consts.const_str_plain_PerTestingCriteriaResult, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_94568f162de8332f2e7bddb0b5945a68 = MAKE_CODE_OBJECT(module_filename_obj, 327, 0, mod_consts.const_str_plain_ResultCounts, mod_consts.const_str_plain_ResultCounts, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_866c6e34cb1cd0b9a6051e48049e2092 = MAKE_CODE_OBJECT(module_filename_obj, 341, 0, mod_consts.const_str_plain_RunCreateResponse, mod_consts.const_str_plain_RunCreateResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$types$evals$run_create_response[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$evals$run_create_response);
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
        module_openai$types$evals$run_create_response,
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
        function_table_openai$types$evals$run_create_response,
        sizeof(function_table_openai$types$evals$run_create_response) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.evals.run_create_response";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$evals$run_create_response(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$evals$run_create_response");

    // Store the module for future use.
    module_openai$types$evals$run_create_response = module;

    moduledict_openai$types$evals$run_create_response = MODULE_DICT(module_openai$types$evals$run_create_response);

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
        PRINT_STRING("openai$types$evals$run_create_response: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$evals$run_create_response: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$evals$run_create_response: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.evals.run_create_response" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$evals$run_create_response\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$evals$run_create_response,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$evals$run_create_response,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$evals$run_create_response,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$evals$run_create_response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$evals$run_create_response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$evals$run_create_response);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$evals$run_create_response);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
PyObject *outline_11_var___class__ = NULL;
PyObject *outline_12_var___class__ = NULL;
PyObject *outline_13_var___class__ = NULL;
PyObject *outline_14_var___class__ = NULL;
PyObject *outline_15_var___class__ = NULL;
PyObject *outline_16_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_10__bases = NULL;
PyObject *tmp_class_container$class_creation_10__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_10__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_10__metaclass = NULL;
PyObject *tmp_class_container$class_creation_10__prepared = NULL;
PyObject *tmp_class_container$class_creation_11__bases = NULL;
PyObject *tmp_class_container$class_creation_11__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_11__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_11__metaclass = NULL;
PyObject *tmp_class_container$class_creation_11__prepared = NULL;
PyObject *tmp_class_container$class_creation_12__bases = NULL;
PyObject *tmp_class_container$class_creation_12__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_12__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_12__metaclass = NULL;
PyObject *tmp_class_container$class_creation_12__prepared = NULL;
PyObject *tmp_class_container$class_creation_13__bases = NULL;
PyObject *tmp_class_container$class_creation_13__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_13__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_13__metaclass = NULL;
PyObject *tmp_class_container$class_creation_13__prepared = NULL;
PyObject *tmp_class_container$class_creation_14__bases = NULL;
PyObject *tmp_class_container$class_creation_14__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_14__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_14__metaclass = NULL;
PyObject *tmp_class_container$class_creation_14__prepared = NULL;
PyObject *tmp_class_container$class_creation_15__bases = NULL;
PyObject *tmp_class_container$class_creation_15__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_15__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_15__metaclass = NULL;
PyObject *tmp_class_container$class_creation_15__prepared = NULL;
PyObject *tmp_class_container$class_creation_16__bases = NULL;
PyObject *tmp_class_container$class_creation_16__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_16__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_16__metaclass = NULL;
PyObject *tmp_class_container$class_creation_16__prepared = NULL;
PyObject *tmp_class_container$class_creation_17__bases = NULL;
PyObject *tmp_class_container$class_creation_17__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_17__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_17__metaclass = NULL;
PyObject *tmp_class_container$class_creation_17__prepared = NULL;
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
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response;
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
PyObject *locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
PyObject *locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
PyObject *locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
PyObject *locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
PyObject *locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
PyObject *locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_13;
NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
PyObject *locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_14;
NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
PyObject *locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15;
NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
PyObject *locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_16;
NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
PyObject *locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__16_ResultCounts_17;
NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
PyObject *locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_18;
NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$evals$run_create_response = MAKE_MODULE_FRAME(code_objects_bad0c9dcc3931933975724de44009147, module_openai$types$evals$run_create_response);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$evals$run_create_response$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$evals$run_create_response$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
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
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_Dict,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Dict);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict, tmp_assign_source_6);
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
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_7);
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
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_9);
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
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 4;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_Annotated,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Annotated);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 6;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb, mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb);
    if (likely(hard_module != NULL)) {
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_Field);

        Py_DECREF(hard_module);

    } else {
        tmp_assign_source_14 = NULL;
    }
}
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_FieldInfo, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_PropertyInfo_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_3;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 8;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_PropertyInfo,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_PropertyInfo);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_BaseModel_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_3;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 9;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_BaseModel,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_BaseModel);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_eval_api_error;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_EvalAPIError_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 10;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_EvalAPIError,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_EvalAPIError);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalAPIError, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_59c8a13fa8f20493bad6a03415046cb3;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Tool_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_2;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 11;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_Tool,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Tool);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Tool, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_a7eb5e415022d14f9c9f0fd6b759a39d;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_Metadata_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_2;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 12;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_Metadata,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Metadata);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_Metadata, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_8ba80a8df1a0bbd82bbdc92938453b55;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_ReasoningEffort_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_2;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 13;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_ReasoningEffort,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ReasoningEffort);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ReasoningEffort, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_b42a5311a2cd2489acede87841e5b778;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_ResponseInputText_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_2;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 14;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_ResponseInputText,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_ResponseInputText);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInputText, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_create_eval_jsonl_run_data_source;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_CreateEvalJSONLRunDataSource_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 15;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_CreateEvalJSONLRunDataSource,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_CreateEvalJSONLRunDataSource);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvalJSONLRunDataSource, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_4fd20739b4d7c892a171fa481355ab89;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_ResponseFormatTextConfig_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_2;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 16;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_ResponseFormatTextConfig,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_ResponseFormatTextConfig);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatTextConfig, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_create_eval_completions_run_data_source;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$types$evals$run_create_response;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_CreateEvalCompletionsRunDataSource_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 17;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$types$evals$run_create_response,
        mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = LIST_COPY(tstate, mod_consts.const_list_64443c022ba73aec2a00e0ea0881a932_list);
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_25);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto try_except_handler_3;
}
tmp_assign_source_26 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_27 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
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


exception_lineno = 45;

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


exception_lineno = 45;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_29;
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


exception_lineno = 45;

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
PyObject *tmp_assign_source_30;
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


exception_lineno = 45;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 45;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_30;
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


exception_lineno = 45;

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
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

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


exception_lineno = 45;

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


exception_lineno = 45;

    goto try_except_handler_3;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 45;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 45;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_31;
}
branch_end_1:;
{
PyObject *tmp_assign_source_32;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_45;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
frame_frame_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_2 = MAKE_CLASS_FRAME(tstate, code_objects_1fca3471a77ff7c7396c1e44d18e6ddd, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_2);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_7 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain_Dict);

if (tmp_expression_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_7 = module_var_accessor_openai$types$evals$run_create_response$Dict(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dict);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_tuple_element_4 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain_str);

if (tmp_tuple_element_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain_object);

if (tmp_tuple_element_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_4 = (PyObject *)&PyBaseObject_Type;
        Py_INCREF(tmp_tuple_element_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_4);
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_1 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_1);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_item;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain_sample, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_expression_value_8 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_expression_value_9 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain_Dict);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_openai$types$evals$run_create_response$Dict(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dict);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_8);

exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_tuple_element_5 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain_str);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain_object);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = (PyObject *)&PyBaseObject_Type;
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_5);
tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_8);

exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_2 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_2);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_sample;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_2);

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

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


exception_lineno = 45;

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 45;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_33;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_32 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_32);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45);
locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45);
locals_openai$types$evals$run_create_response$$$class__1_DataSourceResponsesSourceFileContentContent_45 = NULL;
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
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2, tmp_assign_source_32);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
PyObject *tmp_assign_source_34;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto try_except_handler_6;
}
tmp_assign_source_34 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_35 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

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
tmp_expression_value_10 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_5, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_37 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_37;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

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
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_6;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_DataSourceResponsesSourceFileContent;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 51;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_38;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_13 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_13, tmp_default_value_2);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
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


exception_lineno = 51;

    goto try_except_handler_6;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 51;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 51;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_39;
}
branch_end_4:;
{
PyObject *tmp_assign_source_40;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_DataSourceResponsesSourceFileContent;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_51;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
frame_frame_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_3 = MAKE_CLASS_FRAME(tstate, code_objects_302e8d9102a788f071bdd71f79ab591d, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_3);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_6;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_expression_value_16 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, mod_consts.const_str_plain_List);

if (tmp_expression_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_16 = module_var_accessor_openai$types$evals$run_create_response$List(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_subscript_value_6 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2);

if (tmp_subscript_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_6 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSourceFileContentContent(tstate);
if (unlikely(tmp_subscript_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_cf895de0a0492eba1b9796193789b2a2);
}

if (tmp_subscript_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_16);

exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_subscript_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscribed_3 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_3);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_content;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_7;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_expression_value_17 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_17 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_subscript_value_7 = mod_consts.const_str_plain_file_content;
tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscribed_4 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_4);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_3;
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


exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_3);

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

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


exception_lineno = 51;

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_DataSourceResponsesSourceFileContent;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 51;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_41;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_40 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_40);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51);
locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51);
locals_openai$types$evals$run_create_response$$$class__2_DataSourceResponsesSourceFileContent_51 = NULL;
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
exception_lineno = 51;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceFileContent, tmp_assign_source_40);
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
PyObject *tmp_assign_source_42;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_assign_source_42 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_42, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_43 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

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
tmp_expression_value_18 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_8, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_45 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_45;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

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
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_DataSourceResponsesSourceFileID;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 59;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_46;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_21 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

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
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_22;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_22, tmp_name_value_14, tmp_default_value_3);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_23;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_23 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_23 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_13);
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


exception_lineno = 59;

    goto try_except_handler_9;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 59;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 59;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_47;
}
branch_end_7:;
{
PyObject *tmp_assign_source_48;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_DataSourceResponsesSourceFileID;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_59;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
frame_frame_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_4 = MAKE_CLASS_FRAME(tstate, code_objects_da2f6048a5a06f4494ce2e02d11dd775, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_4);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_5 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_ass_subscribed_5 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_5);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_9;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_expression_value_24 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_24 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_subscript_value_9 = mod_consts.const_str_plain_file_id;
tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_ass_subvalue_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscribed_6 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_6);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_6);

exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_6 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
CHECK_OBJECT(tmp_ass_subvalue_6);
Py_DECREF(tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_4);

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

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


exception_lineno = 59;

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
branch_no_9:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_DataSourceResponsesSourceFileID;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 59;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_49;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_48 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_48);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59);
locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59);
locals_openai$types$evals$run_create_response$$$class__3_DataSourceResponsesSourceFileID_59 = NULL;
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
exception_lineno = 59;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceFileID, tmp_assign_source_48);
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
PyObject *tmp_assign_source_50;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto try_except_handler_12;
}
tmp_assign_source_50 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_51 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

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
tmp_expression_value_25 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_10, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_12;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_53;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

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
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_12;
}
tmp_tuple_element_16 = mod_consts.const_str_plain_DataSourceResponsesSourceResponses;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 67;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_54;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

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
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_15, tmp_default_value_4);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_12;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_17);
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


exception_lineno = 67;

    goto try_except_handler_12;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 67;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 67;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_55;
}
branch_end_10:;
{
PyObject *tmp_assign_source_56;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_DataSourceResponsesSourceResponses;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_67;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_14;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_14;
}
frame_frame_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_5 = MAKE_CLASS_FRAME(tstate, code_objects_b2172140ff9c81b8075944c8c1853df0, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_5);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_11;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_expression_value_31 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_31 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_11 = mod_consts.const_str_plain_responses;
tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_11);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_ass_subvalue_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_7 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_7);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_7 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
CHECK_OBJECT(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_created_after, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_12;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_expression_value_32 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_32 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_12 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain_int);

if (tmp_subscript_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_subscript_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_12);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_ass_subvalue_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_8 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_8);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_8);

exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_created_after;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
CHECK_OBJECT(tmp_ass_subvalue_8);
Py_DECREF(tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_created_before, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_13;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_expression_value_33 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_33 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_13 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain_int);

if (tmp_subscript_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_13 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_subscript_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_13);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
CHECK_OBJECT(tmp_subscript_value_13);
Py_DECREF(tmp_subscript_value_13);
if (tmp_ass_subvalue_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_9 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_9);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_9);

exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_created_before;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
CHECK_OBJECT(tmp_ass_subvalue_9);
Py_DECREF(tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_instructions_search, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_14;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_expression_value_34 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_34 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_14 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_str);

if (tmp_subscript_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_14);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
CHECK_OBJECT(tmp_subscript_value_14);
Py_DECREF(tmp_subscript_value_14);
if (tmp_ass_subvalue_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_10 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_10);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_10);

exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_instructions_search;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
CHECK_OBJECT(tmp_ass_subvalue_10);
Py_DECREF(tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_metadata, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_15;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_expression_value_35 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_35 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_35 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_35);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_15 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_object);

if (tmp_subscript_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_15 = (PyObject *)&PyBaseObject_Type;
        Py_INCREF(tmp_subscript_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_15);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
CHECK_OBJECT(tmp_subscript_value_15);
Py_DECREF(tmp_subscript_value_15);
if (tmp_ass_subvalue_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_11 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_11);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_11);

exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_metadata;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
CHECK_OBJECT(tmp_ass_subvalue_11);
Py_DECREF(tmp_ass_subvalue_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_model, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_16;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_expression_value_36 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_36 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_36 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_36);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_16 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_str);

if (tmp_subscript_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_16);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
CHECK_OBJECT(tmp_subscript_value_16);
Py_DECREF(tmp_subscript_value_16);
if (tmp_ass_subvalue_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_12 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_12);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_12);

exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_model;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
CHECK_OBJECT(tmp_ass_subvalue_12);
Py_DECREF(tmp_ass_subvalue_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_reasoning_effort, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_17;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_expression_value_37 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_37 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_37 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_37);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_17 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_ReasoningEffort);

if (tmp_subscript_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_17 = module_var_accessor_openai$types$evals$run_create_response$ReasoningEffort(tstate);
if (unlikely(tmp_subscript_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReasoningEffort);
}

if (tmp_subscript_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_37);

exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_subscript_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_17);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
CHECK_OBJECT(tmp_subscript_value_17);
Py_DECREF(tmp_subscript_value_17);
if (tmp_ass_subvalue_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_13 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_13);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_13);

exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_reasoning_effort;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
CHECK_OBJECT(tmp_ass_subvalue_13);
Py_DECREF(tmp_ass_subvalue_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_temperature, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_18;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_expression_value_38 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_38 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_38 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_38);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_18 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_float);

if (tmp_subscript_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_18 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_subscript_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_18);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
CHECK_OBJECT(tmp_subscript_value_18);
Py_DECREF(tmp_subscript_value_18);
if (tmp_ass_subvalue_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_14 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_14);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_14);

exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_temperature;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
CHECK_OBJECT(tmp_ass_subscribed_14);
Py_DECREF(tmp_ass_subscribed_14);
CHECK_OBJECT(tmp_ass_subvalue_14);
Py_DECREF(tmp_ass_subvalue_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_tools, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_19;
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_20;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_expression_value_39 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_39 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_expression_value_40 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_List);

if (tmp_expression_value_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_40 = module_var_accessor_openai$types$evals$run_create_response$List(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_39);

exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_20 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_str);

if (tmp_subscript_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_20);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
CHECK_OBJECT(tmp_subscript_value_20);
Py_DECREF(tmp_subscript_value_20);
if (tmp_subscript_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_39);

exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subvalue_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_19);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
CHECK_OBJECT(tmp_subscript_value_19);
Py_DECREF(tmp_subscript_value_19);
if (tmp_ass_subvalue_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_15 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_15);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_15);

exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_tools;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
CHECK_OBJECT(tmp_ass_subscribed_15);
Py_DECREF(tmp_ass_subscribed_15);
CHECK_OBJECT(tmp_ass_subvalue_15);
Py_DECREF(tmp_ass_subvalue_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_top_p, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_21;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_expression_value_41 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_41 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_21 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_float);

if (tmp_subscript_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_21 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_subscript_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subvalue_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_21);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
CHECK_OBJECT(tmp_subscript_value_21);
Py_DECREF(tmp_subscript_value_21);
if (tmp_ass_subvalue_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_16 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_16);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_16);

exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain_top_p;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
CHECK_OBJECT(tmp_ass_subscribed_16);
Py_DECREF(tmp_ass_subscribed_16);
CHECK_OBJECT(tmp_ass_subvalue_16);
Py_DECREF(tmp_ass_subvalue_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_users, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_17;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_22;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_23;
PyObject *tmp_ass_subscribed_17;
PyObject *tmp_ass_subscript_17;
tmp_expression_value_42 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_42 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_expression_value_43 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_List);

if (tmp_expression_value_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_43 = module_var_accessor_openai$types$evals$run_create_response$List(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_42);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_23 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain_str);

if (tmp_subscript_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_23 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_23);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
CHECK_OBJECT(tmp_subscript_value_23);
Py_DECREF(tmp_subscript_value_23);
if (tmp_subscript_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_42);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subvalue_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_22);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
CHECK_OBJECT(tmp_subscript_value_22);
Py_DECREF(tmp_subscript_value_22);
if (tmp_ass_subvalue_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_17 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_17);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_17);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_17 = mod_consts.const_str_plain_users;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
CHECK_OBJECT(tmp_ass_subscribed_17);
Py_DECREF(tmp_ass_subscribed_17);
CHECK_OBJECT(tmp_ass_subvalue_17);
Py_DECREF(tmp_ass_subvalue_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_5);

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

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


exception_lineno = 67;

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_14;
}
branch_no_12:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_18 = mod_consts.const_str_plain_DataSourceResponsesSourceResponses;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 67;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_14;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_57;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_56 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_56);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67);
locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67);
locals_openai$types$evals$run_create_response$$$class__4_DataSourceResponsesSourceResponses_67 = NULL;
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
exception_lineno = 67;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSourceResponses, tmp_assign_source_56);
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
PyObject *tmp_assign_source_58;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_24;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_25;
PyObject *tmp_tuple_element_20;
tmp_expression_value_44 = module_var_accessor_openai$types$evals$run_create_response$Annotated(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto frame_exception_exit_1;
}
tmp_expression_value_45 = module_var_accessor_openai$types$evals$run_create_response$Union(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_tuple_element_20 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSourceFileContent(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSourceResponsesSourceFileContent);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_25, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSourceFileID(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSourceResponsesSourceFileID);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_subscript_value_25, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSourceResponses(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSourceResponsesSourceResponses);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_subscript_value_25, 2, tmp_tuple_element_20);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_subscript_value_25);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_25);
CHECK_OBJECT(tmp_subscript_value_25);
Py_DECREF(tmp_subscript_value_25);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_9;
PyTuple_SET_ITEM(tmp_subscript_value_24, 0, tmp_tuple_element_19);
tmp_called_value_9 = module_var_accessor_openai$types$evals$run_create_response$PropertyInfo(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PropertyInfo);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;

    goto tuple_build_exception_6;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 122;
tmp_tuple_element_19 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_type_tuple, 0), mod_consts.const_tuple_str_plain_discriminator_tuple);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_24, 1, tmp_tuple_element_19);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_subscript_value_24);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_assign_source_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_24);
CHECK_OBJECT(tmp_subscript_value_24);
Py_DECREF(tmp_subscript_value_24);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSource, tmp_assign_source_58);
}
{
PyObject *tmp_ass_subvalue_18;
PyObject *tmp_ass_subscribed_18;
PyObject *tmp_ass_subscript_18;
tmp_ass_subvalue_18 = module_var_accessor_openai$types$evals$run_create_response$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_18 = module_var_accessor_openai$types$evals$run_create_response$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_18 = mod_consts.const_str_plain_DataSourceResponsesSource;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_59;
PyObject *tmp_tuple_element_21;
tmp_tuple_element_21 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto try_except_handler_15;
}
tmp_assign_source_59 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_59, 0, tmp_tuple_element_21);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_60 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_26;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

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
tmp_expression_value_46 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_26 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_46, tmp_subscript_value_26, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_15;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_15;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_62;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

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
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_48;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_15;
}
tmp_tuple_element_22 = mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 126;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_63;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_49;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_49 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_49, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

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
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_50;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_50 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_50, tmp_name_value_16, tmp_default_value_5);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_15;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_51;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_51 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_51 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_15;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 126;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 126;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_64;
}
branch_end_13:;
{
PyObject *tmp_assign_source_65;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_126;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_17;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_17;
}
frame_frame_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_6 = MAKE_CLASS_FRAME(tstate, code_objects_799f266c20ac9f9196e2afb69ec2d6b0, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_6);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_6) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_19;
PyObject *tmp_ass_subscribed_19;
PyObject *tmp_ass_subscript_19;
tmp_ass_subvalue_19 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_19 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_ass_subscribed_19 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_19);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_19);

exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_19 = mod_consts.const_str_plain_content;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
CHECK_OBJECT(tmp_ass_subscribed_19);
Py_DECREF(tmp_ass_subscribed_19);
CHECK_OBJECT(tmp_ass_subvalue_19);
Py_DECREF(tmp_ass_subvalue_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_ass_subvalue_20;
PyObject *tmp_ass_subscribed_20;
PyObject *tmp_ass_subscript_20;
tmp_ass_subvalue_20 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_20 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_ass_subscribed_20 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_20);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_20);

exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_20 = mod_consts.const_str_plain_role;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
CHECK_OBJECT(tmp_ass_subscribed_20);
Py_DECREF(tmp_ass_subscribed_20);
CHECK_OBJECT(tmp_ass_subvalue_20);
Py_DECREF(tmp_ass_subvalue_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_6);

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

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


exception_lineno = 126;

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_17;
}
branch_no_15:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_24 = mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_24);
tmp_tuple_element_24 = locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 126;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_17;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_66;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_65 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_65);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126);
locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126);
locals_openai$types$evals$run_create_response$$$class__5_DataSourceResponsesInputMessagesTemplateTemplateChatMessage_126 = NULL;
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
exception_lineno = 126;
goto try_except_handler_15;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b, tmp_assign_source_65);
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
PyObject *tmp_assign_source_67;
PyObject *tmp_tuple_element_25;
tmp_tuple_element_25 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto try_except_handler_18;
}
tmp_assign_source_67 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_67, 0, tmp_tuple_element_25);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_68 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_52;
PyObject *tmp_subscript_value_27;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

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
tmp_expression_value_52 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_27 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_52, tmp_subscript_value_27, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_18;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_18;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_70 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_70;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_53;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

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
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_54;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_26;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_54 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_18;
}
tmp_tuple_element_26 = mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_26 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 134;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_71;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_55;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_55 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_55, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

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
PyObject *tmp_tuple_element_27;
PyObject *tmp_expression_value_56;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_56 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_27 = BUILTIN_GETATTR(tstate, tmp_expression_value_56, tmp_name_value_17, tmp_default_value_6);
if (tmp_tuple_element_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_18;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_57;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_57 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_57 == NULL));
tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_57);
Py_DECREF(tmp_expression_value_57);
if (tmp_tuple_element_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_27);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_18;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 134;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 134;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_72;
}
branch_end_16:;
{
PyObject *tmp_assign_source_73;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_134;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_20;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_20;
}
frame_frame_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_7 = MAKE_CLASS_FRAME(tstate, code_objects_29dab6b0ebbafb6c2bf1f6e81b90ed28, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_7);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_7) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_21;
PyObject *tmp_ass_subscribed_21;
PyObject *tmp_ass_subscript_21;
tmp_ass_subvalue_21 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_21 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_ass_subscribed_21 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_21);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_21);

exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_21 = mod_consts.const_str_plain_text;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
CHECK_OBJECT(tmp_ass_subscribed_21);
Py_DECREF(tmp_ass_subscribed_21);
CHECK_OBJECT(tmp_ass_subvalue_21);
Py_DECREF(tmp_ass_subvalue_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_ass_subvalue_22;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_28;
PyObject *tmp_ass_subscribed_22;
PyObject *tmp_ass_subscript_22;
tmp_expression_value_58 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_58 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_58 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_58);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_subscript_value_28 = mod_consts.const_str_plain_output_text;
tmp_ass_subvalue_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_28);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_ass_subvalue_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscribed_22 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_22);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_22);

exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_7;
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


exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_7);

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

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


exception_lineno = 134;

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_20;
}
branch_no_18:;
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_28 = mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_28 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_28);
tmp_tuple_element_28 = locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 134;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_20;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_74;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_73 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_73);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134);
locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134);
locals_openai$types$evals$run_create_response$$$class__6_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText_134 = NULL;
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
exception_lineno = 134;
goto try_except_handler_18;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074, tmp_assign_source_73);
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
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_75;
PyObject *tmp_tuple_element_29;
tmp_tuple_element_29 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;

    goto try_except_handler_21;
}
tmp_assign_source_75 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_75, 0, tmp_tuple_element_29);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_76 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_76;
}
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_77;
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_59;
PyObject *tmp_subscript_value_29;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

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
tmp_expression_value_59 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_29 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_59, tmp_subscript_value_29, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_21;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_21;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_78;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_60;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_60 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

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
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_61;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_30;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_61 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_21;
}
tmp_tuple_element_30 = mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_30 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 142;
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_79;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_62;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_62 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

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
PyObject *tmp_tuple_element_31;
PyObject *tmp_expression_value_63;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_63 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_63, tmp_name_value_18, tmp_default_value_7);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_21;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_64;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_64 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_64 == NULL));
tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_64);
Py_DECREF(tmp_expression_value_64);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_31);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_21;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 142;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 142;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_80;
}
branch_end_19:;
{
PyObject *tmp_assign_source_81;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_142;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_23;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_23;
}
frame_frame_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_8 = MAKE_CLASS_FRAME(tstate, code_objects_2bc2a6b0b6c84bee9283e82252b8decd, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_8);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_8) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_23;
PyObject *tmp_ass_subscribed_23;
PyObject *tmp_ass_subscript_23;
tmp_ass_subvalue_23 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_23 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_ass_subscribed_23 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_23);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_23);

exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_23 = mod_consts.const_str_plain_image_url;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
CHECK_OBJECT(tmp_ass_subscribed_23);
Py_DECREF(tmp_ass_subscribed_23);
CHECK_OBJECT(tmp_ass_subvalue_23);
Py_DECREF(tmp_ass_subvalue_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_ass_subvalue_24;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_30;
PyObject *tmp_ass_subscribed_24;
PyObject *tmp_ass_subscript_24;
tmp_expression_value_65 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_65 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_65 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_65);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_30 = mod_consts.const_str_plain_input_image;
tmp_ass_subvalue_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_30);
CHECK_OBJECT(tmp_expression_value_65);
Py_DECREF(tmp_expression_value_65);
if (tmp_ass_subvalue_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscribed_24 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_24);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_24);

exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_24 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
CHECK_OBJECT(tmp_ass_subscribed_24);
Py_DECREF(tmp_ass_subscribed_24);
CHECK_OBJECT(tmp_ass_subvalue_24);
Py_DECREF(tmp_ass_subvalue_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, mod_consts.const_str_plain_detail, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_ass_subvalue_25;
PyObject *tmp_expression_value_66;
PyObject *tmp_subscript_value_31;
PyObject *tmp_ass_subscribed_25;
PyObject *tmp_ass_subscript_25;
tmp_expression_value_66 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_66 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_66 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_66);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_31 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, mod_consts.const_str_plain_str);

if (tmp_subscript_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_31 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_ass_subvalue_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_31);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
CHECK_OBJECT(tmp_subscript_value_31);
Py_DECREF(tmp_subscript_value_31);
if (tmp_ass_subvalue_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscribed_25 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_25);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_25);

exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_25 = mod_consts.const_str_plain_detail;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
CHECK_OBJECT(tmp_ass_subscribed_25);
Py_DECREF(tmp_ass_subscribed_25);
CHECK_OBJECT(tmp_ass_subvalue_25);
Py_DECREF(tmp_ass_subvalue_25);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_8);

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

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


exception_lineno = 142;

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_23;
}
branch_no_21:;
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_32;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_32 = mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_32 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_32);
tmp_tuple_element_32 = locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 142;
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_23;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_82;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_81 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_81);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142);
locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142);
locals_openai$types$evals$run_create_response$$$class__7_DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage_142 = NULL;
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
exception_lineno = 142;
goto try_except_handler_21;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724, tmp_assign_source_81);
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
PyObject *tmp_assign_source_83;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_32;
PyObject *tmp_tuple_element_33;
tmp_expression_value_67 = module_var_accessor_openai$types$evals$run_create_response$Union(tstate);
if (unlikely(tmp_expression_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;

    goto frame_exception_exit_1;
}
tmp_tuple_element_33 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_68;
PyObject *tmp_subscript_value_33;
PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_33);
tmp_tuple_element_33 = module_var_accessor_openai$types$evals$run_create_response$ResponseInputText(tstate);
if (unlikely(tmp_tuple_element_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseInputText);
}

if (tmp_tuple_element_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_subscript_value_32, 1, tmp_tuple_element_33);
tmp_tuple_element_33 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentOutputText(tstate);
if (unlikely(tmp_tuple_element_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_3a816797d82890e15a2e2d04aead8074);
}

if (tmp_tuple_element_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_subscript_value_32, 2, tmp_tuple_element_33);
tmp_tuple_element_33 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplateEvalItemContentInputImage(tstate);
if (unlikely(tmp_tuple_element_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_9df16d8811d3de0651214e92b3cf7724);
}

if (tmp_tuple_element_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_subscript_value_32, 3, tmp_tuple_element_33);
tmp_expression_value_68 = module_var_accessor_openai$types$evals$run_create_response$List(tstate);
if (unlikely(tmp_expression_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;

    goto tuple_build_exception_10;
}
tmp_subscript_value_33 = (PyObject *)&PyBaseObject_Type;
tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_33);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_subscript_value_32, 4, tmp_tuple_element_33);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_subscript_value_32);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_assign_source_83 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_32);
CHECK_OBJECT(tmp_subscript_value_32);
Py_DECREF(tmp_subscript_value_32);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d, tmp_assign_source_83);
}
{
PyObject *tmp_ass_subvalue_26;
PyObject *tmp_ass_subscribed_26;
PyObject *tmp_ass_subscript_26;
tmp_ass_subvalue_26 = module_var_accessor_openai$types$evals$run_create_response$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_26 = module_var_accessor_openai$types$evals$run_create_response$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_26 = mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_8;
// Tried code:
{
PyObject *tmp_assign_source_84;
PyObject *tmp_tuple_element_34;
tmp_tuple_element_34 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;

    goto try_except_handler_24;
}
tmp_assign_source_84 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_84, 0, tmp_tuple_element_34);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_85 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_85;
}
{
PyObject *tmp_assign_source_86;
tmp_assign_source_86 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_86;
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_69;
PyObject *tmp_subscript_value_34;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

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
tmp_expression_value_69 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_34 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_69, tmp_subscript_value_34, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_24;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_24;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_87 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_87;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_70;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_70 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

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
PyObject *tmp_assign_source_88;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_71;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_24;
}
tmp_tuple_element_35 = mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 165;
tmp_assign_source_88 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_88;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_72;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_72 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_72, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

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
PyObject *tmp_tuple_element_36;
PyObject *tmp_expression_value_73;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_73 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_36 = BUILTIN_GETATTR(tstate, tmp_expression_value_73, tmp_name_value_19, tmp_default_value_8);
if (tmp_tuple_element_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_24;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_74;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_74 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_74 == NULL));
tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_74);
Py_DECREF(tmp_expression_value_74);
if (tmp_tuple_element_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_36);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_24;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_24;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 165;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 165;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_24;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_89;
tmp_assign_source_89 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_89;
}
branch_end_22:;
{
PyObject *tmp_assign_source_90;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_int_pos_165;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_26;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_26;
}
frame_frame_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_9 = MAKE_CLASS_FRAME(tstate, code_objects_b1f44994e95a506256076c97ff04f23b, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_9);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_9) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_27;
PyObject *tmp_ass_subscribed_27;
PyObject *tmp_ass_subscript_27;
tmp_ass_subvalue_27 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d);

if (tmp_ass_subvalue_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_27 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplateEvalItemContent(tstate);
if (unlikely(tmp_ass_subvalue_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_b00d9842b803eb78daa98badb5539f5d);
}

if (tmp_ass_subvalue_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_ass_subvalue_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subscribed_27 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_27);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_27);

exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_27 = mod_consts.const_str_plain_content;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
CHECK_OBJECT(tmp_ass_subscribed_27);
Py_DECREF(tmp_ass_subscribed_27);
CHECK_OBJECT(tmp_ass_subvalue_27);
Py_DECREF(tmp_ass_subvalue_27);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
{
PyObject *tmp_ass_subvalue_28;
PyObject *tmp_expression_value_75;
PyObject *tmp_subscript_value_35;
PyObject *tmp_ass_subscribed_28;
PyObject *tmp_ass_subscript_28;
tmp_expression_value_75 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_75 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_75 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_75);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_35 = mod_consts.const_tuple_635249ff24a913f7a76e1cd8b156b1b3_tuple;
tmp_ass_subvalue_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_35);
CHECK_OBJECT(tmp_expression_value_75);
Py_DECREF(tmp_expression_value_75);
if (tmp_ass_subvalue_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_28 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_28);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_28);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_28 = mod_consts.const_str_plain_role;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
CHECK_OBJECT(tmp_ass_subscribed_28);
Py_DECREF(tmp_ass_subscribed_28);
CHECK_OBJECT(tmp_ass_subvalue_28);
Py_DECREF(tmp_ass_subvalue_28);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, const_str_plain_type, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
{
PyObject *tmp_ass_subvalue_29;
PyObject *tmp_expression_value_76;
PyObject *tmp_subscript_value_36;
PyObject *tmp_expression_value_77;
PyObject *tmp_subscript_value_37;
PyObject *tmp_ass_subscribed_29;
PyObject *tmp_ass_subscript_29;
tmp_expression_value_76 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_76 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_76 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_76);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_expression_value_77 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_77 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_77 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_77 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_77 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_76);

exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_77);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_37 = mod_consts.const_str_plain_message;
tmp_subscript_value_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_37);
CHECK_OBJECT(tmp_expression_value_77);
Py_DECREF(tmp_expression_value_77);
if (tmp_subscript_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_76);

exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subvalue_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_36);
CHECK_OBJECT(tmp_expression_value_76);
Py_DECREF(tmp_expression_value_76);
CHECK_OBJECT(tmp_subscript_value_36);
Py_DECREF(tmp_subscript_value_36);
if (tmp_ass_subvalue_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_29 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_29);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_29);

exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_29 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
CHECK_OBJECT(tmp_ass_subscribed_29);
Py_DECREF(tmp_ass_subscribed_29);
CHECK_OBJECT(tmp_ass_subvalue_29);
Py_DECREF(tmp_ass_subvalue_29);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_9);

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

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


exception_lineno = 165;

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_26;
}
branch_no_24:;
{
PyObject *tmp_assign_source_91;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_17 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_37 = mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_37);
tmp_tuple_element_37 = locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 165;
tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_26;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_91;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_90 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_90);
goto try_return_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165);
locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165 = NULL;
goto try_return_handler_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165);
locals_openai$types$evals$run_create_response$$$class__8_DataSourceResponsesInputMessagesTemplateTemplateEvalItem_165 = NULL;
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
exception_lineno = 165;
goto try_except_handler_24;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d, tmp_assign_source_90);
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
PyObject *tmp_assign_source_92;
PyObject *tmp_expression_value_78;
PyObject *tmp_subscript_value_38;
PyObject *tmp_tuple_element_38;
tmp_expression_value_78 = module_var_accessor_openai$types$evals$run_create_response$Union(tstate);
if (unlikely(tmp_expression_value_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;

    goto frame_exception_exit_1;
}
tmp_tuple_element_38 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplateChatMessage(tstate);
if (unlikely(tmp_tuple_element_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_0a1f141d1c2b859985bfa918f3f2e14b);
}

if (tmp_tuple_element_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;

    goto frame_exception_exit_1;
}
tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_38, 0, tmp_tuple_element_38);
tmp_tuple_element_38 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplateEvalItem(tstate);
if (unlikely(tmp_tuple_element_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_4263e7684cdc169058191de9022ee02d);
}

if (tmp_tuple_element_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM0(tmp_subscript_value_38, 1, tmp_tuple_element_38);
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_subscript_value_38);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_assign_source_92 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_38);
CHECK_OBJECT(tmp_subscript_value_38);
Py_DECREF(tmp_subscript_value_38);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93, tmp_assign_source_92);
}
{
PyObject *tmp_ass_subvalue_30;
PyObject *tmp_ass_subscribed_30;
PyObject *tmp_ass_subscript_30;
tmp_ass_subvalue_30 = module_var_accessor_openai$types$evals$run_create_response$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_30 = module_var_accessor_openai$types$evals$run_create_response$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_30 = mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_93;
PyObject *tmp_tuple_element_39;
tmp_tuple_element_39 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto try_except_handler_27;
}
tmp_assign_source_93 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_93, 0, tmp_tuple_element_39);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_93;
}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_94 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_94;
}
{
PyObject *tmp_assign_source_95;
tmp_assign_source_95 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_95;
}
{
PyObject *tmp_assign_source_96;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_39;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

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
tmp_expression_value_79 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_39 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_39, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_27;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_27;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_96 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_96;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_80;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_80 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

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
PyObject *tmp_assign_source_97;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_81;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_40;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_81 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_27;
}
tmp_tuple_element_40 = mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_40 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 185;
tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_97;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_82;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_82 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

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
PyObject *tmp_tuple_element_41;
PyObject *tmp_expression_value_83;
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_83 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_20, tmp_default_value_9);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_27;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_84;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_84 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_41);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_27;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 185;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 185;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_27;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_98;
tmp_assign_source_98 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_98;
}
branch_end_25:;
{
PyObject *tmp_assign_source_99;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_int_pos_185;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_29;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_29;
}
frame_frame_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_10 = MAKE_CLASS_FRAME(tstate, code_objects_1ff97b3b09f91a44345f091f7dfcf7af, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_10);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_10) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_31;
PyObject *tmp_expression_value_85;
PyObject *tmp_subscript_value_40;
PyObject *tmp_ass_subscribed_31;
PyObject *tmp_ass_subscript_31;
tmp_expression_value_85 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, mod_consts.const_str_plain_List);

if (tmp_expression_value_85 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_85 = module_var_accessor_openai$types$evals$run_create_response$List(tstate);
if (unlikely(tmp_expression_value_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_expression_value_85);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_subscript_value_40 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93);

if (tmp_subscript_value_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_40 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplateTemplate(tstate);
if (unlikely(tmp_subscript_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_5dc160dc470135c65d366b842c399a93);
}

if (tmp_subscript_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_85);

exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_subscript_value_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_ass_subvalue_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_40);
CHECK_OBJECT(tmp_expression_value_85);
Py_DECREF(tmp_expression_value_85);
CHECK_OBJECT(tmp_subscript_value_40);
Py_DECREF(tmp_subscript_value_40);
if (tmp_ass_subvalue_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscribed_31 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_31);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_31);

exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_31 = mod_consts.const_str_plain_template;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
CHECK_OBJECT(tmp_ass_subscribed_31);
Py_DECREF(tmp_ass_subscribed_31);
CHECK_OBJECT(tmp_ass_subvalue_31);
Py_DECREF(tmp_ass_subvalue_31);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_subvalue_32;
PyObject *tmp_expression_value_86;
PyObject *tmp_subscript_value_41;
PyObject *tmp_ass_subscribed_32;
PyObject *tmp_ass_subscript_32;
tmp_expression_value_86 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_86 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_86 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_86 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_86 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_expression_value_86);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_subscript_value_41 = mod_consts.const_str_plain_template;
tmp_ass_subvalue_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_86, tmp_subscript_value_41);
CHECK_OBJECT(tmp_expression_value_86);
Py_DECREF(tmp_expression_value_86);
if (tmp_ass_subvalue_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscribed_32 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_32);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_32);

exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_32 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
CHECK_OBJECT(tmp_ass_subscribed_32);
Py_DECREF(tmp_ass_subscribed_32);
CHECK_OBJECT(tmp_ass_subvalue_32);
Py_DECREF(tmp_ass_subvalue_32);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_10);

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

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


exception_lineno = 185;

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
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_29;
}
branch_no_27:;
{
PyObject *tmp_assign_source_100;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_42;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_42 = mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_42 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_42);
tmp_tuple_element_42 = locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 185;
tmp_assign_source_100 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_29;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_100;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_99 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_99);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185);
locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185 = NULL;
goto try_return_handler_28;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185);
locals_openai$types$evals$run_create_response$$$class__9_DataSourceResponsesInputMessagesTemplate_185 = NULL;
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
exception_lineno = 185;
goto try_except_handler_27;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate, tmp_assign_source_99);
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
{
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_101;
PyObject *tmp_tuple_element_43;
tmp_tuple_element_43 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;

    goto try_except_handler_30;
}
tmp_assign_source_101 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_101, 0, tmp_tuple_element_43);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_101;
}
{
PyObject *tmp_assign_source_102;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_102 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_102;
}
{
PyObject *tmp_assign_source_103;
tmp_assign_source_103 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_103;
}
{
PyObject *tmp_assign_source_104;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_87;
PyObject *tmp_subscript_value_42;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_87 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_42 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_87, tmp_subscript_value_42, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_104 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_104;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_88;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_88 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
tmp_condition_result_38 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_38 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_assign_source_105;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_89;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_44;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_89 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
tmp_tuple_element_44 = mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_44 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 196;
tmp_assign_source_105 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_105;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_90;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_90 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_90, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_39 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_39 != false) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_raise_type_10;
PyObject *tmp_make_exception_arg_10;
PyObject *tmp_mod_expr_left_10;
PyObject *tmp_mod_expr_right_10;
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_91;
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_91 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_91, tmp_name_value_21, tmp_default_value_10);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_92;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_92 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_92 == NULL));
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_92);
Py_DECREF(tmp_expression_value_92);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_45);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_30;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_30;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 196;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 196;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_30;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_106;
tmp_assign_source_106 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_106;
}
branch_end_28:;
{
PyObject *tmp_assign_source_107;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_int_pos_196;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_32;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_32;
}
frame_frame_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_11 = MAKE_CLASS_FRAME(tstate, code_objects_7577e59c4dc1d57da539bd9a535fe1ba, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_11);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_11) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_33;
PyObject *tmp_ass_subscribed_33;
PyObject *tmp_ass_subscript_33;
tmp_ass_subvalue_33 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_33 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_11;
    }
}

tmp_ass_subscribed_33 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_33);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_11;
}

if (tmp_ass_subscribed_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_33);

exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscript_33 = mod_consts.const_str_plain_item_reference;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
CHECK_OBJECT(tmp_ass_subscribed_33);
Py_DECREF(tmp_ass_subscribed_33);
CHECK_OBJECT(tmp_ass_subvalue_33);
Py_DECREF(tmp_ass_subvalue_33);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}
{
PyObject *tmp_ass_subvalue_34;
PyObject *tmp_expression_value_93;
PyObject *tmp_subscript_value_43;
PyObject *tmp_ass_subscribed_34;
PyObject *tmp_ass_subscript_34;
tmp_expression_value_93 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_93 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_93 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_93 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_93 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
        Py_INCREF(tmp_expression_value_93);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_11;
    }
}

tmp_subscript_value_43 = mod_consts.const_str_plain_item_reference;
tmp_ass_subvalue_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_93, tmp_subscript_value_43);
CHECK_OBJECT(tmp_expression_value_93);
Py_DECREF(tmp_expression_value_93);
if (tmp_ass_subvalue_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscribed_34 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_34);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_11;
}

if (tmp_ass_subscribed_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_34);

exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscript_34 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
CHECK_OBJECT(tmp_ass_subscribed_34);
Py_DECREF(tmp_ass_subscribed_34);
CHECK_OBJECT(tmp_ass_subvalue_34);
Py_DECREF(tmp_ass_subvalue_34);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_11,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_32;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_32;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_32;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_32;
}
branch_no_30:;
{
PyObject *tmp_assign_source_108;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_46;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_21 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_46 = mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_46 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_46);
tmp_tuple_element_46 = locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 196;
tmp_assign_source_108 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_32;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_108;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_107 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_107);
goto try_return_handler_32;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196);
locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196 = NULL;
goto try_return_handler_31;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196);
locals_openai$types$evals$run_create_response$$$class__10_DataSourceResponsesInputMessagesItemReference_196 = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_31;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 196;
goto try_except_handler_30;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9, tmp_assign_source_107);
}
goto try_end_12;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
Py_DECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
Py_DECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
Py_DECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
Py_DECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
tmp_outline_return_value_10 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_10);
goto outline_result_19;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_19:;
CHECK_OBJECT(tmp_outline_return_value_10);
Py_DECREF(tmp_outline_return_value_10);
}
{
PyObject *tmp_assign_source_109;
PyObject *tmp_expression_value_94;
PyObject *tmp_subscript_value_44;
PyObject *tmp_tuple_element_47;
PyObject *tmp_expression_value_95;
PyObject *tmp_subscript_value_45;
PyObject *tmp_tuple_element_48;
tmp_expression_value_94 = module_var_accessor_openai$types$evals$run_create_response$Annotated(tstate);
if (unlikely(tmp_expression_value_94 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_94 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto frame_exception_exit_1;
}
tmp_expression_value_95 = module_var_accessor_openai$types$evals$run_create_response$Union(tstate);
if (unlikely(tmp_expression_value_95 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_95 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;

    goto frame_exception_exit_1;
}
tmp_tuple_element_48 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesTemplate(tstate);
if (unlikely(tmp_tuple_element_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSourceResponsesInputMessagesTemplate);
}

if (tmp_tuple_element_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;

    goto frame_exception_exit_1;
}
tmp_subscript_value_45 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_45, 0, tmp_tuple_element_48);
tmp_tuple_element_48 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessagesItemReference(tstate);
if (unlikely(tmp_tuple_element_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_f256ef9c531a872a7f661fab81b965b9);
}

if (tmp_tuple_element_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM0(tmp_subscript_value_45, 1, tmp_tuple_element_48);
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_subscript_value_45);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_tuple_element_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_95, tmp_subscript_value_45);
CHECK_OBJECT(tmp_subscript_value_45);
Py_DECREF(tmp_subscript_value_45);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto frame_exception_exit_1;
}
tmp_subscript_value_44 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_22;
PyTuple_SET_ITEM(tmp_subscript_value_44, 0, tmp_tuple_element_47);
tmp_called_value_22 = module_var_accessor_openai$types$evals$run_create_response$PropertyInfo(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PropertyInfo);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;

    goto tuple_build_exception_16;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 206;
tmp_tuple_element_47 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_type_tuple, 0), mod_consts.const_tuple_str_plain_discriminator_tuple);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_subscript_value_44, 1, tmp_tuple_element_47);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_subscript_value_44);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_assign_source_109 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_44);
CHECK_OBJECT(tmp_subscript_value_44);
Py_DECREF(tmp_subscript_value_44);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesInputMessages, tmp_assign_source_109);
}
{
PyObject *tmp_ass_subvalue_35;
PyObject *tmp_ass_subscribed_35;
PyObject *tmp_ass_subscript_35;
tmp_ass_subvalue_35 = module_var_accessor_openai$types$evals$run_create_response$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_35 = module_var_accessor_openai$types$evals$run_create_response$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_35 = mod_consts.const_str_plain_DataSourceResponsesInputMessages;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_11;
// Tried code:
{
PyObject *tmp_assign_source_110;
PyObject *tmp_tuple_element_49;
tmp_tuple_element_49 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;

    goto try_except_handler_33;
}
tmp_assign_source_110 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_110, 0, tmp_tuple_element_49);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_110;
}
{
PyObject *tmp_assign_source_111;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_111 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_111;
}
{
PyObject *tmp_assign_source_112;
tmp_assign_source_112 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_112;
}
{
PyObject *tmp_assign_source_113;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_96;
PyObject *tmp_subscript_value_46;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_96 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_46 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_96, tmp_subscript_value_46, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_113 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_113;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_97;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_97 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_97, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
tmp_condition_result_42 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_42 != false) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
{
PyObject *tmp_assign_source_114;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_98;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_50;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_98 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
tmp_tuple_element_50 = mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_50 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 210;
tmp_assign_source_114 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_114;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_99;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_99 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_99, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
assert(!(tmp_res == -1));
tmp_condition_result_43 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_43 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_raise_type_11;
PyObject *tmp_make_exception_arg_11;
PyObject *tmp_mod_expr_left_11;
PyObject *tmp_mod_expr_right_11;
PyObject *tmp_tuple_element_51;
PyObject *tmp_expression_value_100;
PyObject *tmp_name_value_22;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_100 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_22 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_51 = BUILTIN_GETATTR(tstate, tmp_expression_value_100, tmp_name_value_22, tmp_default_value_11);
if (tmp_tuple_element_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_101;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_51);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_101 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_101 == NULL));
tmp_tuple_element_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_101);
Py_DECREF(tmp_expression_value_101);
if (tmp_tuple_element_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_51);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_33;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_33;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 210;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 210;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_33;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_115;
tmp_assign_source_115 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_115;
}
branch_end_31:;
{
PyObject *tmp_assign_source_116;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_int_pos_210;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_35;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_35;
}
frame_frame_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_12 = MAKE_CLASS_FRAME(tstate, code_objects_688229755c8f65ab406f3f34109d3f53, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_12);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_12) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210, const_str_plain_format, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
{
PyObject *tmp_ass_subvalue_36;
PyObject *tmp_expression_value_102;
PyObject *tmp_subscript_value_47;
PyObject *tmp_ass_subscribed_36;
PyObject *tmp_ass_subscript_36;
tmp_expression_value_102 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_102 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_102 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_102 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_102 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
        Py_INCREF(tmp_expression_value_102);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_subscript_value_47 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210, mod_consts.const_str_plain_ResponseFormatTextConfig);

if (tmp_subscript_value_47 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_47 = module_var_accessor_openai$types$evals$run_create_response$ResponseFormatTextConfig(tstate);
if (unlikely(tmp_subscript_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFormatTextConfig);
}

if (tmp_subscript_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_102);

exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
        Py_INCREF(tmp_subscript_value_47);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_ass_subvalue_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_102, tmp_subscript_value_47);
CHECK_OBJECT(tmp_expression_value_102);
Py_DECREF(tmp_expression_value_102);
CHECK_OBJECT(tmp_subscript_value_47);
Py_DECREF(tmp_subscript_value_47);
if (tmp_ass_subvalue_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscribed_36 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_36);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_12;
}

if (tmp_ass_subscribed_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_36);

exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscript_36 = const_str_plain_format;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
CHECK_OBJECT(tmp_ass_subscribed_36);
Py_DECREF(tmp_ass_subscribed_36);
CHECK_OBJECT(tmp_ass_subvalue_36);
Py_DECREF(tmp_ass_subvalue_36);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_12,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_12);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_35;
skip_nested_handling_11:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_35;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_35;
}
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_35;
}
branch_no_33:;
{
PyObject *tmp_assign_source_117;
PyObject *tmp_called_value_24;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_52;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_24 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_52 = mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_52 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_52);
tmp_tuple_element_52 = locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 210;
tmp_assign_source_117 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_35;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_117;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_116 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_116);
goto try_return_handler_35;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_35:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210);
locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210 = NULL;
goto try_return_handler_34;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210);
locals_openai$types$evals$run_create_response$$$class__11_DataSourceResponsesSamplingParamsText_210 = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto try_except_handler_34;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_34:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 210;
goto try_except_handler_33;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText, tmp_assign_source_116);
}
goto try_end_13;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
Py_DECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
Py_DECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
Py_DECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
Py_DECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
tmp_outline_return_value_11 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_11);
goto outline_result_21;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_21:;
CHECK_OBJECT(tmp_outline_return_value_11);
Py_DECREF(tmp_outline_return_value_11);
}
{
PyObject *tmp_outline_return_value_12;
// Tried code:
{
PyObject *tmp_assign_source_118;
PyObject *tmp_tuple_element_53;
tmp_tuple_element_53 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;

    goto try_except_handler_36;
}
tmp_assign_source_118 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_118, 0, tmp_tuple_element_53);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_118;
}
{
PyObject *tmp_assign_source_119;
PyObject *tmp_direct_call_arg1_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_12 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12};
    tmp_assign_source_119 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_119;
}
{
PyObject *tmp_assign_source_120;
tmp_assign_source_120 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_120;
}
{
PyObject *tmp_assign_source_121;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_12;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_103;
PyObject *tmp_subscript_value_48;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_expression_value_103 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_48 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_48, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_121 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_121 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_121;
}
{
bool tmp_condition_result_46;
PyObject *tmp_expression_value_104;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_104 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
tmp_condition_result_46 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_46 != false) {
    goto branch_yes_34;
} else {
    goto branch_no_34;
}
}
branch_yes_34:;
{
PyObject *tmp_assign_source_122;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_105;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_54;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_105 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
tmp_tuple_element_54 = mod_consts.const_str_plain_DataSourceResponsesSamplingParams;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_54 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 228;
tmp_assign_source_122 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_122;
}
{
bool tmp_condition_result_47;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_106;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_106 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
assert(!(tmp_res == -1));
tmp_condition_result_47 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_47 != false) {
    goto branch_yes_35;
} else {
    goto branch_no_35;
}
}
branch_yes_35:;
{
PyObject *tmp_raise_type_12;
PyObject *tmp_make_exception_arg_12;
PyObject *tmp_mod_expr_left_12;
PyObject *tmp_mod_expr_right_12;
PyObject *tmp_tuple_element_55;
PyObject *tmp_expression_value_107;
PyObject *tmp_name_value_23;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_107 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_23 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_55 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_23, tmp_default_value_12);
if (tmp_tuple_element_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_108;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_24 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_108 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_108 == NULL));
tmp_tuple_element_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_108);
Py_DECREF(tmp_expression_value_108);
if (tmp_tuple_element_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_55);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_36;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_36;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 228;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 228;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_36;
}
branch_no_35:;
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_assign_source_123;
tmp_assign_source_123 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_123;
}
branch_end_34:;
{
PyObject *tmp_assign_source_124;
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_str_plain_DataSourceResponsesSamplingParams;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_int_pos_228;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_38;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_38;
}
frame_frame_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_13 = MAKE_CLASS_FRAME(tstate, code_objects_b99094f186ac14d99bab5cb856e37ccd, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_13);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_13) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_max_completion_tokens, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
{
PyObject *tmp_ass_subvalue_37;
PyObject *tmp_expression_value_109;
PyObject *tmp_subscript_value_49;
PyObject *tmp_ass_subscribed_37;
PyObject *tmp_ass_subscript_37;
tmp_expression_value_109 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_109 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_109 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_109 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_109 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_109);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_49 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, const_str_plain_int);

if (tmp_subscript_value_49 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_49 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_subscript_value_49);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_ass_subvalue_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_109, tmp_subscript_value_49);
CHECK_OBJECT(tmp_expression_value_109);
Py_DECREF(tmp_expression_value_109);
CHECK_OBJECT(tmp_subscript_value_49);
Py_DECREF(tmp_subscript_value_49);
if (tmp_ass_subvalue_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_37 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_37);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_37);

exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_37 = mod_consts.const_str_plain_max_completion_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
CHECK_OBJECT(tmp_ass_subscribed_37);
Py_DECREF(tmp_ass_subscribed_37);
CHECK_OBJECT(tmp_ass_subvalue_37);
Py_DECREF(tmp_ass_subvalue_37);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_seed, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
{
PyObject *tmp_ass_subvalue_38;
PyObject *tmp_expression_value_110;
PyObject *tmp_subscript_value_50;
PyObject *tmp_ass_subscribed_38;
PyObject *tmp_ass_subscript_38;
tmp_expression_value_110 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_110 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_110 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_110 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_110 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_110);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_50 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, const_str_plain_int);

if (tmp_subscript_value_50 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_50 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_subscript_value_50);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_ass_subvalue_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_110, tmp_subscript_value_50);
CHECK_OBJECT(tmp_expression_value_110);
Py_DECREF(tmp_expression_value_110);
CHECK_OBJECT(tmp_subscript_value_50);
Py_DECREF(tmp_subscript_value_50);
if (tmp_ass_subvalue_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_38 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_38);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_38);

exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_38 = mod_consts.const_str_plain_seed;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
CHECK_OBJECT(tmp_ass_subscribed_38);
Py_DECREF(tmp_ass_subscribed_38);
CHECK_OBJECT(tmp_ass_subvalue_38);
Py_DECREF(tmp_ass_subvalue_38);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_temperature, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
{
PyObject *tmp_ass_subvalue_39;
PyObject *tmp_expression_value_111;
PyObject *tmp_subscript_value_51;
PyObject *tmp_ass_subscribed_39;
PyObject *tmp_ass_subscript_39;
tmp_expression_value_111 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_111 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_111 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_111 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_111 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_111);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_51 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_float);

if (tmp_subscript_value_51 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_51 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_subscript_value_51);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_ass_subvalue_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_111, tmp_subscript_value_51);
CHECK_OBJECT(tmp_expression_value_111);
Py_DECREF(tmp_expression_value_111);
CHECK_OBJECT(tmp_subscript_value_51);
Py_DECREF(tmp_subscript_value_51);
if (tmp_ass_subvalue_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_39 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_39);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_39);

exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_39 = mod_consts.const_str_plain_temperature;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
CHECK_OBJECT(tmp_ass_subscribed_39);
Py_DECREF(tmp_ass_subscribed_39);
CHECK_OBJECT(tmp_ass_subvalue_39);
Py_DECREF(tmp_ass_subvalue_39);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_text, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
{
PyObject *tmp_ass_subvalue_40;
PyObject *tmp_expression_value_112;
PyObject *tmp_subscript_value_52;
PyObject *tmp_ass_subscribed_40;
PyObject *tmp_ass_subscript_40;
tmp_expression_value_112 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_112 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_112 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_112 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_112 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_112);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_52 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText);

if (tmp_subscript_value_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_52 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSamplingParamsText(tstate);
if (unlikely(tmp_subscript_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSourceResponsesSamplingParamsText);
}

if (tmp_subscript_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_112);

exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_subscript_value_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_ass_subvalue_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_112, tmp_subscript_value_52);
CHECK_OBJECT(tmp_expression_value_112);
Py_DECREF(tmp_expression_value_112);
CHECK_OBJECT(tmp_subscript_value_52);
Py_DECREF(tmp_subscript_value_52);
if (tmp_ass_subvalue_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_40 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_40);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_40);

exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_40 = mod_consts.const_str_plain_text;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
CHECK_OBJECT(tmp_ass_subscribed_40);
Py_DECREF(tmp_ass_subscribed_40);
CHECK_OBJECT(tmp_ass_subvalue_40);
Py_DECREF(tmp_ass_subvalue_40);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_tools, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
{
PyObject *tmp_ass_subvalue_41;
PyObject *tmp_expression_value_113;
PyObject *tmp_subscript_value_53;
PyObject *tmp_expression_value_114;
PyObject *tmp_subscript_value_54;
PyObject *tmp_ass_subscribed_41;
PyObject *tmp_ass_subscript_41;
tmp_expression_value_113 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_113 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_113 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_113 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_113 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_113);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_expression_value_114 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_List);

if (tmp_expression_value_114 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_114 = module_var_accessor_openai$types$evals$run_create_response$List(tstate);
if (unlikely(tmp_expression_value_114 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_114 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_113);

exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_114);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_54 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_Tool);

if (tmp_subscript_value_54 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_54 = module_var_accessor_openai$types$evals$run_create_response$Tool(tstate);
if (unlikely(tmp_subscript_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tool);
}

if (tmp_subscript_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_113);
Py_DECREF(tmp_expression_value_114);

exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_subscript_value_54);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_114, tmp_subscript_value_54);
CHECK_OBJECT(tmp_expression_value_114);
Py_DECREF(tmp_expression_value_114);
CHECK_OBJECT(tmp_subscript_value_54);
Py_DECREF(tmp_subscript_value_54);
if (tmp_subscript_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_113);

exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subvalue_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_113, tmp_subscript_value_53);
CHECK_OBJECT(tmp_expression_value_113);
Py_DECREF(tmp_expression_value_113);
CHECK_OBJECT(tmp_subscript_value_53);
Py_DECREF(tmp_subscript_value_53);
if (tmp_ass_subvalue_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_41 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_41);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_41);

exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_41 = mod_consts.const_str_plain_tools;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
CHECK_OBJECT(tmp_ass_subscribed_41);
Py_DECREF(tmp_ass_subscribed_41);
CHECK_OBJECT(tmp_ass_subvalue_41);
Py_DECREF(tmp_ass_subvalue_41);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_top_p, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
{
PyObject *tmp_ass_subvalue_42;
PyObject *tmp_expression_value_115;
PyObject *tmp_subscript_value_55;
PyObject *tmp_ass_subscribed_42;
PyObject *tmp_ass_subscript_42;
tmp_expression_value_115 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_115 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_115 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_115 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_115 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_115);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_55 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain_float);

if (tmp_subscript_value_55 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_55 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_subscript_value_55);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_ass_subvalue_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_115, tmp_subscript_value_55);
CHECK_OBJECT(tmp_expression_value_115);
Py_DECREF(tmp_expression_value_115);
CHECK_OBJECT(tmp_subscript_value_55);
Py_DECREF(tmp_subscript_value_55);
if (tmp_ass_subvalue_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_42 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_42);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_42);

exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_42 = mod_consts.const_str_plain_top_p;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
CHECK_OBJECT(tmp_ass_subscribed_42);
Py_DECREF(tmp_ass_subscribed_42);
CHECK_OBJECT(tmp_ass_subvalue_42);
Py_DECREF(tmp_ass_subvalue_42);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_12;
frame_exception_exit_13:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_13,
    type_description_2,
    outline_11_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_13);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_12;
frame_no_exception_12:;
goto skip_nested_handling_12;
nested_frame_exit_12:;

goto try_except_handler_38;
skip_nested_handling_12:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_38;
}
{
nuitka_bool tmp_condition_result_48;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_cmp_expr_left_12 = tmp_class_container$class_creation_12__bases;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_cmp_expr_right_12 = tmp_class_container$class_creation_12__bases_orig;
tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_38;
}
if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_12__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_38;
}
branch_no_36:;
{
PyObject *tmp_assign_source_125;
PyObject *tmp_called_value_26;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_56;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_called_value_26 = tmp_class_container$class_creation_12__metaclass;
tmp_tuple_element_56 = mod_consts.const_str_plain_DataSourceResponsesSamplingParams;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_56 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_56);
tmp_tuple_element_56 = locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228;
PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 228;
tmp_assign_source_125 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_38;
}
assert(outline_11_var___class__ == NULL);
outline_11_var___class__ = tmp_assign_source_125;
}
CHECK_OBJECT(outline_11_var___class__);
tmp_assign_source_124 = outline_11_var___class__;
Py_INCREF(tmp_assign_source_124);
goto try_return_handler_38;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_38:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228);
locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228 = NULL;
goto try_return_handler_37;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228);
locals_openai$types$evals$run_create_response$$$class__12_DataSourceResponsesSamplingParams_228 = NULL;
// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto try_except_handler_37;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_37:;
CHECK_OBJECT(outline_11_var___class__);
CHECK_OBJECT(outline_11_var___class__);
Py_DECREF(outline_11_var___class__);
outline_11_var___class__ = NULL;
goto outline_result_24;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto outline_exception_12;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_12:;
exception_lineno = 228;
goto try_except_handler_36;
outline_result_24:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponsesSamplingParams, tmp_assign_source_124);
}
goto try_end_14;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_38 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_38 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_38;
exception_lineno = exception_keeper_lineno_38;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
Py_DECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
Py_DECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
Py_DECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
Py_DECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
tmp_outline_return_value_12 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_12);
goto outline_result_23;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_23:;
CHECK_OBJECT(tmp_outline_return_value_12);
Py_DECREF(tmp_outline_return_value_12);
}
{
PyObject *tmp_outline_return_value_13;
// Tried code:
{
PyObject *tmp_assign_source_126;
PyObject *tmp_tuple_element_57;
tmp_tuple_element_57 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;

    goto try_except_handler_39;
}
tmp_assign_source_126 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_126, 0, tmp_tuple_element_57);
assert(tmp_class_container$class_creation_13__bases_orig == NULL);
tmp_class_container$class_creation_13__bases_orig = tmp_assign_source_126;
}
{
PyObject *tmp_assign_source_127;
PyObject *tmp_direct_call_arg1_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_direct_call_arg1_13 = tmp_class_container$class_creation_13__bases_orig;
Py_INCREF(tmp_direct_call_arg1_13);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_13};
    tmp_assign_source_127 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__bases == NULL);
tmp_class_container$class_creation_13__bases = tmp_assign_source_127;
}
{
PyObject *tmp_assign_source_128;
tmp_assign_source_128 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__class_decl_dict == NULL);
tmp_class_container$class_creation_13__class_decl_dict = tmp_assign_source_128;
}
{
PyObject *tmp_assign_source_129;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_49;
int tmp_truth_name_13;
PyObject *tmp_type_arg_25;
PyObject *tmp_expression_value_116;
PyObject *tmp_subscript_value_56;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_container$class_creation_13__bases);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_13;
} else {
    goto condexpr_false_13;
}
condexpr_true_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_expression_value_116 = tmp_class_container$class_creation_13__bases;
tmp_subscript_value_56 = const_int_0;
tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_116, tmp_subscript_value_56, 0);
if (tmp_type_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
CHECK_OBJECT(tmp_type_arg_25);
Py_DECREF(tmp_type_arg_25);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_13__bases;
tmp_assign_source_129 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_129 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__metaclass == NULL);
tmp_class_container$class_creation_13__metaclass = tmp_assign_source_129;
}
{
bool tmp_condition_result_50;
PyObject *tmp_expression_value_117;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_117 = tmp_class_container$class_creation_13__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_117, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
tmp_condition_result_50 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_50 != false) {
    goto branch_yes_37;
} else {
    goto branch_no_37;
}
}
branch_yes_37:;
{
PyObject *tmp_assign_source_130;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_118;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_58;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_118 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
tmp_tuple_element_58 = mod_consts.const_str_plain_DataSourceResponses;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_58 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_25 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 269;
tmp_assign_source_130 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_130;
}
{
bool tmp_condition_result_51;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_119;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_expression_value_119 = tmp_class_container$class_creation_13__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_119, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
assert(!(tmp_res == -1));
tmp_condition_result_51 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_51 != false) {
    goto branch_yes_38;
} else {
    goto branch_no_38;
}
}
branch_yes_38:;
{
PyObject *tmp_raise_type_13;
PyObject *tmp_make_exception_arg_13;
PyObject *tmp_mod_expr_left_13;
PyObject *tmp_mod_expr_right_13;
PyObject *tmp_tuple_element_59;
PyObject *tmp_expression_value_120;
PyObject *tmp_name_value_24;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_120 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_24 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_59 = BUILTIN_GETATTR(tstate, tmp_expression_value_120, tmp_name_value_24, tmp_default_value_13);
if (tmp_tuple_element_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_121;
PyObject *tmp_type_arg_26;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_type_arg_26 = tmp_class_container$class_creation_13__prepared;
tmp_expression_value_121 = BUILTIN_TYPE1(tmp_type_arg_26);
assert(!(tmp_expression_value_121 == NULL));
tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_121);
Py_DECREF(tmp_expression_value_121);
if (tmp_tuple_element_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_59);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_mod_expr_right_13);
goto try_except_handler_39;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_make_exception_arg_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
CHECK_OBJECT(tmp_mod_expr_right_13);
Py_DECREF(tmp_mod_expr_right_13);
if (tmp_make_exception_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_39;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 269;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 269;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_39;
}
branch_no_38:;
goto branch_end_37;
branch_no_37:;
{
PyObject *tmp_assign_source_131;
tmp_assign_source_131 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_131;
}
branch_end_37:;
{
PyObject *tmp_assign_source_132;
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_13__prepared;
locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_str_plain_DataSourceResponses;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_int_pos_269;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_41;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_41;
}
frame_frame_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_14 = MAKE_CLASS_FRAME(tstate, code_objects_074aa86eb30754a712420e7de2c01d99, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_14);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_14) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_43;
PyObject *tmp_ass_subscribed_43;
PyObject *tmp_ass_subscript_43;
tmp_ass_subvalue_43 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_DataSourceResponsesSource);

if (tmp_ass_subvalue_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_43 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSource(tstate);
if (unlikely(tmp_ass_subvalue_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSourceResponsesSource);
}

if (tmp_ass_subvalue_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_ass_subvalue_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_ass_subscribed_43 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_43);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_14;
}

if (tmp_ass_subscribed_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_43);

exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscript_43 = mod_consts.const_str_plain_source;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
CHECK_OBJECT(tmp_ass_subscribed_43);
Py_DECREF(tmp_ass_subscribed_43);
CHECK_OBJECT(tmp_ass_subvalue_43);
Py_DECREF(tmp_ass_subvalue_43);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
}
{
PyObject *tmp_ass_subvalue_44;
PyObject *tmp_expression_value_122;
PyObject *tmp_subscript_value_57;
PyObject *tmp_ass_subscribed_44;
PyObject *tmp_ass_subscript_44;
tmp_expression_value_122 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_122 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_122 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_122 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_122 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_expression_value_122);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_subscript_value_57 = mod_consts.const_str_plain_responses;
tmp_ass_subvalue_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_122, tmp_subscript_value_57);
CHECK_OBJECT(tmp_expression_value_122);
Py_DECREF(tmp_expression_value_122);
if (tmp_ass_subvalue_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscribed_44 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_44);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 273;
type_description_2 = "o";
    goto frame_exception_exit_14;
}

if (tmp_ass_subscribed_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_44);

exception_lineno = 273;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscript_44 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
CHECK_OBJECT(tmp_ass_subscribed_44);
Py_DECREF(tmp_ass_subscribed_44);
CHECK_OBJECT(tmp_ass_subvalue_44);
Py_DECREF(tmp_ass_subvalue_44);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_input_messages, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
{
PyObject *tmp_ass_subvalue_45;
PyObject *tmp_expression_value_123;
PyObject *tmp_subscript_value_58;
PyObject *tmp_ass_subscribed_45;
PyObject *tmp_ass_subscript_45;
tmp_expression_value_123 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_123 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_123 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_123 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_123 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_expression_value_123);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_subscript_value_58 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_DataSourceResponsesInputMessages);

if (tmp_subscript_value_58 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_58 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesInputMessages(tstate);
if (unlikely(tmp_subscript_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSourceResponsesInputMessages);
}

if (tmp_subscript_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_123);

exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_subscript_value_58);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_ass_subvalue_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_123, tmp_subscript_value_58);
CHECK_OBJECT(tmp_expression_value_123);
Py_DECREF(tmp_expression_value_123);
CHECK_OBJECT(tmp_subscript_value_58);
Py_DECREF(tmp_subscript_value_58);
if (tmp_ass_subvalue_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscribed_45 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_45);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_14;
}

if (tmp_ass_subscribed_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_45);

exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscript_45 = mod_consts.const_str_plain_input_messages;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
CHECK_OBJECT(tmp_ass_subscribed_45);
Py_DECREF(tmp_ass_subscribed_45);
CHECK_OBJECT(tmp_ass_subvalue_45);
Py_DECREF(tmp_ass_subvalue_45);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_model, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
{
PyObject *tmp_ass_subvalue_46;
PyObject *tmp_expression_value_124;
PyObject *tmp_subscript_value_59;
PyObject *tmp_ass_subscribed_46;
PyObject *tmp_ass_subscript_46;
tmp_expression_value_124 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_124 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_124 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_124 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_124 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_expression_value_124);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_subscript_value_59 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_str);

if (tmp_subscript_value_59 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_59 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_subscript_value_59);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_ass_subvalue_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_124, tmp_subscript_value_59);
CHECK_OBJECT(tmp_expression_value_124);
Py_DECREF(tmp_expression_value_124);
CHECK_OBJECT(tmp_subscript_value_59);
Py_DECREF(tmp_subscript_value_59);
if (tmp_ass_subvalue_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscribed_46 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_46);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_14;
}

if (tmp_ass_subscribed_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_46);

exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscript_46 = mod_consts.const_str_plain_model;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
CHECK_OBJECT(tmp_ass_subscribed_46);
Py_DECREF(tmp_ass_subscribed_46);
CHECK_OBJECT(tmp_ass_subvalue_46);
Py_DECREF(tmp_ass_subvalue_46);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_sampling_params, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
{
PyObject *tmp_ass_subvalue_47;
PyObject *tmp_expression_value_125;
PyObject *tmp_subscript_value_60;
PyObject *tmp_ass_subscribed_47;
PyObject *tmp_ass_subscript_47;
tmp_expression_value_125 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_125 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_125 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_125 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_125 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_expression_value_125);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_subscript_value_60 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain_DataSourceResponsesSamplingParams);

if (tmp_subscript_value_60 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_60 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponsesSamplingParams(tstate);
if (unlikely(tmp_subscript_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSourceResponsesSamplingParams);
}

if (tmp_subscript_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_125);

exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_subscript_value_60);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_ass_subvalue_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_125, tmp_subscript_value_60);
CHECK_OBJECT(tmp_expression_value_125);
Py_DECREF(tmp_expression_value_125);
CHECK_OBJECT(tmp_subscript_value_60);
Py_DECREF(tmp_subscript_value_60);
if (tmp_ass_subvalue_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscribed_47 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_47);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_14;
}

if (tmp_ass_subscribed_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_47);

exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscript_47 = mod_consts.const_str_plain_sampling_params;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
CHECK_OBJECT(tmp_ass_subscribed_47);
Py_DECREF(tmp_ass_subscribed_47);
CHECK_OBJECT(tmp_ass_subvalue_47);
Py_DECREF(tmp_ass_subvalue_47);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_13;
frame_exception_exit_14:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_14,
    type_description_2,
    outline_12_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_14);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_13;
frame_no_exception_13:;
goto skip_nested_handling_13;
nested_frame_exit_13:;

goto try_except_handler_41;
skip_nested_handling_13:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_41;
}
{
nuitka_bool tmp_condition_result_52;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_cmp_expr_left_13 = tmp_class_container$class_creation_13__bases;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_cmp_expr_right_13 = tmp_class_container$class_creation_13__bases_orig;
tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_41;
}
if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
    goto branch_yes_39;
} else {
    goto branch_no_39;
}
}
branch_yes_39:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_13__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_41;
}
branch_no_39:;
{
PyObject *tmp_assign_source_133;
PyObject *tmp_called_value_28;
PyObject *tmp_args_value_26;
PyObject *tmp_tuple_element_60;
PyObject *tmp_kwargs_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_called_value_28 = tmp_class_container$class_creation_13__metaclass;
tmp_tuple_element_60 = mod_consts.const_str_plain_DataSourceResponses;
tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_60 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_60);
tmp_tuple_element_60 = locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269;
PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_26 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 269;
tmp_assign_source_133 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_26, tmp_kwargs_value_26);
CHECK_OBJECT(tmp_args_value_26);
Py_DECREF(tmp_args_value_26);
if (tmp_assign_source_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_41;
}
assert(outline_12_var___class__ == NULL);
outline_12_var___class__ = tmp_assign_source_133;
}
CHECK_OBJECT(outline_12_var___class__);
tmp_assign_source_132 = outline_12_var___class__;
Py_INCREF(tmp_assign_source_132);
goto try_return_handler_41;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_41:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269);
locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269 = NULL;
goto try_return_handler_40;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269);
locals_openai$types$evals$run_create_response$$$class__13_DataSourceResponses_269 = NULL;
// Re-raise.
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto try_except_handler_40;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_40:;
CHECK_OBJECT(outline_12_var___class__);
CHECK_OBJECT(outline_12_var___class__);
Py_DECREF(outline_12_var___class__);
outline_12_var___class__ = NULL;
goto outline_result_26;
// Exception handler code:
try_except_handler_40:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_40;
exception_lineno = exception_keeper_lineno_40;

goto outline_exception_13;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_13:;
exception_lineno = 269;
goto try_except_handler_39;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSourceResponses, tmp_assign_source_132);
}
goto try_end_15;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_41 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_41 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_13__bases_orig);
tmp_class_container$class_creation_13__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__bases);
tmp_class_container$class_creation_13__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_container$class_creation_13__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__metaclass);
tmp_class_container$class_creation_13__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__prepared);
tmp_class_container$class_creation_13__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_41;
exception_lineno = exception_keeper_lineno_41;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
Py_DECREF(tmp_class_container$class_creation_13__bases_orig);
tmp_class_container$class_creation_13__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
Py_DECREF(tmp_class_container$class_creation_13__bases);
tmp_class_container$class_creation_13__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_container$class_creation_13__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
Py_DECREF(tmp_class_container$class_creation_13__metaclass);
tmp_class_container$class_creation_13__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
Py_DECREF(tmp_class_container$class_creation_13__prepared);
tmp_class_container$class_creation_13__prepared = NULL;
tmp_outline_return_value_13 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_13);
goto outline_result_25;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_25:;
CHECK_OBJECT(tmp_outline_return_value_13);
Py_DECREF(tmp_outline_return_value_13);
}
{
PyObject *tmp_assign_source_134;
PyObject *tmp_expression_value_126;
PyObject *tmp_subscript_value_61;
PyObject *tmp_tuple_element_61;
PyObject *tmp_expression_value_127;
PyObject *tmp_subscript_value_62;
PyObject *tmp_tuple_element_62;
tmp_expression_value_126 = module_var_accessor_openai$types$evals$run_create_response$Annotated(tstate);
if (unlikely(tmp_expression_value_126 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_126 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;

    goto frame_exception_exit_1;
}
tmp_expression_value_127 = module_var_accessor_openai$types$evals$run_create_response$Union(tstate);
if (unlikely(tmp_expression_value_127 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_127 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

    goto frame_exception_exit_1;
}
tmp_tuple_element_62 = module_var_accessor_openai$types$evals$run_create_response$CreateEvalJSONLRunDataSource(tstate);
if (unlikely(tmp_tuple_element_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CreateEvalJSONLRunDataSource);
}

if (tmp_tuple_element_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

    goto frame_exception_exit_1;
}
tmp_subscript_value_62 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_62, 0, tmp_tuple_element_62);
tmp_tuple_element_62 = module_var_accessor_openai$types$evals$run_create_response$CreateEvalCompletionsRunDataSource(tstate);
if (unlikely(tmp_tuple_element_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CreateEvalCompletionsRunDataSource);
}

if (tmp_tuple_element_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM0(tmp_subscript_value_62, 1, tmp_tuple_element_62);
tmp_tuple_element_62 = module_var_accessor_openai$types$evals$run_create_response$DataSourceResponses(tstate);
if (unlikely(tmp_tuple_element_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSourceResponses);
}

if (tmp_tuple_element_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM0(tmp_subscript_value_62, 2, tmp_tuple_element_62);
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_subscript_value_62);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_tuple_element_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_127, tmp_subscript_value_62);
CHECK_OBJECT(tmp_subscript_value_62);
Py_DECREF(tmp_subscript_value_62);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto frame_exception_exit_1;
}
tmp_subscript_value_61 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_29;
PyTuple_SET_ITEM(tmp_subscript_value_61, 0, tmp_tuple_element_61);
tmp_called_value_29 = module_var_accessor_openai$types$evals$run_create_response$PropertyInfo(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PropertyInfo);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;

    goto tuple_build_exception_21;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 292;
tmp_tuple_element_61 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_type_tuple, 0), mod_consts.const_tuple_str_plain_discriminator_tuple);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM(tmp_subscript_value_61, 1, tmp_tuple_element_61);
}
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_subscript_value_61);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_assign_source_134 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_126, tmp_subscript_value_61);
CHECK_OBJECT(tmp_subscript_value_61);
Py_DECREF(tmp_subscript_value_61);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSource, tmp_assign_source_134);
}
{
PyObject *tmp_ass_subvalue_48;
PyObject *tmp_ass_subscribed_48;
PyObject *tmp_ass_subscript_48;
tmp_ass_subvalue_48 = module_var_accessor_openai$types$evals$run_create_response$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_48 = module_var_accessor_openai$types$evals$run_create_response$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_48 = mod_consts.const_str_plain_DataSource;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_14;
// Tried code:
{
PyObject *tmp_assign_source_135;
PyObject *tmp_tuple_element_63;
tmp_tuple_element_63 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;

    goto try_except_handler_42;
}
tmp_assign_source_135 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_135, 0, tmp_tuple_element_63);
assert(tmp_class_container$class_creation_14__bases_orig == NULL);
tmp_class_container$class_creation_14__bases_orig = tmp_assign_source_135;
}
{
PyObject *tmp_assign_source_136;
PyObject *tmp_direct_call_arg1_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_direct_call_arg1_14 = tmp_class_container$class_creation_14__bases_orig;
Py_INCREF(tmp_direct_call_arg1_14);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_14};
    tmp_assign_source_136 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__bases == NULL);
tmp_class_container$class_creation_14__bases = tmp_assign_source_136;
}
{
PyObject *tmp_assign_source_137;
tmp_assign_source_137 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__class_decl_dict == NULL);
tmp_class_container$class_creation_14__class_decl_dict = tmp_assign_source_137;
}
{
PyObject *tmp_assign_source_138;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_53;
int tmp_truth_name_14;
PyObject *tmp_type_arg_27;
PyObject *tmp_expression_value_128;
PyObject *tmp_subscript_value_63;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_container$class_creation_14__bases);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_14;
} else {
    goto condexpr_false_14;
}
condexpr_true_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_expression_value_128 = tmp_class_container$class_creation_14__bases;
tmp_subscript_value_63 = const_int_0;
tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_128, tmp_subscript_value_63, 0);
if (tmp_type_arg_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
CHECK_OBJECT(tmp_type_arg_27);
Py_DECREF(tmp_type_arg_27);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_14 = tmp_class_container$class_creation_14__bases;
tmp_assign_source_138 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__metaclass == NULL);
tmp_class_container$class_creation_14__metaclass = tmp_assign_source_138;
}
{
bool tmp_condition_result_54;
PyObject *tmp_expression_value_129;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_129 = tmp_class_container$class_creation_14__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_129, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
tmp_condition_result_54 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_54 != false) {
    goto branch_yes_40;
} else {
    goto branch_no_40;
}
}
branch_yes_40:;
{
PyObject *tmp_assign_source_139;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_130;
PyObject *tmp_args_value_27;
PyObject *tmp_tuple_element_64;
PyObject *tmp_kwargs_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_130 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
tmp_tuple_element_64 = mod_consts.const_str_plain_PerModelUsage;
tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_64 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_27 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 296;
tmp_assign_source_139 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_27, tmp_kwargs_value_27);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_value_27);
Py_DECREF(tmp_args_value_27);
if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_139;
}
{
bool tmp_condition_result_55;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_131;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_expression_value_131 = tmp_class_container$class_creation_14__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_131, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
assert(!(tmp_res == -1));
tmp_condition_result_55 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_55 != false) {
    goto branch_yes_41;
} else {
    goto branch_no_41;
}
}
branch_yes_41:;
{
PyObject *tmp_raise_type_14;
PyObject *tmp_make_exception_arg_14;
PyObject *tmp_mod_expr_left_14;
PyObject *tmp_mod_expr_right_14;
PyObject *tmp_tuple_element_65;
PyObject *tmp_expression_value_132;
PyObject *tmp_name_value_25;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_132 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_25 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_65 = BUILTIN_GETATTR(tstate, tmp_expression_value_132, tmp_name_value_25, tmp_default_value_14);
if (tmp_tuple_element_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_133;
PyObject *tmp_type_arg_28;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_type_arg_28 = tmp_class_container$class_creation_14__prepared;
tmp_expression_value_133 = BUILTIN_TYPE1(tmp_type_arg_28);
assert(!(tmp_expression_value_133 == NULL));
tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_133);
Py_DECREF(tmp_expression_value_133);
if (tmp_tuple_element_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_65);
}
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_mod_expr_right_14);
goto try_except_handler_42;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_make_exception_arg_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
CHECK_OBJECT(tmp_mod_expr_right_14);
Py_DECREF(tmp_mod_expr_right_14);
if (tmp_make_exception_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_42;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 296;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 296;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_42;
}
branch_no_41:;
goto branch_end_40;
branch_no_40:;
{
PyObject *tmp_assign_source_140;
tmp_assign_source_140 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_140;
}
branch_end_40:;
{
PyObject *tmp_assign_source_141;
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_set_locals_14 = tmp_class_container$class_creation_14__prepared;
locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_str_plain_PerModelUsage;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_int_pos_296;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_44;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_44;
}
frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15 = MAKE_CLASS_FRAME(tstate, code_objects_cb608a85ed473fa95e5a2592b19e275e, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_49;
PyObject *tmp_ass_subscribed_49;
PyObject *tmp_ass_subscript_49;
tmp_ass_subvalue_49 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain_int);

if (tmp_ass_subvalue_49 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_49 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_49);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_ass_subscribed_49 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_49);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_15;
}

if (tmp_ass_subscribed_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_49);

exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscript_49 = mod_consts.const_str_plain_cached_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
CHECK_OBJECT(tmp_ass_subscribed_49);
Py_DECREF(tmp_ass_subscribed_49);
CHECK_OBJECT(tmp_ass_subvalue_49);
Py_DECREF(tmp_ass_subvalue_49);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}
{
PyObject *tmp_ass_subvalue_50;
PyObject *tmp_ass_subscribed_50;
PyObject *tmp_ass_subscript_50;
tmp_ass_subvalue_50 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain_int);

if (tmp_ass_subvalue_50 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_50 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_50);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_ass_subscribed_50 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_50);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 300;
type_description_2 = "o";
    goto frame_exception_exit_15;
}

if (tmp_ass_subscribed_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_50);

exception_lineno = 300;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscript_50 = mod_consts.const_str_plain_completion_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
CHECK_OBJECT(tmp_ass_subscribed_50);
Py_DECREF(tmp_ass_subscribed_50);
CHECK_OBJECT(tmp_ass_subvalue_50);
Py_DECREF(tmp_ass_subvalue_50);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}
{
PyObject *tmp_ass_subvalue_51;
PyObject *tmp_ass_subscribed_51;
PyObject *tmp_ass_subscript_51;
tmp_ass_subvalue_51 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain_int);

if (tmp_ass_subvalue_51 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_51 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_51);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_ass_subscribed_51 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_51 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_51);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_15;
}

if (tmp_ass_subscribed_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_51);

exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscript_51 = mod_consts.const_str_plain_invocation_count;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
CHECK_OBJECT(tmp_ass_subscribed_51);
Py_DECREF(tmp_ass_subscribed_51);
CHECK_OBJECT(tmp_ass_subvalue_51);
Py_DECREF(tmp_ass_subvalue_51);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}
{
PyObject *tmp_called_value_31;
frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15->m_frame.f_lineno = 6;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb, mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb);
    if (likely(hard_module != NULL)) {
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_Field);

        Py_DECREF(hard_module);

    } else {
        tmp_called_value_31 = NULL;
    }
}
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15->m_frame.f_lineno = 306;
tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_model_name_tuple, 0), mod_consts.const_tuple_str_plain_alias_tuple);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, mod_consts.const_str_plain_run_model_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}
{
PyObject *tmp_ass_subvalue_52;
PyObject *tmp_ass_subscribed_52;
PyObject *tmp_ass_subscript_52;
tmp_ass_subvalue_52 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_52 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_ass_subscribed_52 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_52);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_15;
}

if (tmp_ass_subscribed_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_52);

exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscript_52 = mod_consts.const_str_plain_run_model_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
CHECK_OBJECT(tmp_ass_subscribed_52);
Py_DECREF(tmp_ass_subscribed_52);
CHECK_OBJECT(tmp_ass_subvalue_52);
Py_DECREF(tmp_ass_subvalue_52);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}
{
PyObject *tmp_ass_subvalue_53;
PyObject *tmp_ass_subscribed_53;
PyObject *tmp_ass_subscript_53;
tmp_ass_subvalue_53 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain_int);

if (tmp_ass_subvalue_53 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_53 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_53);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_ass_subscribed_53 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_53 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_53);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_15;
}

if (tmp_ass_subscribed_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_53);

exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscript_53 = mod_consts.const_str_plain_prompt_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
CHECK_OBJECT(tmp_ass_subscribed_53);
Py_DECREF(tmp_ass_subscribed_53);
CHECK_OBJECT(tmp_ass_subvalue_53);
Py_DECREF(tmp_ass_subvalue_53);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}
{
PyObject *tmp_ass_subvalue_54;
PyObject *tmp_ass_subscribed_54;
PyObject *tmp_ass_subscript_54;
tmp_ass_subvalue_54 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain_int);

if (tmp_ass_subvalue_54 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_54 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_54);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_ass_subscribed_54 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_54 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_54);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 312;
type_description_2 = "o";
    goto frame_exception_exit_15;
}

if (tmp_ass_subscribed_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_54);

exception_lineno = 312;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscript_54 = mod_consts.const_str_plain_total_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
CHECK_OBJECT(tmp_ass_subscribed_54);
Py_DECREF(tmp_ass_subscribed_54);
CHECK_OBJECT(tmp_ass_subvalue_54);
Py_DECREF(tmp_ass_subvalue_54);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_14;
frame_exception_exit_15:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15,
    type_description_2,
    outline_13_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__14_PerModelUsage_15);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_14;
frame_no_exception_14:;
goto skip_nested_handling_14;
nested_frame_exit_14:;

goto try_except_handler_44;
skip_nested_handling_14:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_44;
}
{
nuitka_bool tmp_condition_result_56;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_cmp_expr_left_14 = tmp_class_container$class_creation_14__bases;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_cmp_expr_right_14 = tmp_class_container$class_creation_14__bases_orig;
tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_44;
}
if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
    goto branch_yes_42;
} else {
    goto branch_no_42;
}
}
branch_yes_42:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_14__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_44;
}
branch_no_42:;
{
PyObject *tmp_assign_source_142;
PyObject *tmp_called_value_32;
PyObject *tmp_args_value_28;
PyObject *tmp_tuple_element_66;
PyObject *tmp_kwargs_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_called_value_32 = tmp_class_container$class_creation_14__metaclass;
tmp_tuple_element_66 = mod_consts.const_str_plain_PerModelUsage;
tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_66 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_66);
tmp_tuple_element_66 = locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296;
PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_28 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 296;
tmp_assign_source_142 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_28, tmp_kwargs_value_28);
CHECK_OBJECT(tmp_args_value_28);
Py_DECREF(tmp_args_value_28);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto try_except_handler_44;
}
assert(outline_13_var___class__ == NULL);
outline_13_var___class__ = tmp_assign_source_142;
}
CHECK_OBJECT(outline_13_var___class__);
tmp_assign_source_141 = outline_13_var___class__;
Py_INCREF(tmp_assign_source_141);
goto try_return_handler_44;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_44:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296);
locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296 = NULL;
goto try_return_handler_43;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296);
locals_openai$types$evals$run_create_response$$$class__14_PerModelUsage_296 = NULL;
// Re-raise.
exception_state = exception_keeper_name_42;
exception_lineno = exception_keeper_lineno_42;

goto try_except_handler_43;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_43:;
CHECK_OBJECT(outline_13_var___class__);
CHECK_OBJECT(outline_13_var___class__);
Py_DECREF(outline_13_var___class__);
outline_13_var___class__ = NULL;
goto outline_result_28;
// Exception handler code:
try_except_handler_43:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_43;
exception_lineno = exception_keeper_lineno_43;

goto outline_exception_14;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_14:;
exception_lineno = 296;
goto try_except_handler_42;
outline_result_28:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PerModelUsage, tmp_assign_source_141);
}
goto try_end_16;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_44 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_44 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_14__bases_orig);
tmp_class_container$class_creation_14__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__bases);
tmp_class_container$class_creation_14__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_container$class_creation_14__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__metaclass);
tmp_class_container$class_creation_14__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__prepared);
tmp_class_container$class_creation_14__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_44;
exception_lineno = exception_keeper_lineno_44;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
Py_DECREF(tmp_class_container$class_creation_14__bases_orig);
tmp_class_container$class_creation_14__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
Py_DECREF(tmp_class_container$class_creation_14__bases);
tmp_class_container$class_creation_14__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_container$class_creation_14__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
Py_DECREF(tmp_class_container$class_creation_14__metaclass);
tmp_class_container$class_creation_14__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
Py_DECREF(tmp_class_container$class_creation_14__prepared);
tmp_class_container$class_creation_14__prepared = NULL;
tmp_outline_return_value_14 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_14);
goto outline_result_27;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_27:;
CHECK_OBJECT(tmp_outline_return_value_14);
Py_DECREF(tmp_outline_return_value_14);
}
{
PyObject *tmp_outline_return_value_15;
// Tried code:
{
PyObject *tmp_assign_source_143;
PyObject *tmp_tuple_element_67;
tmp_tuple_element_67 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;

    goto try_except_handler_45;
}
tmp_assign_source_143 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_143, 0, tmp_tuple_element_67);
assert(tmp_class_container$class_creation_15__bases_orig == NULL);
tmp_class_container$class_creation_15__bases_orig = tmp_assign_source_143;
}
{
PyObject *tmp_assign_source_144;
PyObject *tmp_direct_call_arg1_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_direct_call_arg1_15 = tmp_class_container$class_creation_15__bases_orig;
Py_INCREF(tmp_direct_call_arg1_15);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_15};
    tmp_assign_source_144 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_144 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__bases == NULL);
tmp_class_container$class_creation_15__bases = tmp_assign_source_144;
}
{
PyObject *tmp_assign_source_145;
tmp_assign_source_145 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__class_decl_dict == NULL);
tmp_class_container$class_creation_15__class_decl_dict = tmp_assign_source_145;
}
{
PyObject *tmp_assign_source_146;
PyObject *tmp_metaclass_value_15;
nuitka_bool tmp_condition_result_57;
int tmp_truth_name_15;
PyObject *tmp_type_arg_29;
PyObject *tmp_expression_value_134;
PyObject *tmp_subscript_value_64;
PyObject *tmp_bases_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_container$class_creation_15__bases);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
tmp_condition_result_57 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_15;
} else {
    goto condexpr_false_15;
}
condexpr_true_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_expression_value_134 = tmp_class_container$class_creation_15__bases;
tmp_subscript_value_64 = const_int_0;
tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_134, tmp_subscript_value_64, 0);
if (tmp_type_arg_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
CHECK_OBJECT(tmp_type_arg_29);
Py_DECREF(tmp_type_arg_29);
if (tmp_metaclass_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
goto condexpr_end_15;
condexpr_false_15:;
tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_15);
condexpr_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_15 = tmp_class_container$class_creation_15__bases;
tmp_assign_source_146 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
CHECK_OBJECT(tmp_metaclass_value_15);
Py_DECREF(tmp_metaclass_value_15);
if (tmp_assign_source_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__metaclass == NULL);
tmp_class_container$class_creation_15__metaclass = tmp_assign_source_146;
}
{
bool tmp_condition_result_58;
PyObject *tmp_expression_value_135;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_135 = tmp_class_container$class_creation_15__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_135, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
tmp_condition_result_58 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_58 != false) {
    goto branch_yes_43;
} else {
    goto branch_no_43;
}
}
branch_yes_43:;
{
PyObject *tmp_assign_source_147;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_136;
PyObject *tmp_args_value_29;
PyObject *tmp_tuple_element_68;
PyObject *tmp_kwargs_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_136 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
tmp_tuple_element_68 = mod_consts.const_str_plain_PerTestingCriteriaResult;
tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_68);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_68 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_68);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_29 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 316;
tmp_assign_source_147 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_29, tmp_kwargs_value_29);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_value_29);
Py_DECREF(tmp_args_value_29);
if (tmp_assign_source_147 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_147;
}
{
bool tmp_condition_result_59;
PyObject *tmp_operand_value_15;
PyObject *tmp_expression_value_137;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_expression_value_137 = tmp_class_container$class_creation_15__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_137, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
assert(!(tmp_res == -1));
tmp_condition_result_59 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_59 != false) {
    goto branch_yes_44;
} else {
    goto branch_no_44;
}
}
branch_yes_44:;
{
PyObject *tmp_raise_type_15;
PyObject *tmp_make_exception_arg_15;
PyObject *tmp_mod_expr_left_15;
PyObject *tmp_mod_expr_right_15;
PyObject *tmp_tuple_element_69;
PyObject *tmp_expression_value_138;
PyObject *tmp_name_value_26;
PyObject *tmp_default_value_15;
tmp_mod_expr_left_15 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_138 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_26 = const_str_plain___name__;
tmp_default_value_15 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_69 = BUILTIN_GETATTR(tstate, tmp_expression_value_138, tmp_name_value_26, tmp_default_value_15);
if (tmp_tuple_element_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_139;
PyObject *tmp_type_arg_30;
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_type_arg_30 = tmp_class_container$class_creation_15__prepared;
tmp_expression_value_139 = BUILTIN_TYPE1(tmp_type_arg_30);
assert(!(tmp_expression_value_139 == NULL));
tmp_tuple_element_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_139);
Py_DECREF(tmp_expression_value_139);
if (tmp_tuple_element_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_69);
}
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_mod_expr_right_15);
goto try_except_handler_45;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_make_exception_arg_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
CHECK_OBJECT(tmp_mod_expr_right_15);
Py_DECREF(tmp_mod_expr_right_15);
if (tmp_make_exception_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_45;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 316;
tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_15);
CHECK_OBJECT(tmp_make_exception_arg_15);
Py_DECREF(tmp_make_exception_arg_15);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 316;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_45;
}
branch_no_44:;
goto branch_end_43;
branch_no_43:;
{
PyObject *tmp_assign_source_148;
tmp_assign_source_148 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_148;
}
branch_end_43:;
{
PyObject *tmp_assign_source_149;
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_str_plain_PerTestingCriteriaResult;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_int_pos_316;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_47;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_47;
}
frame_frame_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_16 = MAKE_CLASS_FRAME(tstate, code_objects_6037a0878a85ea6524b18c4274d7b9d3, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_16);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_16) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_55;
PyObject *tmp_ass_subscribed_55;
PyObject *tmp_ass_subscript_55;
tmp_ass_subvalue_55 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, const_str_plain_int);

if (tmp_ass_subvalue_55 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_55 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_55);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_16;
    }
}

tmp_ass_subscribed_55 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_55 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_55);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_16;
}

if (tmp_ass_subscribed_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_55);

exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_ass_subscript_55 = mod_consts.const_str_plain_failed;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
CHECK_OBJECT(tmp_ass_subscribed_55);
Py_DECREF(tmp_ass_subscribed_55);
CHECK_OBJECT(tmp_ass_subvalue_55);
Py_DECREF(tmp_ass_subvalue_55);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}
{
PyObject *tmp_ass_subvalue_56;
PyObject *tmp_ass_subscribed_56;
PyObject *tmp_ass_subscript_56;
tmp_ass_subvalue_56 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, const_str_plain_int);

if (tmp_ass_subvalue_56 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_56 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_56);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_16;
    }
}

tmp_ass_subscribed_56 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_56);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 320;
type_description_2 = "o";
    goto frame_exception_exit_16;
}

if (tmp_ass_subscribed_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_56);

exception_lineno = 320;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_ass_subscript_56 = mod_consts.const_str_plain_passed;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
CHECK_OBJECT(tmp_ass_subscribed_56);
Py_DECREF(tmp_ass_subscribed_56);
CHECK_OBJECT(tmp_ass_subvalue_56);
Py_DECREF(tmp_ass_subvalue_56);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}
{
PyObject *tmp_ass_subvalue_57;
PyObject *tmp_ass_subscribed_57;
PyObject *tmp_ass_subscript_57;
tmp_ass_subvalue_57 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_57 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_57 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_57);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_16;
    }
}

tmp_ass_subscribed_57 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_57 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_57);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 323;
type_description_2 = "o";
    goto frame_exception_exit_16;
}

if (tmp_ass_subscribed_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_57);

exception_lineno = 323;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_ass_subscript_57 = mod_consts.const_str_plain_testing_criteria;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
CHECK_OBJECT(tmp_ass_subscribed_57);
Py_DECREF(tmp_ass_subscribed_57);
CHECK_OBJECT(tmp_ass_subvalue_57);
Py_DECREF(tmp_ass_subvalue_57);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_15;
frame_exception_exit_16:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_16,
    type_description_2,
    outline_14_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_16);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_15;
frame_no_exception_15:;
goto skip_nested_handling_15;
nested_frame_exit_15:;

goto try_except_handler_47;
skip_nested_handling_15:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_47;
}
{
nuitka_bool tmp_condition_result_60;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_cmp_expr_left_15 = tmp_class_container$class_creation_15__bases;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_cmp_expr_right_15 = tmp_class_container$class_creation_15__bases_orig;
tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_47;
}
if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
    goto branch_yes_45;
} else {
    goto branch_no_45;
}
}
branch_yes_45:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_15__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_47;
}
branch_no_45:;
{
PyObject *tmp_assign_source_150;
PyObject *tmp_called_value_34;
PyObject *tmp_args_value_30;
PyObject *tmp_tuple_element_70;
PyObject *tmp_kwargs_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_called_value_34 = tmp_class_container$class_creation_15__metaclass;
tmp_tuple_element_70 = mod_consts.const_str_plain_PerTestingCriteriaResult;
tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_70 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_70);
tmp_tuple_element_70 = locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316;
PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_30 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 316;
tmp_assign_source_150 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_30, tmp_kwargs_value_30);
CHECK_OBJECT(tmp_args_value_30);
Py_DECREF(tmp_args_value_30);
if (tmp_assign_source_150 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto try_except_handler_47;
}
assert(outline_14_var___class__ == NULL);
outline_14_var___class__ = tmp_assign_source_150;
}
CHECK_OBJECT(outline_14_var___class__);
tmp_assign_source_149 = outline_14_var___class__;
Py_INCREF(tmp_assign_source_149);
goto try_return_handler_47;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_47:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316);
locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316 = NULL;
goto try_return_handler_46;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316);
locals_openai$types$evals$run_create_response$$$class__15_PerTestingCriteriaResult_316 = NULL;
// Re-raise.
exception_state = exception_keeper_name_45;
exception_lineno = exception_keeper_lineno_45;

goto try_except_handler_46;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_46:;
CHECK_OBJECT(outline_14_var___class__);
CHECK_OBJECT(outline_14_var___class__);
Py_DECREF(outline_14_var___class__);
outline_14_var___class__ = NULL;
goto outline_result_30;
// Exception handler code:
try_except_handler_46:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_46;
exception_lineno = exception_keeper_lineno_46;

goto outline_exception_15;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_15:;
exception_lineno = 316;
goto try_except_handler_45;
outline_result_30:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_PerTestingCriteriaResult, tmp_assign_source_149);
}
goto try_end_17;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_47 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_47 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_15__bases_orig);
tmp_class_container$class_creation_15__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__bases);
tmp_class_container$class_creation_15__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_container$class_creation_15__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__metaclass);
tmp_class_container$class_creation_15__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__prepared);
tmp_class_container$class_creation_15__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_47;
exception_lineno = exception_keeper_lineno_47;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
Py_DECREF(tmp_class_container$class_creation_15__bases_orig);
tmp_class_container$class_creation_15__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
Py_DECREF(tmp_class_container$class_creation_15__bases);
tmp_class_container$class_creation_15__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_container$class_creation_15__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
Py_DECREF(tmp_class_container$class_creation_15__metaclass);
tmp_class_container$class_creation_15__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
Py_DECREF(tmp_class_container$class_creation_15__prepared);
tmp_class_container$class_creation_15__prepared = NULL;
tmp_outline_return_value_15 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_15);
goto outline_result_29;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_29:;
CHECK_OBJECT(tmp_outline_return_value_15);
Py_DECREF(tmp_outline_return_value_15);
}
{
PyObject *tmp_outline_return_value_16;
// Tried code:
{
PyObject *tmp_assign_source_151;
PyObject *tmp_tuple_element_71;
tmp_tuple_element_71 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;

    goto try_except_handler_48;
}
tmp_assign_source_151 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_151, 0, tmp_tuple_element_71);
assert(tmp_class_container$class_creation_16__bases_orig == NULL);
tmp_class_container$class_creation_16__bases_orig = tmp_assign_source_151;
}
{
PyObject *tmp_assign_source_152;
PyObject *tmp_direct_call_arg1_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_direct_call_arg1_16 = tmp_class_container$class_creation_16__bases_orig;
Py_INCREF(tmp_direct_call_arg1_16);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_16};
    tmp_assign_source_152 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_152 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__bases == NULL);
tmp_class_container$class_creation_16__bases = tmp_assign_source_152;
}
{
PyObject *tmp_assign_source_153;
tmp_assign_source_153 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__class_decl_dict == NULL);
tmp_class_container$class_creation_16__class_decl_dict = tmp_assign_source_153;
}
{
PyObject *tmp_assign_source_154;
PyObject *tmp_metaclass_value_16;
nuitka_bool tmp_condition_result_61;
int tmp_truth_name_16;
PyObject *tmp_type_arg_31;
PyObject *tmp_expression_value_140;
PyObject *tmp_subscript_value_65;
PyObject *tmp_bases_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_container$class_creation_16__bases);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
tmp_condition_result_61 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_16;
} else {
    goto condexpr_false_16;
}
condexpr_true_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_expression_value_140 = tmp_class_container$class_creation_16__bases;
tmp_subscript_value_65 = const_int_0;
tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_140, tmp_subscript_value_65, 0);
if (tmp_type_arg_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
CHECK_OBJECT(tmp_type_arg_31);
Py_DECREF(tmp_type_arg_31);
if (tmp_metaclass_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
goto condexpr_end_16;
condexpr_false_16:;
tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_16);
condexpr_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_16__bases;
tmp_assign_source_154 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
CHECK_OBJECT(tmp_metaclass_value_16);
Py_DECREF(tmp_metaclass_value_16);
if (tmp_assign_source_154 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__metaclass == NULL);
tmp_class_container$class_creation_16__metaclass = tmp_assign_source_154;
}
{
bool tmp_condition_result_62;
PyObject *tmp_expression_value_141;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_141 = tmp_class_container$class_creation_16__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_141, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
tmp_condition_result_62 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_62 != false) {
    goto branch_yes_46;
} else {
    goto branch_no_46;
}
}
branch_yes_46:;
{
PyObject *tmp_assign_source_155;
PyObject *tmp_called_value_35;
PyObject *tmp_expression_value_142;
PyObject *tmp_args_value_31;
PyObject *tmp_tuple_element_72;
PyObject *tmp_kwargs_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_142 = tmp_class_container$class_creation_16__metaclass;
tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
tmp_tuple_element_72 = mod_consts.const_str_plain_ResultCounts;
tmp_args_value_31 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_72);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_72 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_72);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_31 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 327;
tmp_assign_source_155 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_31, tmp_kwargs_value_31);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_value_31);
Py_DECREF(tmp_args_value_31);
if (tmp_assign_source_155 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_155;
}
{
bool tmp_condition_result_63;
PyObject *tmp_operand_value_16;
PyObject *tmp_expression_value_143;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_expression_value_143 = tmp_class_container$class_creation_16__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_143, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
assert(!(tmp_res == -1));
tmp_condition_result_63 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_63 != false) {
    goto branch_yes_47;
} else {
    goto branch_no_47;
}
}
branch_yes_47:;
{
PyObject *tmp_raise_type_16;
PyObject *tmp_make_exception_arg_16;
PyObject *tmp_mod_expr_left_16;
PyObject *tmp_mod_expr_right_16;
PyObject *tmp_tuple_element_73;
PyObject *tmp_expression_value_144;
PyObject *tmp_name_value_27;
PyObject *tmp_default_value_16;
tmp_mod_expr_left_16 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_144 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_27 = const_str_plain___name__;
tmp_default_value_16 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_73 = BUILTIN_GETATTR(tstate, tmp_expression_value_144, tmp_name_value_27, tmp_default_value_16);
if (tmp_tuple_element_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_145;
PyObject *tmp_type_arg_32;
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_type_arg_32 = tmp_class_container$class_creation_16__prepared;
tmp_expression_value_145 = BUILTIN_TYPE1(tmp_type_arg_32);
assert(!(tmp_expression_value_145 == NULL));
tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_145);
Py_DECREF(tmp_expression_value_145);
if (tmp_tuple_element_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto tuple_build_exception_24;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_73);
}
goto tuple_build_no_exception_24;
// Exception handling pass through code for tuple_build:
tuple_build_exception_24:;
Py_DECREF(tmp_mod_expr_right_16);
goto try_except_handler_48;
// Finished with no exception for tuple_build:
tuple_build_no_exception_24:;
tmp_make_exception_arg_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
CHECK_OBJECT(tmp_mod_expr_right_16);
Py_DECREF(tmp_mod_expr_right_16);
if (tmp_make_exception_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_48;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 327;
tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_16);
CHECK_OBJECT(tmp_make_exception_arg_16);
Py_DECREF(tmp_make_exception_arg_16);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 327;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_48;
}
branch_no_47:;
goto branch_end_46;
branch_no_46:;
{
PyObject *tmp_assign_source_156;
tmp_assign_source_156 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_156;
}
branch_end_46:;
{
PyObject *tmp_assign_source_157;
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_set_locals_16 = tmp_class_container$class_creation_16__prepared;
locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_50;
}
tmp_dictset_value = mod_consts.const_str_plain_ResultCounts;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_50;
}
tmp_dictset_value = mod_consts.const_int_pos_327;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_50;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_50;
}
frame_frame_openai$types$evals$run_create_response$$$class__16_ResultCounts_17 = MAKE_CLASS_FRAME(tstate, code_objects_94568f162de8332f2e7bddb0b5945a68, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__16_ResultCounts_17);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__16_ResultCounts_17) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_58;
PyObject *tmp_ass_subscribed_58;
PyObject *tmp_ass_subscript_58;
tmp_ass_subvalue_58 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, const_str_plain_int);

if (tmp_ass_subvalue_58 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_58 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_58);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_ass_subscribed_58 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_58 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_58);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 328;
type_description_2 = "o";
    goto frame_exception_exit_17;
}

if (tmp_ass_subscribed_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_58);

exception_lineno = 328;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscript_58 = mod_consts.const_str_plain_errored;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
CHECK_OBJECT(tmp_ass_subscribed_58);
Py_DECREF(tmp_ass_subscribed_58);
CHECK_OBJECT(tmp_ass_subvalue_58);
Py_DECREF(tmp_ass_subvalue_58);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}
{
PyObject *tmp_ass_subvalue_59;
PyObject *tmp_ass_subscribed_59;
PyObject *tmp_ass_subscript_59;
tmp_ass_subvalue_59 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, const_str_plain_int);

if (tmp_ass_subvalue_59 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_59 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_59);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_ass_subscribed_59 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_59 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_59);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 331;
type_description_2 = "o";
    goto frame_exception_exit_17;
}

if (tmp_ass_subscribed_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_59);

exception_lineno = 331;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscript_59 = mod_consts.const_str_plain_failed;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
CHECK_OBJECT(tmp_ass_subscribed_59);
Py_DECREF(tmp_ass_subscribed_59);
CHECK_OBJECT(tmp_ass_subvalue_59);
Py_DECREF(tmp_ass_subvalue_59);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}
{
PyObject *tmp_ass_subvalue_60;
PyObject *tmp_ass_subscribed_60;
PyObject *tmp_ass_subscript_60;
tmp_ass_subvalue_60 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, const_str_plain_int);

if (tmp_ass_subvalue_60 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_60 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_60);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_ass_subscribed_60 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_60 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_60);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 334;
type_description_2 = "o";
    goto frame_exception_exit_17;
}

if (tmp_ass_subscribed_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_60);

exception_lineno = 334;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscript_60 = mod_consts.const_str_plain_passed;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
CHECK_OBJECT(tmp_ass_subscribed_60);
Py_DECREF(tmp_ass_subscribed_60);
CHECK_OBJECT(tmp_ass_subvalue_60);
Py_DECREF(tmp_ass_subvalue_60);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}
{
PyObject *tmp_ass_subvalue_61;
PyObject *tmp_ass_subscribed_61;
PyObject *tmp_ass_subscript_61;
tmp_ass_subvalue_61 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, const_str_plain_int);

if (tmp_ass_subvalue_61 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_61 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_61);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_ass_subscribed_61 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_61 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_61);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_17;
}

if (tmp_ass_subscribed_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_61);

exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscript_61 = mod_consts.const_str_plain_total;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
CHECK_OBJECT(tmp_ass_subscribed_61);
Py_DECREF(tmp_ass_subscribed_61);
CHECK_OBJECT(tmp_ass_subvalue_61);
Py_DECREF(tmp_ass_subvalue_61);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_16;
frame_exception_exit_17:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__16_ResultCounts_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__16_ResultCounts_17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__16_ResultCounts_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__16_ResultCounts_17,
    type_description_2,
    outline_15_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__16_ResultCounts_17);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_16;
frame_no_exception_16:;
goto skip_nested_handling_16;
nested_frame_exit_16:;

goto try_except_handler_50;
skip_nested_handling_16:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_50;
}
{
nuitka_bool tmp_condition_result_64;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_cmp_expr_left_16 = tmp_class_container$class_creation_16__bases;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_cmp_expr_right_16 = tmp_class_container$class_creation_16__bases_orig;
tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_50;
}
if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
    goto branch_yes_48;
} else {
    goto branch_no_48;
}
}
branch_yes_48:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_16__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_50;
}
branch_no_48:;
{
PyObject *tmp_assign_source_158;
PyObject *tmp_called_value_36;
PyObject *tmp_args_value_32;
PyObject *tmp_tuple_element_74;
PyObject *tmp_kwargs_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_called_value_36 = tmp_class_container$class_creation_16__metaclass;
tmp_tuple_element_74 = mod_consts.const_str_plain_ResultCounts;
tmp_args_value_32 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_74);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_74 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_74);
tmp_tuple_element_74 = locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327;
PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_74);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_32 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 327;
tmp_assign_source_158 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_32, tmp_kwargs_value_32);
CHECK_OBJECT(tmp_args_value_32);
Py_DECREF(tmp_args_value_32);
if (tmp_assign_source_158 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_50;
}
assert(outline_15_var___class__ == NULL);
outline_15_var___class__ = tmp_assign_source_158;
}
CHECK_OBJECT(outline_15_var___class__);
tmp_assign_source_157 = outline_15_var___class__;
Py_INCREF(tmp_assign_source_157);
goto try_return_handler_50;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_50:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327);
locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327 = NULL;
goto try_return_handler_49;
// Exception handler code:
try_except_handler_50:;
exception_keeper_lineno_48 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_48 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327);
locals_openai$types$evals$run_create_response$$$class__16_ResultCounts_327 = NULL;
// Re-raise.
exception_state = exception_keeper_name_48;
exception_lineno = exception_keeper_lineno_48;

goto try_except_handler_49;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_49:;
CHECK_OBJECT(outline_15_var___class__);
CHECK_OBJECT(outline_15_var___class__);
Py_DECREF(outline_15_var___class__);
outline_15_var___class__ = NULL;
goto outline_result_32;
// Exception handler code:
try_except_handler_49:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_49;
exception_lineno = exception_keeper_lineno_49;

goto outline_exception_16;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_16:;
exception_lineno = 327;
goto try_except_handler_48;
outline_result_32:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultCounts, tmp_assign_source_157);
}
goto try_end_18;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_50 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_50 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_16__bases_orig);
tmp_class_container$class_creation_16__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__bases);
tmp_class_container$class_creation_16__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__metaclass);
tmp_class_container$class_creation_16__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_50;
exception_lineno = exception_keeper_lineno_50;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
Py_DECREF(tmp_class_container$class_creation_16__bases_orig);
tmp_class_container$class_creation_16__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
Py_DECREF(tmp_class_container$class_creation_16__bases);
tmp_class_container$class_creation_16__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
Py_DECREF(tmp_class_container$class_creation_16__metaclass);
tmp_class_container$class_creation_16__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
Py_DECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
tmp_outline_return_value_16 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_16);
goto outline_result_31;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_31:;
CHECK_OBJECT(tmp_outline_return_value_16);
Py_DECREF(tmp_outline_return_value_16);
}
{
PyObject *tmp_outline_return_value_17;
// Tried code:
{
PyObject *tmp_assign_source_159;
PyObject *tmp_tuple_element_75;
tmp_tuple_element_75 = module_var_accessor_openai$types$evals$run_create_response$BaseModel(tstate);
if (unlikely(tmp_tuple_element_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 341;

    goto try_except_handler_51;
}
tmp_assign_source_159 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_159, 0, tmp_tuple_element_75);
assert(tmp_class_container$class_creation_17__bases_orig == NULL);
tmp_class_container$class_creation_17__bases_orig = tmp_assign_source_159;
}
{
PyObject *tmp_assign_source_160;
PyObject *tmp_direct_call_arg1_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_direct_call_arg1_17 = tmp_class_container$class_creation_17__bases_orig;
Py_INCREF(tmp_direct_call_arg1_17);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_17};
    tmp_assign_source_160 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_160 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__bases == NULL);
tmp_class_container$class_creation_17__bases = tmp_assign_source_160;
}
{
PyObject *tmp_assign_source_161;
tmp_assign_source_161 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__class_decl_dict == NULL);
tmp_class_container$class_creation_17__class_decl_dict = tmp_assign_source_161;
}
{
PyObject *tmp_assign_source_162;
PyObject *tmp_metaclass_value_17;
nuitka_bool tmp_condition_result_65;
int tmp_truth_name_17;
PyObject *tmp_type_arg_33;
PyObject *tmp_expression_value_146;
PyObject *tmp_subscript_value_66;
PyObject *tmp_bases_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_container$class_creation_17__bases);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
tmp_condition_result_65 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_17;
} else {
    goto condexpr_false_17;
}
condexpr_true_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_expression_value_146 = tmp_class_container$class_creation_17__bases;
tmp_subscript_value_66 = const_int_0;
tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_146, tmp_subscript_value_66, 0);
if (tmp_type_arg_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
CHECK_OBJECT(tmp_type_arg_33);
Py_DECREF(tmp_type_arg_33);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
goto condexpr_end_17;
condexpr_false_17:;
tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_17);
condexpr_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_17__bases;
tmp_assign_source_162 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
CHECK_OBJECT(tmp_metaclass_value_17);
Py_DECREF(tmp_metaclass_value_17);
if (tmp_assign_source_162 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__metaclass == NULL);
tmp_class_container$class_creation_17__metaclass = tmp_assign_source_162;
}
{
bool tmp_condition_result_66;
PyObject *tmp_expression_value_147;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_147 = tmp_class_container$class_creation_17__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_147, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
tmp_condition_result_66 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_66 != false) {
    goto branch_yes_49;
} else {
    goto branch_no_49;
}
}
branch_yes_49:;
{
PyObject *tmp_assign_source_163;
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_148;
PyObject *tmp_args_value_33;
PyObject *tmp_tuple_element_76;
PyObject *tmp_kwargs_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_148 = tmp_class_container$class_creation_17__metaclass;
tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
tmp_tuple_element_76 = mod_consts.const_str_plain_RunCreateResponse;
tmp_args_value_33 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_76);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_76 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_76);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_33 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 341;
tmp_assign_source_163 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_33, tmp_kwargs_value_33);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_value_33);
Py_DECREF(tmp_args_value_33);
if (tmp_assign_source_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_163;
}
{
bool tmp_condition_result_67;
PyObject *tmp_operand_value_17;
PyObject *tmp_expression_value_149;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_expression_value_149 = tmp_class_container$class_creation_17__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_149, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
assert(!(tmp_res == -1));
tmp_condition_result_67 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_67 != false) {
    goto branch_yes_50;
} else {
    goto branch_no_50;
}
}
branch_yes_50:;
{
PyObject *tmp_raise_type_17;
PyObject *tmp_make_exception_arg_17;
PyObject *tmp_mod_expr_left_17;
PyObject *tmp_mod_expr_right_17;
PyObject *tmp_tuple_element_77;
PyObject *tmp_expression_value_150;
PyObject *tmp_name_value_28;
PyObject *tmp_default_value_17;
tmp_mod_expr_left_17 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_150 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_28 = const_str_plain___name__;
tmp_default_value_17 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_77 = BUILTIN_GETATTR(tstate, tmp_expression_value_150, tmp_name_value_28, tmp_default_value_17);
if (tmp_tuple_element_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_151;
PyObject *tmp_type_arg_34;
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_77);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_type_arg_34 = tmp_class_container$class_creation_17__prepared;
tmp_expression_value_151 = BUILTIN_TYPE1(tmp_type_arg_34);
assert(!(tmp_expression_value_151 == NULL));
tmp_tuple_element_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_151);
Py_DECREF(tmp_expression_value_151);
if (tmp_tuple_element_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_77);
}
goto tuple_build_no_exception_25;
// Exception handling pass through code for tuple_build:
tuple_build_exception_25:;
Py_DECREF(tmp_mod_expr_right_17);
goto try_except_handler_51;
// Finished with no exception for tuple_build:
tuple_build_no_exception_25:;
tmp_make_exception_arg_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
CHECK_OBJECT(tmp_mod_expr_right_17);
Py_DECREF(tmp_mod_expr_right_17);
if (tmp_make_exception_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_51;
}
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 341;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_17);
CHECK_OBJECT(tmp_make_exception_arg_17);
Py_DECREF(tmp_make_exception_arg_17);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 341;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_51;
}
branch_no_50:;
goto branch_end_49;
branch_no_49:;
{
PyObject *tmp_assign_source_164;
tmp_assign_source_164 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_164;
}
branch_end_49:;
{
PyObject *tmp_assign_source_165;
{
PyObject *tmp_set_locals_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_set_locals_17 = tmp_class_container$class_creation_17__prepared;
locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341 = tmp_set_locals_17;
Py_INCREF(tmp_set_locals_17);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1a78b938890ef66a05b7774c37e0f596;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_53;
}
tmp_dictset_value = mod_consts.const_str_plain_RunCreateResponse;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_53;
}
tmp_dictset_value = mod_consts.const_int_pos_341;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_53;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_53;
}
frame_frame_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_18 = MAKE_CLASS_FRAME(tstate, code_objects_866c6e34cb1cd0b9a6051e48049e2092, module_openai$types$evals$run_create_response, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_18);
assert(Py_REFCNT(frame_frame_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_18) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_62;
PyObject *tmp_ass_subscribed_62;
PyObject *tmp_ass_subscript_62;
tmp_ass_subvalue_62 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_62 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_62 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_62);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_62 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_62 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_62);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 342;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_62);

exception_lineno = 342;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_62 = mod_consts.const_str_plain_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
CHECK_OBJECT(tmp_ass_subscribed_62);
Py_DECREF(tmp_ass_subscribed_62);
CHECK_OBJECT(tmp_ass_subvalue_62);
Py_DECREF(tmp_ass_subvalue_62);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_63;
PyObject *tmp_ass_subscribed_63;
PyObject *tmp_ass_subscript_63;
tmp_ass_subvalue_63 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain_int);

if (tmp_ass_subvalue_63 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_63 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_ass_subvalue_63);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_63 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_63 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_63);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 345;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_63);

exception_lineno = 345;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_63 = mod_consts.const_str_plain_created_at;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
CHECK_OBJECT(tmp_ass_subscribed_63);
Py_DECREF(tmp_ass_subscribed_63);
CHECK_OBJECT(tmp_ass_subvalue_63);
Py_DECREF(tmp_ass_subvalue_63);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_64;
PyObject *tmp_ass_subscribed_64;
PyObject *tmp_ass_subscript_64;
tmp_ass_subvalue_64 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_DataSource);

if (tmp_ass_subvalue_64 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_64 = module_var_accessor_openai$types$evals$run_create_response$DataSource(tstate);
if (unlikely(tmp_ass_subvalue_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSource);
}

if (tmp_ass_subvalue_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_ass_subvalue_64);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_64 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_64 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_64);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 348;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_64);

exception_lineno = 348;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_64 = mod_consts.const_str_plain_data_source;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
CHECK_OBJECT(tmp_ass_subscribed_64);
Py_DECREF(tmp_ass_subscribed_64);
CHECK_OBJECT(tmp_ass_subvalue_64);
Py_DECREF(tmp_ass_subvalue_64);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_65;
PyObject *tmp_ass_subscribed_65;
PyObject *tmp_ass_subscript_65;
tmp_ass_subvalue_65 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_EvalAPIError);

if (tmp_ass_subvalue_65 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_65 = module_var_accessor_openai$types$evals$run_create_response$EvalAPIError(tstate);
if (unlikely(tmp_ass_subvalue_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalAPIError);
}

if (tmp_ass_subvalue_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_ass_subvalue_65);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_65 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_65 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_65);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_65);

exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_65 = mod_consts.const_str_plain_error;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
CHECK_OBJECT(tmp_ass_subscribed_65);
Py_DECREF(tmp_ass_subscribed_65);
CHECK_OBJECT(tmp_ass_subvalue_65);
Py_DECREF(tmp_ass_subvalue_65);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_66;
PyObject *tmp_ass_subscribed_66;
PyObject *tmp_ass_subscript_66;
tmp_ass_subvalue_66 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_66 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_66 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_66);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_66 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_66 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_66);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 354;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_66);

exception_lineno = 354;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_66 = mod_consts.const_str_plain_eval_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
CHECK_OBJECT(tmp_ass_subscribed_66);
Py_DECREF(tmp_ass_subscribed_66);
CHECK_OBJECT(tmp_ass_subvalue_66);
Py_DECREF(tmp_ass_subvalue_66);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_metadata, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
{
PyObject *tmp_ass_subvalue_67;
PyObject *tmp_expression_value_152;
PyObject *tmp_subscript_value_67;
PyObject *tmp_ass_subscribed_67;
PyObject *tmp_ass_subscript_67;
tmp_expression_value_152 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_152 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_152 = module_var_accessor_openai$types$evals$run_create_response$Optional(tstate);
if (unlikely(tmp_expression_value_152 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_152 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_expression_value_152);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_subscript_value_67 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_Metadata);

if (tmp_subscript_value_67 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_67 = module_var_accessor_openai$types$evals$run_create_response$Metadata(tstate);
if (unlikely(tmp_subscript_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Metadata);
}

if (tmp_subscript_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_152);

exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_subscript_value_67);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subvalue_67 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_152, tmp_subscript_value_67);
CHECK_OBJECT(tmp_expression_value_152);
Py_DECREF(tmp_expression_value_152);
CHECK_OBJECT(tmp_subscript_value_67);
Py_DECREF(tmp_subscript_value_67);
if (tmp_ass_subvalue_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscribed_67 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_67 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_67);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_67);

exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_67 = mod_consts.const_str_plain_metadata;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67);
CHECK_OBJECT(tmp_ass_subscribed_67);
Py_DECREF(tmp_ass_subscribed_67);
CHECK_OBJECT(tmp_ass_subvalue_67);
Py_DECREF(tmp_ass_subvalue_67);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_68;
PyObject *tmp_ass_subscribed_68;
PyObject *tmp_ass_subscript_68;
tmp_ass_subvalue_68 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_68 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_68 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_68);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_68 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_68 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_68);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 367;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_68);

exception_lineno = 367;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_68 = mod_consts.const_str_plain_model;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68);
CHECK_OBJECT(tmp_ass_subscribed_68);
Py_DECREF(tmp_ass_subscribed_68);
CHECK_OBJECT(tmp_ass_subvalue_68);
Py_DECREF(tmp_ass_subvalue_68);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_69;
PyObject *tmp_ass_subscribed_69;
PyObject *tmp_ass_subscript_69;
tmp_ass_subvalue_69 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_69 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_69 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_69);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_69 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_69 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_69);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 370;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_69);

exception_lineno = 370;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_69 = const_str_plain_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69);
CHECK_OBJECT(tmp_ass_subscribed_69);
Py_DECREF(tmp_ass_subscribed_69);
CHECK_OBJECT(tmp_ass_subvalue_69);
Py_DECREF(tmp_ass_subvalue_69);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_70;
PyObject *tmp_expression_value_153;
PyObject *tmp_subscript_value_68;
PyObject *tmp_ass_subscribed_70;
PyObject *tmp_ass_subscript_70;
tmp_expression_value_153 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_153 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_153 = module_var_accessor_openai$types$evals$run_create_response$Literal(tstate);
if (unlikely(tmp_expression_value_153 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_153 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_expression_value_153);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_subscript_value_68 = mod_consts.const_str_digest_7499bf2538c0839fc1b72a63e936bd73;
tmp_ass_subvalue_70 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_153, tmp_subscript_value_68);
CHECK_OBJECT(tmp_expression_value_153);
Py_DECREF(tmp_expression_value_153);
if (tmp_ass_subvalue_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscribed_70 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_70 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_70);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 373;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_70);

exception_lineno = 373;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_70 = mod_consts.const_str_plain_object;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70);
CHECK_OBJECT(tmp_ass_subscribed_70);
Py_DECREF(tmp_ass_subscribed_70);
CHECK_OBJECT(tmp_ass_subvalue_70);
Py_DECREF(tmp_ass_subvalue_70);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_71;
PyObject *tmp_expression_value_154;
PyObject *tmp_subscript_value_69;
PyObject *tmp_ass_subscribed_71;
PyObject *tmp_ass_subscript_71;
tmp_expression_value_154 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_List);

if (tmp_expression_value_154 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_154 = module_var_accessor_openai$types$evals$run_create_response$List(tstate);
if (unlikely(tmp_expression_value_154 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_154 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_expression_value_154);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_subscript_value_69 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_PerModelUsage);

if (tmp_subscript_value_69 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_69 = module_var_accessor_openai$types$evals$run_create_response$PerModelUsage(tstate);
if (unlikely(tmp_subscript_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PerModelUsage);
}

if (tmp_subscript_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_154);

exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_subscript_value_69);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subvalue_71 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_154, tmp_subscript_value_69);
CHECK_OBJECT(tmp_expression_value_154);
Py_DECREF(tmp_expression_value_154);
CHECK_OBJECT(tmp_subscript_value_69);
Py_DECREF(tmp_subscript_value_69);
if (tmp_ass_subvalue_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscribed_71 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_71 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_71);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_71);

exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_71 = mod_consts.const_str_plain_per_model_usage;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71);
CHECK_OBJECT(tmp_ass_subscribed_71);
Py_DECREF(tmp_ass_subscribed_71);
CHECK_OBJECT(tmp_ass_subvalue_71);
Py_DECREF(tmp_ass_subvalue_71);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_72;
PyObject *tmp_expression_value_155;
PyObject *tmp_subscript_value_70;
PyObject *tmp_ass_subscribed_72;
PyObject *tmp_ass_subscript_72;
tmp_expression_value_155 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_List);

if (tmp_expression_value_155 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_155 = module_var_accessor_openai$types$evals$run_create_response$List(tstate);
if (unlikely(tmp_expression_value_155 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_155 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_expression_value_155);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_subscript_value_70 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_PerTestingCriteriaResult);

if (tmp_subscript_value_70 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_70 = module_var_accessor_openai$types$evals$run_create_response$PerTestingCriteriaResult(tstate);
if (unlikely(tmp_subscript_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PerTestingCriteriaResult);
}

if (tmp_subscript_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_155);

exception_lineno = 379;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_subscript_value_70);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subvalue_72 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_155, tmp_subscript_value_70);
CHECK_OBJECT(tmp_expression_value_155);
Py_DECREF(tmp_expression_value_155);
CHECK_OBJECT(tmp_subscript_value_70);
Py_DECREF(tmp_subscript_value_70);
if (tmp_ass_subvalue_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscribed_72 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_72 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_72);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 379;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_72);

exception_lineno = 379;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_72 = mod_consts.const_str_plain_per_testing_criteria_results;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72);
CHECK_OBJECT(tmp_ass_subscribed_72);
Py_DECREF(tmp_ass_subscribed_72);
CHECK_OBJECT(tmp_ass_subvalue_72);
Py_DECREF(tmp_ass_subvalue_72);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_73;
PyObject *tmp_ass_subscribed_73;
PyObject *tmp_ass_subscript_73;
tmp_ass_subvalue_73 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_73 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_73 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_73);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_73 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_73 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_73);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 382;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_73);

exception_lineno = 382;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_73 = mod_consts.const_str_plain_report_url;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73);
CHECK_OBJECT(tmp_ass_subscribed_73);
Py_DECREF(tmp_ass_subscribed_73);
CHECK_OBJECT(tmp_ass_subvalue_73);
Py_DECREF(tmp_ass_subvalue_73);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_74;
PyObject *tmp_ass_subscribed_74;
PyObject *tmp_ass_subscript_74;
tmp_ass_subvalue_74 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_ResultCounts);

if (tmp_ass_subvalue_74 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_74 = module_var_accessor_openai$types$evals$run_create_response$ResultCounts(tstate);
if (unlikely(tmp_ass_subvalue_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResultCounts);
}

if (tmp_ass_subvalue_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_ass_subvalue_74);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_74 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_74 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_74);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 385;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_74);

exception_lineno = 385;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_74 = mod_consts.const_str_plain_result_counts;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74);
CHECK_OBJECT(tmp_ass_subscribed_74);
Py_DECREF(tmp_ass_subscribed_74);
CHECK_OBJECT(tmp_ass_subvalue_74);
Py_DECREF(tmp_ass_subvalue_74);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_75;
PyObject *tmp_ass_subscribed_75;
PyObject *tmp_ass_subscript_75;
tmp_ass_subvalue_75 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_75 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_75 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_75);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_75 = PyObject_GetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_75 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_75);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 388;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_75);

exception_lineno = 388;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_75 = mod_consts.const_str_plain_status;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75);
CHECK_OBJECT(tmp_ass_subscribed_75);
Py_DECREF(tmp_ass_subscribed_75);
CHECK_OBJECT(tmp_ass_subvalue_75);
Py_DECREF(tmp_ass_subvalue_75);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_17;
frame_exception_exit_18:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_18,
    type_description_2,
    outline_16_var___class__
);



assertFrameObject(frame_frame_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_18);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_17;
frame_no_exception_17:;
goto skip_nested_handling_17;
nested_frame_exit_17:;

goto try_except_handler_53;
skip_nested_handling_17:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_53;
}
{
nuitka_bool tmp_condition_result_68;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_cmp_expr_left_17 = tmp_class_container$class_creation_17__bases;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_cmp_expr_right_17 = tmp_class_container$class_creation_17__bases_orig;
tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_53;
}
if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
    goto branch_yes_51;
} else {
    goto branch_no_51;
}
}
branch_yes_51:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_17__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_53;
}
branch_no_51:;
{
PyObject *tmp_assign_source_166;
PyObject *tmp_called_value_38;
PyObject *tmp_args_value_34;
PyObject *tmp_tuple_element_78;
PyObject *tmp_kwargs_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_called_value_38 = tmp_class_container$class_creation_17__metaclass;
tmp_tuple_element_78 = mod_consts.const_str_plain_RunCreateResponse;
tmp_args_value_34 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_78);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_78 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_78);
tmp_tuple_element_78 = locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341;
PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_78);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_34 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_openai$types$evals$run_create_response->m_frame.f_lineno = 341;
tmp_assign_source_166 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_34, tmp_kwargs_value_34);
CHECK_OBJECT(tmp_args_value_34);
Py_DECREF(tmp_args_value_34);
if (tmp_assign_source_166 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto try_except_handler_53;
}
assert(outline_16_var___class__ == NULL);
outline_16_var___class__ = tmp_assign_source_166;
}
CHECK_OBJECT(outline_16_var___class__);
tmp_assign_source_165 = outline_16_var___class__;
Py_INCREF(tmp_assign_source_165);
goto try_return_handler_53;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_53:;
Py_DECREF(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341);
locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341 = NULL;
goto try_return_handler_52;
// Exception handler code:
try_except_handler_53:;
exception_keeper_lineno_51 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_51 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341);
locals_openai$types$evals$run_create_response$$$class__17_RunCreateResponse_341 = NULL;
// Re-raise.
exception_state = exception_keeper_name_51;
exception_lineno = exception_keeper_lineno_51;

goto try_except_handler_52;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_52:;
CHECK_OBJECT(outline_16_var___class__);
CHECK_OBJECT(outline_16_var___class__);
Py_DECREF(outline_16_var___class__);
outline_16_var___class__ = NULL;
goto outline_result_34;
// Exception handler code:
try_except_handler_52:;
exception_keeper_lineno_52 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_52 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_52;
exception_lineno = exception_keeper_lineno_52;

goto outline_exception_17;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_17:;
exception_lineno = 341;
goto try_except_handler_51;
outline_result_34:;
UPDATE_STRING_DICT1(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)mod_consts.const_str_plain_RunCreateResponse, tmp_assign_source_165);
}
goto try_end_19;
// Exception handler code:
try_except_handler_51:;
exception_keeper_lineno_53 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_53 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_17__bases_orig);
tmp_class_container$class_creation_17__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__bases);
tmp_class_container$class_creation_17__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_container$class_creation_17__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__metaclass);
tmp_class_container$class_creation_17__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__prepared);
tmp_class_container$class_creation_17__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_53;
exception_lineno = exception_keeper_lineno_53;

goto frame_exception_exit_1;
// End of try:
try_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
Py_DECREF(tmp_class_container$class_creation_17__bases_orig);
tmp_class_container$class_creation_17__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
Py_DECREF(tmp_class_container$class_creation_17__bases);
tmp_class_container$class_creation_17__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_container$class_creation_17__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
Py_DECREF(tmp_class_container$class_creation_17__metaclass);
tmp_class_container$class_creation_17__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
Py_DECREF(tmp_class_container$class_creation_17__prepared);
tmp_class_container$class_creation_17__prepared = NULL;
tmp_outline_return_value_17 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_17);
goto outline_result_33;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_33:;
CHECK_OBJECT(tmp_outline_return_value_17);
Py_DECREF(tmp_outline_return_value_17);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_18;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$evals$run_create_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$evals$run_create_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$evals$run_create_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$evals$run_create_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_18:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$evals$run_create_response", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.evals.run_create_response" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$evals$run_create_response);
    return module_openai$types$evals$run_create_response;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$evals$run_create_response, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$evals$run_create_response", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

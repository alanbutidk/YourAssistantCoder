/* Generated code for Python module 'openai$types$beta$thread_create_and_run_params'
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



/* The "module_openai$types$beta$thread_create_and_run_params" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$beta$thread_create_and_run_params;
PyDictObject *moduledict_openai$types$beta$thread_create_and_run_params;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_Required;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain_TypedDict;
PyObject *const_str_digest_5999cd146c93be3fdce51a08986ddf99;
PyObject *const_tuple_str_plain_ChatModel_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_ChatModel;
PyObject *const_str_plain_assistant_tool_param;
PyObject *const_tuple_str_plain_AssistantToolParam_tuple;
PyObject *const_str_plain_AssistantToolParam;
PyObject *const_str_digest_f08f77b4258590d61446416ee765c721;
PyObject *const_tuple_str_plain_Metadata_tuple;
PyObject *const_str_plain_Metadata;
PyObject *const_str_plain_code_interpreter_tool_param;
PyObject *const_tuple_str_plain_CodeInterpreterToolParam_tuple;
PyObject *const_str_plain_CodeInterpreterToolParam;
PyObject *const_str_plain_assistant_tool_choice_option_param;
PyObject *const_tuple_str_plain_AssistantToolChoiceOptionParam_tuple;
PyObject *const_str_plain_AssistantToolChoiceOptionParam;
PyObject *const_str_digest_95741e66c50bb31c9ce0468476ed697a;
PyObject *const_tuple_str_plain_MessageContentPartParam_tuple;
PyObject *const_str_plain_MessageContentPartParam;
PyObject *const_str_plain_assistant_response_format_option_param;
PyObject *const_tuple_str_plain_AssistantResponseFormatOptionParam_tuple;
PyObject *const_str_plain_AssistantResponseFormatOptionParam;
PyObject *const_list_cecfd10625b7939ce52f27dd826de281_list;
PyObject *const_dict_b697b7227c7766cd5072bdb0d1ed9479;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_ThreadCreateAndRunParamsBase;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_40;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_a9021537fea859ba8304d6087727e1a0;
PyObject *const_str_plain_assistant_id;
PyObject *const_str_digest_c73708c23affefa1977be4020e7d77bc;
PyObject *const_str_plain_instructions;
PyObject *const_str_digest_e62fe7561b30f2de13c58dd6be1c61da;
PyObject *const_str_plain_max_completion_tokens;
PyObject *const_str_plain_max_prompt_tokens;
PyObject *const_str_digest_2bb590217e6f13f3baacdb879846a135;
PyObject *const_str_plain_metadata;
PyObject *const_str_digest_6dbcd162e11486ca060081bfb09ec79c;
PyObject *const_str_plain_model;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_parallel_tool_calls;
PyObject *const_str_digest_52119d4cdbe4f8c0d8957cb777675812;
PyObject *const_str_plain_response_format;
PyObject *const_str_digest_39faefb44ab346fff42c81b05ff5a9f3;
PyObject *const_str_plain_temperature;
PyObject *const_str_plain_Thread;
PyObject *const_str_plain_thread;
PyObject *const_str_digest_bd0de8aea4830996a876d68806a785e6;
PyObject *const_str_plain_tool_choice;
PyObject *const_str_digest_90f2f573607d8298f38b72c71f6baa4c;
PyObject *const_str_plain_tool_resources;
PyObject *const_str_digest_e458b8467a68652af8cf0063073d89ec;
PyObject *const_str_plain_tools;
PyObject *const_str_plain_top_p;
PyObject *const_str_digest_bbcd516f4b7cdcb937d1a8e7994d8aca;
PyObject *const_str_plain_truncation_strategy;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_ThreadMessageAttachmentToolFileSearch;
PyObject *const_int_pos_176;
PyObject *const_str_digest_24bdbc8e482b8ee8cba321b5e2da8339;
PyObject *const_str_plain_ThreadMessageAttachmentTool;
PyObject *const_str_plain_ThreadMessageAttachment;
PyObject *const_int_pos_184;
PyObject *const_str_plain_str;
PyObject *const_str_plain_file_id;
PyObject *const_str_digest_e7e26a6d97c6f116f9a1d96fa4bfb5bc;
PyObject *const_str_plain_ThreadMessage;
PyObject *const_int_pos_192;
PyObject *const_str_digest_ff98c05ce72950312c439033261eb791;
PyObject *const_str_plain_content;
PyObject *const_str_digest_6edd3b9340ae15da4fe0b4b9be3fff8a;
PyObject *const_str_plain_role;
PyObject *const_str_digest_e2ba7c5beb8a1ac0bc14d07ecdaf4f14;
PyObject *const_str_plain_attachments;
PyObject *const_str_plain_ThreadToolResourcesCodeInterpreter;
PyObject *const_int_pos_219;
PyObject *const_str_digest_b2398c7864108277f9186127f92bdc45;
PyObject *const_str_plain_file_ids;
PyObject *const_str_digest_b217f8c5fe9b8ba6715407460349f480;
PyObject *const_int_pos_228;
PyObject *const_str_digest_d5944c53179ece858010150e36b2975a;
PyObject *const_str_digest_fdad030e8bdd14a0a3156895ef1c2315;
PyObject *const_int_pos_233;
PyObject *const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40;
PyObject *const_str_plain_chunk_overlap_tokens;
PyObject *const_str_plain_max_chunk_size_tokens;
PyObject *const_str_digest_77a05b89abfa64279c0eec32cd4eb860;
PyObject *const_int_pos_248;
PyObject *const_str_digest_dc0c089c6cd9f4941f937f31cf0fdac6;
PyObject *const_str_plain_static;
PyObject *const_str_digest_dcfed387d2fd51ff79e1a56c43a52e57;
PyObject *const_str_digest_d1b1af5e19d0ec6f38f8b00770c2c9db;
PyObject *const_str_plain_ThreadToolResourcesFileSearchVectorStore;
PyObject *const_int_pos_261;
PyObject *const_str_plain_chunking_strategy;
PyObject *const_str_plain_ThreadToolResourcesFileSearch;
PyObject *const_int_pos_286;
PyObject *const_str_plain_vector_store_ids;
PyObject *const_str_digest_f40e6852eee4dc147ca8c1e833e7e2c1;
PyObject *const_str_plain_vector_stores;
PyObject *const_str_plain_ThreadToolResources;
PyObject *const_int_pos_304;
PyObject *const_str_plain_code_interpreter;
PyObject *const_str_plain_file_search;
PyObject *const_int_pos_310;
PyObject *const_str_digest_53d616d00bb74f49228c7ae1bb3d2558;
PyObject *const_str_plain_messages;
PyObject *const_str_digest_2d940d7cc8c602aa07323e802db90ee7;
PyObject *const_str_plain_ToolResourcesCodeInterpreter;
PyObject *const_int_pos_336;
PyObject *const_str_plain_ToolResourcesFileSearch;
PyObject *const_int_pos_345;
PyObject *const_str_plain_ToolResources;
PyObject *const_int_pos_355;
PyObject *const_str_plain_TruncationStrategy;
PyObject *const_int_pos_361;
PyObject *const_str_digest_0aae81306b2b7c186272299970d7ac16;
PyObject *const_str_plain_last_messages;
PyObject *const_str_plain_ThreadCreateAndRunParamsNonStreaming;
PyObject *const_int_pos_378;
PyObject *const_str_digest_406ac393b7cccc2e082753bfc98bac9a;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_ThreadCreateAndRunParamsStreaming;
PyObject *const_int_pos_387;
PyObject *const_str_digest_d6fdbbf0ef194cb625ab3be29d182c79;
PyObject *const_str_plain_ThreadCreateAndRunParams;
PyObject *const_str_digest_6841000af7d894c92cb5a85f345e7fac;
PyObject *const_str_digest_7dc927cd5771d4a33796e69b4e1ca6f9;
PyObject *const_tuple_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[148];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.beta.thread_create_and_run_params"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Required);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDict);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_5999cd146c93be3fdce51a08986ddf99);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatModel_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatModel);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_assistant_tool_param);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AssistantToolParam_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_AssistantToolParam);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_f08f77b4258590d61446416ee765c721);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Metadata_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_tool_param);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterToolParam_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterToolParam);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_assistant_tool_choice_option_param);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AssistantToolChoiceOptionParam_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_AssistantToolChoiceOptionParam);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_95741e66c50bb31c9ce0468476ed697a);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageContentPartParam);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_assistant_response_format_option_param);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AssistantResponseFormatOptionParam_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_AssistantResponseFormatOptionParam);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_list_cecfd10625b7939ce52f27dd826de281_list);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreateAndRunParamsBase);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_int_pos_40);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9021537fea859ba8304d6087727e1a0);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_assistant_id);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_c73708c23affefa1977be4020e7d77bc);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_instructions);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_e62fe7561b30f2de13c58dd6be1c61da);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_completion_tokens);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_prompt_tokens);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_6dbcd162e11486ca060081bfb09ec79c);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_parallel_tool_calls);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_52119d4cdbe4f8c0d8957cb777675812);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_format);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_39faefb44ab346fff42c81b05ff5a9f3);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_temperature);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Thread);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_thread);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd0de8aea4830996a876d68806a785e6);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_choice);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_90f2f573607d8298f38b72c71f6baa4c);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_resources);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_e458b8467a68652af8cf0063073d89ec);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_tools);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_top_p);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_bbcd516f4b7cdcb937d1a8e7994d8aca);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_truncation_strategy);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_int_pos_176);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_24bdbc8e482b8ee8cba321b5e2da8339);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageAttachmentTool);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageAttachment);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_int_pos_184);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_id);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7e26a6d97c6f116f9a1d96fa4bfb5bc);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessage);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_int_pos_192);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff98c05ce72950312c439033261eb791);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_6edd3b9340ae15da4fe0b4b9be3fff8a);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_role);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2ba7c5beb8a1ac0bc14d07ecdaf4f14);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_attachments);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadToolResourcesCodeInterpreter);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_219);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_ids);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_228);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5944c53179ece858010150e36b2975a);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_fdad030e8bdd14a0a3156895ef1c2315);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_int_pos_233);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_overlap_tokens);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_chunk_size_tokens);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_248);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc0c089c6cd9f4941f937f31cf0fdac6);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_static);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcfed387d2fd51ff79e1a56c43a52e57);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1b1af5e19d0ec6f38f8b00770c2c9db);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadToolResourcesFileSearchVectorStore);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_int_pos_261);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunking_strategy);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadToolResourcesFileSearch);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_286);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_ids);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_f40e6852eee4dc147ca8c1e833e7e2c1);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_stores);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadToolResources);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_int_pos_304);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_search);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_int_pos_310);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_53d616d00bb74f49228c7ae1bb3d2558);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_messages);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d940d7cc8c602aa07323e802db90ee7);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResourcesCodeInterpreter);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_int_pos_336);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResourcesFileSearch);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_345);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResources);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_int_pos_355);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_TruncationStrategy);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_int_pos_361);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_0aae81306b2b7c186272299970d7ac16);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_messages);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_int_pos_378);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_406ac393b7cccc2e082753bfc98bac9a);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_int_pos_387);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6fdbbf0ef194cb625ab3be29d182c79);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreateAndRunParams);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_6841000af7d894c92cb5a85f345e7fac);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_7dc927cd5771d4a33796e69b4e1ca6f9);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
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
void checkModuleConstants_openai$types$beta$thread_create_and_run_params(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Required);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypedDict);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_5999cd146c93be3fdce51a08986ddf99));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5999cd146c93be3fdce51a08986ddf99);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatModel_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatModel);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_assistant_tool_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assistant_tool_param);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AssistantToolParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AssistantToolParam_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_AssistantToolParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AssistantToolParam);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_f08f77b4258590d61446416ee765c721));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f08f77b4258590d61446416ee765c721);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Metadata_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Metadata_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Metadata);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_tool_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_interpreter_tool_param);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterToolParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CodeInterpreterToolParam_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterToolParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CodeInterpreterToolParam);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_assistant_tool_choice_option_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assistant_tool_choice_option_param);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AssistantToolChoiceOptionParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AssistantToolChoiceOptionParam_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_AssistantToolChoiceOptionParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AssistantToolChoiceOptionParam);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_95741e66c50bb31c9ce0468476ed697a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95741e66c50bb31c9ce0468476ed697a);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageContentPartParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageContentPartParam);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_assistant_response_format_option_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assistant_response_format_option_param);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AssistantResponseFormatOptionParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AssistantResponseFormatOptionParam_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_AssistantResponseFormatOptionParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AssistantResponseFormatOptionParam);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_list_cecfd10625b7939ce52f27dd826de281_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_cecfd10625b7939ce52f27dd826de281_list);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreateAndRunParamsBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadCreateAndRunParamsBase);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_int_pos_40));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_40);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9021537fea859ba8304d6087727e1a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9021537fea859ba8304d6087727e1a0);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_assistant_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assistant_id);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_c73708c23affefa1977be4020e7d77bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c73708c23affefa1977be4020e7d77bc);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_instructions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_instructions);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_e62fe7561b30f2de13c58dd6be1c61da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e62fe7561b30f2de13c58dd6be1c61da);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_completion_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_completion_tokens);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_prompt_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_prompt_tokens);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_6dbcd162e11486ca060081bfb09ec79c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6dbcd162e11486ca060081bfb09ec79c);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_parallel_tool_calls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parallel_tool_calls);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_52119d4cdbe4f8c0d8957cb777675812));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52119d4cdbe4f8c0d8957cb777675812);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_format);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_39faefb44ab346fff42c81b05ff5a9f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39faefb44ab346fff42c81b05ff5a9f3);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_temperature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_temperature);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Thread);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thread);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd0de8aea4830996a876d68806a785e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd0de8aea4830996a876d68806a785e6);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_choice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_choice);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_90f2f573607d8298f38b72c71f6baa4c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90f2f573607d8298f38b72c71f6baa4c);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_resources));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_resources);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_e458b8467a68652af8cf0063073d89ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e458b8467a68652af8cf0063073d89ec);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tools);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_top_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_top_p);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_bbcd516f4b7cdcb937d1a8e7994d8aca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bbcd516f4b7cdcb937d1a8e7994d8aca);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_truncation_strategy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_truncation_strategy);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_int_pos_176));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_176);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_24bdbc8e482b8ee8cba321b5e2da8339));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24bdbc8e482b8ee8cba321b5e2da8339);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageAttachmentTool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadMessageAttachmentTool);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageAttachment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadMessageAttachment);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_int_pos_184));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_184);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_id);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7e26a6d97c6f116f9a1d96fa4bfb5bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7e26a6d97c6f116f9a1d96fa4bfb5bc);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadMessage);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_int_pos_192));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_192);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff98c05ce72950312c439033261eb791));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff98c05ce72950312c439033261eb791);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_6edd3b9340ae15da4fe0b4b9be3fff8a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6edd3b9340ae15da4fe0b4b9be3fff8a);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_role);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2ba7c5beb8a1ac0bc14d07ecdaf4f14));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2ba7c5beb8a1ac0bc14d07ecdaf4f14);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_attachments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attachments);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadToolResourcesCodeInterpreter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadToolResourcesCodeInterpreter);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_219));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_219);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_ids));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_ids);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_228));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_228);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5944c53179ece858010150e36b2975a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5944c53179ece858010150e36b2975a);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_fdad030e8bdd14a0a3156895ef1c2315));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fdad030e8bdd14a0a3156895ef1c2315);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_int_pos_233));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_233);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_overlap_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_overlap_tokens);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_chunk_size_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_chunk_size_tokens);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_248));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_248);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc0c089c6cd9f4941f937f31cf0fdac6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc0c089c6cd9f4941f937f31cf0fdac6);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_static));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_static);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcfed387d2fd51ff79e1a56c43a52e57));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcfed387d2fd51ff79e1a56c43a52e57);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1b1af5e19d0ec6f38f8b00770c2c9db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1b1af5e19d0ec6f38f8b00770c2c9db);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadToolResourcesFileSearchVectorStore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadToolResourcesFileSearchVectorStore);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_int_pos_261));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_261);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunking_strategy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunking_strategy);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadToolResourcesFileSearch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadToolResourcesFileSearch);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_286));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_286);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_ids));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_store_ids);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_f40e6852eee4dc147ca8c1e833e7e2c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f40e6852eee4dc147ca8c1e833e7e2c1);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_stores));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_stores);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadToolResources));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadToolResources);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_int_pos_304));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_304);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_interpreter);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_search);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_int_pos_310));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_310);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_53d616d00bb74f49228c7ae1bb3d2558));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53d616d00bb74f49228c7ae1bb3d2558);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_messages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_messages);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d940d7cc8c602aa07323e802db90ee7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d940d7cc8c602aa07323e802db90ee7);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResourcesCodeInterpreter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolResourcesCodeInterpreter);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_int_pos_336));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_336);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResourcesFileSearch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolResourcesFileSearch);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_345));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_345);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolResources));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolResources);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_int_pos_355));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_355);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_TruncationStrategy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TruncationStrategy);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_int_pos_361));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_361);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_0aae81306b2b7c186272299970d7ac16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0aae81306b2b7c186272299970d7ac16);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_messages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_messages);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_int_pos_378));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_378);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_406ac393b7cccc2e082753bfc98bac9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_406ac393b7cccc2e082753bfc98bac9a);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_int_pos_387));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_387);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6fdbbf0ef194cb625ab3be29d182c79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6fdbbf0ef194cb625ab3be29d182c79);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreateAndRunParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadCreateAndRunParams);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_6841000af7d894c92cb5a85f345e7fac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6841000af7d894c92cb5a85f345e7fac);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_7dc927cd5771d4a33796e69b4e1ca6f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7dc927cd5771d4a33796e69b4e1ca6f9);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 11
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
static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$CodeInterpreterToolParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CodeInterpreterToolParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CodeInterpreterToolParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CodeInterpreterToolParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CodeInterpreterToolParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolParam);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadCreateAndRunParamsBase(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsBase);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadCreateAndRunParamsBase);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadCreateAndRunParamsBase, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadCreateAndRunParamsBase);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadCreateAndRunParamsBase, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsBase);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsBase);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsBase);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadCreateAndRunParamsNonStreaming(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadCreateAndRunParamsStreaming(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadMessageAttachmentToolFileSearch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypedDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypedDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypedDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypedDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$thread_create_and_run_params$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$thread_create_and_run_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$thread_create_and_run_params->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_18352c4d4a7e7cb230dde8251c971167;
static PyCodeObject *code_objects_2971ca3cc80ee6fb221712966130a705;
static PyCodeObject *code_objects_a6f39e0274d0c18cffe3705a715508a9;
static PyCodeObject *code_objects_d11072203e78b8ac7f43eba00e230eee;
static PyCodeObject *code_objects_62cbdf18afeb75c611f012aa1d2c7e19;
static PyCodeObject *code_objects_911de0825d2d69bd77e4d0cf1cba92b2;
static PyCodeObject *code_objects_bd7944437af20c6bed7710daeb66c385;
static PyCodeObject *code_objects_9555539a4b2d8b256e336a9469c2b394;
static PyCodeObject *code_objects_114f2990a3c87fdbaa6ca741941c1260;
static PyCodeObject *code_objects_6c3645c765aa28f1971b977961cc5022;
static PyCodeObject *code_objects_01a796d5afb2fe8a35d6eaccb8120769;
static PyCodeObject *code_objects_e83b265b41550221a5bf4daf6b4a1c61;
static PyCodeObject *code_objects_5467431019fa558f590ad42d3a419213;
static PyCodeObject *code_objects_1b71e0c60c4757b45930d1203b5d8e2c;
static PyCodeObject *code_objects_9b2ae3a177280e966f8aa109a4ccfa76;
static PyCodeObject *code_objects_d52a57030e61bb49c2b729e58383e689;
static PyCodeObject *code_objects_5059553ac1f1e08625c6303bba89ca90;
static PyCodeObject *code_objects_8d9bf4182758387244f7e31155e7ec1c;
static PyCodeObject *code_objects_b6c2a005e2f4b80b578fd34d73928eda;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6841000af7d894c92cb5a85f345e7fac); CHECK_OBJECT(module_filename_obj);
code_objects_18352c4d4a7e7cb230dde8251c971167 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_7dc927cd5771d4a33796e69b4e1ca6f9, mod_consts.const_str_digest_7dc927cd5771d4a33796e69b4e1ca6f9, NULL, NULL, 0, 0, 0);
code_objects_2971ca3cc80ee6fb221712966130a705 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Thread, mod_consts.const_str_plain_Thread, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a6f39e0274d0c18cffe3705a715508a9 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadCreateAndRunParamsBase, mod_consts.const_str_plain_ThreadCreateAndRunParamsBase, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d11072203e78b8ac7f43eba00e230eee = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming, mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_62cbdf18afeb75c611f012aa1d2c7e19 = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming, mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_911de0825d2d69bd77e4d0cf1cba92b2 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadMessage, mod_consts.const_str_plain_ThreadMessage, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bd7944437af20c6bed7710daeb66c385 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadMessageAttachment, mod_consts.const_str_plain_ThreadMessageAttachment, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9555539a4b2d8b256e336a9469c2b394 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch, mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_114f2990a3c87fdbaa6ca741941c1260 = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadToolResources, mod_consts.const_str_plain_ThreadToolResources, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6c3645c765aa28f1971b977961cc5022 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadToolResourcesCodeInterpreter, mod_consts.const_str_plain_ThreadToolResourcesCodeInterpreter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_01a796d5afb2fe8a35d6eaccb8120769 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadToolResourcesFileSearch, mod_consts.const_str_plain_ThreadToolResourcesFileSearch, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e83b265b41550221a5bf4daf6b4a1c61 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadToolResourcesFileSearchVectorStore, mod_consts.const_str_plain_ThreadToolResourcesFileSearchVectorStore, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5467431019fa558f590ad42d3a419213 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480, mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1b71e0c60c4757b45930d1203b5d8e2c = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860, mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9b2ae3a177280e966f8aa109a4ccfa76 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_fdad030e8bdd14a0a3156895ef1c2315, mod_consts.const_str_digest_fdad030e8bdd14a0a3156895ef1c2315, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d52a57030e61bb49c2b729e58383e689 = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ToolResources, mod_consts.const_str_plain_ToolResources, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5059553ac1f1e08625c6303bba89ca90 = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ToolResourcesCodeInterpreter, mod_consts.const_str_plain_ToolResourcesCodeInterpreter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8d9bf4182758387244f7e31155e7ec1c = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ToolResourcesFileSearch, mod_consts.const_str_plain_ToolResourcesFileSearch, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b6c2a005e2f4b80b578fd34d73928eda = MAKE_CODE_OBJECT(module_filename_obj, 361, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_TruncationStrategy, mod_consts.const_str_plain_TruncationStrategy, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$types$beta$thread_create_and_run_params[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$beta$thread_create_and_run_params);
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
        module_openai$types$beta$thread_create_and_run_params,
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
        function_table_openai$types$beta$thread_create_and_run_params,
        sizeof(function_table_openai$types$beta$thread_create_and_run_params) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.beta.thread_create_and_run_params";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$beta$thread_create_and_run_params(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$beta$thread_create_and_run_params");

    // Store the module for future use.
    module_openai$types$beta$thread_create_and_run_params = module;

    moduledict_openai$types$beta$thread_create_and_run_params = MODULE_DICT(module_openai$types$beta$thread_create_and_run_params);

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
        PRINT_STRING("openai$types$beta$thread_create_and_run_params: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$beta$thread_create_and_run_params: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$beta$thread_create_and_run_params: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.thread_create_and_run_params" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$beta$thread_create_and_run_params\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$beta$thread_create_and_run_params,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$thread_create_and_run_params,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$thread_create_and_run_params,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$thread_create_and_run_params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$thread_create_and_run_params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$beta$thread_create_and_run_params);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$beta$thread_create_and_run_params);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *outline_17_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_18__bases = NULL;
PyObject *tmp_class_container$class_creation_18__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_18__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_18__metaclass = NULL;
PyObject *tmp_class_container$class_creation_18__prepared = NULL;
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
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params;
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
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_13;
NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_14;
NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_15;
NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_16;
NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_17;
NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_18;
NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
PyObject *locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_19;
NUITKA_MAY_BE_UNUSED char const *type_description_19 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_55;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_56;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$beta$thread_create_and_run_params = MAKE_MODULE_FRAME(code_objects_18352c4d4a7e7cb230dde8251c971167, module_openai$types$beta$thread_create_and_run_params);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$beta$thread_create_and_run_params$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$beta$thread_create_and_run_params$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 6;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_Required,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Required);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Required, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_TypedDict,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_TypedDict);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_5999cd146c93be3fdce51a08986ddf99;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ChatModel_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 8;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_ChatModel,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ChatModel);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatModel, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_assistant_tool_param;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_AssistantToolParam_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 9;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_AssistantToolParam,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_AssistantToolParam);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_AssistantToolParam, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_f08f77b4258590d61446416ee765c721;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Metadata_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 10;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_Metadata,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Metadata);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Metadata, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_code_interpreter_tool_param;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_CodeInterpreterToolParam_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 11;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_CodeInterpreterToolParam,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_CodeInterpreterToolParam);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolParam, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_assistant_tool_choice_option_param;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_AssistantToolChoiceOptionParam_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 12;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_AssistantToolChoiceOptionParam,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_AssistantToolChoiceOptionParam);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_AssistantToolChoiceOptionParam, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_95741e66c50bb31c9ce0468476ed697a;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 13;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_MessageContentPartParam,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_MessageContentPartParam);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageContentPartParam, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_assistant_response_format_option_param;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_AssistantResponseFormatOptionParam_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 14;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$types$beta$thread_create_and_run_params,
        mod_consts.const_str_plain_AssistantResponseFormatOptionParam,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_AssistantResponseFormatOptionParam);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_AssistantResponseFormatOptionParam, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = LIST_COPY(tstate, mod_consts.const_list_cecfd10625b7939ce52f27dd826de281_list);
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_23);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto try_except_handler_3;
}
tmp_assign_source_24 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_25 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
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


exception_lineno = 40;

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


exception_lineno = 40;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_27;
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


exception_lineno = 40;

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
PyObject *tmp_assign_source_28;
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


exception_lineno = 40;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_ThreadCreateAndRunParamsBase;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 40;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
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


exception_lineno = 40;

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
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_9, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

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


exception_lineno = 40;

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


exception_lineno = 40;

    goto try_except_handler_3;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 40;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 40;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
branch_end_1:;
{
PyObject *tmp_assign_source_30;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadCreateAndRunParamsBase;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_40;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_5;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_5;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_2 = MAKE_CLASS_FRAME(tstate, code_objects_a6f39e0274d0c18cffe3705a715508a9, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_2);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_a9021537fea859ba8304d6087727e1a0;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_assistant_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_c73708c23affefa1977be4020e7d77bc;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_instructions;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_e62fe7561b30f2de13c58dd6be1c61da;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_max_completion_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_e62fe7561b30f2de13c58dd6be1c61da;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_max_prompt_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_metadata;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_6dbcd162e11486ca060081bfb09ec79c;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_model;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_parallel_tool_calls;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_52119d4cdbe4f8c0d8957cb777675812;
tmp_ass_subscribed_8 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_response_format;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_digest_39faefb44ab346fff42c81b05ff5a9f3;
tmp_ass_subscribed_9 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_temperature;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_plain_Thread;
tmp_ass_subscribed_10 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_thread;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_digest_bd0de8aea4830996a876d68806a785e6;
tmp_ass_subscribed_11 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_tool_choice;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = mod_consts.const_str_digest_90f2f573607d8298f38b72c71f6baa4c;
tmp_ass_subscribed_12 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_tool_resources;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_ass_subvalue_13 = mod_consts.const_str_digest_e458b8467a68652af8cf0063073d89ec;
tmp_ass_subscribed_13 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_tools;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_ass_subvalue_14 = mod_consts.const_str_digest_39faefb44ab346fff42c81b05ff5a9f3;
tmp_ass_subscribed_14 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_top_p;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
CHECK_OBJECT(tmp_ass_subscribed_14);
Py_DECREF(tmp_ass_subscribed_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_ass_subvalue_15 = mod_consts.const_str_digest_bbcd516f4b7cdcb937d1a8e7994d8aca;
tmp_ass_subscribed_15 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_truncation_strategy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
CHECK_OBJECT(tmp_ass_subscribed_15);
Py_DECREF(tmp_ass_subscribed_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_2);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

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


exception_lineno = 40;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_ThreadCreateAndRunParamsBase;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 40;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_31;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_30 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40);
locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40);
locals_openai$types$beta$thread_create_and_run_params$$$class__1_ThreadCreateAndRunParamsBase_40 = NULL;
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
exception_lineno = 40;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsBase, tmp_assign_source_30);
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
PyObject *tmp_assign_source_32;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;

    goto try_except_handler_6;
}
tmp_assign_source_32 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_33 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
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


exception_lineno = 176;

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
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_35 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_35;
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


exception_lineno = 176;

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
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_6;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 176;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_36;
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


exception_lineno = 176;

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
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_6;
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


exception_lineno = 176;

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


exception_lineno = 176;

    goto try_except_handler_6;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 176;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 176;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_37;
}
branch_end_4:;
{
PyObject *tmp_assign_source_38;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_176;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_3 = MAKE_CLASS_FRAME(tstate, code_objects_9555539a4b2d8b256e336a9469c2b394, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_3);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_ass_subvalue_16 = mod_consts.const_str_digest_24bdbc8e482b8ee8cba321b5e2da8339;
tmp_ass_subscribed_16 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_16 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
CHECK_OBJECT(tmp_ass_subscribed_16);
Py_DECREF(tmp_ass_subscribed_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_3);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

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


exception_lineno = 176;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 176;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_39;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_38 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_38);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176);
locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176);
locals_openai$types$beta$thread_create_and_run_params$$$class__2_ThreadMessageAttachmentToolFileSearch_176 = NULL;
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
exception_lineno = 176;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch, tmp_assign_source_38);
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
PyObject *tmp_assign_source_40;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_9;
tmp_expression_value_13 = module_var_accessor_openai$types$beta$thread_create_and_run_params$Union(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;

    goto frame_exception_exit_1;
}
tmp_tuple_element_9 = module_var_accessor_openai$types$beta$thread_create_and_run_params$CodeInterpreterToolParam(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CodeInterpreterToolParam);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadMessageAttachmentToolFileSearch(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadMessageAttachmentToolFileSearch);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_9);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageAttachmentTool, tmp_assign_source_40);
}
{
PyObject *tmp_ass_subvalue_17;
PyObject *tmp_ass_subscribed_17;
PyObject *tmp_ass_subscript_17;
tmp_ass_subvalue_17 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_17 = module_var_accessor_openai$types$beta$thread_create_and_run_params$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_17 = mod_consts.const_str_plain_ThreadMessageAttachmentTool;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto try_except_handler_9;
}
tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_42 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

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
tmp_expression_value_14 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_4, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_44;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

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
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_9;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_ThreadMessageAttachment;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 184;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_45;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_17 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

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
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_18;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_11, tmp_default_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_9;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 184;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 184;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_46;
}
branch_end_7:;
{
PyObject *tmp_assign_source_47;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadMessageAttachment;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_184;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_11;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_11;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_4 = MAKE_CLASS_FRAME(tstate, code_objects_bd7944437af20c6bed7710daeb66c385, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_4);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_18;
PyObject *tmp_ass_subscribed_18;
PyObject *tmp_ass_subscript_18;
tmp_ass_subvalue_18 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_18 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_18 = mod_consts.const_str_plain_file_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
CHECK_OBJECT(tmp_ass_subscribed_18);
Py_DECREF(tmp_ass_subscribed_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_19;
PyObject *tmp_ass_subscribed_19;
PyObject *tmp_ass_subscript_19;
tmp_ass_subvalue_19 = mod_consts.const_str_digest_e7e26a6d97c6f116f9a1d96fa4bfb5bc;
tmp_ass_subscribed_19 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 188;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_19 = mod_consts.const_str_plain_tools;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
CHECK_OBJECT(tmp_ass_subscribed_19);
Py_DECREF(tmp_ass_subscribed_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_4);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

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


exception_lineno = 184;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_11;
}
branch_no_9:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_ThreadMessageAttachment;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 184;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_48;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_47 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_47);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184);
locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184);
locals_openai$types$beta$thread_create_and_run_params$$$class__3_ThreadMessageAttachment_184 = NULL;
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
exception_lineno = 184;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageAttachment, tmp_assign_source_47);
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
PyObject *tmp_assign_source_49;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto try_except_handler_12;
}
tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_50 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

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
tmp_expression_value_20 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_5, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_52;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

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
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
tmp_tuple_element_15 = mod_consts.const_str_plain_ThreadMessage;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 192;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_53;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_23 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

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
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_24;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_12, tmp_default_value_4);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_25;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_25 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 192;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 192;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_54;
}
branch_end_10:;
{
PyObject *tmp_assign_source_55;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadMessage;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_192;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_14;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_14;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_5 = MAKE_CLASS_FRAME(tstate, code_objects_911de0825d2d69bd77e4d0cf1cba92b2, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_5);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_20;
PyObject *tmp_ass_subscribed_20;
PyObject *tmp_ass_subscript_20;
tmp_ass_subvalue_20 = mod_consts.const_str_digest_ff98c05ce72950312c439033261eb791;
tmp_ass_subscribed_20 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_20 = mod_consts.const_str_plain_content;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
CHECK_OBJECT(tmp_ass_subscribed_20);
Py_DECREF(tmp_ass_subscribed_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_21;
PyObject *tmp_ass_subscribed_21;
PyObject *tmp_ass_subscript_21;
tmp_ass_subvalue_21 = mod_consts.const_str_digest_6edd3b9340ae15da4fe0b4b9be3fff8a;
tmp_ass_subscribed_21 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 196;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_21 = mod_consts.const_str_plain_role;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
CHECK_OBJECT(tmp_ass_subscribed_21);
Py_DECREF(tmp_ass_subscribed_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_22;
PyObject *tmp_ass_subscribed_22;
PyObject *tmp_ass_subscript_22;
tmp_ass_subvalue_22 = mod_consts.const_str_digest_e2ba7c5beb8a1ac0bc14d07ecdaf4f14;
tmp_ass_subscribed_22 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 205;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_22 = mod_consts.const_str_plain_attachments;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
CHECK_OBJECT(tmp_ass_subscribed_22);
Py_DECREF(tmp_ass_subscribed_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_23;
PyObject *tmp_ass_subscribed_23;
PyObject *tmp_ass_subscript_23;
tmp_ass_subvalue_23 = mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135;
tmp_ass_subscribed_23 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_23 = mod_consts.const_str_plain_metadata;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
CHECK_OBJECT(tmp_ass_subscribed_23);
Py_DECREF(tmp_ass_subscribed_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_5);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

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


exception_lineno = 192;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_14;
}
branch_no_12:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_17 = mod_consts.const_str_plain_ThreadMessage;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 192;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_14;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_56;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_55 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192);
locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192);
locals_openai$types$beta$thread_create_and_run_params$$$class__4_ThreadMessage_192 = NULL;
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
exception_lineno = 192;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessage, tmp_assign_source_55);
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
PyObject *tmp_assign_source_57;
PyObject *tmp_tuple_element_18;
tmp_tuple_element_18 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;

    goto try_except_handler_15;
}
tmp_assign_source_57 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_18);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_58 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

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
tmp_expression_value_26 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_6, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_15;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_15;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_60 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_60;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

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
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_15;
}
tmp_tuple_element_19 = mod_consts.const_str_plain_ThreadToolResourcesCodeInterpreter;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 219;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_61;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_29 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

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
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_30;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_30, tmp_name_value_13, tmp_default_value_5);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_15;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_31;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_31 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_15;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 219;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 219;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_62;
}
branch_end_13:;
{
PyObject *tmp_assign_source_63;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadToolResourcesCodeInterpreter;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_219;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_17;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_17;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_6 = MAKE_CLASS_FRAME(tstate, code_objects_6c3645c765aa28f1971b977961cc5022, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_6);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_6) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_24;
PyObject *tmp_ass_subscribed_24;
PyObject *tmp_ass_subscript_24;
tmp_ass_subvalue_24 = mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45;
tmp_ass_subscribed_24 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_24 = mod_consts.const_str_plain_file_ids;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
CHECK_OBJECT(tmp_ass_subscribed_24);
Py_DECREF(tmp_ass_subscribed_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_6);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

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


exception_lineno = 219;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_17;
}
branch_no_15:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_21 = mod_consts.const_str_plain_ThreadToolResourcesCodeInterpreter;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 219;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_17;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_64;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_63 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_63);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219);
locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219);
locals_openai$types$beta$thread_create_and_run_params$$$class__5_ThreadToolResourcesCodeInterpreter_219 = NULL;
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
exception_lineno = 219;
goto try_except_handler_15;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadToolResourcesCodeInterpreter, tmp_assign_source_63);
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
PyObject *tmp_assign_source_65;
PyObject *tmp_tuple_element_22;
tmp_tuple_element_22 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;

    goto try_except_handler_18;
}
tmp_assign_source_65 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_65, 0, tmp_tuple_element_22);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_66 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

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
tmp_expression_value_32 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_7, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_18;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_18;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_68 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_68;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

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
PyObject *tmp_assign_source_69;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_34;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_18;
}
tmp_tuple_element_23 = mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 228;
tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_69;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_35 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

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
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_36;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_36, tmp_name_value_14, tmp_default_value_6);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_18;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_37 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_37 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_24);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_18;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 228;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 228;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_70;
}
branch_end_16:;
{
PyObject *tmp_assign_source_71;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_228;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_20;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_20;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7 = MAKE_CLASS_FRAME(tstate, code_objects_5467431019fa558f590ad42d3a419213, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_25;
PyObject *tmp_ass_subscribed_25;
PyObject *tmp_ass_subscript_25;
tmp_ass_subvalue_25 = mod_consts.const_str_digest_d5944c53179ece858010150e36b2975a;
tmp_ass_subscribed_25 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_25 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
CHECK_OBJECT(tmp_ass_subscribed_25);
Py_DECREF(tmp_ass_subscribed_25);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_7);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

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


exception_lineno = 228;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_20;
}
branch_no_18:;
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_25 = mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_25);
tmp_tuple_element_25 = locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 228;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_20;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_72;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_71 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_71);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228);
locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228);
locals_openai$types$beta$thread_create_and_run_params$$$class__6_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto_228 = NULL;
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
exception_lineno = 228;
goto try_except_handler_18;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480, tmp_assign_source_71);
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
PyObject *tmp_assign_source_73;
PyObject *tmp_tuple_element_26;
tmp_tuple_element_26 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;

    goto try_except_handler_21;
}
tmp_assign_source_73 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_73, 0, tmp_tuple_element_26);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_74 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

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
tmp_expression_value_38 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_8, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_21;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_21;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_76 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_76;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

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
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_40 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_21;
}
tmp_tuple_element_27 = mod_consts.const_str_digest_fdad030e8bdd14a0a3156895ef1c2315;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 233;
tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_77;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_41 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

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
PyObject *tmp_expression_value_42;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_42, tmp_name_value_15, tmp_default_value_7);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_21;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_43;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_43 == NULL));
tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

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


exception_lineno = 233;

    goto try_except_handler_21;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 233;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 233;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_78;
}
branch_end_19:;
{
PyObject *tmp_assign_source_79;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_digest_fdad030e8bdd14a0a3156895ef1c2315;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_233;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_23;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_23;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8 = MAKE_CLASS_FRAME(tstate, code_objects_9b2ae3a177280e966f8aa109a4ccfa76, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_26;
PyObject *tmp_ass_subscribed_26;
PyObject *tmp_ass_subscript_26;
tmp_ass_subvalue_26 = mod_consts.const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40;
tmp_ass_subscribed_26 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_26 = mod_consts.const_str_plain_chunk_overlap_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
CHECK_OBJECT(tmp_ass_subscribed_26);
Py_DECREF(tmp_ass_subscribed_26);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_ass_subvalue_27;
PyObject *tmp_ass_subscribed_27;
PyObject *tmp_ass_subscript_27;
tmp_ass_subvalue_27 = mod_consts.const_str_digest_fb703d6d6c6550fbcb7a7bac00a7cc40;
tmp_ass_subscribed_27 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_27 = mod_consts.const_str_plain_max_chunk_size_tokens;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
CHECK_OBJECT(tmp_ass_subscribed_27);
Py_DECREF(tmp_ass_subscribed_27);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_8);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

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


exception_lineno = 233;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_23;
}
branch_no_21:;
{
PyObject *tmp_assign_source_80;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_29 = mod_consts.const_str_digest_fdad030e8bdd14a0a3156895ef1c2315;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_29);
tmp_tuple_element_29 = locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 233;
tmp_assign_source_80 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;

    goto try_except_handler_23;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_80;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_79 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_79);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233);
locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233);
locals_openai$types$beta$thread_create_and_run_params$$$class__7_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStaticStatic_233 = NULL;
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
exception_lineno = 233;
goto try_except_handler_21;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_digest_fdad030e8bdd14a0a3156895ef1c2315, tmp_assign_source_79);
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
PyObject *tmp_assign_source_81;
PyObject *tmp_tuple_element_30;
tmp_tuple_element_30 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto try_except_handler_24;
}
tmp_assign_source_81 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_81, 0, tmp_tuple_element_30);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_82 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_82;
}
{
PyObject *tmp_assign_source_83;
tmp_assign_source_83 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_83;
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

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
tmp_expression_value_44 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_9, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_24;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_24;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_84 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_84;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

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
PyObject *tmp_assign_source_85;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_46;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_24;
}
tmp_tuple_element_31 = mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 248;
tmp_assign_source_85 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_85;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_47 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

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
PyObject *tmp_expression_value_48;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_16, tmp_default_value_8);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_24;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_49;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

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


exception_lineno = 248;

    goto try_except_handler_24;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 248;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 248;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_24;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_86;
tmp_assign_source_86 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_86;
}
branch_end_22:;
{
PyObject *tmp_assign_source_87;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_int_pos_248;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_26;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_26;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9 = MAKE_CLASS_FRAME(tstate, code_objects_1b71e0c60c4757b45930d1203b5d8e2c, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_28;
PyObject *tmp_ass_subscribed_28;
PyObject *tmp_ass_subscript_28;
tmp_ass_subvalue_28 = mod_consts.const_str_digest_dc0c089c6cd9f4941f937f31cf0fdac6;
tmp_ass_subscribed_28 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 249;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_28 = mod_consts.const_str_plain_static;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
CHECK_OBJECT(tmp_ass_subscribed_28);
Py_DECREF(tmp_ass_subscribed_28);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
{
PyObject *tmp_ass_subvalue_29;
PyObject *tmp_ass_subscribed_29;
PyObject *tmp_ass_subscript_29;
tmp_ass_subvalue_29 = mod_consts.const_str_digest_dcfed387d2fd51ff79e1a56c43a52e57;
tmp_ass_subscribed_29 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_29 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
CHECK_OBJECT(tmp_ass_subscribed_29);
Py_DECREF(tmp_ass_subscribed_29);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_9);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

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


exception_lineno = 248;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_26;
}
branch_no_24:;
{
PyObject *tmp_assign_source_88;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_33 = mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_33);
tmp_tuple_element_33 = locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 248;
tmp_assign_source_88 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_26;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_88;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_87 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_87);
goto try_return_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248);
locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248 = NULL;
goto try_return_handler_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248);
locals_openai$types$beta$thread_create_and_run_params$$$class__8_ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic_248 = NULL;
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
exception_lineno = 248;
goto try_except_handler_24;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860, tmp_assign_source_87);
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
PyObject *tmp_assign_source_89;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_34;
tmp_expression_value_50 = module_var_accessor_openai$types$beta$thread_create_and_run_params$Union(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

    goto frame_exception_exit_1;
}
tmp_tuple_element_34 = module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadToolResourcesFileSearchVectorStoreChunkingStrategyAuto(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_b217f8c5fe9b8ba6715407460349f480);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;

    goto frame_exception_exit_1;
}
tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_34);
tmp_tuple_element_34 = module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadToolResourcesFileSearchVectorStoreChunkingStrategyStatic(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_77a05b89abfa64279c0eec32cd4eb860);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_34);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_subscript_value_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_assign_source_89 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_digest_d1b1af5e19d0ec6f38f8b00770c2c9db, tmp_assign_source_89);
}
{
PyObject *tmp_ass_subvalue_30;
PyObject *tmp_ass_subscribed_30;
PyObject *tmp_ass_subscript_30;
tmp_ass_subvalue_30 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_30 = module_var_accessor_openai$types$beta$thread_create_and_run_params$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_30 = mod_consts.const_str_digest_d1b1af5e19d0ec6f38f8b00770c2c9db;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_90;
PyObject *tmp_tuple_element_35;
tmp_tuple_element_35 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto try_except_handler_27;
}
tmp_assign_source_90 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_90, 0, tmp_tuple_element_35);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_90;
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_91 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

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
tmp_expression_value_51 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_11, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_27;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_27;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_93 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_93;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_52 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

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
PyObject *tmp_assign_source_94;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_53;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_36;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_27;
}
tmp_tuple_element_36 = mod_consts.const_str_plain_ThreadToolResourcesFileSearchVectorStore;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_36 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 261;
tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_94;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_54;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_54 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

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
PyObject *tmp_tuple_element_37;
PyObject *tmp_expression_value_55;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_55 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_37 = BUILTIN_GETATTR(tstate, tmp_expression_value_55, tmp_name_value_17, tmp_default_value_9);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_27;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_56;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_56 == NULL));
tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_37);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_27;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 261;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 261;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_27;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_95;
tmp_assign_source_95 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_95;
}
branch_end_25:;
{
PyObject *tmp_assign_source_96;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadToolResourcesFileSearchVectorStore;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_int_pos_261;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_29;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_29;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_10 = MAKE_CLASS_FRAME(tstate, code_objects_e83b265b41550221a5bf4daf6b4a1c61, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_10);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_10) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_31;
PyObject *tmp_ass_subscribed_31;
PyObject *tmp_ass_subscript_31;
tmp_ass_subvalue_31 = mod_consts.const_str_digest_d1b1af5e19d0ec6f38f8b00770c2c9db;
tmp_ass_subscribed_31 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_31 = mod_consts.const_str_plain_chunking_strategy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
CHECK_OBJECT(tmp_ass_subscribed_31);
Py_DECREF(tmp_ass_subscribed_31);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_subvalue_32;
PyObject *tmp_ass_subscribed_32;
PyObject *tmp_ass_subscript_32;
tmp_ass_subvalue_32 = mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45;
tmp_ass_subscribed_32 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_32 = mod_consts.const_str_plain_file_ids;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
CHECK_OBJECT(tmp_ass_subscribed_32);
Py_DECREF(tmp_ass_subscribed_32);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_subvalue_33;
PyObject *tmp_ass_subscribed_33;
PyObject *tmp_ass_subscript_33;
tmp_ass_subvalue_33 = mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135;
tmp_ass_subscribed_33 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_33 = mod_consts.const_str_plain_metadata;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
CHECK_OBJECT(tmp_ass_subscribed_33);
Py_DECREF(tmp_ass_subscribed_33);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_10);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

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


exception_lineno = 261;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_29;
}
branch_no_27:;
{
PyObject *tmp_assign_source_97;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_38;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_38 = mod_consts.const_str_plain_ThreadToolResourcesFileSearchVectorStore;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_38 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_38);
tmp_tuple_element_38 = locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 261;
tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_29;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_97;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_96 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_96);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261);
locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261 = NULL;
goto try_return_handler_28;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261);
locals_openai$types$beta$thread_create_and_run_params$$$class__9_ThreadToolResourcesFileSearchVectorStore_261 = NULL;
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
exception_lineno = 261;
goto try_except_handler_27;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadToolResourcesFileSearchVectorStore, tmp_assign_source_96);
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
PyObject *tmp_assign_source_98;
PyObject *tmp_tuple_element_39;
tmp_tuple_element_39 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;

    goto try_except_handler_30;
}
tmp_assign_source_98 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_98, 0, tmp_tuple_element_39);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_98;
}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_99 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_99;
}
{
PyObject *tmp_assign_source_100;
tmp_assign_source_100 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_100;
}
{
PyObject *tmp_assign_source_101;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

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
tmp_expression_value_57 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_57, tmp_subscript_value_12, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_30;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_30;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_101 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_101;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_58 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

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
PyObject *tmp_assign_source_102;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_59;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_40;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_30;
}
tmp_tuple_element_40 = mod_consts.const_str_plain_ThreadToolResourcesFileSearch;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_40 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 286;
tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_102;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_60;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_60 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

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
PyObject *tmp_tuple_element_41;
PyObject *tmp_expression_value_61;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_61 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_61, tmp_name_value_18, tmp_default_value_10);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_30;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_62;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_62 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_62 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_41);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_30;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_30;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 286;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 286;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_30;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_103;
tmp_assign_source_103 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_103;
}
branch_end_28:;
{
PyObject *tmp_assign_source_104;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadToolResourcesFileSearch;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_int_pos_286;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_32;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_32;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_11 = MAKE_CLASS_FRAME(tstate, code_objects_01a796d5afb2fe8a35d6eaccb8120769, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_11);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_11) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_34;
PyObject *tmp_ass_subscribed_34;
PyObject *tmp_ass_subscript_34;
tmp_ass_subvalue_34 = mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45;
tmp_ass_subscribed_34 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_11;
}

if (tmp_ass_subscribed_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscript_34 = mod_consts.const_str_plain_vector_store_ids;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
CHECK_OBJECT(tmp_ass_subscribed_34);
Py_DECREF(tmp_ass_subscribed_34);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}
{
PyObject *tmp_ass_subvalue_35;
PyObject *tmp_ass_subscribed_35;
PyObject *tmp_ass_subscript_35;
tmp_ass_subvalue_35 = mod_consts.const_str_digest_f40e6852eee4dc147ca8c1e833e7e2c1;
tmp_ass_subscribed_35 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_11;
}

if (tmp_ass_subscribed_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscript_35 = mod_consts.const_str_plain_vector_stores;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
CHECK_OBJECT(tmp_ass_subscribed_35);
Py_DECREF(tmp_ass_subscribed_35);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_11,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_11);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

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


exception_lineno = 286;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_32;
}
branch_no_30:;
{
PyObject *tmp_assign_source_105;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_42;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_20 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_42 = mod_consts.const_str_plain_ThreadToolResourcesFileSearch;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_42 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_42);
tmp_tuple_element_42 = locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 286;
tmp_assign_source_105 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto try_except_handler_32;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_105;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_104 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_104);
goto try_return_handler_32;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286);
locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286 = NULL;
goto try_return_handler_31;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286);
locals_openai$types$beta$thread_create_and_run_params$$$class__10_ThreadToolResourcesFileSearch_286 = NULL;
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
exception_lineno = 286;
goto try_except_handler_30;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadToolResourcesFileSearch, tmp_assign_source_104);
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
PyObject *tmp_outline_return_value_11;
// Tried code:
{
PyObject *tmp_assign_source_106;
PyObject *tmp_tuple_element_43;
tmp_tuple_element_43 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;

    goto try_except_handler_33;
}
tmp_assign_source_106 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_106, 0, tmp_tuple_element_43);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_106;
}
{
PyObject *tmp_assign_source_107;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_107 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_107;
}
{
PyObject *tmp_assign_source_108;
tmp_assign_source_108 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_108;
}
{
PyObject *tmp_assign_source_109;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

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
tmp_expression_value_63 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_63, tmp_subscript_value_13, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_33;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_33;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_109 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_109;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_64;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_64 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

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
PyObject *tmp_assign_source_110;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_65;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_44;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_33;
}
tmp_tuple_element_44 = mod_consts.const_str_plain_ThreadToolResources;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_44 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 304;
tmp_assign_source_110 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_110;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_66;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_66 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_66, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

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
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_67;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_67 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_67, tmp_name_value_19, tmp_default_value_11);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_33;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_68;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_68 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_68 == NULL));
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_68);
Py_DECREF(tmp_expression_value_68);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_45);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_33;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_33;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 304;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 304;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_33;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_111;
tmp_assign_source_111 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_111;
}
branch_end_31:;
{
PyObject *tmp_assign_source_112;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadToolResources;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_int_pos_304;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_35;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_35;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_12 = MAKE_CLASS_FRAME(tstate, code_objects_114f2990a3c87fdbaa6ca741941c1260, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_12);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_12) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_36;
PyObject *tmp_ass_subscribed_36;
PyObject *tmp_ass_subscript_36;
tmp_ass_subvalue_36 = mod_consts.const_str_plain_ThreadToolResourcesCodeInterpreter;
tmp_ass_subscribed_36 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 305;
type_description_2 = "o";
    goto frame_exception_exit_12;
}

if (tmp_ass_subscribed_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscript_36 = mod_consts.const_str_plain_code_interpreter;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
CHECK_OBJECT(tmp_ass_subscribed_36);
Py_DECREF(tmp_ass_subscribed_36);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}
{
PyObject *tmp_ass_subvalue_37;
PyObject *tmp_ass_subscribed_37;
PyObject *tmp_ass_subscript_37;
tmp_ass_subvalue_37 = mod_consts.const_str_plain_ThreadToolResourcesFileSearch;
tmp_ass_subscribed_37 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 307;
type_description_2 = "o";
    goto frame_exception_exit_12;
}

if (tmp_ass_subscribed_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscript_37 = mod_consts.const_str_plain_file_search;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
CHECK_OBJECT(tmp_ass_subscribed_37);
Py_DECREF(tmp_ass_subscribed_37);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_12,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_12);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

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


exception_lineno = 304;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_35;
}
branch_no_33:;
{
PyObject *tmp_assign_source_113;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_46;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_46 = mod_consts.const_str_plain_ThreadToolResources;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_46 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_46);
tmp_tuple_element_46 = locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 304;
tmp_assign_source_113 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto try_except_handler_35;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_113;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_112 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_112);
goto try_return_handler_35;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_35:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304);
locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304 = NULL;
goto try_return_handler_34;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304);
locals_openai$types$beta$thread_create_and_run_params$$$class__11_ThreadToolResources_304 = NULL;
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
exception_lineno = 304;
goto try_except_handler_33;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadToolResources, tmp_assign_source_112);
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
PyObject *tmp_assign_source_114;
PyObject *tmp_tuple_element_47;
tmp_tuple_element_47 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;

    goto try_except_handler_36;
}
tmp_assign_source_114 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_114, 0, tmp_tuple_element_47);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_114;
}
{
PyObject *tmp_assign_source_115;
PyObject *tmp_direct_call_arg1_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_12 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12};
    tmp_assign_source_115 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_115;
}
{
PyObject *tmp_assign_source_116;
tmp_assign_source_116 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_116;
}
{
PyObject *tmp_assign_source_117;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_12;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_69;
PyObject *tmp_subscript_value_14;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

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
tmp_expression_value_69 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_14 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_69, tmp_subscript_value_14, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_36;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_36;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_117 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_117;
}
{
bool tmp_condition_result_46;
PyObject *tmp_expression_value_70;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_70 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

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
PyObject *tmp_assign_source_118;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_71;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_48;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_36;
}
tmp_tuple_element_48 = mod_consts.const_str_plain_Thread;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_48 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 310;
tmp_assign_source_118 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_118;
}
{
bool tmp_condition_result_47;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_72;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_72 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_72, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

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
PyObject *tmp_tuple_element_49;
PyObject *tmp_expression_value_73;
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_73 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_49 = BUILTIN_GETATTR(tstate, tmp_expression_value_73, tmp_name_value_20, tmp_default_value_12);
if (tmp_tuple_element_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_36;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_74;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_24 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_74 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_74 == NULL));
tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_74);
Py_DECREF(tmp_expression_value_74);
if (tmp_tuple_element_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_49);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_36;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_36;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 310;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 310;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_36;
}
branch_no_35:;
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_assign_source_119;
tmp_assign_source_119 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_119;
}
branch_end_34:;
{
PyObject *tmp_assign_source_120;
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_str_plain_Thread;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_int_pos_310;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_38;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_38;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_13 = MAKE_CLASS_FRAME(tstate, code_objects_2971ca3cc80ee6fb221712966130a705, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_13);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_13) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_38;
PyObject *tmp_ass_subscribed_38;
PyObject *tmp_ass_subscript_38;
tmp_ass_subvalue_38 = mod_consts.const_str_digest_53d616d00bb74f49228c7ae1bb3d2558;
tmp_ass_subscribed_38 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 311;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_38 = mod_consts.const_str_plain_messages;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
CHECK_OBJECT(tmp_ass_subscribed_38);
Py_DECREF(tmp_ass_subscribed_38);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
{
PyObject *tmp_ass_subvalue_39;
PyObject *tmp_ass_subscribed_39;
PyObject *tmp_ass_subscript_39;
tmp_ass_subvalue_39 = mod_consts.const_str_digest_2bb590217e6f13f3baacdb879846a135;
tmp_ass_subscribed_39 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_39 = mod_consts.const_str_plain_metadata;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
CHECK_OBJECT(tmp_ass_subscribed_39);
Py_DECREF(tmp_ass_subscribed_39);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
{
PyObject *tmp_ass_subvalue_40;
PyObject *tmp_ass_subscribed_40;
PyObject *tmp_ass_subscript_40;
tmp_ass_subvalue_40 = mod_consts.const_str_digest_2d940d7cc8c602aa07323e802db90ee7;
tmp_ass_subscribed_40 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 327;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_40 = mod_consts.const_str_plain_tool_resources;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
CHECK_OBJECT(tmp_ass_subscribed_40);
Py_DECREF(tmp_ass_subscribed_40);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_13,
    type_description_2,
    outline_11_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_13);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

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


exception_lineno = 310;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_38;
}
branch_no_36:;
{
PyObject *tmp_assign_source_121;
PyObject *tmp_called_value_24;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_50;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_called_value_24 = tmp_class_container$class_creation_12__metaclass;
tmp_tuple_element_50 = mod_consts.const_str_plain_Thread;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_50 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_50);
tmp_tuple_element_50 = locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310;
PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 310;
tmp_assign_source_121 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_121 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto try_except_handler_38;
}
assert(outline_11_var___class__ == NULL);
outline_11_var___class__ = tmp_assign_source_121;
}
CHECK_OBJECT(outline_11_var___class__);
tmp_assign_source_120 = outline_11_var___class__;
Py_INCREF(tmp_assign_source_120);
goto try_return_handler_38;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_38:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310);
locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310 = NULL;
goto try_return_handler_37;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310);
locals_openai$types$beta$thread_create_and_run_params$$$class__12_Thread_310 = NULL;
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
exception_lineno = 310;
goto try_except_handler_36;
outline_result_24:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_Thread, tmp_assign_source_120);
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
PyObject *tmp_assign_source_122;
PyObject *tmp_tuple_element_51;
tmp_tuple_element_51 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 336;

    goto try_except_handler_39;
}
tmp_assign_source_122 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_122, 0, tmp_tuple_element_51);
assert(tmp_class_container$class_creation_13__bases_orig == NULL);
tmp_class_container$class_creation_13__bases_orig = tmp_assign_source_122;
}
{
PyObject *tmp_assign_source_123;
PyObject *tmp_direct_call_arg1_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_direct_call_arg1_13 = tmp_class_container$class_creation_13__bases_orig;
Py_INCREF(tmp_direct_call_arg1_13);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_13};
    tmp_assign_source_123 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_123 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__bases == NULL);
tmp_class_container$class_creation_13__bases = tmp_assign_source_123;
}
{
PyObject *tmp_assign_source_124;
tmp_assign_source_124 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_13__class_decl_dict == NULL);
tmp_class_container$class_creation_13__class_decl_dict = tmp_assign_source_124;
}
{
PyObject *tmp_assign_source_125;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_49;
int tmp_truth_name_13;
PyObject *tmp_type_arg_25;
PyObject *tmp_expression_value_75;
PyObject *tmp_subscript_value_15;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_container$class_creation_13__bases);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

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
tmp_expression_value_75 = tmp_class_container$class_creation_13__bases;
tmp_subscript_value_15 = const_int_0;
tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_75, tmp_subscript_value_15, 0);
if (tmp_type_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_39;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
CHECK_OBJECT(tmp_type_arg_25);
Py_DECREF(tmp_type_arg_25);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_39;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_13__bases;
tmp_assign_source_125 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__metaclass == NULL);
tmp_class_container$class_creation_13__metaclass = tmp_assign_source_125;
}
{
bool tmp_condition_result_50;
PyObject *tmp_expression_value_76;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_76 = tmp_class_container$class_creation_13__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

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
PyObject *tmp_assign_source_126;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_77;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_52;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_77 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_39;
}
tmp_tuple_element_52 = mod_consts.const_str_plain_ToolResourcesCodeInterpreter;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_52 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_25 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 336;
tmp_assign_source_126 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_126;
}
{
bool tmp_condition_result_51;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_78;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_expression_value_78 = tmp_class_container$class_creation_13__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_78, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

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
PyObject *tmp_tuple_element_53;
PyObject *tmp_expression_value_79;
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_79 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_53 = BUILTIN_GETATTR(tstate, tmp_expression_value_79, tmp_name_value_21, tmp_default_value_13);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_39;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_80;
PyObject *tmp_type_arg_26;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_type_arg_26 = tmp_class_container$class_creation_13__prepared;
tmp_expression_value_80 = BUILTIN_TYPE1(tmp_type_arg_26);
assert(!(tmp_expression_value_80 == NULL));
tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_80);
Py_DECREF(tmp_expression_value_80);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_53);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_mod_expr_right_13);
goto try_except_handler_39;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_make_exception_arg_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
CHECK_OBJECT(tmp_mod_expr_right_13);
Py_DECREF(tmp_mod_expr_right_13);
if (tmp_make_exception_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_39;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 336;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 336;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_39;
}
branch_no_38:;
goto branch_end_37;
branch_no_37:;
{
PyObject *tmp_assign_source_127;
tmp_assign_source_127 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_127;
}
branch_end_37:;
{
PyObject *tmp_assign_source_128;
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_13__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_str_plain_ToolResourcesCodeInterpreter;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_int_pos_336;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_41;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_41;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_14 = MAKE_CLASS_FRAME(tstate, code_objects_5059553ac1f1e08625c6303bba89ca90, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_14);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_14) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_41;
PyObject *tmp_ass_subscribed_41;
PyObject *tmp_ass_subscript_41;
tmp_ass_subvalue_41 = mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45;
tmp_ass_subscribed_41 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_14;
}

if (tmp_ass_subscribed_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscript_41 = mod_consts.const_str_plain_file_ids;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
CHECK_OBJECT(tmp_ass_subscribed_41);
Py_DECREF(tmp_ass_subscribed_41);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_14,
    type_description_2,
    outline_12_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_14);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

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


exception_lineno = 336;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_41;
}
branch_no_39:;
{
PyObject *tmp_assign_source_129;
PyObject *tmp_called_value_26;
PyObject *tmp_args_value_26;
PyObject *tmp_tuple_element_54;
PyObject *tmp_kwargs_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_called_value_26 = tmp_class_container$class_creation_13__metaclass;
tmp_tuple_element_54 = mod_consts.const_str_plain_ToolResourcesCodeInterpreter;
tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_54 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_54);
tmp_tuple_element_54 = locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336;
PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_26 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 336;
tmp_assign_source_129 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_26, tmp_kwargs_value_26);
CHECK_OBJECT(tmp_args_value_26);
Py_DECREF(tmp_args_value_26);
if (tmp_assign_source_129 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto try_except_handler_41;
}
assert(outline_12_var___class__ == NULL);
outline_12_var___class__ = tmp_assign_source_129;
}
CHECK_OBJECT(outline_12_var___class__);
tmp_assign_source_128 = outline_12_var___class__;
Py_INCREF(tmp_assign_source_128);
goto try_return_handler_41;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_41:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336);
locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336 = NULL;
goto try_return_handler_40;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336);
locals_openai$types$beta$thread_create_and_run_params$$$class__13_ToolResourcesCodeInterpreter_336 = NULL;
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
exception_lineno = 336;
goto try_except_handler_39;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolResourcesCodeInterpreter, tmp_assign_source_128);
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
PyObject *tmp_outline_return_value_14;
// Tried code:
{
PyObject *tmp_assign_source_130;
PyObject *tmp_tuple_element_55;
tmp_tuple_element_55 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;

    goto try_except_handler_42;
}
tmp_assign_source_130 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_130, 0, tmp_tuple_element_55);
assert(tmp_class_container$class_creation_14__bases_orig == NULL);
tmp_class_container$class_creation_14__bases_orig = tmp_assign_source_130;
}
{
PyObject *tmp_assign_source_131;
PyObject *tmp_direct_call_arg1_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_direct_call_arg1_14 = tmp_class_container$class_creation_14__bases_orig;
Py_INCREF(tmp_direct_call_arg1_14);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_14};
    tmp_assign_source_131 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__bases == NULL);
tmp_class_container$class_creation_14__bases = tmp_assign_source_131;
}
{
PyObject *tmp_assign_source_132;
tmp_assign_source_132 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_14__class_decl_dict == NULL);
tmp_class_container$class_creation_14__class_decl_dict = tmp_assign_source_132;
}
{
PyObject *tmp_assign_source_133;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_53;
int tmp_truth_name_14;
PyObject *tmp_type_arg_27;
PyObject *tmp_expression_value_81;
PyObject *tmp_subscript_value_16;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_container$class_creation_14__bases);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

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
tmp_expression_value_81 = tmp_class_container$class_creation_14__bases;
tmp_subscript_value_16 = const_int_0;
tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_81, tmp_subscript_value_16, 0);
if (tmp_type_arg_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_42;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
CHECK_OBJECT(tmp_type_arg_27);
Py_DECREF(tmp_type_arg_27);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_42;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_14 = tmp_class_container$class_creation_14__bases;
tmp_assign_source_133 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__metaclass == NULL);
tmp_class_container$class_creation_14__metaclass = tmp_assign_source_133;
}
{
bool tmp_condition_result_54;
PyObject *tmp_expression_value_82;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_82 = tmp_class_container$class_creation_14__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

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
PyObject *tmp_assign_source_134;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_83;
PyObject *tmp_args_value_27;
PyObject *tmp_tuple_element_56;
PyObject *tmp_kwargs_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_83 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_42;
}
tmp_tuple_element_56 = mod_consts.const_str_plain_ToolResourcesFileSearch;
tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_56 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_27 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 345;
tmp_assign_source_134 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_27, tmp_kwargs_value_27);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_value_27);
Py_DECREF(tmp_args_value_27);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_134;
}
{
bool tmp_condition_result_55;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_84;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_expression_value_84 = tmp_class_container$class_creation_14__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_84, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

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
PyObject *tmp_tuple_element_57;
PyObject *tmp_expression_value_85;
PyObject *tmp_name_value_22;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_85 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_22 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_57 = BUILTIN_GETATTR(tstate, tmp_expression_value_85, tmp_name_value_22, tmp_default_value_14);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_42;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_86;
PyObject *tmp_type_arg_28;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_type_arg_28 = tmp_class_container$class_creation_14__prepared;
tmp_expression_value_86 = BUILTIN_TYPE1(tmp_type_arg_28);
assert(!(tmp_expression_value_86 == NULL));
tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_86);
Py_DECREF(tmp_expression_value_86);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_57);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_mod_expr_right_14);
goto try_except_handler_42;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_make_exception_arg_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
CHECK_OBJECT(tmp_mod_expr_right_14);
Py_DECREF(tmp_mod_expr_right_14);
if (tmp_make_exception_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_42;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 345;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 345;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_42;
}
branch_no_41:;
goto branch_end_40;
branch_no_40:;
{
PyObject *tmp_assign_source_135;
tmp_assign_source_135 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_135;
}
branch_end_40:;
{
PyObject *tmp_assign_source_136;
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_set_locals_14 = tmp_class_container$class_creation_14__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_str_plain_ToolResourcesFileSearch;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_int_pos_345;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_44;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_44;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_15 = MAKE_CLASS_FRAME(tstate, code_objects_8d9bf4182758387244f7e31155e7ec1c, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_15);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_15) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_42;
PyObject *tmp_ass_subscribed_42;
PyObject *tmp_ass_subscript_42;
tmp_ass_subvalue_42 = mod_consts.const_str_digest_b2398c7864108277f9186127f92bdc45;
tmp_ass_subscribed_42 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 346;
type_description_2 = "o";
    goto frame_exception_exit_15;
}

if (tmp_ass_subscribed_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscript_42 = mod_consts.const_str_plain_vector_store_ids;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
CHECK_OBJECT(tmp_ass_subscribed_42);
Py_DECREF(tmp_ass_subscribed_42);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_15,
    type_description_2,
    outline_13_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_15);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

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


exception_lineno = 345;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_44;
}
branch_no_42:;
{
PyObject *tmp_assign_source_137;
PyObject *tmp_called_value_28;
PyObject *tmp_args_value_28;
PyObject *tmp_tuple_element_58;
PyObject *tmp_kwargs_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_called_value_28 = tmp_class_container$class_creation_14__metaclass;
tmp_tuple_element_58 = mod_consts.const_str_plain_ToolResourcesFileSearch;
tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_58 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_58);
tmp_tuple_element_58 = locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345;
PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_28 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 345;
tmp_assign_source_137 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_28, tmp_kwargs_value_28);
CHECK_OBJECT(tmp_args_value_28);
Py_DECREF(tmp_args_value_28);
if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_44;
}
assert(outline_13_var___class__ == NULL);
outline_13_var___class__ = tmp_assign_source_137;
}
CHECK_OBJECT(outline_13_var___class__);
tmp_assign_source_136 = outline_13_var___class__;
Py_INCREF(tmp_assign_source_136);
goto try_return_handler_44;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_44:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345);
locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345 = NULL;
goto try_return_handler_43;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345);
locals_openai$types$beta$thread_create_and_run_params$$$class__14_ToolResourcesFileSearch_345 = NULL;
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
exception_lineno = 345;
goto try_except_handler_42;
outline_result_28:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolResourcesFileSearch, tmp_assign_source_136);
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
PyObject *tmp_assign_source_138;
PyObject *tmp_tuple_element_59;
tmp_tuple_element_59 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;

    goto try_except_handler_45;
}
tmp_assign_source_138 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_138, 0, tmp_tuple_element_59);
assert(tmp_class_container$class_creation_15__bases_orig == NULL);
tmp_class_container$class_creation_15__bases_orig = tmp_assign_source_138;
}
{
PyObject *tmp_assign_source_139;
PyObject *tmp_direct_call_arg1_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_direct_call_arg1_15 = tmp_class_container$class_creation_15__bases_orig;
Py_INCREF(tmp_direct_call_arg1_15);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_15};
    tmp_assign_source_139 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__bases == NULL);
tmp_class_container$class_creation_15__bases = tmp_assign_source_139;
}
{
PyObject *tmp_assign_source_140;
tmp_assign_source_140 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_15__class_decl_dict == NULL);
tmp_class_container$class_creation_15__class_decl_dict = tmp_assign_source_140;
}
{
PyObject *tmp_assign_source_141;
PyObject *tmp_metaclass_value_15;
nuitka_bool tmp_condition_result_57;
int tmp_truth_name_15;
PyObject *tmp_type_arg_29;
PyObject *tmp_expression_value_87;
PyObject *tmp_subscript_value_17;
PyObject *tmp_bases_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_container$class_creation_15__bases);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

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
tmp_expression_value_87 = tmp_class_container$class_creation_15__bases;
tmp_subscript_value_17 = const_int_0;
tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_87, tmp_subscript_value_17, 0);
if (tmp_type_arg_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_45;
}
tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
CHECK_OBJECT(tmp_type_arg_29);
Py_DECREF(tmp_type_arg_29);
if (tmp_metaclass_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_45;
}
goto condexpr_end_15;
condexpr_false_15:;
tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_15);
condexpr_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_15 = tmp_class_container$class_creation_15__bases;
tmp_assign_source_141 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
CHECK_OBJECT(tmp_metaclass_value_15);
Py_DECREF(tmp_metaclass_value_15);
if (tmp_assign_source_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__metaclass == NULL);
tmp_class_container$class_creation_15__metaclass = tmp_assign_source_141;
}
{
bool tmp_condition_result_58;
PyObject *tmp_expression_value_88;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_88 = tmp_class_container$class_creation_15__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

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
PyObject *tmp_assign_source_142;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_89;
PyObject *tmp_args_value_29;
PyObject *tmp_tuple_element_60;
PyObject *tmp_kwargs_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_89 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_45;
}
tmp_tuple_element_60 = mod_consts.const_str_plain_ToolResources;
tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_60 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_29 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 355;
tmp_assign_source_142 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_29, tmp_kwargs_value_29);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_value_29);
Py_DECREF(tmp_args_value_29);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_142;
}
{
bool tmp_condition_result_59;
PyObject *tmp_operand_value_15;
PyObject *tmp_expression_value_90;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_expression_value_90 = tmp_class_container$class_creation_15__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_90, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

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
PyObject *tmp_tuple_element_61;
PyObject *tmp_expression_value_91;
PyObject *tmp_name_value_23;
PyObject *tmp_default_value_15;
tmp_mod_expr_left_15 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_91 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_23 = const_str_plain___name__;
tmp_default_value_15 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_61 = BUILTIN_GETATTR(tstate, tmp_expression_value_91, tmp_name_value_23, tmp_default_value_15);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_45;
}
tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_92;
PyObject *tmp_type_arg_30;
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_type_arg_30 = tmp_class_container$class_creation_15__prepared;
tmp_expression_value_92 = BUILTIN_TYPE1(tmp_type_arg_30);
assert(!(tmp_expression_value_92 == NULL));
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_92);
Py_DECREF(tmp_expression_value_92);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_61);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_mod_expr_right_15);
goto try_except_handler_45;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_make_exception_arg_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
CHECK_OBJECT(tmp_mod_expr_right_15);
Py_DECREF(tmp_mod_expr_right_15);
if (tmp_make_exception_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_45;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 355;
tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_15);
CHECK_OBJECT(tmp_make_exception_arg_15);
Py_DECREF(tmp_make_exception_arg_15);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 355;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_45;
}
branch_no_44:;
goto branch_end_43;
branch_no_43:;
{
PyObject *tmp_assign_source_143;
tmp_assign_source_143 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_143;
}
branch_end_43:;
{
PyObject *tmp_assign_source_144;
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_str_plain_ToolResources;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_int_pos_355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_47;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_47;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_16 = MAKE_CLASS_FRAME(tstate, code_objects_d52a57030e61bb49c2b729e58383e689, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_16);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_16) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_43;
PyObject *tmp_ass_subscribed_43;
PyObject *tmp_ass_subscript_43;
tmp_ass_subvalue_43 = mod_consts.const_str_plain_ToolResourcesCodeInterpreter;
tmp_ass_subscribed_43 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 356;
type_description_2 = "o";
    goto frame_exception_exit_16;
}

if (tmp_ass_subscribed_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_ass_subscript_43 = mod_consts.const_str_plain_code_interpreter;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
CHECK_OBJECT(tmp_ass_subscribed_43);
Py_DECREF(tmp_ass_subscribed_43);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}
{
PyObject *tmp_ass_subvalue_44;
PyObject *tmp_ass_subscribed_44;
PyObject *tmp_ass_subscript_44;
tmp_ass_subvalue_44 = mod_consts.const_str_plain_ToolResourcesFileSearch;
tmp_ass_subscribed_44 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 358;
type_description_2 = "o";
    goto frame_exception_exit_16;
}

if (tmp_ass_subscribed_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_ass_subscript_44 = mod_consts.const_str_plain_file_search;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
CHECK_OBJECT(tmp_ass_subscribed_44);
Py_DECREF(tmp_ass_subscribed_44);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_16,
    type_description_2,
    outline_14_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_16);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

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


exception_lineno = 355;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_47;
}
branch_no_45:;
{
PyObject *tmp_assign_source_145;
PyObject *tmp_called_value_30;
PyObject *tmp_args_value_30;
PyObject *tmp_tuple_element_62;
PyObject *tmp_kwargs_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_called_value_30 = tmp_class_container$class_creation_15__metaclass;
tmp_tuple_element_62 = mod_consts.const_str_plain_ToolResources;
tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_62 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_62);
tmp_tuple_element_62 = locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355;
PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_30 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 355;
tmp_assign_source_145 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_30, tmp_kwargs_value_30);
CHECK_OBJECT(tmp_args_value_30);
Py_DECREF(tmp_args_value_30);
if (tmp_assign_source_145 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_47;
}
assert(outline_14_var___class__ == NULL);
outline_14_var___class__ = tmp_assign_source_145;
}
CHECK_OBJECT(outline_14_var___class__);
tmp_assign_source_144 = outline_14_var___class__;
Py_INCREF(tmp_assign_source_144);
goto try_return_handler_47;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_47:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355);
locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355 = NULL;
goto try_return_handler_46;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355);
locals_openai$types$beta$thread_create_and_run_params$$$class__15_ToolResources_355 = NULL;
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
exception_lineno = 355;
goto try_except_handler_45;
outline_result_30:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolResources, tmp_assign_source_144);
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
PyObject *tmp_assign_source_146;
PyObject *tmp_tuple_element_63;
tmp_tuple_element_63 = module_var_accessor_openai$types$beta$thread_create_and_run_params$TypedDict(tstate);
if (unlikely(tmp_tuple_element_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 361;

    goto try_except_handler_48;
}
tmp_assign_source_146 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_146, 0, tmp_tuple_element_63);
assert(tmp_class_container$class_creation_16__bases_orig == NULL);
tmp_class_container$class_creation_16__bases_orig = tmp_assign_source_146;
}
{
PyObject *tmp_assign_source_147;
PyObject *tmp_direct_call_arg1_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_direct_call_arg1_16 = tmp_class_container$class_creation_16__bases_orig;
Py_INCREF(tmp_direct_call_arg1_16);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_16};
    tmp_assign_source_147 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_147 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__bases == NULL);
tmp_class_container$class_creation_16__bases = tmp_assign_source_147;
}
{
PyObject *tmp_assign_source_148;
tmp_assign_source_148 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_16__class_decl_dict == NULL);
tmp_class_container$class_creation_16__class_decl_dict = tmp_assign_source_148;
}
{
PyObject *tmp_assign_source_149;
PyObject *tmp_metaclass_value_16;
nuitka_bool tmp_condition_result_61;
int tmp_truth_name_16;
PyObject *tmp_type_arg_31;
PyObject *tmp_expression_value_93;
PyObject *tmp_subscript_value_18;
PyObject *tmp_bases_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_container$class_creation_16__bases);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

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
tmp_expression_value_93 = tmp_class_container$class_creation_16__bases;
tmp_subscript_value_18 = const_int_0;
tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_93, tmp_subscript_value_18, 0);
if (tmp_type_arg_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_48;
}
tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
CHECK_OBJECT(tmp_type_arg_31);
Py_DECREF(tmp_type_arg_31);
if (tmp_metaclass_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_48;
}
goto condexpr_end_16;
condexpr_false_16:;
tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_16);
condexpr_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_16__bases;
tmp_assign_source_149 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
CHECK_OBJECT(tmp_metaclass_value_16);
Py_DECREF(tmp_metaclass_value_16);
if (tmp_assign_source_149 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__metaclass == NULL);
tmp_class_container$class_creation_16__metaclass = tmp_assign_source_149;
}
{
bool tmp_condition_result_62;
PyObject *tmp_expression_value_94;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_94 = tmp_class_container$class_creation_16__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

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
PyObject *tmp_assign_source_150;
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_95;
PyObject *tmp_args_value_31;
PyObject *tmp_tuple_element_64;
PyObject *tmp_kwargs_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_95 = tmp_class_container$class_creation_16__metaclass;
tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_48;
}
tmp_tuple_element_64 = mod_consts.const_str_plain_TruncationStrategy;
tmp_args_value_31 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_64 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_31 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 361;
tmp_assign_source_150 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_31, tmp_kwargs_value_31);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_value_31);
Py_DECREF(tmp_args_value_31);
if (tmp_assign_source_150 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_150;
}
{
bool tmp_condition_result_63;
PyObject *tmp_operand_value_16;
PyObject *tmp_expression_value_96;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_expression_value_96 = tmp_class_container$class_creation_16__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_96, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

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
PyObject *tmp_tuple_element_65;
PyObject *tmp_expression_value_97;
PyObject *tmp_name_value_24;
PyObject *tmp_default_value_16;
tmp_mod_expr_left_16 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_97 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_24 = const_str_plain___name__;
tmp_default_value_16 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_65 = BUILTIN_GETATTR(tstate, tmp_expression_value_97, tmp_name_value_24, tmp_default_value_16);
if (tmp_tuple_element_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_48;
}
tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_98;
PyObject *tmp_type_arg_32;
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_type_arg_32 = tmp_class_container$class_creation_16__prepared;
tmp_expression_value_98 = BUILTIN_TYPE1(tmp_type_arg_32);
assert(!(tmp_expression_value_98 == NULL));
tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_98);
Py_DECREF(tmp_expression_value_98);
if (tmp_tuple_element_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_65);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_16);
goto try_except_handler_48;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
CHECK_OBJECT(tmp_mod_expr_right_16);
Py_DECREF(tmp_mod_expr_right_16);
if (tmp_make_exception_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_48;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 361;
tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_16);
CHECK_OBJECT(tmp_make_exception_arg_16);
Py_DECREF(tmp_make_exception_arg_16);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 361;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_48;
}
branch_no_47:;
goto branch_end_46;
branch_no_46:;
{
PyObject *tmp_assign_source_151;
tmp_assign_source_151 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_151;
}
branch_end_46:;
{
PyObject *tmp_assign_source_152;
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_set_locals_16 = tmp_class_container$class_creation_16__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_50;
}
tmp_dictset_value = mod_consts.const_str_plain_TruncationStrategy;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_50;
}
tmp_dictset_value = mod_consts.const_int_pos_361;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_50;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_50;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_17 = MAKE_CLASS_FRAME(tstate, code_objects_b6c2a005e2f4b80b578fd34d73928eda, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_17);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_17) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_45;
PyObject *tmp_ass_subscribed_45;
PyObject *tmp_ass_subscript_45;
tmp_ass_subvalue_45 = mod_consts.const_str_digest_0aae81306b2b7c186272299970d7ac16;
tmp_ass_subscribed_45 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 362;
type_description_2 = "o";
    goto frame_exception_exit_17;
}

if (tmp_ass_subscribed_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscript_45 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
CHECK_OBJECT(tmp_ass_subscribed_45);
Py_DECREF(tmp_ass_subscribed_45);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}
{
PyObject *tmp_ass_subvalue_46;
PyObject *tmp_ass_subscribed_46;
PyObject *tmp_ass_subscript_46;
tmp_ass_subvalue_46 = mod_consts.const_str_digest_e62fe7561b30f2de13c58dd6be1c61da;
tmp_ass_subscribed_46 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 371;
type_description_2 = "o";
    goto frame_exception_exit_17;
}

if (tmp_ass_subscribed_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscript_46 = mod_consts.const_str_plain_last_messages;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
CHECK_OBJECT(tmp_ass_subscribed_46);
Py_DECREF(tmp_ass_subscribed_46);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_17,
    type_description_2,
    outline_15_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_17);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

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


exception_lineno = 361;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_50;
}
branch_no_48:;
{
PyObject *tmp_assign_source_153;
PyObject *tmp_called_value_32;
PyObject *tmp_args_value_32;
PyObject *tmp_tuple_element_66;
PyObject *tmp_kwargs_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_called_value_32 = tmp_class_container$class_creation_16__metaclass;
tmp_tuple_element_66 = mod_consts.const_str_plain_TruncationStrategy;
tmp_args_value_32 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_66 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_66);
tmp_tuple_element_66 = locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361;
PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_32 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 361;
tmp_assign_source_153 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_32, tmp_kwargs_value_32);
CHECK_OBJECT(tmp_args_value_32);
Py_DECREF(tmp_args_value_32);
if (tmp_assign_source_153 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto try_except_handler_50;
}
assert(outline_15_var___class__ == NULL);
outline_15_var___class__ = tmp_assign_source_153;
}
CHECK_OBJECT(outline_15_var___class__);
tmp_assign_source_152 = outline_15_var___class__;
Py_INCREF(tmp_assign_source_152);
goto try_return_handler_50;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_50:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361);
locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361 = NULL;
goto try_return_handler_49;
// Exception handler code:
try_except_handler_50:;
exception_keeper_lineno_48 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_48 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361);
locals_openai$types$beta$thread_create_and_run_params$$$class__16_TruncationStrategy_361 = NULL;
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
exception_lineno = 361;
goto try_except_handler_48;
outline_result_32:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_TruncationStrategy, tmp_assign_source_152);
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
PyObject *tmp_assign_source_154;
PyObject *tmp_tuple_element_67;
tmp_tuple_element_67 = module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadCreateAndRunParamsBase(tstate);
if (unlikely(tmp_tuple_element_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadCreateAndRunParamsBase);
}

if (tmp_tuple_element_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;

    goto try_except_handler_51;
}
tmp_assign_source_154 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_154, 0, tmp_tuple_element_67);
assert(tmp_class_container$class_creation_17__bases_orig == NULL);
tmp_class_container$class_creation_17__bases_orig = tmp_assign_source_154;
}
{
PyObject *tmp_assign_source_155;
PyObject *tmp_direct_call_arg1_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_direct_call_arg1_17 = tmp_class_container$class_creation_17__bases_orig;
Py_INCREF(tmp_direct_call_arg1_17);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_17};
    tmp_assign_source_155 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_155 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__bases == NULL);
tmp_class_container$class_creation_17__bases = tmp_assign_source_155;
}
{
PyObject *tmp_assign_source_156;
tmp_assign_source_156 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_17__class_decl_dict == NULL);
tmp_class_container$class_creation_17__class_decl_dict = tmp_assign_source_156;
}
{
PyObject *tmp_assign_source_157;
PyObject *tmp_metaclass_value_17;
nuitka_bool tmp_condition_result_65;
int tmp_truth_name_17;
PyObject *tmp_type_arg_33;
PyObject *tmp_expression_value_99;
PyObject *tmp_subscript_value_19;
PyObject *tmp_bases_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_container$class_creation_17__bases);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

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
tmp_expression_value_99 = tmp_class_container$class_creation_17__bases;
tmp_subscript_value_19 = const_int_0;
tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_99, tmp_subscript_value_19, 0);
if (tmp_type_arg_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_51;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
CHECK_OBJECT(tmp_type_arg_33);
Py_DECREF(tmp_type_arg_33);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_51;
}
goto condexpr_end_17;
condexpr_false_17:;
tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_17);
condexpr_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_17__bases;
tmp_assign_source_157 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
CHECK_OBJECT(tmp_metaclass_value_17);
Py_DECREF(tmp_metaclass_value_17);
if (tmp_assign_source_157 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__metaclass == NULL);
tmp_class_container$class_creation_17__metaclass = tmp_assign_source_157;
}
{
bool tmp_condition_result_66;
PyObject *tmp_expression_value_100;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_100 = tmp_class_container$class_creation_17__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

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
PyObject *tmp_assign_source_158;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_101;
PyObject *tmp_args_value_33;
PyObject *tmp_tuple_element_68;
PyObject *tmp_kwargs_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_17__metaclass;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_51;
}
tmp_tuple_element_68 = mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming;
tmp_args_value_33 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_68);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_68 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_68);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_33 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 378;
tmp_assign_source_158 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_33, tmp_kwargs_value_33);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_value_33);
Py_DECREF(tmp_args_value_33);
if (tmp_assign_source_158 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_158;
}
{
bool tmp_condition_result_67;
PyObject *tmp_operand_value_17;
PyObject *tmp_expression_value_102;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_expression_value_102 = tmp_class_container$class_creation_17__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_102, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

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
PyObject *tmp_tuple_element_69;
PyObject *tmp_expression_value_103;
PyObject *tmp_name_value_25;
PyObject *tmp_default_value_17;
tmp_mod_expr_left_17 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_103 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_25 = const_str_plain___name__;
tmp_default_value_17 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_69 = BUILTIN_GETATTR(tstate, tmp_expression_value_103, tmp_name_value_25, tmp_default_value_17);
if (tmp_tuple_element_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_51;
}
tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_104;
PyObject *tmp_type_arg_34;
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_type_arg_34 = tmp_class_container$class_creation_17__prepared;
tmp_expression_value_104 = BUILTIN_TYPE1(tmp_type_arg_34);
assert(!(tmp_expression_value_104 == NULL));
tmp_tuple_element_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_104);
Py_DECREF(tmp_expression_value_104);
if (tmp_tuple_element_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_69);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_mod_expr_right_17);
goto try_except_handler_51;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_make_exception_arg_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
CHECK_OBJECT(tmp_mod_expr_right_17);
Py_DECREF(tmp_mod_expr_right_17);
if (tmp_make_exception_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_51;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 378;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_17);
CHECK_OBJECT(tmp_make_exception_arg_17);
Py_DECREF(tmp_make_exception_arg_17);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 378;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_51;
}
branch_no_50:;
goto branch_end_49;
branch_no_49:;
{
PyObject *tmp_assign_source_159;
tmp_assign_source_159 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_159;
}
branch_end_49:;
{
PyObject *tmp_assign_source_160;
{
PyObject *tmp_set_locals_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_set_locals_17 = tmp_class_container$class_creation_17__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378 = tmp_set_locals_17;
Py_INCREF(tmp_set_locals_17);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_53;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_53;
}
tmp_dictset_value = mod_consts.const_int_pos_378;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_53;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_53;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_18 = MAKE_CLASS_FRAME(tstate, code_objects_d11072203e78b8ac7f43eba00e230eee, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_18);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_18) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_47;
PyObject *tmp_ass_subscribed_47;
PyObject *tmp_ass_subscript_47;
tmp_ass_subvalue_47 = mod_consts.const_str_digest_406ac393b7cccc2e082753bfc98bac9a;
tmp_ass_subscribed_47 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 379;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_47 = mod_consts.const_str_plain_stream;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
CHECK_OBJECT(tmp_ass_subscribed_47);
Py_DECREF(tmp_ass_subscribed_47);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_18,
    type_description_2,
    outline_16_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_18);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

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


exception_lineno = 378;

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_53;
}
branch_no_51:;
{
PyObject *tmp_assign_source_161;
PyObject *tmp_called_value_34;
PyObject *tmp_args_value_34;
PyObject *tmp_tuple_element_70;
PyObject *tmp_kwargs_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_called_value_34 = tmp_class_container$class_creation_17__metaclass;
tmp_tuple_element_70 = mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming;
tmp_args_value_34 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_70 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_70);
tmp_tuple_element_70 = locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378;
PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_34 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 378;
tmp_assign_source_161 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_34, tmp_kwargs_value_34);
CHECK_OBJECT(tmp_args_value_34);
Py_DECREF(tmp_args_value_34);
if (tmp_assign_source_161 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto try_except_handler_53;
}
assert(outline_16_var___class__ == NULL);
outline_16_var___class__ = tmp_assign_source_161;
}
CHECK_OBJECT(outline_16_var___class__);
tmp_assign_source_160 = outline_16_var___class__;
Py_INCREF(tmp_assign_source_160);
goto try_return_handler_53;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_53:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378);
locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378 = NULL;
goto try_return_handler_52;
// Exception handler code:
try_except_handler_53:;
exception_keeper_lineno_51 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_51 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378);
locals_openai$types$beta$thread_create_and_run_params$$$class__17_ThreadCreateAndRunParamsNonStreaming_378 = NULL;
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
exception_lineno = 378;
goto try_except_handler_51;
outline_result_34:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming, tmp_assign_source_160);
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
{
PyObject *tmp_outline_return_value_18;
// Tried code:
{
PyObject *tmp_assign_source_162;
PyObject *tmp_tuple_element_71;
tmp_tuple_element_71 = module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadCreateAndRunParamsBase(tstate);
if (unlikely(tmp_tuple_element_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadCreateAndRunParamsBase);
}

if (tmp_tuple_element_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;

    goto try_except_handler_54;
}
tmp_assign_source_162 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_162, 0, tmp_tuple_element_71);
assert(tmp_class_container$class_creation_18__bases_orig == NULL);
tmp_class_container$class_creation_18__bases_orig = tmp_assign_source_162;
}
{
PyObject *tmp_assign_source_163;
PyObject *tmp_direct_call_arg1_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_direct_call_arg1_18 = tmp_class_container$class_creation_18__bases_orig;
Py_INCREF(tmp_direct_call_arg1_18);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_18};
    tmp_assign_source_163 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
assert(tmp_class_container$class_creation_18__bases == NULL);
tmp_class_container$class_creation_18__bases = tmp_assign_source_163;
}
{
PyObject *tmp_assign_source_164;
tmp_assign_source_164 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__class_decl_dict == NULL);
tmp_class_container$class_creation_18__class_decl_dict = tmp_assign_source_164;
}
{
PyObject *tmp_assign_source_165;
PyObject *tmp_metaclass_value_18;
nuitka_bool tmp_condition_result_69;
int tmp_truth_name_18;
PyObject *tmp_type_arg_35;
PyObject *tmp_expression_value_105;
PyObject *tmp_subscript_value_20;
PyObject *tmp_bases_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_container$class_creation_18__bases);
if (tmp_truth_name_18 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
tmp_condition_result_69 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_18;
} else {
    goto condexpr_false_18;
}
condexpr_true_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_expression_value_105 = tmp_class_container$class_creation_18__bases;
tmp_subscript_value_20 = const_int_0;
tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_105, tmp_subscript_value_20, 0);
if (tmp_type_arg_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
CHECK_OBJECT(tmp_type_arg_35);
Py_DECREF(tmp_type_arg_35);
if (tmp_metaclass_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
goto condexpr_end_18;
condexpr_false_18:;
tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_18);
condexpr_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_bases_value_18 = tmp_class_container$class_creation_18__bases;
tmp_assign_source_165 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
CHECK_OBJECT(tmp_metaclass_value_18);
Py_DECREF(tmp_metaclass_value_18);
if (tmp_assign_source_165 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
assert(tmp_class_container$class_creation_18__metaclass == NULL);
tmp_class_container$class_creation_18__metaclass = tmp_assign_source_165;
}
{
bool tmp_condition_result_70;
PyObject *tmp_expression_value_106;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_106 = tmp_class_container$class_creation_18__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
tmp_condition_result_70 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_70 != false) {
    goto branch_yes_52;
} else {
    goto branch_no_52;
}
}
branch_yes_52:;
{
PyObject *tmp_assign_source_166;
PyObject *tmp_called_value_35;
PyObject *tmp_expression_value_107;
PyObject *tmp_args_value_35;
PyObject *tmp_tuple_element_72;
PyObject *tmp_kwargs_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_107 = tmp_class_container$class_creation_18__metaclass;
tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
tmp_tuple_element_72 = mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming;
tmp_args_value_35 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_72);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_72 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_72);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_35 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 387;
tmp_assign_source_166 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_35, tmp_kwargs_value_35);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_value_35);
Py_DECREF(tmp_args_value_35);
if (tmp_assign_source_166 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_166;
}
{
bool tmp_condition_result_71;
PyObject *tmp_operand_value_18;
PyObject *tmp_expression_value_108;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_expression_value_108 = tmp_class_container$class_creation_18__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_108, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
assert(!(tmp_res == -1));
tmp_condition_result_71 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_71 != false) {
    goto branch_yes_53;
} else {
    goto branch_no_53;
}
}
branch_yes_53:;
{
PyObject *tmp_raise_type_18;
PyObject *tmp_make_exception_arg_18;
PyObject *tmp_mod_expr_left_18;
PyObject *tmp_mod_expr_right_18;
PyObject *tmp_tuple_element_73;
PyObject *tmp_expression_value_109;
PyObject *tmp_name_value_26;
PyObject *tmp_default_value_18;
tmp_mod_expr_left_18 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_109 = tmp_class_container$class_creation_18__metaclass;
tmp_name_value_26 = const_str_plain___name__;
tmp_default_value_18 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_73 = BUILTIN_GETATTR(tstate, tmp_expression_value_109, tmp_name_value_26, tmp_default_value_18);
if (tmp_tuple_element_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_110;
PyObject *tmp_type_arg_36;
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_type_arg_36 = tmp_class_container$class_creation_18__prepared;
tmp_expression_value_110 = BUILTIN_TYPE1(tmp_type_arg_36);
assert(!(tmp_expression_value_110 == NULL));
tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_110);
Py_DECREF(tmp_expression_value_110);
if (tmp_tuple_element_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_73);
}
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_mod_expr_right_18);
goto try_except_handler_54;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_make_exception_arg_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
CHECK_OBJECT(tmp_mod_expr_right_18);
Py_DECREF(tmp_mod_expr_right_18);
if (tmp_make_exception_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_54;
}
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 387;
tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_18);
CHECK_OBJECT(tmp_make_exception_arg_18);
Py_DECREF(tmp_make_exception_arg_18);
assert(!(tmp_raise_type_18 == NULL));
exception_state.exception_value = tmp_raise_type_18;
exception_lineno = 387;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_54;
}
branch_no_53:;
goto branch_end_52;
branch_no_52:;
{
PyObject *tmp_assign_source_167;
tmp_assign_source_167 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_167;
}
branch_end_52:;
{
PyObject *tmp_assign_source_168;
{
PyObject *tmp_set_locals_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_set_locals_18 = tmp_class_container$class_creation_18__prepared;
locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387 = tmp_set_locals_18;
Py_INCREF(tmp_set_locals_18);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_051d723cfa2e8ee19409efb72c06eef8;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_56;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_56;
}
tmp_dictset_value = mod_consts.const_int_pos_387;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_56;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_56;
}
frame_frame_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_19 = MAKE_CLASS_FRAME(tstate, code_objects_62cbdf18afeb75c611f012aa1d2c7e19, module_openai$types$beta$thread_create_and_run_params, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_19);
assert(Py_REFCNT(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_19) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_48;
PyObject *tmp_ass_subscribed_48;
PyObject *tmp_ass_subscript_48;
tmp_ass_subvalue_48 = mod_consts.const_str_digest_d6fdbbf0ef194cb625ab3be29d182c79;
tmp_ass_subscribed_48 = PyObject_GetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 388;
type_description_2 = "o";
    goto frame_exception_exit_19;
}

if (tmp_ass_subscribed_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
tmp_ass_subscript_48 = mod_consts.const_str_plain_stream;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
CHECK_OBJECT(tmp_ass_subscribed_48);
Py_DECREF(tmp_ass_subscribed_48);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_18;
frame_exception_exit_19:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_19, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_19, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_19,
    type_description_2,
    outline_17_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_19);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_18;
frame_no_exception_18:;
goto skip_nested_handling_18;
nested_frame_exit_18:;

goto try_except_handler_56;
skip_nested_handling_18:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_56;
}
{
nuitka_bool tmp_condition_result_72;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_cmp_expr_left_18 = tmp_class_container$class_creation_18__bases;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_cmp_expr_right_18 = tmp_class_container$class_creation_18__bases_orig;
tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_56;
}
if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
    goto branch_yes_54;
} else {
    goto branch_no_54;
}
}
branch_yes_54:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_18__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_56;
}
branch_no_54:;
{
PyObject *tmp_assign_source_169;
PyObject *tmp_called_value_36;
PyObject *tmp_args_value_36;
PyObject *tmp_tuple_element_74;
PyObject *tmp_kwargs_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_called_value_36 = tmp_class_container$class_creation_18__metaclass;
tmp_tuple_element_74 = mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming;
tmp_args_value_36 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_74);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_74 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_74);
tmp_tuple_element_74 = locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387;
PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_74);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_36 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_openai$types$beta$thread_create_and_run_params->m_frame.f_lineno = 387;
tmp_assign_source_169 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_36, tmp_kwargs_value_36);
CHECK_OBJECT(tmp_args_value_36);
Py_DECREF(tmp_args_value_36);
if (tmp_assign_source_169 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto try_except_handler_56;
}
assert(outline_17_var___class__ == NULL);
outline_17_var___class__ = tmp_assign_source_169;
}
CHECK_OBJECT(outline_17_var___class__);
tmp_assign_source_168 = outline_17_var___class__;
Py_INCREF(tmp_assign_source_168);
goto try_return_handler_56;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_56:;
Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387);
locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387 = NULL;
goto try_return_handler_55;
// Exception handler code:
try_except_handler_56:;
exception_keeper_lineno_54 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_54 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387);
locals_openai$types$beta$thread_create_and_run_params$$$class__18_ThreadCreateAndRunParamsStreaming_387 = NULL;
// Re-raise.
exception_state = exception_keeper_name_54;
exception_lineno = exception_keeper_lineno_54;

goto try_except_handler_55;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_55:;
CHECK_OBJECT(outline_17_var___class__);
CHECK_OBJECT(outline_17_var___class__);
Py_DECREF(outline_17_var___class__);
outline_17_var___class__ = NULL;
goto outline_result_36;
// Exception handler code:
try_except_handler_55:;
exception_keeper_lineno_55 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_55 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_55;
exception_lineno = exception_keeper_lineno_55;

goto outline_exception_18;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_18:;
exception_lineno = 387;
goto try_except_handler_54;
outline_result_36:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming, tmp_assign_source_168);
}
goto try_end_20;
// Exception handler code:
try_except_handler_54:;
exception_keeper_lineno_56 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_56 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_18__bases_orig);
tmp_class_container$class_creation_18__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__bases);
tmp_class_container$class_creation_18__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_container$class_creation_18__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__metaclass);
tmp_class_container$class_creation_18__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__prepared);
tmp_class_container$class_creation_18__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_56;
exception_lineno = exception_keeper_lineno_56;

goto frame_exception_exit_1;
// End of try:
try_end_20:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
Py_DECREF(tmp_class_container$class_creation_18__bases_orig);
tmp_class_container$class_creation_18__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
Py_DECREF(tmp_class_container$class_creation_18__bases);
tmp_class_container$class_creation_18__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_container$class_creation_18__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
Py_DECREF(tmp_class_container$class_creation_18__metaclass);
tmp_class_container$class_creation_18__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
Py_DECREF(tmp_class_container$class_creation_18__prepared);
tmp_class_container$class_creation_18__prepared = NULL;
tmp_outline_return_value_18 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_18);
goto outline_result_35;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_35:;
CHECK_OBJECT(tmp_outline_return_value_18);
Py_DECREF(tmp_outline_return_value_18);
}
{
PyObject *tmp_assign_source_170;
PyObject *tmp_expression_value_111;
PyObject *tmp_subscript_value_21;
PyObject *tmp_tuple_element_75;
tmp_expression_value_111 = module_var_accessor_openai$types$beta$thread_create_and_run_params$Union(tstate);
if (unlikely(tmp_expression_value_111 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_111 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;

    goto frame_exception_exit_1;
}
tmp_tuple_element_75 = module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadCreateAndRunParamsNonStreaming(tstate);
if (unlikely(tmp_tuple_element_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadCreateAndRunParamsNonStreaming);
}

if (tmp_tuple_element_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;

    goto frame_exception_exit_1;
}
tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_21, 0, tmp_tuple_element_75);
tmp_tuple_element_75 = module_var_accessor_openai$types$beta$thread_create_and_run_params$ThreadCreateAndRunParamsStreaming(tstate);
if (unlikely(tmp_tuple_element_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadCreateAndRunParamsStreaming);
}

if (tmp_tuple_element_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM0(tmp_subscript_value_21, 1, tmp_tuple_element_75);
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_subscript_value_21);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_assign_source_170 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_111, tmp_subscript_value_21);
CHECK_OBJECT(tmp_subscript_value_21);
Py_DECREF(tmp_subscript_value_21);
if (tmp_assign_source_170 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreateAndRunParams, tmp_assign_source_170);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_19;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$thread_create_and_run_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$thread_create_and_run_params->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$thread_create_and_run_params, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$beta$thread_create_and_run_params);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_19:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$beta$thread_create_and_run_params", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.thread_create_and_run_params" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$beta$thread_create_and_run_params);
    return module_openai$types$beta$thread_create_and_run_params;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$thread_create_and_run_params, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$beta$thread_create_and_run_params", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

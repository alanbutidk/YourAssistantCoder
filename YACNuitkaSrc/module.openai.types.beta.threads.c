/* Generated code for Python module 'openai$types$beta$threads'
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



/* The "module_openai$types$beta$threads" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$beta$threads;
PyDictObject *moduledict_openai$types$beta$threads;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_c0760630ed38e8aa80130ab81decf450_tuple;
PyObject *const_str_digest_47e348358ac237053f0d59bd09912861;
PyObject *const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple;
PyObject *const_str_digest_7aa2c2536cdc1c3b9bb1f9129cc6381e;
PyObject *const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple;
PyObject *const_str_plain_threads;
PyObject *const_tuple_c7b6c5f12e3e73bec04d654f790db3b2_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_run;
PyObject *const_tuple_str_plain_Run_tuple;
PyObject *const_str_plain_Run;
PyObject *const_str_plain_text;
PyObject *const_tuple_str_plain_Text_tuple;
PyObject *const_str_plain_Text;
PyObject *const_str_plain_message;
PyObject *const_tuple_str_plain_Message_tuple;
PyObject *const_str_plain_Message;
PyObject *const_str_plain_image_url;
PyObject *const_tuple_str_plain_ImageURL_tuple;
PyObject *const_str_plain_ImageURL;
PyObject *const_str_plain_annotation;
PyObject *const_tuple_str_plain_Annotation_tuple;
PyObject *const_str_plain_Annotation;
PyObject *const_str_plain_image_file;
PyObject *const_tuple_str_plain_ImageFile_tuple;
PyObject *const_str_plain_ImageFile;
PyObject *const_str_plain_run_status;
PyObject *const_tuple_str_plain_RunStatus_tuple;
PyObject *const_str_plain_RunStatus;
PyObject *const_str_plain_text_delta;
PyObject *const_tuple_str_plain_TextDelta_tuple;
PyObject *const_str_plain_TextDelta;
PyObject *const_str_plain_message_delta;
PyObject *const_tuple_str_plain_MessageDelta_tuple;
PyObject *const_str_plain_MessageDelta;
PyObject *const_str_plain_image_url_delta;
PyObject *const_tuple_str_plain_ImageURLDelta_tuple;
PyObject *const_str_plain_ImageURLDelta;
PyObject *const_str_plain_image_url_param;
PyObject *const_tuple_str_plain_ImageURLParam_tuple;
PyObject *const_str_plain_ImageURLParam;
PyObject *const_str_plain_message_content;
PyObject *const_tuple_str_plain_MessageContent_tuple;
PyObject *const_str_plain_MessageContent;
PyObject *const_str_plain_message_deleted;
PyObject *const_tuple_str_plain_MessageDeleted_tuple;
PyObject *const_str_plain_MessageDeleted;
PyObject *const_str_plain_run_list_params;
PyObject *const_tuple_str_plain_RunListParams_tuple;
PyObject *const_str_plain_RunListParams;
PyObject *const_str_plain_annotation_delta;
PyObject *const_tuple_str_plain_AnnotationDelta_tuple;
PyObject *const_str_plain_AnnotationDelta;
PyObject *const_str_plain_image_file_delta;
PyObject *const_tuple_str_plain_ImageFileDelta_tuple;
PyObject *const_str_plain_ImageFileDelta;
PyObject *const_str_plain_image_file_param;
PyObject *const_tuple_str_plain_ImageFileParam_tuple;
PyObject *const_str_plain_ImageFileParam;
PyObject *const_str_plain_text_delta_block;
PyObject *const_tuple_str_plain_TextDeltaBlock_tuple;
PyObject *const_str_plain_TextDeltaBlock;
PyObject *const_str_plain_run_create_params;
PyObject *const_tuple_str_plain_RunCreateParams_tuple;
PyObject *const_str_plain_RunCreateParams;
PyObject *const_str_plain_run_update_params;
PyObject *const_tuple_str_plain_RunUpdateParams_tuple;
PyObject *const_str_plain_RunUpdateParams;
PyObject *const_str_plain_text_content_block;
PyObject *const_tuple_str_plain_TextContentBlock_tuple;
PyObject *const_str_plain_TextContentBlock;
PyObject *const_str_plain_message_delta_event;
PyObject *const_tuple_str_plain_MessageDeltaEvent_tuple;
PyObject *const_str_plain_MessageDeltaEvent;
PyObject *const_str_plain_message_list_params;
PyObject *const_tuple_str_plain_MessageListParams_tuple;
PyObject *const_str_plain_MessageListParams;
PyObject *const_str_plain_refusal_delta_block;
PyObject *const_tuple_str_plain_RefusalDeltaBlock_tuple;
PyObject *const_str_plain_RefusalDeltaBlock;
PyObject *const_str_plain_file_path_annotation;
PyObject *const_tuple_str_plain_FilePathAnnotation_tuple;
PyObject *const_str_plain_FilePathAnnotation;
PyObject *const_str_plain_image_url_delta_block;
PyObject *const_tuple_str_plain_ImageURLDeltaBlock_tuple;
PyObject *const_str_plain_ImageURLDeltaBlock;
PyObject *const_str_plain_message_content_delta;
PyObject *const_tuple_str_plain_MessageContentDelta_tuple;
PyObject *const_str_plain_MessageContentDelta;
PyObject *const_str_plain_message_create_params;
PyObject *const_tuple_str_plain_MessageCreateParams_tuple;
PyObject *const_str_plain_MessageCreateParams;
PyObject *const_str_plain_message_update_params;
PyObject *const_tuple_str_plain_MessageUpdateParams_tuple;
PyObject *const_str_plain_MessageUpdateParams;
PyObject *const_str_plain_refusal_content_block;
PyObject *const_tuple_str_plain_RefusalContentBlock_tuple;
PyObject *const_str_plain_RefusalContentBlock;
PyObject *const_str_plain_image_file_delta_block;
PyObject *const_tuple_str_plain_ImageFileDeltaBlock_tuple;
PyObject *const_str_plain_ImageFileDeltaBlock;
PyObject *const_str_plain_image_url_content_block;
PyObject *const_tuple_str_plain_ImageURLContentBlock_tuple;
PyObject *const_str_plain_ImageURLContentBlock;
PyObject *const_str_plain_file_citation_annotation;
PyObject *const_tuple_str_plain_FileCitationAnnotation_tuple;
PyObject *const_str_plain_FileCitationAnnotation;
PyObject *const_str_plain_image_file_content_block;
PyObject *const_tuple_str_plain_ImageFileContentBlock_tuple;
PyObject *const_str_plain_ImageFileContentBlock;
PyObject *const_str_plain_text_content_block_param;
PyObject *const_tuple_str_plain_TextContentBlockParam_tuple;
PyObject *const_str_plain_TextContentBlockParam;
PyObject *const_str_plain_file_path_delta_annotation;
PyObject *const_tuple_str_plain_FilePathDeltaAnnotation_tuple;
PyObject *const_str_plain_FilePathDeltaAnnotation;
PyObject *const_str_plain_message_content_part_param;
PyObject *const_tuple_str_plain_MessageContentPartParam_tuple;
PyObject *const_str_plain_MessageContentPartParam;
PyObject *const_str_plain_image_url_content_block_param;
PyObject *const_tuple_str_plain_ImageURLContentBlockParam_tuple;
PyObject *const_str_plain_ImageURLContentBlockParam;
PyObject *const_str_plain_file_citation_delta_annotation;
PyObject *const_tuple_str_plain_FileCitationDeltaAnnotation_tuple;
PyObject *const_str_plain_FileCitationDeltaAnnotation;
PyObject *const_str_plain_image_file_content_block_param;
PyObject *const_tuple_str_plain_ImageFileContentBlockParam_tuple;
PyObject *const_str_plain_ImageFileContentBlockParam;
PyObject *const_str_plain_run_submit_tool_outputs_params;
PyObject *const_tuple_str_plain_RunSubmitToolOutputsParams_tuple;
PyObject *const_str_plain_RunSubmitToolOutputsParams;
PyObject *const_str_plain_required_action_function_tool_call;
PyObject *const_tuple_str_plain_RequiredActionFunctionToolCall_tuple;
PyObject *const_str_plain_RequiredActionFunctionToolCall;
PyObject *const_str_digest_4d44ec13584ff896e39b467835b26cd8;
PyObject *const_str_digest_d1317b3553146ccfb3b3894d5ec13b49;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[141];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.beta.threads"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_47e348358ac237053f0d59bd09912861);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_7aa2c2536cdc1c3b9bb1f9129cc6381e);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_threads);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_c7b6c5f12e3e73bec04d654f790db3b2_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Run_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_Run);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_Text);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_Message);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_url);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURL_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURL);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotation);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Annotation_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Annotation);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_file);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFile_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_status);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStatus_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunStatus);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_text_delta);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextDelta_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextDelta);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_message_delta);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageDelta_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageDelta);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_url_delta);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURLDelta_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURLDelta);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_url_param);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURLParam_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURLParam);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_message_content);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageContent_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageContent);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_message_deleted);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageDeleted_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageDeleted);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_list_params);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunListParams_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunListParams);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotation_delta);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnnotationDelta_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnnotationDelta);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_file_delta);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFileDelta_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFileDelta);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_file_param);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFileParam_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFileParam);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_text_delta_block);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextDeltaBlock_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextDeltaBlock);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_create_params);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunCreateParams_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunCreateParams);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_update_params);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunUpdateParams_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunUpdateParams);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_text_content_block);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextContentBlock_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextContentBlock);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_message_delta_event);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageDeltaEvent_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageDeltaEvent);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_message_list_params);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageListParams_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageListParams);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_refusal_delta_block);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RefusalDeltaBlock_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefusalDeltaBlock);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_path_annotation);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FilePathAnnotation_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_FilePathAnnotation);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_url_delta_block);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURLDeltaBlock_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURLDeltaBlock);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_message_content_delta);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageContentDelta_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageContentDelta);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_message_create_params);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageCreateParams_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageCreateParams);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_message_update_params);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageUpdateParams_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageUpdateParams);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_refusal_content_block);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RefusalContentBlock_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefusalContentBlock);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_file_delta_block);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFileDeltaBlock_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFileDeltaBlock);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_url_content_block);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURLContentBlock_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURLContentBlock);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_citation_annotation);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileCitationAnnotation_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileCitationAnnotation);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_file_content_block);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFileContentBlock_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFileContentBlock);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_text_content_block_param);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextContentBlockParam_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextContentBlockParam);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_path_delta_annotation);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FilePathDeltaAnnotation_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_FilePathDeltaAnnotation);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_message_content_part_param);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageContentPartParam);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_url_content_block_param);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURLContentBlockParam_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURLContentBlockParam);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_citation_delta_annotation);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileCitationDeltaAnnotation_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileCitationDeltaAnnotation);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_file_content_block_param);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFileContentBlockParam_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFileContentBlockParam);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_submit_tool_outputs_params);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunSubmitToolOutputsParams_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunSubmitToolOutputsParams);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_required_action_function_tool_call);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RequiredActionFunctionToolCall_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequiredActionFunctionToolCall);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d44ec13584ff896e39b467835b26cd8);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1317b3553146ccfb3b3894d5ec13b49);
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
void checkModuleConstants_openai$types$beta$threads(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_47e348358ac237053f0d59bd09912861));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47e348358ac237053f0d59bd09912861);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_7aa2c2536cdc1c3b9bb1f9129cc6381e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7aa2c2536cdc1c3b9bb1f9129cc6381e);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_threads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threads);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_c7b6c5f12e3e73bec04d654f790db3b2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c7b6c5f12e3e73bec04d654f790db3b2_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Run_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Run_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_Run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Run);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Text_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_Text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Text);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Message_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_Message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Message);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_url);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageURL_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageURL);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotation);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Annotation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Annotation_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Annotation);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_file);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFile_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageFile_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageFile);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_status);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStatus_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunStatus_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunStatus);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_text_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text_delta);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TextDelta_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextDelta);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_message_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message_delta);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageDelta_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageDelta);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_url_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_url_delta);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURLDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageURLDelta_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURLDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageURLDelta);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_url_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_url_param);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURLParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageURLParam_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURLParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageURLParam);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_message_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message_content);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageContent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageContent_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageContent);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_message_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message_deleted);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageDeleted_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageDeleted_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageDeleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageDeleted);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_list_params);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunListParams_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunListParams);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotation_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotation_delta);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnnotationDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnnotationDelta_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnnotationDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnnotationDelta);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_file_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_file_delta);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFileDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageFileDelta_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFileDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageFileDelta);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_file_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_file_param);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFileParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageFileParam_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFileParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageFileParam);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_text_delta_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text_delta_block);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextDeltaBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TextDeltaBlock_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextDeltaBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextDeltaBlock);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_create_params);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunCreateParams_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunCreateParams);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_update_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_update_params);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunUpdateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunUpdateParams_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunUpdateParams);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_text_content_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text_content_block);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextContentBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TextContentBlock_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextContentBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextContentBlock);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_message_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message_delta_event);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageDeltaEvent_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageDeltaEvent);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_message_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message_list_params);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageListParams_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageListParams);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_refusal_delta_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refusal_delta_block);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RefusalDeltaBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RefusalDeltaBlock_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefusalDeltaBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefusalDeltaBlock);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_path_annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_path_annotation);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FilePathAnnotation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FilePathAnnotation_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_FilePathAnnotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FilePathAnnotation);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_url_delta_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_url_delta_block);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURLDeltaBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageURLDeltaBlock_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURLDeltaBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageURLDeltaBlock);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_message_content_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message_content_delta);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageContentDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageContentDelta_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageContentDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageContentDelta);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_message_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message_create_params);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageCreateParams_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageCreateParams);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_message_update_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message_update_params);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageUpdateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageUpdateParams_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageUpdateParams);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_refusal_content_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refusal_content_block);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RefusalContentBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RefusalContentBlock_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefusalContentBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefusalContentBlock);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_file_delta_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_file_delta_block);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFileDeltaBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageFileDeltaBlock_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFileDeltaBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageFileDeltaBlock);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_url_content_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_url_content_block);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURLContentBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageURLContentBlock_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURLContentBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageURLContentBlock);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_citation_annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_citation_annotation);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileCitationAnnotation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileCitationAnnotation_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileCitationAnnotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileCitationAnnotation);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_file_content_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_file_content_block);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFileContentBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageFileContentBlock_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFileContentBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageFileContentBlock);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_text_content_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text_content_block_param);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextContentBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TextContentBlockParam_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextContentBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextContentBlockParam);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_path_delta_annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_path_delta_annotation);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FilePathDeltaAnnotation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FilePathDeltaAnnotation_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_FilePathDeltaAnnotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FilePathDeltaAnnotation);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_message_content_part_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message_content_part_param);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageContentPartParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageContentPartParam);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_url_content_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_url_content_block_param);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageURLContentBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageURLContentBlockParam_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageURLContentBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageURLContentBlockParam);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_citation_delta_annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_citation_delta_annotation);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileCitationDeltaAnnotation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileCitationDeltaAnnotation_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileCitationDeltaAnnotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileCitationDeltaAnnotation);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_file_content_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_file_content_block_param);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageFileContentBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageFileContentBlockParam_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFileContentBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageFileContentBlockParam);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_submit_tool_outputs_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_submit_tool_outputs_params);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunSubmitToolOutputsParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunSubmitToolOutputsParams_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunSubmitToolOutputsParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunSubmitToolOutputsParams);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_required_action_function_tool_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_required_action_function_tool_call);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RequiredActionFunctionToolCall_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RequiredActionFunctionToolCall_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequiredActionFunctionToolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequiredActionFunctionToolCall);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d44ec13584ff896e39b467835b26cd8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d44ec13584ff896e39b467835b26cd8);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1317b3553146ccfb3b3894d5ec13b49));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1317b3553146ccfb3b3894d5ec13b49);
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
static PyObject *module_var_accessor_openai$types$beta$threads$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$threads$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b4a3d0a98c8d732e3a63fcfd4090567a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_4d44ec13584ff896e39b467835b26cd8); CHECK_OBJECT(module_filename_obj);
code_objects_b4a3d0a98c8d732e3a63fcfd4090567a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d1317b3553146ccfb3b3894d5ec13b49, mod_consts.const_str_digest_d1317b3553146ccfb3b3894d5ec13b49, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$types$beta$threads[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$beta$threads);
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
        module_openai$types$beta$threads,
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
        function_table_openai$types$beta$threads,
        sizeof(function_table_openai$types$beta$threads) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.beta.threads";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$beta$threads(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$beta$threads");

    // Store the module for future use.
    module_openai$types$beta$threads = module;

    moduledict_openai$types$beta$threads = MODULE_DICT(module_openai$types$beta$threads);

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
        PRINT_STRING("openai$types$beta$threads: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$beta$threads: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$beta$threads: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.threads" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$beta$threads\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$beta$threads,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$threads,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$threads,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$threads,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$threads,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$beta$threads);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$beta$threads);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_openai$types$beta$threads;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$beta$threads = MAKE_MODULE_FRAME(code_objects_b4a3d0a98c8d732e3a63fcfd4090567a, module_openai$types$beta$threads);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$threads);
assert(Py_REFCNT(frame_frame_openai$types$beta$threads) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
tmp_args_element_value_3 = mod_consts.const_str_digest_47e348358ac237053f0d59bd09912861;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
tmp_args_element_value_5 = mod_consts.const_str_digest_7aa2c2536cdc1c3b9bb1f9129cc6381e;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
tmp_args_element_value_7 = mod_consts.const_str_plain_threads;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_8, mod_consts.const_tuple_c7b6c5f12e3e73bec04d654f790db3b2_tuple);

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
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$beta$threads$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$beta$threads$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_openai$types$beta$threads$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_openai$types$beta$threads$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_run;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Run_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 5;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_Run,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Run);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Run, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_text;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Text_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 6;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_Text,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Text);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Text, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_message;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Message_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 7;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_Message,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Message);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Message, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_image_url;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ImageURL_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 8;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageURL,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ImageURL);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageURL, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_annotation;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Annotation_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 9;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_Annotation,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Annotation);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotation, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_image_file;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ImageFile_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 10;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageFile,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ImageFile);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_run_status;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_RunStatus_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 11;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_RunStatus,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_RunStatus);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStatus, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_text_delta;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_TextDelta_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 12;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_TextDelta,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_TextDelta);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_TextDelta, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_message_delta;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_MessageDelta_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 13;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_MessageDelta,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_MessageDelta);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageDelta, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_image_url_delta;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_ImageURLDelta_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 14;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageURLDelta,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_ImageURLDelta);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageURLDelta, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_image_url_param;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_ImageURLParam_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 15;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageURLParam,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ImageURLParam);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageURLParam, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_message_content;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_MessageContent_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 16;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_MessageContent,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_MessageContent);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageContent, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_message_deleted;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_MessageDeleted_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 17;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_MessageDeleted,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_MessageDeleted);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageDeleted, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_run_list_params;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_RunListParams_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 18;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_RunListParams,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_RunListParams);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_RunListParams, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_annotation_delta;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_AnnotationDelta_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 19;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_AnnotationDelta,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_AnnotationDelta);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AnnotationDelta, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_image_file_delta;
tmp_globals_arg_value_16 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_ImageFileDelta_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 20;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageFileDelta,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_ImageFileDelta);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFileDelta, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_image_file_param;
tmp_globals_arg_value_17 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_ImageFileParam_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 21;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageFileParam,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_ImageFileParam);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFileParam, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_text_delta_block;
tmp_globals_arg_value_18 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_TextDeltaBlock_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 22;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_TextDeltaBlock,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_TextDeltaBlock);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_TextDeltaBlock, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_run_create_params;
tmp_globals_arg_value_19 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_RunCreateParams_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 23;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_RunCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_RunCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_RunCreateParams, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_run_update_params;
tmp_globals_arg_value_20 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_RunUpdateParams_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 24;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_RunUpdateParams,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_RunUpdateParams);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_RunUpdateParams, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain_text_content_block;
tmp_globals_arg_value_21 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_plain_TextContentBlock_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 25;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_TextContentBlock,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_TextContentBlock);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_TextContentBlock, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_plain_message_delta_event;
tmp_globals_arg_value_22 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_plain_MessageDeltaEvent_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 26;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_MessageDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_MessageDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageDeltaEvent, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_plain_message_list_params;
tmp_globals_arg_value_23 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_plain_MessageListParams_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 27;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_MessageListParams,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_MessageListParams);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageListParams, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_plain_refusal_delta_block;
tmp_globals_arg_value_24 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_plain_RefusalDeltaBlock_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 28;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_RefusalDeltaBlock,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_RefusalDeltaBlock);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_RefusalDeltaBlock, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_25;
PyObject *tmp_globals_arg_value_25;
PyObject *tmp_locals_arg_value_25;
PyObject *tmp_fromlist_value_25;
PyObject *tmp_level_value_25;
tmp_name_value_25 = mod_consts.const_str_plain_file_path_annotation;
tmp_globals_arg_value_25 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_25 = Py_None;
tmp_fromlist_value_25 = mod_consts.const_tuple_str_plain_FilePathAnnotation_tuple;
tmp_level_value_25 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 29;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_FilePathAnnotation,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_FilePathAnnotation);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_FilePathAnnotation, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_26;
PyObject *tmp_locals_arg_value_26;
PyObject *tmp_fromlist_value_26;
PyObject *tmp_level_value_26;
tmp_name_value_26 = mod_consts.const_str_plain_image_url_delta_block;
tmp_globals_arg_value_26 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_26 = Py_None;
tmp_fromlist_value_26 = mod_consts.const_tuple_str_plain_ImageURLDeltaBlock_tuple;
tmp_level_value_26 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 30;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageURLDeltaBlock,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_ImageURLDeltaBlock);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageURLDeltaBlock, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_27;
PyObject *tmp_globals_arg_value_27;
PyObject *tmp_locals_arg_value_27;
PyObject *tmp_fromlist_value_27;
PyObject *tmp_level_value_27;
tmp_name_value_27 = mod_consts.const_str_plain_message_content_delta;
tmp_globals_arg_value_27 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_27 = Py_None;
tmp_fromlist_value_27 = mod_consts.const_tuple_str_plain_MessageContentDelta_tuple;
tmp_level_value_27 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 31;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_MessageContentDelta,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_MessageContentDelta);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageContentDelta, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_28;
PyObject *tmp_globals_arg_value_28;
PyObject *tmp_locals_arg_value_28;
PyObject *tmp_fromlist_value_28;
PyObject *tmp_level_value_28;
tmp_name_value_28 = mod_consts.const_str_plain_message_create_params;
tmp_globals_arg_value_28 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_28 = Py_None;
tmp_fromlist_value_28 = mod_consts.const_tuple_str_plain_MessageCreateParams_tuple;
tmp_level_value_28 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 32;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_MessageCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_MessageCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageCreateParams, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_29;
PyObject *tmp_globals_arg_value_29;
PyObject *tmp_locals_arg_value_29;
PyObject *tmp_fromlist_value_29;
PyObject *tmp_level_value_29;
tmp_name_value_29 = mod_consts.const_str_plain_message_update_params;
tmp_globals_arg_value_29 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_29 = Py_None;
tmp_fromlist_value_29 = mod_consts.const_tuple_str_plain_MessageUpdateParams_tuple;
tmp_level_value_29 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 33;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_MessageUpdateParams,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_MessageUpdateParams);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageUpdateParams, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_30;
PyObject *tmp_globals_arg_value_30;
PyObject *tmp_locals_arg_value_30;
PyObject *tmp_fromlist_value_30;
PyObject *tmp_level_value_30;
tmp_name_value_30 = mod_consts.const_str_plain_refusal_content_block;
tmp_globals_arg_value_30 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_30 = Py_None;
tmp_fromlist_value_30 = mod_consts.const_tuple_str_plain_RefusalContentBlock_tuple;
tmp_level_value_30 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 34;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_RefusalContentBlock,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_RefusalContentBlock);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_RefusalContentBlock, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_31;
PyObject *tmp_globals_arg_value_31;
PyObject *tmp_locals_arg_value_31;
PyObject *tmp_fromlist_value_31;
PyObject *tmp_level_value_31;
tmp_name_value_31 = mod_consts.const_str_plain_image_file_delta_block;
tmp_globals_arg_value_31 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_31 = Py_None;
tmp_fromlist_value_31 = mod_consts.const_tuple_str_plain_ImageFileDeltaBlock_tuple;
tmp_level_value_31 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 35;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageFileDeltaBlock,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_ImageFileDeltaBlock);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFileDeltaBlock, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_32;
PyObject *tmp_globals_arg_value_32;
PyObject *tmp_locals_arg_value_32;
PyObject *tmp_fromlist_value_32;
PyObject *tmp_level_value_32;
tmp_name_value_32 = mod_consts.const_str_plain_image_url_content_block;
tmp_globals_arg_value_32 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_32 = Py_None;
tmp_fromlist_value_32 = mod_consts.const_tuple_str_plain_ImageURLContentBlock_tuple;
tmp_level_value_32 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 36;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageURLContentBlock,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_ImageURLContentBlock);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageURLContentBlock, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_33;
PyObject *tmp_globals_arg_value_33;
PyObject *tmp_locals_arg_value_33;
PyObject *tmp_fromlist_value_33;
PyObject *tmp_level_value_33;
tmp_name_value_33 = mod_consts.const_str_plain_file_citation_annotation;
tmp_globals_arg_value_33 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_33 = Py_None;
tmp_fromlist_value_33 = mod_consts.const_tuple_str_plain_FileCitationAnnotation_tuple;
tmp_level_value_33 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 37;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_FileCitationAnnotation,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_FileCitationAnnotation);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_FileCitationAnnotation, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_34;
PyObject *tmp_globals_arg_value_34;
PyObject *tmp_locals_arg_value_34;
PyObject *tmp_fromlist_value_34;
PyObject *tmp_level_value_34;
tmp_name_value_34 = mod_consts.const_str_plain_image_file_content_block;
tmp_globals_arg_value_34 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_34 = Py_None;
tmp_fromlist_value_34 = mod_consts.const_tuple_str_plain_ImageFileContentBlock_tuple;
tmp_level_value_34 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 38;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageFileContentBlock,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_ImageFileContentBlock);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFileContentBlock, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_35;
PyObject *tmp_name_value_35;
PyObject *tmp_globals_arg_value_35;
PyObject *tmp_locals_arg_value_35;
PyObject *tmp_fromlist_value_35;
PyObject *tmp_level_value_35;
tmp_name_value_35 = mod_consts.const_str_plain_text_content_block_param;
tmp_globals_arg_value_35 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_35 = Py_None;
tmp_fromlist_value_35 = mod_consts.const_tuple_str_plain_TextContentBlockParam_tuple;
tmp_level_value_35 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 39;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_TextContentBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_TextContentBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_35);
Py_DECREF(tmp_import_name_from_35);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_TextContentBlockParam, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_36;
PyObject *tmp_name_value_36;
PyObject *tmp_globals_arg_value_36;
PyObject *tmp_locals_arg_value_36;
PyObject *tmp_fromlist_value_36;
PyObject *tmp_level_value_36;
tmp_name_value_36 = mod_consts.const_str_plain_file_path_delta_annotation;
tmp_globals_arg_value_36 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_36 = Py_None;
tmp_fromlist_value_36 = mod_consts.const_tuple_str_plain_FilePathDeltaAnnotation_tuple;
tmp_level_value_36 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 40;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_FilePathDeltaAnnotation,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_FilePathDeltaAnnotation);
}

CHECK_OBJECT(tmp_import_name_from_36);
Py_DECREF(tmp_import_name_from_36);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_FilePathDeltaAnnotation, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_37;
PyObject *tmp_name_value_37;
PyObject *tmp_globals_arg_value_37;
PyObject *tmp_locals_arg_value_37;
PyObject *tmp_fromlist_value_37;
PyObject *tmp_level_value_37;
tmp_name_value_37 = mod_consts.const_str_plain_message_content_part_param;
tmp_globals_arg_value_37 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_37 = Py_None;
tmp_fromlist_value_37 = mod_consts.const_tuple_str_plain_MessageContentPartParam_tuple;
tmp_level_value_37 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 41;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_MessageContentPartParam,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_MessageContentPartParam);
}

CHECK_OBJECT(tmp_import_name_from_37);
Py_DECREF(tmp_import_name_from_37);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageContentPartParam, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_38;
PyObject *tmp_name_value_38;
PyObject *tmp_globals_arg_value_38;
PyObject *tmp_locals_arg_value_38;
PyObject *tmp_fromlist_value_38;
PyObject *tmp_level_value_38;
tmp_name_value_38 = mod_consts.const_str_plain_image_url_content_block_param;
tmp_globals_arg_value_38 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_38 = Py_None;
tmp_fromlist_value_38 = mod_consts.const_tuple_str_plain_ImageURLContentBlockParam_tuple;
tmp_level_value_38 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 42;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageURLContentBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_ImageURLContentBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_38);
Py_DECREF(tmp_import_name_from_38);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageURLContentBlockParam, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_39;
PyObject *tmp_name_value_39;
PyObject *tmp_globals_arg_value_39;
PyObject *tmp_locals_arg_value_39;
PyObject *tmp_fromlist_value_39;
PyObject *tmp_level_value_39;
tmp_name_value_39 = mod_consts.const_str_plain_file_citation_delta_annotation;
tmp_globals_arg_value_39 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_39 = Py_None;
tmp_fromlist_value_39 = mod_consts.const_tuple_str_plain_FileCitationDeltaAnnotation_tuple;
tmp_level_value_39 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 43;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_FileCitationDeltaAnnotation,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_FileCitationDeltaAnnotation);
}

CHECK_OBJECT(tmp_import_name_from_39);
Py_DECREF(tmp_import_name_from_39);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_FileCitationDeltaAnnotation, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_40;
PyObject *tmp_name_value_40;
PyObject *tmp_globals_arg_value_40;
PyObject *tmp_locals_arg_value_40;
PyObject *tmp_fromlist_value_40;
PyObject *tmp_level_value_40;
tmp_name_value_40 = mod_consts.const_str_plain_image_file_content_block_param;
tmp_globals_arg_value_40 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_40 = Py_None;
tmp_fromlist_value_40 = mod_consts.const_tuple_str_plain_ImageFileContentBlockParam_tuple;
tmp_level_value_40 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 44;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_ImageFileContentBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_ImageFileContentBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_40);
Py_DECREF(tmp_import_name_from_40);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFileContentBlockParam, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_41;
PyObject *tmp_name_value_41;
PyObject *tmp_globals_arg_value_41;
PyObject *tmp_locals_arg_value_41;
PyObject *tmp_fromlist_value_41;
PyObject *tmp_level_value_41;
tmp_name_value_41 = mod_consts.const_str_plain_run_submit_tool_outputs_params;
tmp_globals_arg_value_41 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_41 = Py_None;
tmp_fromlist_value_41 = mod_consts.const_tuple_str_plain_RunSubmitToolOutputsParams_tuple;
tmp_level_value_41 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 45;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_RunSubmitToolOutputsParams,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_RunSubmitToolOutputsParams);
}

CHECK_OBJECT(tmp_import_name_from_41);
Py_DECREF(tmp_import_name_from_41);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_RunSubmitToolOutputsParams, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_42;
PyObject *tmp_name_value_42;
PyObject *tmp_globals_arg_value_42;
PyObject *tmp_locals_arg_value_42;
PyObject *tmp_fromlist_value_42;
PyObject *tmp_level_value_42;
tmp_name_value_42 = mod_consts.const_str_plain_required_action_function_tool_call;
tmp_globals_arg_value_42 = (PyObject *)moduledict_openai$types$beta$threads;
tmp_locals_arg_value_42 = Py_None;
tmp_fromlist_value_42 = mod_consts.const_tuple_str_plain_RequiredActionFunctionToolCall_tuple;
tmp_level_value_42 = const_int_pos_1;
frame_frame_openai$types$beta$threads->m_frame.f_lineno = 46;
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
        (PyObject *)moduledict_openai$types$beta$threads,
        mod_consts.const_str_plain_RequiredActionFunctionToolCall,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_RequiredActionFunctionToolCall);
}

CHECK_OBJECT(tmp_import_name_from_42);
Py_DECREF(tmp_import_name_from_42);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_RequiredActionFunctionToolCall, tmp_assign_source_47);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$threads, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$threads->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$threads, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$beta$threads);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$beta$threads", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.threads" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$beta$threads);
    return module_openai$types$beta$threads;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$beta$threads", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

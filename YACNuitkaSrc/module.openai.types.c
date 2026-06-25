/* Generated code for Python module 'openai$types'
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



/* The "module_openai$types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types;
PyDictObject *moduledict_openai$types;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_c0760630ed38e8aa80130ab81decf450_tuple;
PyObject *const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_batch;
PyObject *const_tuple_str_plain_Batch_tuple;
PyObject *const_str_plain_Batch;
PyObject *const_str_plain_image;
PyObject *const_tuple_str_plain_Image_tuple;
PyObject *const_str_plain_Image;
PyObject *const_str_plain_model;
PyObject *const_tuple_str_plain_Model_tuple;
PyObject *const_str_plain_Model;
PyObject *const_str_plain_shared;
PyObject *const_tuple_7d0863c5231060069f00a04ec0250907_tuple;
PyObject *const_str_plain_Metadata;
PyObject *const_str_plain_AllModels;
PyObject *const_str_plain_ChatModel;
PyObject *const_str_plain_Reasoning;
PyObject *const_str_plain_ErrorObject;
PyObject *const_str_plain_CompoundFilter;
PyObject *const_str_plain_ResponsesModel;
PyObject *const_str_plain_ReasoningEffort;
PyObject *const_str_plain_ComparisonFilter;
PyObject *const_str_plain_FunctionDefinition;
PyObject *const_str_plain_FunctionParameters;
PyObject *const_str_plain_ResponseFormatText;
PyObject *const_str_plain_CustomToolInputFormat;
PyObject *const_str_plain_ResponseFormatJSONObject;
PyObject *const_str_plain_ResponseFormatJSONSchema;
PyObject *const_str_plain_ResponseFormatTextPython;
PyObject *const_str_plain_ResponseFormatTextGrammar;
PyObject *const_str_plain_upload;
PyObject *const_tuple_str_plain_Upload_tuple;
PyObject *const_str_plain_Upload;
PyObject *const_str_plain_embedding;
PyObject *const_tuple_str_plain_Embedding_tuple;
PyObject *const_str_plain_Embedding;
PyObject *const_str_plain_chat_model;
PyObject *const_tuple_str_plain_ChatModel_tuple;
PyObject *const_str_plain_completion;
PyObject *const_tuple_str_plain_Completion_tuple;
PyObject *const_str_plain_Completion;
PyObject *const_str_plain_moderation;
PyObject *const_tuple_str_plain_Moderation_tuple;
PyObject *const_str_plain_Moderation;
PyObject *const_str_plain_audio_model;
PyObject *const_tuple_str_plain_AudioModel_tuple;
PyObject *const_str_plain_AudioModel;
PyObject *const_str_plain_batch_error;
PyObject *const_tuple_str_plain_BatchError_tuple;
PyObject *const_str_plain_BatchError;
PyObject *const_str_plain_file_object;
PyObject *const_tuple_str_plain_FileObject_tuple;
PyObject *const_str_plain_FileObject;
PyObject *const_str_plain_image_model;
PyObject *const_tuple_str_plain_ImageModel_tuple;
PyObject *const_str_plain_ImageModel;
PyObject *const_str_plain_file_content;
PyObject *const_tuple_str_plain_FileContent_tuple;
PyObject *const_str_plain_FileContent;
PyObject *const_str_plain_file_deleted;
PyObject *const_tuple_str_plain_FileDeleted_tuple;
PyObject *const_str_plain_FileDeleted;
PyObject *const_str_plain_file_purpose;
PyObject *const_tuple_str_plain_FilePurpose_tuple;
PyObject *const_str_plain_FilePurpose;
PyObject *const_str_plain_vector_store;
PyObject *const_tuple_str_plain_VectorStore_tuple;
PyObject *const_str_plain_VectorStore;
PyObject *const_str_plain_model_deleted;
PyObject *const_tuple_str_plain_ModelDeleted_tuple;
PyObject *const_str_plain_ModelDeleted;
PyObject *const_str_plain_embedding_model;
PyObject *const_tuple_str_plain_EmbeddingModel_tuple;
PyObject *const_str_plain_EmbeddingModel;
PyObject *const_str_plain_images_response;
PyObject *const_tuple_str_plain_ImagesResponse_tuple;
PyObject *const_str_plain_ImagesResponse;
PyObject *const_str_plain_completion_usage;
PyObject *const_tuple_str_plain_CompletionUsage_tuple;
PyObject *const_str_plain_CompletionUsage;
PyObject *const_str_plain_eval_list_params;
PyObject *const_tuple_str_plain_EvalListParams_tuple;
PyObject *const_str_plain_EvalListParams;
PyObject *const_str_plain_file_list_params;
PyObject *const_tuple_str_plain_FileListParams_tuple;
PyObject *const_str_plain_FileListParams;
PyObject *const_str_plain_moderation_model;
PyObject *const_tuple_str_plain_ModerationModel_tuple;
PyObject *const_str_plain_ModerationModel;
PyObject *const_str_plain_batch_list_params;
PyObject *const_tuple_str_plain_BatchListParams_tuple;
PyObject *const_str_plain_BatchListParams;
PyObject *const_str_plain_completion_choice;
PyObject *const_tuple_str_plain_CompletionChoice_tuple;
PyObject *const_str_plain_CompletionChoice;
PyObject *const_str_plain_image_edit_params;
PyObject *const_tuple_str_plain_ImageEditParams_tuple;
PyObject *const_str_plain_ImageEditParams;
PyObject *const_str_plain_eval_create_params;
PyObject *const_tuple_str_plain_EvalCreateParams_tuple;
PyObject *const_str_plain_EvalCreateParams;
PyObject *const_str_plain_eval_list_response;
PyObject *const_tuple_str_plain_EvalListResponse_tuple;
PyObject *const_str_plain_EvalListResponse;
PyObject *const_str_plain_eval_update_params;
PyObject *const_tuple_str_plain_EvalUpdateParams_tuple;
PyObject *const_str_plain_EvalUpdateParams;
PyObject *const_str_plain_file_create_params;
PyObject *const_tuple_str_plain_FileCreateParams_tuple;
PyObject *const_str_plain_FileCreateParams;
PyObject *const_str_plain_batch_create_params;
PyObject *const_tuple_str_plain_BatchCreateParams_tuple;
PyObject *const_str_plain_BatchCreateParams;
PyObject *const_str_plain_batch_request_counts;
PyObject *const_tuple_str_plain_BatchRequestCounts_tuple;
PyObject *const_str_plain_BatchRequestCounts;
PyObject *const_str_plain_eval_create_response;
PyObject *const_tuple_str_plain_EvalCreateResponse_tuple;
PyObject *const_str_plain_EvalCreateResponse;
PyObject *const_str_plain_eval_delete_response;
PyObject *const_tuple_str_plain_EvalDeleteResponse_tuple;
PyObject *const_str_plain_EvalDeleteResponse;
PyObject *const_str_plain_eval_update_response;
PyObject *const_tuple_str_plain_EvalUpdateResponse_tuple;
PyObject *const_str_plain_EvalUpdateResponse;
PyObject *const_str_plain_upload_create_params;
PyObject *const_tuple_str_plain_UploadCreateParams_tuple;
PyObject *const_str_plain_UploadCreateParams;
PyObject *const_str_plain_vector_store_deleted;
PyObject *const_tuple_str_plain_VectorStoreDeleted_tuple;
PyObject *const_str_plain_VectorStoreDeleted;
PyObject *const_str_plain_audio_response_format;
PyObject *const_tuple_str_plain_AudioResponseFormat_tuple;
PyObject *const_str_plain_AudioResponseFormat;
PyObject *const_str_plain_container_list_params;
PyObject *const_tuple_str_plain_ContainerListParams_tuple;
PyObject *const_str_plain_ContainerListParams;
PyObject *const_str_plain_image_generate_params;
PyObject *const_tuple_str_plain_ImageGenerateParams_tuple;
PyObject *const_str_plain_ImageGenerateParams;
PyObject *const_str_plain_eval_retrieve_response;
PyObject *const_tuple_str_plain_EvalRetrieveResponse_tuple;
PyObject *const_str_plain_EvalRetrieveResponse;
PyObject *const_str_plain_file_chunking_strategy;
PyObject *const_tuple_str_plain_FileChunkingStrategy_tuple;
PyObject *const_str_plain_FileChunkingStrategy;
PyObject *const_str_plain_image_gen_stream_event;
PyObject *const_tuple_str_plain_ImageGenStreamEvent_tuple;
PyObject *const_str_plain_ImageGenStreamEvent;
PyObject *const_str_plain_upload_complete_params;
PyObject *const_tuple_str_plain_UploadCompleteParams_tuple;
PyObject *const_str_plain_UploadCompleteParams;
PyObject *const_str_plain_container_create_params;
PyObject *const_tuple_str_plain_ContainerCreateParams_tuple;
PyObject *const_str_plain_ContainerCreateParams;
PyObject *const_str_plain_container_list_response;
PyObject *const_tuple_str_plain_ContainerListResponse_tuple;
PyObject *const_str_plain_ContainerListResponse;
PyObject *const_str_plain_embedding_create_params;
PyObject *const_tuple_str_plain_EmbeddingCreateParams_tuple;
PyObject *const_str_plain_EmbeddingCreateParams;
PyObject *const_str_plain_image_edit_stream_event;
PyObject *const_tuple_str_plain_ImageEditStreamEvent_tuple;
PyObject *const_str_plain_ImageEditStreamEvent;
PyObject *const_str_plain_completion_create_params;
PyObject *const_tuple_str_plain_CompletionCreateParams_tuple;
PyObject *const_str_plain_CompletionCreateParams;
PyObject *const_str_plain_moderation_create_params;
PyObject *const_tuple_str_plain_ModerationCreateParams_tuple;
PyObject *const_str_plain_ModerationCreateParams;
PyObject *const_str_plain_vector_store_list_params;
PyObject *const_tuple_str_plain_VectorStoreListParams_tuple;
PyObject *const_str_plain_VectorStoreListParams;
PyObject *const_str_plain_container_create_response;
PyObject *const_tuple_str_plain_ContainerCreateResponse_tuple;
PyObject *const_str_plain_ContainerCreateResponse;
PyObject *const_str_plain_create_embedding_response;
PyObject *const_tuple_str_plain_CreateEmbeddingResponse_tuple;
PyObject *const_str_plain_CreateEmbeddingResponse;
PyObject *const_str_plain_image_gen_completed_event;
PyObject *const_tuple_str_plain_ImageGenCompletedEvent_tuple;
PyObject *const_str_plain_ImageGenCompletedEvent;
PyObject *const_str_plain_image_edit_completed_event;
PyObject *const_tuple_str_plain_ImageEditCompletedEvent_tuple;
PyObject *const_str_plain_ImageEditCompletedEvent;
PyObject *const_str_plain_moderation_create_response;
PyObject *const_tuple_str_plain_ModerationCreateResponse_tuple;
PyObject *const_str_plain_ModerationCreateResponse;
PyObject *const_str_plain_vector_store_create_params;
PyObject *const_tuple_str_plain_VectorStoreCreateParams_tuple;
PyObject *const_str_plain_VectorStoreCreateParams;
PyObject *const_str_plain_vector_store_search_params;
PyObject *const_tuple_str_plain_VectorStoreSearchParams_tuple;
PyObject *const_str_plain_VectorStoreSearchParams;
PyObject *const_str_plain_vector_store_update_params;
PyObject *const_tuple_str_plain_VectorStoreUpdateParams_tuple;
PyObject *const_str_plain_VectorStoreUpdateParams;
PyObject *const_str_plain_container_retrieve_response;
PyObject *const_tuple_str_plain_ContainerRetrieveResponse_tuple;
PyObject *const_str_plain_ContainerRetrieveResponse;
PyObject *const_str_plain_moderation_text_input_param;
PyObject *const_tuple_str_plain_ModerationTextInputParam_tuple;
PyObject *const_str_plain_ModerationTextInputParam;
PyObject *const_str_plain_file_chunking_strategy_param;
PyObject *const_tuple_str_plain_FileChunkingStrategyParam_tuple;
PyObject *const_str_plain_FileChunkingStrategyParam;
PyObject *const_str_plain_vector_store_search_response;
PyObject *const_tuple_str_plain_VectorStoreSearchResponse_tuple;
PyObject *const_str_plain_VectorStoreSearchResponse;
PyObject *const_str_plain_websocket_connection_options;
PyObject *const_tuple_str_plain_WebsocketConnectionOptions_tuple;
PyObject *const_str_plain_WebsocketConnectionOptions;
PyObject *const_str_plain_image_create_variation_params;
PyObject *const_tuple_str_plain_ImageCreateVariationParams_tuple;
PyObject *const_str_plain_ImageCreateVariationParams;
PyObject *const_str_plain_image_gen_partial_image_event;
PyObject *const_tuple_str_plain_ImageGenPartialImageEvent_tuple;
PyObject *const_str_plain_ImageGenPartialImageEvent;
PyObject *const_str_plain_static_file_chunking_strategy;
PyObject *const_tuple_str_plain_StaticFileChunkingStrategy_tuple;
PyObject *const_str_plain_StaticFileChunkingStrategy;
PyObject *const_str_plain_eval_custom_data_source_config;
PyObject *const_tuple_str_plain_EvalCustomDataSourceConfig_tuple;
PyObject *const_str_plain_EvalCustomDataSourceConfig;
PyObject *const_str_plain_image_edit_partial_image_event;
PyObject *const_tuple_str_plain_ImageEditPartialImageEvent_tuple;
PyObject *const_str_plain_ImageEditPartialImageEvent;
PyObject *const_str_plain_moderation_image_url_input_param;
PyObject *const_tuple_str_plain_ModerationImageURLInputParam_tuple;
PyObject *const_str_plain_ModerationImageURLInputParam;
PyObject *const_str_plain_auto_file_chunking_strategy_param;
PyObject *const_tuple_str_plain_AutoFileChunkingStrategyParam_tuple;
PyObject *const_str_plain_AutoFileChunkingStrategyParam;
PyObject *const_str_plain_moderation_multi_modal_input_param;
PyObject *const_tuple_str_plain_ModerationMultiModalInputParam_tuple;
PyObject *const_str_plain_ModerationMultiModalInputParam;
PyObject *const_str_plain_other_file_chunking_strategy_object;
PyObject *const_tuple_str_plain_OtherFileChunkingStrategyObject_tuple;
PyObject *const_str_plain_OtherFileChunkingStrategyObject;
PyObject *const_str_plain_static_file_chunking_strategy_param;
PyObject *const_tuple_str_plain_StaticFileChunkingStrategyParam_tuple;
PyObject *const_str_plain_StaticFileChunkingStrategyParam;
PyObject *const_str_plain_static_file_chunking_strategy_object;
PyObject *const_tuple_str_plain_StaticFileChunkingStrategyObject_tuple;
PyObject *const_str_plain_StaticFileChunkingStrategyObject;
PyObject *const_str_digest_0226a3cff429c71651d13c2792e2034b;
PyObject *const_tuple_str_plain_EvalStoredCompletionsDataSourceConfig_tuple;
PyObject *const_str_plain_EvalStoredCompletionsDataSourceConfig;
PyObject *const_str_digest_d84e59d091b540e18da842b001c890d7;
PyObject *const_tuple_str_plain_StaticFileChunkingStrategyObjectParam_tuple;
PyObject *const_str_plain_StaticFileChunkingStrategyObjectParam;
PyObject *const_str_digest_91a86212f9b8d2f97b9700c2d3204171;
PyObject *const_str_digest_e3ab8f407a71d59d6a2ef00ccc76a803;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[259];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_batch);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Batch_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Batch);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_image);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Model_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Model);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_shared);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_7d0863c5231060069f00a04ec0250907_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_AllModels);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatModel);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_Reasoning);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorObject);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompoundFilter);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponsesModel);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReasoningEffort);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_ComparisonFilter);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionDefinition);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionParameters);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatText);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_CustomToolInputFormat);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatJSONObject);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatJSONSchema);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatTextPython);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatTextGrammar);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_upload);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Upload_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Upload);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_embedding);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Embedding_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_Embedding);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_model);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatModel_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_completion);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Completion_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_Completion);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_moderation);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Moderation_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_Moderation);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_audio_model);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AudioModel_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_AudioModel);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_batch_error);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BatchError_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_BatchError);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_object);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileObject_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileObject);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_model);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageModel_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageModel);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_content);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileContent_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileContent);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_deleted);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileDeleted_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileDeleted);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_purpose);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FilePurpose_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_FilePurpose);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStore_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStore);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_deleted);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModelDeleted_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModelDeleted);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_embedding_model);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EmbeddingModel_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_EmbeddingModel);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_images_response);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImagesResponse_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImagesResponse);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_completion_usage);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionUsage_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionUsage);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_list_params);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalListParams_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalListParams);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_list_params);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileListParams_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileListParams);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_model);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationModel_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationModel);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_batch_list_params);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BatchListParams_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_BatchListParams);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_completion_choice);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionChoice_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionChoice);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_edit_params);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageEditParams_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageEditParams);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_create_params);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalCreateParams_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalCreateParams);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_list_response);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalListResponse_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalListResponse);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_update_params);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalUpdateParams_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalUpdateParams);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_create_params);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileCreateParams_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileCreateParams);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_batch_create_params);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BatchCreateParams_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_BatchCreateParams);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_batch_request_counts);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BatchRequestCounts_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_BatchRequestCounts);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_create_response);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalCreateResponse_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalCreateResponse);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_delete_response);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalDeleteResponse_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalDeleteResponse);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_update_response);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalUpdateResponse_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalUpdateResponse);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_upload_create_params);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UploadCreateParams_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_UploadCreateParams);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_deleted);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreDeleted_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreDeleted);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_audio_response_format);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AudioResponseFormat_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_AudioResponseFormat);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_container_list_params);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerListParams_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerListParams);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_generate_params);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageGenerateParams_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageGenerateParams);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_retrieve_response);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalRetrieveResponse_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalRetrieveResponse);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_chunking_strategy);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileChunkingStrategy_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileChunkingStrategy);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_gen_stream_event);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageGenStreamEvent_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageGenStreamEvent);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_upload_complete_params);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UploadCompleteParams_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_UploadCompleteParams);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_container_create_params);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerCreateParams_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerCreateParams);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_container_list_response);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerListResponse_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerListResponse);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_embedding_create_params);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EmbeddingCreateParams_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_EmbeddingCreateParams);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_edit_stream_event);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageEditStreamEvent_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageEditStreamEvent);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_completion_create_params);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionCreateParams_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionCreateParams);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_create_params);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationCreateParams_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationCreateParams);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_list_params);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreListParams_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreListParams);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_container_create_response);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerCreateResponse_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerCreateResponse);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_embedding_response);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CreateEmbeddingResponse_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEmbeddingResponse);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_gen_completed_event);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageGenCompletedEvent_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageGenCompletedEvent);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_edit_completed_event);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageEditCompletedEvent_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageEditCompletedEvent);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_create_response);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationCreateResponse_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationCreateResponse);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_create_params);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreCreateParams_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreCreateParams);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_search_params);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreSearchParams_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreSearchParams);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_update_params);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreUpdateParams_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreUpdateParams);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_container_retrieve_response);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerRetrieveResponse_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerRetrieveResponse);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_text_input_param);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationTextInputParam_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationTextInputParam);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_chunking_strategy_param);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileChunkingStrategyParam_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileChunkingStrategyParam);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_search_response);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreSearchResponse_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreSearchResponse);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_websocket_connection_options);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebsocketConnectionOptions_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebsocketConnectionOptions);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_create_variation_params);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageCreateVariationParams_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageCreateVariationParams);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_gen_partial_image_event);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageGenPartialImageEvent_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageGenPartialImageEvent);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_plain_static_file_chunking_strategy);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StaticFileChunkingStrategy_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_plain_StaticFileChunkingStrategy);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_custom_data_source_config);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalCustomDataSourceConfig_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalCustomDataSourceConfig);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_edit_partial_image_event);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageEditPartialImageEvent_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageEditPartialImageEvent);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_image_url_input_param);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationImageURLInputParam_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationImageURLInputParam);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto_file_chunking_strategy_param);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AutoFileChunkingStrategyParam_tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_plain_AutoFileChunkingStrategyParam);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_multi_modal_input_param);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationMultiModalInputParam_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationMultiModalInputParam);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_plain_other_file_chunking_strategy_object);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OtherFileChunkingStrategyObject_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_plain_OtherFileChunkingStrategyObject);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_plain_static_file_chunking_strategy_param);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyParam_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_plain_StaticFileChunkingStrategyParam);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_str_plain_static_file_chunking_strategy_object);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyObject_tuple);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_str_plain_StaticFileChunkingStrategyObject);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_str_digest_0226a3cff429c71651d13c2792e2034b);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalStoredCompletionsDataSourceConfig_tuple);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalStoredCompletionsDataSourceConfig);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_str_digest_d84e59d091b540e18da842b001c890d7);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyObjectParam_tuple);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_str_plain_StaticFileChunkingStrategyObjectParam);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_digest_91a86212f9b8d2f97b9700c2d3204171);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3ab8f407a71d59d6a2ef00ccc76a803);
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
void checkModuleConstants_openai$types(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_batch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_batch);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Batch_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Batch_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Batch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Batch);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_image));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Image_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Image);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Model_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Model);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_shared));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shared);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_7d0863c5231060069f00a04ec0250907_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7d0863c5231060069f00a04ec0250907_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Metadata);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_AllModels));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AllModels);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatModel);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_Reasoning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Reasoning);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ErrorObject);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompoundFilter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompoundFilter);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponsesModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponsesModel);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReasoningEffort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReasoningEffort);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_ComparisonFilter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ComparisonFilter);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionDefinition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FunctionDefinition);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionParameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FunctionParameters);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFormatText);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_CustomToolInputFormat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CustomToolInputFormat);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatJSONObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFormatJSONObject);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatJSONSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFormatJSONSchema);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatTextPython));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFormatTextPython);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFormatTextGrammar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFormatTextGrammar);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_upload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_upload);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Upload_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Upload_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Upload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Upload);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_embedding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_embedding);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Embedding_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Embedding_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_Embedding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Embedding);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_model);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatModel_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_completion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completion);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Completion_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Completion_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_Completion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Completion);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_moderation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moderation);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Moderation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Moderation_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_Moderation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Moderation);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_audio_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audio_model);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AudioModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AudioModel_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_AudioModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AudioModel);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_batch_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_batch_error);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BatchError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BatchError_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_BatchError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BatchError);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_object);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileObject_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileObject_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileObject);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_model);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageModel_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageModel);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_content);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileContent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileContent_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileContent);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_deleted);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileDeleted_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileDeleted_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileDeleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileDeleted);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_purpose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_purpose);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FilePurpose_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FilePurpose_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_FilePurpose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FilePurpose);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_store);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VectorStore_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStore);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_deleted);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModelDeleted_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ModelDeleted_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModelDeleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModelDeleted);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_embedding_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_embedding_model);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EmbeddingModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EmbeddingModel_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_EmbeddingModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EmbeddingModel);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_images_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_images_response);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImagesResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImagesResponse_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImagesResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImagesResponse);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_completion_usage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completion_usage);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionUsage_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CompletionUsage_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionUsage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompletionUsage);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_list_params);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalListParams_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalListParams);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_list_params);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileListParams_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileListParams);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moderation_model);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ModerationModel_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModerationModel);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_batch_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_batch_list_params);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BatchListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BatchListParams_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_BatchListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BatchListParams);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_completion_choice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completion_choice);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionChoice_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CompletionChoice_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionChoice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompletionChoice);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_edit_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_edit_params);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageEditParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageEditParams_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageEditParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageEditParams);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_create_params);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalCreateParams_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalCreateParams);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_list_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_list_response);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalListResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalListResponse_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalListResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalListResponse);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_update_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_update_params);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalUpdateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalUpdateParams_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalUpdateParams);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_create_params);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileCreateParams_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileCreateParams);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_batch_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_batch_create_params);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BatchCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BatchCreateParams_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_BatchCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BatchCreateParams);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_batch_request_counts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_batch_request_counts);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BatchRequestCounts_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BatchRequestCounts_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_BatchRequestCounts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BatchRequestCounts);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_create_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_create_response);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalCreateResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalCreateResponse_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalCreateResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalCreateResponse);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_delete_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_delete_response);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalDeleteResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalDeleteResponse_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalDeleteResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalDeleteResponse);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_update_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_update_response);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalUpdateResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalUpdateResponse_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalUpdateResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalUpdateResponse);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_upload_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_upload_create_params);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UploadCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UploadCreateParams_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_UploadCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UploadCreateParams);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_store_deleted);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreDeleted_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VectorStoreDeleted_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreDeleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStoreDeleted);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_audio_response_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audio_response_format);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AudioResponseFormat_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AudioResponseFormat_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_AudioResponseFormat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AudioResponseFormat);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_container_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_container_list_params);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ContainerListParams_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContainerListParams);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_generate_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_generate_params);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageGenerateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageGenerateParams_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageGenerateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageGenerateParams);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_retrieve_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_retrieve_response);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalRetrieveResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalRetrieveResponse_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalRetrieveResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalRetrieveResponse);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_chunking_strategy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_chunking_strategy);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileChunkingStrategy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileChunkingStrategy_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileChunkingStrategy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileChunkingStrategy);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_gen_stream_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_gen_stream_event);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageGenStreamEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageGenStreamEvent_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageGenStreamEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageGenStreamEvent);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_upload_complete_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_upload_complete_params);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UploadCompleteParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UploadCompleteParams_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_UploadCompleteParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UploadCompleteParams);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_container_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_container_create_params);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ContainerCreateParams_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContainerCreateParams);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_container_list_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_container_list_response);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerListResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ContainerListResponse_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerListResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContainerListResponse);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_embedding_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_embedding_create_params);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EmbeddingCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EmbeddingCreateParams_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_EmbeddingCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EmbeddingCreateParams);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_edit_stream_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_edit_stream_event);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageEditStreamEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageEditStreamEvent_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageEditStreamEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageEditStreamEvent);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_completion_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completion_create_params);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CompletionCreateParams_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompletionCreateParams);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moderation_create_params);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ModerationCreateParams_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModerationCreateParams);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_store_list_params);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VectorStoreListParams_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStoreListParams);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_container_create_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_container_create_response);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerCreateResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ContainerCreateResponse_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerCreateResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContainerCreateResponse);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_embedding_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_embedding_response);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CreateEmbeddingResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CreateEmbeddingResponse_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEmbeddingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateEmbeddingResponse);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_gen_completed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_gen_completed_event);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageGenCompletedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageGenCompletedEvent_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageGenCompletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageGenCompletedEvent);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_edit_completed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_edit_completed_event);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageEditCompletedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageEditCompletedEvent_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageEditCompletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageEditCompletedEvent);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_create_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moderation_create_response);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationCreateResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ModerationCreateResponse_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationCreateResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModerationCreateResponse);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_store_create_params);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VectorStoreCreateParams_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStoreCreateParams);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_search_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_store_search_params);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreSearchParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VectorStoreSearchParams_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreSearchParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStoreSearchParams);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_update_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_store_update_params);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreUpdateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VectorStoreUpdateParams_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStoreUpdateParams);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_container_retrieve_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_container_retrieve_response);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContainerRetrieveResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ContainerRetrieveResponse_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContainerRetrieveResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContainerRetrieveResponse);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_text_input_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moderation_text_input_param);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationTextInputParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ModerationTextInputParam_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationTextInputParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModerationTextInputParam);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_chunking_strategy_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_chunking_strategy_param);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileChunkingStrategyParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileChunkingStrategyParam_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileChunkingStrategyParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileChunkingStrategyParam);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_search_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_store_search_response);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreSearchResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VectorStoreSearchResponse_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreSearchResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStoreSearchResponse);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_websocket_connection_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_websocket_connection_options);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebsocketConnectionOptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WebsocketConnectionOptions_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebsocketConnectionOptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebsocketConnectionOptions);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_create_variation_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_create_variation_params);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageCreateVariationParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageCreateVariationParams_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageCreateVariationParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageCreateVariationParams);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_gen_partial_image_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_gen_partial_image_event);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageGenPartialImageEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageGenPartialImageEvent_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageGenPartialImageEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageGenPartialImageEvent);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_plain_static_file_chunking_strategy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_static_file_chunking_strategy);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StaticFileChunkingStrategy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StaticFileChunkingStrategy_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_plain_StaticFileChunkingStrategy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StaticFileChunkingStrategy);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_custom_data_source_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_custom_data_source_config);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalCustomDataSourceConfig_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalCustomDataSourceConfig_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalCustomDataSourceConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalCustomDataSourceConfig);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_edit_partial_image_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image_edit_partial_image_event);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageEditPartialImageEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ImageEditPartialImageEvent_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageEditPartialImageEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImageEditPartialImageEvent);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_image_url_input_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moderation_image_url_input_param);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationImageURLInputParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ModerationImageURLInputParam_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationImageURLInputParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModerationImageURLInputParam);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto_file_chunking_strategy_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto_file_chunking_strategy_param);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AutoFileChunkingStrategyParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AutoFileChunkingStrategyParam_tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_plain_AutoFileChunkingStrategyParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AutoFileChunkingStrategyParam);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_plain_moderation_multi_modal_input_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moderation_multi_modal_input_param);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ModerationMultiModalInputParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ModerationMultiModalInputParam_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationMultiModalInputParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModerationMultiModalInputParam);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_plain_other_file_chunking_strategy_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_other_file_chunking_strategy_object);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OtherFileChunkingStrategyObject_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OtherFileChunkingStrategyObject_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_plain_OtherFileChunkingStrategyObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OtherFileChunkingStrategyObject);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_plain_static_file_chunking_strategy_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_static_file_chunking_strategy_param);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyParam_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_plain_StaticFileChunkingStrategyParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StaticFileChunkingStrategyParam);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_str_plain_static_file_chunking_strategy_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_static_file_chunking_strategy_object);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyObject_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyObject_tuple);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_str_plain_StaticFileChunkingStrategyObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StaticFileChunkingStrategyObject);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_str_digest_0226a3cff429c71651d13c2792e2034b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0226a3cff429c71651d13c2792e2034b);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalStoredCompletionsDataSourceConfig_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalStoredCompletionsDataSourceConfig_tuple);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalStoredCompletionsDataSourceConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalStoredCompletionsDataSourceConfig);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_str_digest_d84e59d091b540e18da842b001c890d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d84e59d091b540e18da842b001c890d7);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyObjectParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyObjectParam_tuple);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_str_plain_StaticFileChunkingStrategyObjectParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StaticFileChunkingStrategyObjectParam);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_digest_91a86212f9b8d2f97b9700c2d3204171));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91a86212f9b8d2f97b9700c2d3204171);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3ab8f407a71d59d6a2ef00ccc76a803));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e3ab8f407a71d59d6a2ef00ccc76a803);
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
static PyObject *module_var_accessor_openai$types$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_cd5cdce3314fe8a75f961861aa166d45;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_91a86212f9b8d2f97b9700c2d3204171); CHECK_OBJECT(module_filename_obj);
code_objects_cd5cdce3314fe8a75f961861aa166d45 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_e3ab8f407a71d59d6a2ef00ccc76a803, mod_consts.const_str_digest_e3ab8f407a71d59d6a2ef00ccc76a803, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$types[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types);
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
        module_openai$types,
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
        function_table_openai$types,
        sizeof(function_table_openai$types) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types");

    // Store the module for future use.
    module_openai$types = module;

    moduledict_openai$types = MODULE_DICT(module_openai$types);

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
        PRINT_STRING("openai$types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types);
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

        UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types = MAKE_MODULE_FRAME(code_objects_cd5cdce3314fe8a75f961861aa166d45, module_openai$types);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types);
assert(Py_REFCNT(frame_frame_openai$types) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_openai$types->m_frame.f_lineno = 1;
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
frame_frame_openai$types->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_openai$types->m_frame.f_lineno = 1;
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
frame_frame_openai$types->m_frame.f_lineno = 1;
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
frame_frame_openai$types->m_frame.f_lineno = 1;
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
tmp_args_element_value_3 = const_str_plain_types;
frame_frame_openai$types->m_frame.f_lineno = 1;
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
frame_frame_openai$types->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


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
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_openai$types$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_openai$types$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_batch;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Batch_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 5;
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
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_Batch,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Batch);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Batch, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_image;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Image_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 6;
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
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Image);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_model;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Model_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 7;
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
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_Model,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Model);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Model, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_shared;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_7d0863c5231060069f00a04ec0250907_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 8;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_Metadata,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Metadata);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Metadata, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_AllModels,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_AllModels);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_AllModels, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ChatModel,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ChatModel);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatModel, tmp_assign_source_12);
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
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_Reasoning,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Reasoning);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Reasoning, tmp_assign_source_13);
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
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ErrorObject,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ErrorObject);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorObject, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_CompoundFilter,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_CompoundFilter);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CompoundFilter, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ResponsesModel,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_ResponsesModel);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponsesModel, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ReasoningEffort,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ReasoningEffort);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ReasoningEffort, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ComparisonFilter,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ComparisonFilter);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ComparisonFilter, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_13 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_FunctionDefinition,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_FunctionDefinition);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_FunctionDefinition, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_14 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_FunctionParameters,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_FunctionParameters);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_FunctionParameters, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_15 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ResponseFormatText,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_ResponseFormatText);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatText, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_16 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_CustomToolInputFormat,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_CustomToolInputFormat);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CustomToolInputFormat, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_17 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ResponseFormatJSONObject,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_ResponseFormatJSONObject);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatJSONObject, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_18 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ResponseFormatJSONSchema,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_ResponseFormatJSONSchema);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatJSONSchema, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_19 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ResponseFormatTextPython,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_ResponseFormatTextPython);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatTextPython, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_20 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ResponseFormatTextGrammar,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_ResponseFormatTextGrammar);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFormatTextGrammar, tmp_assign_source_26);
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
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_upload;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Upload_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 27;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_Upload,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_Upload);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Upload, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_embedding;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_Embedding_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 28;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_Embedding,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_Embedding);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Embedding, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_chat_model;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_ChatModel_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 29;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ChatModel,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_ChatModel);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatModel, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_completion;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_Completion_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 30;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_Completion,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_Completion);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Completion, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_moderation;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_Moderation_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 31;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_Moderation,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_Moderation);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Moderation, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_audio_model;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_AudioModel_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 32;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_AudioModel,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_AudioModel);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_AudioModel, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_batch_error;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_BatchError_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 33;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_BatchError,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_BatchError);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_BatchError, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_file_object;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_FileObject_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 34;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_FileObject,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_FileObject);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileObject, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_image_model;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_ImageModel_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 35;
tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImageModel,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ImageModel);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageModel, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_file_content;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_FileContent_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 36;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_FileContent,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_FileContent);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContent, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_file_deleted;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_FileDeleted_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 37;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_FileDeleted,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_FileDeleted);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileDeleted, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_file_purpose;
tmp_globals_arg_value_16 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_FilePurpose_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 38;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_FilePurpose,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_FilePurpose);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_FilePurpose, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_vector_store;
tmp_globals_arg_value_17 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_VectorStore_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 39;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_VectorStore,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_VectorStore);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStore, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_model_deleted;
tmp_globals_arg_value_18 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_ModelDeleted_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 40;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ModelDeleted,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_ModelDeleted);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ModelDeleted, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_35;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_embedding_model;
tmp_globals_arg_value_19 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_EmbeddingModel_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 41;
tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EmbeddingModel,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_EmbeddingModel);
}

CHECK_OBJECT(tmp_import_name_from_35);
Py_DECREF(tmp_import_name_from_35);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EmbeddingModel, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_36;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_images_response;
tmp_globals_arg_value_20 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_ImagesResponse_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 42;
tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImagesResponse,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_ImagesResponse);
}

CHECK_OBJECT(tmp_import_name_from_36);
Py_DECREF(tmp_import_name_from_36);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagesResponse, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_37;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain_completion_usage;
tmp_globals_arg_value_21 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_plain_CompletionUsage_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 43;
tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_CompletionUsage,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_CompletionUsage);
}

CHECK_OBJECT(tmp_import_name_from_37);
Py_DECREF(tmp_import_name_from_37);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletionUsage, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_38;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_plain_eval_list_params;
tmp_globals_arg_value_22 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_plain_EvalListParams_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 44;
tmp_import_name_from_38 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EvalListParams,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_EvalListParams);
}

CHECK_OBJECT(tmp_import_name_from_38);
Py_DECREF(tmp_import_name_from_38);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalListParams, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_39;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_plain_file_list_params;
tmp_globals_arg_value_23 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_plain_FileListParams_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 45;
tmp_import_name_from_39 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_import_name_from_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_FileListParams,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_FileListParams);
}

CHECK_OBJECT(tmp_import_name_from_39);
Py_DECREF(tmp_import_name_from_39);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileListParams, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_40;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_plain_moderation_model;
tmp_globals_arg_value_24 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_plain_ModerationModel_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 46;
tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
if (tmp_import_name_from_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ModerationModel,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_ModerationModel);
}

CHECK_OBJECT(tmp_import_name_from_40);
Py_DECREF(tmp_import_name_from_40);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ModerationModel, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_41;
PyObject *tmp_name_value_25;
PyObject *tmp_globals_arg_value_25;
PyObject *tmp_locals_arg_value_25;
PyObject *tmp_fromlist_value_25;
PyObject *tmp_level_value_25;
tmp_name_value_25 = mod_consts.const_str_plain_batch_list_params;
tmp_globals_arg_value_25 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_25 = Py_None;
tmp_fromlist_value_25 = mod_consts.const_tuple_str_plain_BatchListParams_tuple;
tmp_level_value_25 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 47;
tmp_import_name_from_41 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
if (tmp_import_name_from_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_BatchListParams,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_BatchListParams);
}

CHECK_OBJECT(tmp_import_name_from_41);
Py_DECREF(tmp_import_name_from_41);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_BatchListParams, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_42;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_26;
PyObject *tmp_locals_arg_value_26;
PyObject *tmp_fromlist_value_26;
PyObject *tmp_level_value_26;
tmp_name_value_26 = mod_consts.const_str_plain_completion_choice;
tmp_globals_arg_value_26 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_26 = Py_None;
tmp_fromlist_value_26 = mod_consts.const_tuple_str_plain_CompletionChoice_tuple;
tmp_level_value_26 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 48;
tmp_import_name_from_42 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
if (tmp_import_name_from_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_CompletionChoice,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_CompletionChoice);
}

CHECK_OBJECT(tmp_import_name_from_42);
Py_DECREF(tmp_import_name_from_42);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletionChoice, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_43;
PyObject *tmp_name_value_27;
PyObject *tmp_globals_arg_value_27;
PyObject *tmp_locals_arg_value_27;
PyObject *tmp_fromlist_value_27;
PyObject *tmp_level_value_27;
tmp_name_value_27 = mod_consts.const_str_plain_image_edit_params;
tmp_globals_arg_value_27 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_27 = Py_None;
tmp_fromlist_value_27 = mod_consts.const_tuple_str_plain_ImageEditParams_tuple;
tmp_level_value_27 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 49;
tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
if (tmp_import_name_from_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImageEditParams,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_ImageEditParams);
}

CHECK_OBJECT(tmp_import_name_from_43);
Py_DECREF(tmp_import_name_from_43);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageEditParams, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_44;
PyObject *tmp_name_value_28;
PyObject *tmp_globals_arg_value_28;
PyObject *tmp_locals_arg_value_28;
PyObject *tmp_fromlist_value_28;
PyObject *tmp_level_value_28;
tmp_name_value_28 = mod_consts.const_str_plain_eval_create_params;
tmp_globals_arg_value_28 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_28 = Py_None;
tmp_fromlist_value_28 = mod_consts.const_tuple_str_plain_EvalCreateParams_tuple;
tmp_level_value_28 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 50;
tmp_import_name_from_44 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
if (tmp_import_name_from_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EvalCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_EvalCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_44);
Py_DECREF(tmp_import_name_from_44);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalCreateParams, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_45;
PyObject *tmp_name_value_29;
PyObject *tmp_globals_arg_value_29;
PyObject *tmp_locals_arg_value_29;
PyObject *tmp_fromlist_value_29;
PyObject *tmp_level_value_29;
tmp_name_value_29 = mod_consts.const_str_plain_eval_list_response;
tmp_globals_arg_value_29 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_29 = Py_None;
tmp_fromlist_value_29 = mod_consts.const_tuple_str_plain_EvalListResponse_tuple;
tmp_level_value_29 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 51;
tmp_import_name_from_45 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
if (tmp_import_name_from_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EvalListResponse,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_EvalListResponse);
}

CHECK_OBJECT(tmp_import_name_from_45);
Py_DECREF(tmp_import_name_from_45);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalListResponse, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_46;
PyObject *tmp_name_value_30;
PyObject *tmp_globals_arg_value_30;
PyObject *tmp_locals_arg_value_30;
PyObject *tmp_fromlist_value_30;
PyObject *tmp_level_value_30;
tmp_name_value_30 = mod_consts.const_str_plain_eval_update_params;
tmp_globals_arg_value_30 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_30 = Py_None;
tmp_fromlist_value_30 = mod_consts.const_tuple_str_plain_EvalUpdateParams_tuple;
tmp_level_value_30 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 52;
tmp_import_name_from_46 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
if (tmp_import_name_from_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EvalUpdateParams,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_EvalUpdateParams);
}

CHECK_OBJECT(tmp_import_name_from_46);
Py_DECREF(tmp_import_name_from_46);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalUpdateParams, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_47;
PyObject *tmp_name_value_31;
PyObject *tmp_globals_arg_value_31;
PyObject *tmp_locals_arg_value_31;
PyObject *tmp_fromlist_value_31;
PyObject *tmp_level_value_31;
tmp_name_value_31 = mod_consts.const_str_plain_file_create_params;
tmp_globals_arg_value_31 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_31 = Py_None;
tmp_fromlist_value_31 = mod_consts.const_tuple_str_plain_FileCreateParams_tuple;
tmp_level_value_31 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 53;
tmp_import_name_from_47 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
if (tmp_import_name_from_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_FileCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_FileCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_47);
Py_DECREF(tmp_import_name_from_47);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileCreateParams, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_48;
PyObject *tmp_name_value_32;
PyObject *tmp_globals_arg_value_32;
PyObject *tmp_locals_arg_value_32;
PyObject *tmp_fromlist_value_32;
PyObject *tmp_level_value_32;
tmp_name_value_32 = mod_consts.const_str_plain_batch_create_params;
tmp_globals_arg_value_32 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_32 = Py_None;
tmp_fromlist_value_32 = mod_consts.const_tuple_str_plain_BatchCreateParams_tuple;
tmp_level_value_32 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 54;
tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
if (tmp_import_name_from_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_BatchCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_BatchCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_48);
Py_DECREF(tmp_import_name_from_48);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_BatchCreateParams, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_49;
PyObject *tmp_name_value_33;
PyObject *tmp_globals_arg_value_33;
PyObject *tmp_locals_arg_value_33;
PyObject *tmp_fromlist_value_33;
PyObject *tmp_level_value_33;
tmp_name_value_33 = mod_consts.const_str_plain_batch_request_counts;
tmp_globals_arg_value_33 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_33 = Py_None;
tmp_fromlist_value_33 = mod_consts.const_tuple_str_plain_BatchRequestCounts_tuple;
tmp_level_value_33 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 55;
tmp_import_name_from_49 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
if (tmp_import_name_from_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_BatchRequestCounts,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_BatchRequestCounts);
}

CHECK_OBJECT(tmp_import_name_from_49);
Py_DECREF(tmp_import_name_from_49);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_BatchRequestCounts, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_50;
PyObject *tmp_name_value_34;
PyObject *tmp_globals_arg_value_34;
PyObject *tmp_locals_arg_value_34;
PyObject *tmp_fromlist_value_34;
PyObject *tmp_level_value_34;
tmp_name_value_34 = mod_consts.const_str_plain_eval_create_response;
tmp_globals_arg_value_34 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_34 = Py_None;
tmp_fromlist_value_34 = mod_consts.const_tuple_str_plain_EvalCreateResponse_tuple;
tmp_level_value_34 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 56;
tmp_import_name_from_50 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
if (tmp_import_name_from_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EvalCreateResponse,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_EvalCreateResponse);
}

CHECK_OBJECT(tmp_import_name_from_50);
Py_DECREF(tmp_import_name_from_50);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalCreateResponse, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_51;
PyObject *tmp_name_value_35;
PyObject *tmp_globals_arg_value_35;
PyObject *tmp_locals_arg_value_35;
PyObject *tmp_fromlist_value_35;
PyObject *tmp_level_value_35;
tmp_name_value_35 = mod_consts.const_str_plain_eval_delete_response;
tmp_globals_arg_value_35 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_35 = Py_None;
tmp_fromlist_value_35 = mod_consts.const_tuple_str_plain_EvalDeleteResponse_tuple;
tmp_level_value_35 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 57;
tmp_import_name_from_51 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
if (tmp_import_name_from_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EvalDeleteResponse,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_EvalDeleteResponse);
}

CHECK_OBJECT(tmp_import_name_from_51);
Py_DECREF(tmp_import_name_from_51);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalDeleteResponse, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_52;
PyObject *tmp_name_value_36;
PyObject *tmp_globals_arg_value_36;
PyObject *tmp_locals_arg_value_36;
PyObject *tmp_fromlist_value_36;
PyObject *tmp_level_value_36;
tmp_name_value_36 = mod_consts.const_str_plain_eval_update_response;
tmp_globals_arg_value_36 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_36 = Py_None;
tmp_fromlist_value_36 = mod_consts.const_tuple_str_plain_EvalUpdateResponse_tuple;
tmp_level_value_36 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 58;
tmp_import_name_from_52 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
if (tmp_import_name_from_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EvalUpdateResponse,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain_EvalUpdateResponse);
}

CHECK_OBJECT(tmp_import_name_from_52);
Py_DECREF(tmp_import_name_from_52);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalUpdateResponse, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_53;
PyObject *tmp_name_value_37;
PyObject *tmp_globals_arg_value_37;
PyObject *tmp_locals_arg_value_37;
PyObject *tmp_fromlist_value_37;
PyObject *tmp_level_value_37;
tmp_name_value_37 = mod_consts.const_str_plain_upload_create_params;
tmp_globals_arg_value_37 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_37 = Py_None;
tmp_fromlist_value_37 = mod_consts.const_tuple_str_plain_UploadCreateParams_tuple;
tmp_level_value_37 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 59;
tmp_import_name_from_53 = IMPORT_MODULE5(tstate, tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
if (tmp_import_name_from_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_UploadCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain_UploadCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_53);
Py_DECREF(tmp_import_name_from_53);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_UploadCreateParams, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_54;
PyObject *tmp_name_value_38;
PyObject *tmp_globals_arg_value_38;
PyObject *tmp_locals_arg_value_38;
PyObject *tmp_fromlist_value_38;
PyObject *tmp_level_value_38;
tmp_name_value_38 = mod_consts.const_str_plain_vector_store_deleted;
tmp_globals_arg_value_38 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_38 = Py_None;
tmp_fromlist_value_38 = mod_consts.const_tuple_str_plain_VectorStoreDeleted_tuple;
tmp_level_value_38 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 60;
tmp_import_name_from_54 = IMPORT_MODULE5(tstate, tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
if (tmp_import_name_from_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_54)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_54,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_VectorStoreDeleted,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts.const_str_plain_VectorStoreDeleted);
}

CHECK_OBJECT(tmp_import_name_from_54);
Py_DECREF(tmp_import_name_from_54);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreDeleted, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_import_name_from_55;
PyObject *tmp_name_value_39;
PyObject *tmp_globals_arg_value_39;
PyObject *tmp_locals_arg_value_39;
PyObject *tmp_fromlist_value_39;
PyObject *tmp_level_value_39;
tmp_name_value_39 = mod_consts.const_str_plain_audio_response_format;
tmp_globals_arg_value_39 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_39 = Py_None;
tmp_fromlist_value_39 = mod_consts.const_tuple_str_plain_AudioResponseFormat_tuple;
tmp_level_value_39 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 61;
tmp_import_name_from_55 = IMPORT_MODULE5(tstate, tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
if (tmp_import_name_from_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_55)) {
    tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_55,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_AudioResponseFormat,
        const_int_0
    );
} else {
    tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts.const_str_plain_AudioResponseFormat);
}

CHECK_OBJECT(tmp_import_name_from_55);
Py_DECREF(tmp_import_name_from_55);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_AudioResponseFormat, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_56;
PyObject *tmp_name_value_40;
PyObject *tmp_globals_arg_value_40;
PyObject *tmp_locals_arg_value_40;
PyObject *tmp_fromlist_value_40;
PyObject *tmp_level_value_40;
tmp_name_value_40 = mod_consts.const_str_plain_container_list_params;
tmp_globals_arg_value_40 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_40 = Py_None;
tmp_fromlist_value_40 = mod_consts.const_tuple_str_plain_ContainerListParams_tuple;
tmp_level_value_40 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 62;
tmp_import_name_from_56 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
if (tmp_import_name_from_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_56)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_56,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ContainerListParams,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts.const_str_plain_ContainerListParams);
}

CHECK_OBJECT(tmp_import_name_from_56);
Py_DECREF(tmp_import_name_from_56);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainerListParams, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_import_name_from_57;
PyObject *tmp_name_value_41;
PyObject *tmp_globals_arg_value_41;
PyObject *tmp_locals_arg_value_41;
PyObject *tmp_fromlist_value_41;
PyObject *tmp_level_value_41;
tmp_name_value_41 = mod_consts.const_str_plain_image_generate_params;
tmp_globals_arg_value_41 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_41 = Py_None;
tmp_fromlist_value_41 = mod_consts.const_tuple_str_plain_ImageGenerateParams_tuple;
tmp_level_value_41 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 63;
tmp_import_name_from_57 = IMPORT_MODULE5(tstate, tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
if (tmp_import_name_from_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_57)) {
    tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_57,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImageGenerateParams,
        const_int_0
    );
} else {
    tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts.const_str_plain_ImageGenerateParams);
}

CHECK_OBJECT(tmp_import_name_from_57);
Py_DECREF(tmp_import_name_from_57);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageGenerateParams, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_import_name_from_58;
PyObject *tmp_name_value_42;
PyObject *tmp_globals_arg_value_42;
PyObject *tmp_locals_arg_value_42;
PyObject *tmp_fromlist_value_42;
PyObject *tmp_level_value_42;
tmp_name_value_42 = mod_consts.const_str_plain_eval_retrieve_response;
tmp_globals_arg_value_42 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_42 = Py_None;
tmp_fromlist_value_42 = mod_consts.const_tuple_str_plain_EvalRetrieveResponse_tuple;
tmp_level_value_42 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 64;
tmp_import_name_from_58 = IMPORT_MODULE5(tstate, tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
if (tmp_import_name_from_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_58)) {
    tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_58,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EvalRetrieveResponse,
        const_int_0
    );
} else {
    tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts.const_str_plain_EvalRetrieveResponse);
}

CHECK_OBJECT(tmp_import_name_from_58);
Py_DECREF(tmp_import_name_from_58);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalRetrieveResponse, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_import_name_from_59;
PyObject *tmp_name_value_43;
PyObject *tmp_globals_arg_value_43;
PyObject *tmp_locals_arg_value_43;
PyObject *tmp_fromlist_value_43;
PyObject *tmp_level_value_43;
tmp_name_value_43 = mod_consts.const_str_plain_file_chunking_strategy;
tmp_globals_arg_value_43 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_43 = Py_None;
tmp_fromlist_value_43 = mod_consts.const_tuple_str_plain_FileChunkingStrategy_tuple;
tmp_level_value_43 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 65;
tmp_import_name_from_59 = IMPORT_MODULE5(tstate, tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
if (tmp_import_name_from_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_59)) {
    tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_59,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_FileChunkingStrategy,
        const_int_0
    );
} else {
    tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts.const_str_plain_FileChunkingStrategy);
}

CHECK_OBJECT(tmp_import_name_from_59);
Py_DECREF(tmp_import_name_from_59);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileChunkingStrategy, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_import_name_from_60;
PyObject *tmp_name_value_44;
PyObject *tmp_globals_arg_value_44;
PyObject *tmp_locals_arg_value_44;
PyObject *tmp_fromlist_value_44;
PyObject *tmp_level_value_44;
tmp_name_value_44 = mod_consts.const_str_plain_image_gen_stream_event;
tmp_globals_arg_value_44 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_44 = Py_None;
tmp_fromlist_value_44 = mod_consts.const_tuple_str_plain_ImageGenStreamEvent_tuple;
tmp_level_value_44 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 66;
tmp_import_name_from_60 = IMPORT_MODULE5(tstate, tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
if (tmp_import_name_from_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_60)) {
    tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_60,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImageGenStreamEvent,
        const_int_0
    );
} else {
    tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts.const_str_plain_ImageGenStreamEvent);
}

CHECK_OBJECT(tmp_import_name_from_60);
Py_DECREF(tmp_import_name_from_60);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageGenStreamEvent, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_import_name_from_61;
PyObject *tmp_name_value_45;
PyObject *tmp_globals_arg_value_45;
PyObject *tmp_locals_arg_value_45;
PyObject *tmp_fromlist_value_45;
PyObject *tmp_level_value_45;
tmp_name_value_45 = mod_consts.const_str_plain_upload_complete_params;
tmp_globals_arg_value_45 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_45 = Py_None;
tmp_fromlist_value_45 = mod_consts.const_tuple_str_plain_UploadCompleteParams_tuple;
tmp_level_value_45 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 67;
tmp_import_name_from_61 = IMPORT_MODULE5(tstate, tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
if (tmp_import_name_from_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_61)) {
    tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_61,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_UploadCompleteParams,
        const_int_0
    );
} else {
    tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts.const_str_plain_UploadCompleteParams);
}

CHECK_OBJECT(tmp_import_name_from_61);
Py_DECREF(tmp_import_name_from_61);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_UploadCompleteParams, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_import_name_from_62;
PyObject *tmp_name_value_46;
PyObject *tmp_globals_arg_value_46;
PyObject *tmp_locals_arg_value_46;
PyObject *tmp_fromlist_value_46;
PyObject *tmp_level_value_46;
tmp_name_value_46 = mod_consts.const_str_plain_container_create_params;
tmp_globals_arg_value_46 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_46 = Py_None;
tmp_fromlist_value_46 = mod_consts.const_tuple_str_plain_ContainerCreateParams_tuple;
tmp_level_value_46 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 68;
tmp_import_name_from_62 = IMPORT_MODULE5(tstate, tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
if (tmp_import_name_from_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_62)) {
    tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_62,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ContainerCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts.const_str_plain_ContainerCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_62);
Py_DECREF(tmp_import_name_from_62);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainerCreateParams, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_import_name_from_63;
PyObject *tmp_name_value_47;
PyObject *tmp_globals_arg_value_47;
PyObject *tmp_locals_arg_value_47;
PyObject *tmp_fromlist_value_47;
PyObject *tmp_level_value_47;
tmp_name_value_47 = mod_consts.const_str_plain_container_list_response;
tmp_globals_arg_value_47 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_47 = Py_None;
tmp_fromlist_value_47 = mod_consts.const_tuple_str_plain_ContainerListResponse_tuple;
tmp_level_value_47 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 69;
tmp_import_name_from_63 = IMPORT_MODULE5(tstate, tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
if (tmp_import_name_from_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_63)) {
    tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_63,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ContainerListResponse,
        const_int_0
    );
} else {
    tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts.const_str_plain_ContainerListResponse);
}

CHECK_OBJECT(tmp_import_name_from_63);
Py_DECREF(tmp_import_name_from_63);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainerListResponse, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_import_name_from_64;
PyObject *tmp_name_value_48;
PyObject *tmp_globals_arg_value_48;
PyObject *tmp_locals_arg_value_48;
PyObject *tmp_fromlist_value_48;
PyObject *tmp_level_value_48;
tmp_name_value_48 = mod_consts.const_str_plain_embedding_create_params;
tmp_globals_arg_value_48 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_48 = Py_None;
tmp_fromlist_value_48 = mod_consts.const_tuple_str_plain_EmbeddingCreateParams_tuple;
tmp_level_value_48 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 70;
tmp_import_name_from_64 = IMPORT_MODULE5(tstate, tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
if (tmp_import_name_from_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_64)) {
    tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_64,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EmbeddingCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts.const_str_plain_EmbeddingCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_64);
Py_DECREF(tmp_import_name_from_64);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EmbeddingCreateParams, tmp_assign_source_70);
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_import_name_from_65;
PyObject *tmp_name_value_49;
PyObject *tmp_globals_arg_value_49;
PyObject *tmp_locals_arg_value_49;
PyObject *tmp_fromlist_value_49;
PyObject *tmp_level_value_49;
tmp_name_value_49 = mod_consts.const_str_plain_image_edit_stream_event;
tmp_globals_arg_value_49 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_49 = Py_None;
tmp_fromlist_value_49 = mod_consts.const_tuple_str_plain_ImageEditStreamEvent_tuple;
tmp_level_value_49 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 71;
tmp_import_name_from_65 = IMPORT_MODULE5(tstate, tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
if (tmp_import_name_from_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_65)) {
    tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_65,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImageEditStreamEvent,
        const_int_0
    );
} else {
    tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts.const_str_plain_ImageEditStreamEvent);
}

CHECK_OBJECT(tmp_import_name_from_65);
Py_DECREF(tmp_import_name_from_65);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageEditStreamEvent, tmp_assign_source_71);
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_import_name_from_66;
PyObject *tmp_name_value_50;
PyObject *tmp_globals_arg_value_50;
PyObject *tmp_locals_arg_value_50;
PyObject *tmp_fromlist_value_50;
PyObject *tmp_level_value_50;
tmp_name_value_50 = mod_consts.const_str_plain_completion_create_params;
tmp_globals_arg_value_50 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_50 = Py_None;
tmp_fromlist_value_50 = mod_consts.const_tuple_str_plain_CompletionCreateParams_tuple;
tmp_level_value_50 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 72;
tmp_import_name_from_66 = IMPORT_MODULE5(tstate, tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
if (tmp_import_name_from_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_66)) {
    tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_66,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_CompletionCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts.const_str_plain_CompletionCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_66);
Py_DECREF(tmp_import_name_from_66);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletionCreateParams, tmp_assign_source_72);
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_import_name_from_67;
PyObject *tmp_name_value_51;
PyObject *tmp_globals_arg_value_51;
PyObject *tmp_locals_arg_value_51;
PyObject *tmp_fromlist_value_51;
PyObject *tmp_level_value_51;
tmp_name_value_51 = mod_consts.const_str_plain_moderation_create_params;
tmp_globals_arg_value_51 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_51 = Py_None;
tmp_fromlist_value_51 = mod_consts.const_tuple_str_plain_ModerationCreateParams_tuple;
tmp_level_value_51 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 73;
tmp_import_name_from_67 = IMPORT_MODULE5(tstate, tmp_name_value_51, tmp_globals_arg_value_51, tmp_locals_arg_value_51, tmp_fromlist_value_51, tmp_level_value_51);
if (tmp_import_name_from_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_67)) {
    tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_67,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ModerationCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts.const_str_plain_ModerationCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_67);
Py_DECREF(tmp_import_name_from_67);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ModerationCreateParams, tmp_assign_source_73);
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_import_name_from_68;
PyObject *tmp_name_value_52;
PyObject *tmp_globals_arg_value_52;
PyObject *tmp_locals_arg_value_52;
PyObject *tmp_fromlist_value_52;
PyObject *tmp_level_value_52;
tmp_name_value_52 = mod_consts.const_str_plain_vector_store_list_params;
tmp_globals_arg_value_52 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_52 = Py_None;
tmp_fromlist_value_52 = mod_consts.const_tuple_str_plain_VectorStoreListParams_tuple;
tmp_level_value_52 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 74;
tmp_import_name_from_68 = IMPORT_MODULE5(tstate, tmp_name_value_52, tmp_globals_arg_value_52, tmp_locals_arg_value_52, tmp_fromlist_value_52, tmp_level_value_52);
if (tmp_import_name_from_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_68)) {
    tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_68,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_VectorStoreListParams,
        const_int_0
    );
} else {
    tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts.const_str_plain_VectorStoreListParams);
}

CHECK_OBJECT(tmp_import_name_from_68);
Py_DECREF(tmp_import_name_from_68);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreListParams, tmp_assign_source_74);
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_import_name_from_69;
PyObject *tmp_name_value_53;
PyObject *tmp_globals_arg_value_53;
PyObject *tmp_locals_arg_value_53;
PyObject *tmp_fromlist_value_53;
PyObject *tmp_level_value_53;
tmp_name_value_53 = mod_consts.const_str_plain_container_create_response;
tmp_globals_arg_value_53 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_53 = Py_None;
tmp_fromlist_value_53 = mod_consts.const_tuple_str_plain_ContainerCreateResponse_tuple;
tmp_level_value_53 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 75;
tmp_import_name_from_69 = IMPORT_MODULE5(tstate, tmp_name_value_53, tmp_globals_arg_value_53, tmp_locals_arg_value_53, tmp_fromlist_value_53, tmp_level_value_53);
if (tmp_import_name_from_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_69)) {
    tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_69,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ContainerCreateResponse,
        const_int_0
    );
} else {
    tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts.const_str_plain_ContainerCreateResponse);
}

CHECK_OBJECT(tmp_import_name_from_69);
Py_DECREF(tmp_import_name_from_69);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainerCreateResponse, tmp_assign_source_75);
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_import_name_from_70;
PyObject *tmp_name_value_54;
PyObject *tmp_globals_arg_value_54;
PyObject *tmp_locals_arg_value_54;
PyObject *tmp_fromlist_value_54;
PyObject *tmp_level_value_54;
tmp_name_value_54 = mod_consts.const_str_plain_create_embedding_response;
tmp_globals_arg_value_54 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_54 = Py_None;
tmp_fromlist_value_54 = mod_consts.const_tuple_str_plain_CreateEmbeddingResponse_tuple;
tmp_level_value_54 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 76;
tmp_import_name_from_70 = IMPORT_MODULE5(tstate, tmp_name_value_54, tmp_globals_arg_value_54, tmp_locals_arg_value_54, tmp_fromlist_value_54, tmp_level_value_54);
if (tmp_import_name_from_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_70)) {
    tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_70,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_CreateEmbeddingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts.const_str_plain_CreateEmbeddingResponse);
}

CHECK_OBJECT(tmp_import_name_from_70);
Py_DECREF(tmp_import_name_from_70);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEmbeddingResponse, tmp_assign_source_76);
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_import_name_from_71;
PyObject *tmp_name_value_55;
PyObject *tmp_globals_arg_value_55;
PyObject *tmp_locals_arg_value_55;
PyObject *tmp_fromlist_value_55;
PyObject *tmp_level_value_55;
tmp_name_value_55 = mod_consts.const_str_plain_image_gen_completed_event;
tmp_globals_arg_value_55 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_55 = Py_None;
tmp_fromlist_value_55 = mod_consts.const_tuple_str_plain_ImageGenCompletedEvent_tuple;
tmp_level_value_55 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 77;
tmp_import_name_from_71 = IMPORT_MODULE5(tstate, tmp_name_value_55, tmp_globals_arg_value_55, tmp_locals_arg_value_55, tmp_fromlist_value_55, tmp_level_value_55);
if (tmp_import_name_from_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_71)) {
    tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_71,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImageGenCompletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts.const_str_plain_ImageGenCompletedEvent);
}

CHECK_OBJECT(tmp_import_name_from_71);
Py_DECREF(tmp_import_name_from_71);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageGenCompletedEvent, tmp_assign_source_77);
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_import_name_from_72;
PyObject *tmp_name_value_56;
PyObject *tmp_globals_arg_value_56;
PyObject *tmp_locals_arg_value_56;
PyObject *tmp_fromlist_value_56;
PyObject *tmp_level_value_56;
tmp_name_value_56 = mod_consts.const_str_plain_image_edit_completed_event;
tmp_globals_arg_value_56 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_56 = Py_None;
tmp_fromlist_value_56 = mod_consts.const_tuple_str_plain_ImageEditCompletedEvent_tuple;
tmp_level_value_56 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 78;
tmp_import_name_from_72 = IMPORT_MODULE5(tstate, tmp_name_value_56, tmp_globals_arg_value_56, tmp_locals_arg_value_56, tmp_fromlist_value_56, tmp_level_value_56);
if (tmp_import_name_from_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_72)) {
    tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_72,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImageEditCompletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts.const_str_plain_ImageEditCompletedEvent);
}

CHECK_OBJECT(tmp_import_name_from_72);
Py_DECREF(tmp_import_name_from_72);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageEditCompletedEvent, tmp_assign_source_78);
}
{
PyObject *tmp_assign_source_79;
PyObject *tmp_import_name_from_73;
PyObject *tmp_name_value_57;
PyObject *tmp_globals_arg_value_57;
PyObject *tmp_locals_arg_value_57;
PyObject *tmp_fromlist_value_57;
PyObject *tmp_level_value_57;
tmp_name_value_57 = mod_consts.const_str_plain_moderation_create_response;
tmp_globals_arg_value_57 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_57 = Py_None;
tmp_fromlist_value_57 = mod_consts.const_tuple_str_plain_ModerationCreateResponse_tuple;
tmp_level_value_57 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 79;
tmp_import_name_from_73 = IMPORT_MODULE5(tstate, tmp_name_value_57, tmp_globals_arg_value_57, tmp_locals_arg_value_57, tmp_fromlist_value_57, tmp_level_value_57);
if (tmp_import_name_from_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_73)) {
    tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_73,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ModerationCreateResponse,
        const_int_0
    );
} else {
    tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts.const_str_plain_ModerationCreateResponse);
}

CHECK_OBJECT(tmp_import_name_from_73);
Py_DECREF(tmp_import_name_from_73);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ModerationCreateResponse, tmp_assign_source_79);
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_import_name_from_74;
PyObject *tmp_name_value_58;
PyObject *tmp_globals_arg_value_58;
PyObject *tmp_locals_arg_value_58;
PyObject *tmp_fromlist_value_58;
PyObject *tmp_level_value_58;
tmp_name_value_58 = mod_consts.const_str_plain_vector_store_create_params;
tmp_globals_arg_value_58 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_58 = Py_None;
tmp_fromlist_value_58 = mod_consts.const_tuple_str_plain_VectorStoreCreateParams_tuple;
tmp_level_value_58 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 80;
tmp_import_name_from_74 = IMPORT_MODULE5(tstate, tmp_name_value_58, tmp_globals_arg_value_58, tmp_locals_arg_value_58, tmp_fromlist_value_58, tmp_level_value_58);
if (tmp_import_name_from_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_74)) {
    tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_74,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_VectorStoreCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts.const_str_plain_VectorStoreCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_74);
Py_DECREF(tmp_import_name_from_74);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreCreateParams, tmp_assign_source_80);
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_import_name_from_75;
PyObject *tmp_name_value_59;
PyObject *tmp_globals_arg_value_59;
PyObject *tmp_locals_arg_value_59;
PyObject *tmp_fromlist_value_59;
PyObject *tmp_level_value_59;
tmp_name_value_59 = mod_consts.const_str_plain_vector_store_search_params;
tmp_globals_arg_value_59 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_59 = Py_None;
tmp_fromlist_value_59 = mod_consts.const_tuple_str_plain_VectorStoreSearchParams_tuple;
tmp_level_value_59 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 81;
tmp_import_name_from_75 = IMPORT_MODULE5(tstate, tmp_name_value_59, tmp_globals_arg_value_59, tmp_locals_arg_value_59, tmp_fromlist_value_59, tmp_level_value_59);
if (tmp_import_name_from_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_75)) {
    tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_75,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_VectorStoreSearchParams,
        const_int_0
    );
} else {
    tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts.const_str_plain_VectorStoreSearchParams);
}

CHECK_OBJECT(tmp_import_name_from_75);
Py_DECREF(tmp_import_name_from_75);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreSearchParams, tmp_assign_source_81);
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_import_name_from_76;
PyObject *tmp_name_value_60;
PyObject *tmp_globals_arg_value_60;
PyObject *tmp_locals_arg_value_60;
PyObject *tmp_fromlist_value_60;
PyObject *tmp_level_value_60;
tmp_name_value_60 = mod_consts.const_str_plain_vector_store_update_params;
tmp_globals_arg_value_60 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_60 = Py_None;
tmp_fromlist_value_60 = mod_consts.const_tuple_str_plain_VectorStoreUpdateParams_tuple;
tmp_level_value_60 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 82;
tmp_import_name_from_76 = IMPORT_MODULE5(tstate, tmp_name_value_60, tmp_globals_arg_value_60, tmp_locals_arg_value_60, tmp_fromlist_value_60, tmp_level_value_60);
if (tmp_import_name_from_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_76)) {
    tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_76,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_VectorStoreUpdateParams,
        const_int_0
    );
} else {
    tmp_assign_source_82 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts.const_str_plain_VectorStoreUpdateParams);
}

CHECK_OBJECT(tmp_import_name_from_76);
Py_DECREF(tmp_import_name_from_76);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreUpdateParams, tmp_assign_source_82);
}
{
PyObject *tmp_assign_source_83;
PyObject *tmp_import_name_from_77;
PyObject *tmp_name_value_61;
PyObject *tmp_globals_arg_value_61;
PyObject *tmp_locals_arg_value_61;
PyObject *tmp_fromlist_value_61;
PyObject *tmp_level_value_61;
tmp_name_value_61 = mod_consts.const_str_plain_container_retrieve_response;
tmp_globals_arg_value_61 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_61 = Py_None;
tmp_fromlist_value_61 = mod_consts.const_tuple_str_plain_ContainerRetrieveResponse_tuple;
tmp_level_value_61 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 83;
tmp_import_name_from_77 = IMPORT_MODULE5(tstate, tmp_name_value_61, tmp_globals_arg_value_61, tmp_locals_arg_value_61, tmp_fromlist_value_61, tmp_level_value_61);
if (tmp_import_name_from_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_77)) {
    tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_77,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ContainerRetrieveResponse,
        const_int_0
    );
} else {
    tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_77, mod_consts.const_str_plain_ContainerRetrieveResponse);
}

CHECK_OBJECT(tmp_import_name_from_77);
Py_DECREF(tmp_import_name_from_77);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainerRetrieveResponse, tmp_assign_source_83);
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_import_name_from_78;
PyObject *tmp_name_value_62;
PyObject *tmp_globals_arg_value_62;
PyObject *tmp_locals_arg_value_62;
PyObject *tmp_fromlist_value_62;
PyObject *tmp_level_value_62;
tmp_name_value_62 = mod_consts.const_str_plain_moderation_text_input_param;
tmp_globals_arg_value_62 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_62 = Py_None;
tmp_fromlist_value_62 = mod_consts.const_tuple_str_plain_ModerationTextInputParam_tuple;
tmp_level_value_62 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 84;
tmp_import_name_from_78 = IMPORT_MODULE5(tstate, tmp_name_value_62, tmp_globals_arg_value_62, tmp_locals_arg_value_62, tmp_fromlist_value_62, tmp_level_value_62);
if (tmp_import_name_from_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_78)) {
    tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_78,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ModerationTextInputParam,
        const_int_0
    );
} else {
    tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_78, mod_consts.const_str_plain_ModerationTextInputParam);
}

CHECK_OBJECT(tmp_import_name_from_78);
Py_DECREF(tmp_import_name_from_78);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ModerationTextInputParam, tmp_assign_source_84);
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_import_name_from_79;
PyObject *tmp_name_value_63;
PyObject *tmp_globals_arg_value_63;
PyObject *tmp_locals_arg_value_63;
PyObject *tmp_fromlist_value_63;
PyObject *tmp_level_value_63;
tmp_name_value_63 = mod_consts.const_str_plain_file_chunking_strategy_param;
tmp_globals_arg_value_63 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_63 = Py_None;
tmp_fromlist_value_63 = mod_consts.const_tuple_str_plain_FileChunkingStrategyParam_tuple;
tmp_level_value_63 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 85;
tmp_import_name_from_79 = IMPORT_MODULE5(tstate, tmp_name_value_63, tmp_globals_arg_value_63, tmp_locals_arg_value_63, tmp_fromlist_value_63, tmp_level_value_63);
if (tmp_import_name_from_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_79)) {
    tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_79,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_FileChunkingStrategyParam,
        const_int_0
    );
} else {
    tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_79, mod_consts.const_str_plain_FileChunkingStrategyParam);
}

CHECK_OBJECT(tmp_import_name_from_79);
Py_DECREF(tmp_import_name_from_79);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_FileChunkingStrategyParam, tmp_assign_source_85);
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_import_name_from_80;
PyObject *tmp_name_value_64;
PyObject *tmp_globals_arg_value_64;
PyObject *tmp_locals_arg_value_64;
PyObject *tmp_fromlist_value_64;
PyObject *tmp_level_value_64;
tmp_name_value_64 = mod_consts.const_str_plain_vector_store_search_response;
tmp_globals_arg_value_64 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_64 = Py_None;
tmp_fromlist_value_64 = mod_consts.const_tuple_str_plain_VectorStoreSearchResponse_tuple;
tmp_level_value_64 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 86;
tmp_import_name_from_80 = IMPORT_MODULE5(tstate, tmp_name_value_64, tmp_globals_arg_value_64, tmp_locals_arg_value_64, tmp_fromlist_value_64, tmp_level_value_64);
if (tmp_import_name_from_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_80)) {
    tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_80,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_VectorStoreSearchResponse,
        const_int_0
    );
} else {
    tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_80, mod_consts.const_str_plain_VectorStoreSearchResponse);
}

CHECK_OBJECT(tmp_import_name_from_80);
Py_DECREF(tmp_import_name_from_80);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreSearchResponse, tmp_assign_source_86);
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_import_name_from_81;
PyObject *tmp_name_value_65;
PyObject *tmp_globals_arg_value_65;
PyObject *tmp_locals_arg_value_65;
PyObject *tmp_fromlist_value_65;
PyObject *tmp_level_value_65;
tmp_name_value_65 = mod_consts.const_str_plain_websocket_connection_options;
tmp_globals_arg_value_65 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_65 = Py_None;
tmp_fromlist_value_65 = mod_consts.const_tuple_str_plain_WebsocketConnectionOptions_tuple;
tmp_level_value_65 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 87;
tmp_import_name_from_81 = IMPORT_MODULE5(tstate, tmp_name_value_65, tmp_globals_arg_value_65, tmp_locals_arg_value_65, tmp_fromlist_value_65, tmp_level_value_65);
if (tmp_import_name_from_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_81)) {
    tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_81,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_WebsocketConnectionOptions,
        const_int_0
    );
} else {
    tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_81, mod_consts.const_str_plain_WebsocketConnectionOptions);
}

CHECK_OBJECT(tmp_import_name_from_81);
Py_DECREF(tmp_import_name_from_81);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_WebsocketConnectionOptions, tmp_assign_source_87);
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_import_name_from_82;
PyObject *tmp_name_value_66;
PyObject *tmp_globals_arg_value_66;
PyObject *tmp_locals_arg_value_66;
PyObject *tmp_fromlist_value_66;
PyObject *tmp_level_value_66;
tmp_name_value_66 = mod_consts.const_str_plain_image_create_variation_params;
tmp_globals_arg_value_66 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_66 = Py_None;
tmp_fromlist_value_66 = mod_consts.const_tuple_str_plain_ImageCreateVariationParams_tuple;
tmp_level_value_66 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 88;
tmp_import_name_from_82 = IMPORT_MODULE5(tstate, tmp_name_value_66, tmp_globals_arg_value_66, tmp_locals_arg_value_66, tmp_fromlist_value_66, tmp_level_value_66);
if (tmp_import_name_from_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_82)) {
    tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_82,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImageCreateVariationParams,
        const_int_0
    );
} else {
    tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_82, mod_consts.const_str_plain_ImageCreateVariationParams);
}

CHECK_OBJECT(tmp_import_name_from_82);
Py_DECREF(tmp_import_name_from_82);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCreateVariationParams, tmp_assign_source_88);
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_import_name_from_83;
PyObject *tmp_name_value_67;
PyObject *tmp_globals_arg_value_67;
PyObject *tmp_locals_arg_value_67;
PyObject *tmp_fromlist_value_67;
PyObject *tmp_level_value_67;
tmp_name_value_67 = mod_consts.const_str_plain_image_gen_partial_image_event;
tmp_globals_arg_value_67 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_67 = Py_None;
tmp_fromlist_value_67 = mod_consts.const_tuple_str_plain_ImageGenPartialImageEvent_tuple;
tmp_level_value_67 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 89;
tmp_import_name_from_83 = IMPORT_MODULE5(tstate, tmp_name_value_67, tmp_globals_arg_value_67, tmp_locals_arg_value_67, tmp_fromlist_value_67, tmp_level_value_67);
if (tmp_import_name_from_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_83)) {
    tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_83,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImageGenPartialImageEvent,
        const_int_0
    );
} else {
    tmp_assign_source_89 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_83, mod_consts.const_str_plain_ImageGenPartialImageEvent);
}

CHECK_OBJECT(tmp_import_name_from_83);
Py_DECREF(tmp_import_name_from_83);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageGenPartialImageEvent, tmp_assign_source_89);
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_import_name_from_84;
PyObject *tmp_name_value_68;
PyObject *tmp_globals_arg_value_68;
PyObject *tmp_locals_arg_value_68;
PyObject *tmp_fromlist_value_68;
PyObject *tmp_level_value_68;
tmp_name_value_68 = mod_consts.const_str_plain_static_file_chunking_strategy;
tmp_globals_arg_value_68 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_68 = Py_None;
tmp_fromlist_value_68 = mod_consts.const_tuple_str_plain_StaticFileChunkingStrategy_tuple;
tmp_level_value_68 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 90;
tmp_import_name_from_84 = IMPORT_MODULE5(tstate, tmp_name_value_68, tmp_globals_arg_value_68, tmp_locals_arg_value_68, tmp_fromlist_value_68, tmp_level_value_68);
if (tmp_import_name_from_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_84)) {
    tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_84,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_StaticFileChunkingStrategy,
        const_int_0
    );
} else {
    tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_84, mod_consts.const_str_plain_StaticFileChunkingStrategy);
}

CHECK_OBJECT(tmp_import_name_from_84);
Py_DECREF(tmp_import_name_from_84);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_StaticFileChunkingStrategy, tmp_assign_source_90);
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_import_name_from_85;
PyObject *tmp_name_value_69;
PyObject *tmp_globals_arg_value_69;
PyObject *tmp_locals_arg_value_69;
PyObject *tmp_fromlist_value_69;
PyObject *tmp_level_value_69;
tmp_name_value_69 = mod_consts.const_str_plain_eval_custom_data_source_config;
tmp_globals_arg_value_69 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_69 = Py_None;
tmp_fromlist_value_69 = mod_consts.const_tuple_str_plain_EvalCustomDataSourceConfig_tuple;
tmp_level_value_69 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 91;
tmp_import_name_from_85 = IMPORT_MODULE5(tstate, tmp_name_value_69, tmp_globals_arg_value_69, tmp_locals_arg_value_69, tmp_fromlist_value_69, tmp_level_value_69);
if (tmp_import_name_from_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_85)) {
    tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_85,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EvalCustomDataSourceConfig,
        const_int_0
    );
} else {
    tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_85, mod_consts.const_str_plain_EvalCustomDataSourceConfig);
}

CHECK_OBJECT(tmp_import_name_from_85);
Py_DECREF(tmp_import_name_from_85);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalCustomDataSourceConfig, tmp_assign_source_91);
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_import_name_from_86;
PyObject *tmp_name_value_70;
PyObject *tmp_globals_arg_value_70;
PyObject *tmp_locals_arg_value_70;
PyObject *tmp_fromlist_value_70;
PyObject *tmp_level_value_70;
tmp_name_value_70 = mod_consts.const_str_plain_image_edit_partial_image_event;
tmp_globals_arg_value_70 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_70 = Py_None;
tmp_fromlist_value_70 = mod_consts.const_tuple_str_plain_ImageEditPartialImageEvent_tuple;
tmp_level_value_70 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 92;
tmp_import_name_from_86 = IMPORT_MODULE5(tstate, tmp_name_value_70, tmp_globals_arg_value_70, tmp_locals_arg_value_70, tmp_fromlist_value_70, tmp_level_value_70);
if (tmp_import_name_from_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_86)) {
    tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_86,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ImageEditPartialImageEvent,
        const_int_0
    );
} else {
    tmp_assign_source_92 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_86, mod_consts.const_str_plain_ImageEditPartialImageEvent);
}

CHECK_OBJECT(tmp_import_name_from_86);
Py_DECREF(tmp_import_name_from_86);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageEditPartialImageEvent, tmp_assign_source_92);
}
{
PyObject *tmp_assign_source_93;
PyObject *tmp_import_name_from_87;
PyObject *tmp_name_value_71;
PyObject *tmp_globals_arg_value_71;
PyObject *tmp_locals_arg_value_71;
PyObject *tmp_fromlist_value_71;
PyObject *tmp_level_value_71;
tmp_name_value_71 = mod_consts.const_str_plain_moderation_image_url_input_param;
tmp_globals_arg_value_71 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_71 = Py_None;
tmp_fromlist_value_71 = mod_consts.const_tuple_str_plain_ModerationImageURLInputParam_tuple;
tmp_level_value_71 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 93;
tmp_import_name_from_87 = IMPORT_MODULE5(tstate, tmp_name_value_71, tmp_globals_arg_value_71, tmp_locals_arg_value_71, tmp_fromlist_value_71, tmp_level_value_71);
if (tmp_import_name_from_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_87)) {
    tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_87,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ModerationImageURLInputParam,
        const_int_0
    );
} else {
    tmp_assign_source_93 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_87, mod_consts.const_str_plain_ModerationImageURLInputParam);
}

CHECK_OBJECT(tmp_import_name_from_87);
Py_DECREF(tmp_import_name_from_87);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ModerationImageURLInputParam, tmp_assign_source_93);
}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_import_name_from_88;
PyObject *tmp_name_value_72;
PyObject *tmp_globals_arg_value_72;
PyObject *tmp_locals_arg_value_72;
PyObject *tmp_fromlist_value_72;
PyObject *tmp_level_value_72;
tmp_name_value_72 = mod_consts.const_str_plain_auto_file_chunking_strategy_param;
tmp_globals_arg_value_72 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_72 = Py_None;
tmp_fromlist_value_72 = mod_consts.const_tuple_str_plain_AutoFileChunkingStrategyParam_tuple;
tmp_level_value_72 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 94;
tmp_import_name_from_88 = IMPORT_MODULE5(tstate, tmp_name_value_72, tmp_globals_arg_value_72, tmp_locals_arg_value_72, tmp_fromlist_value_72, tmp_level_value_72);
if (tmp_import_name_from_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_88)) {
    tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_88,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_AutoFileChunkingStrategyParam,
        const_int_0
    );
} else {
    tmp_assign_source_94 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_88, mod_consts.const_str_plain_AutoFileChunkingStrategyParam);
}

CHECK_OBJECT(tmp_import_name_from_88);
Py_DECREF(tmp_import_name_from_88);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_AutoFileChunkingStrategyParam, tmp_assign_source_94);
}
{
PyObject *tmp_assign_source_95;
PyObject *tmp_import_name_from_89;
PyObject *tmp_name_value_73;
PyObject *tmp_globals_arg_value_73;
PyObject *tmp_locals_arg_value_73;
PyObject *tmp_fromlist_value_73;
PyObject *tmp_level_value_73;
tmp_name_value_73 = mod_consts.const_str_plain_moderation_multi_modal_input_param;
tmp_globals_arg_value_73 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_73 = Py_None;
tmp_fromlist_value_73 = mod_consts.const_tuple_str_plain_ModerationMultiModalInputParam_tuple;
tmp_level_value_73 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 95;
tmp_import_name_from_89 = IMPORT_MODULE5(tstate, tmp_name_value_73, tmp_globals_arg_value_73, tmp_locals_arg_value_73, tmp_fromlist_value_73, tmp_level_value_73);
if (tmp_import_name_from_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_89)) {
    tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_89,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_ModerationMultiModalInputParam,
        const_int_0
    );
} else {
    tmp_assign_source_95 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_89, mod_consts.const_str_plain_ModerationMultiModalInputParam);
}

CHECK_OBJECT(tmp_import_name_from_89);
Py_DECREF(tmp_import_name_from_89);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ModerationMultiModalInputParam, tmp_assign_source_95);
}
{
PyObject *tmp_assign_source_96;
PyObject *tmp_import_name_from_90;
PyObject *tmp_name_value_74;
PyObject *tmp_globals_arg_value_74;
PyObject *tmp_locals_arg_value_74;
PyObject *tmp_fromlist_value_74;
PyObject *tmp_level_value_74;
tmp_name_value_74 = mod_consts.const_str_plain_other_file_chunking_strategy_object;
tmp_globals_arg_value_74 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_74 = Py_None;
tmp_fromlist_value_74 = mod_consts.const_tuple_str_plain_OtherFileChunkingStrategyObject_tuple;
tmp_level_value_74 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 96;
tmp_import_name_from_90 = IMPORT_MODULE5(tstate, tmp_name_value_74, tmp_globals_arg_value_74, tmp_locals_arg_value_74, tmp_fromlist_value_74, tmp_level_value_74);
if (tmp_import_name_from_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_90)) {
    tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_90,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_OtherFileChunkingStrategyObject,
        const_int_0
    );
} else {
    tmp_assign_source_96 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_90, mod_consts.const_str_plain_OtherFileChunkingStrategyObject);
}

CHECK_OBJECT(tmp_import_name_from_90);
Py_DECREF(tmp_import_name_from_90);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_OtherFileChunkingStrategyObject, tmp_assign_source_96);
}
{
PyObject *tmp_assign_source_97;
PyObject *tmp_import_name_from_91;
PyObject *tmp_name_value_75;
PyObject *tmp_globals_arg_value_75;
PyObject *tmp_locals_arg_value_75;
PyObject *tmp_fromlist_value_75;
PyObject *tmp_level_value_75;
tmp_name_value_75 = mod_consts.const_str_plain_static_file_chunking_strategy_param;
tmp_globals_arg_value_75 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_75 = Py_None;
tmp_fromlist_value_75 = mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyParam_tuple;
tmp_level_value_75 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 97;
tmp_import_name_from_91 = IMPORT_MODULE5(tstate, tmp_name_value_75, tmp_globals_arg_value_75, tmp_locals_arg_value_75, tmp_fromlist_value_75, tmp_level_value_75);
if (tmp_import_name_from_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_91)) {
    tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_91,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_StaticFileChunkingStrategyParam,
        const_int_0
    );
} else {
    tmp_assign_source_97 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_91, mod_consts.const_str_plain_StaticFileChunkingStrategyParam);
}

CHECK_OBJECT(tmp_import_name_from_91);
Py_DECREF(tmp_import_name_from_91);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_StaticFileChunkingStrategyParam, tmp_assign_source_97);
}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_import_name_from_92;
PyObject *tmp_name_value_76;
PyObject *tmp_globals_arg_value_76;
PyObject *tmp_locals_arg_value_76;
PyObject *tmp_fromlist_value_76;
PyObject *tmp_level_value_76;
tmp_name_value_76 = mod_consts.const_str_plain_static_file_chunking_strategy_object;
tmp_globals_arg_value_76 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_76 = Py_None;
tmp_fromlist_value_76 = mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyObject_tuple;
tmp_level_value_76 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 98;
tmp_import_name_from_92 = IMPORT_MODULE5(tstate, tmp_name_value_76, tmp_globals_arg_value_76, tmp_locals_arg_value_76, tmp_fromlist_value_76, tmp_level_value_76);
if (tmp_import_name_from_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_92)) {
    tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_92,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_StaticFileChunkingStrategyObject,
        const_int_0
    );
} else {
    tmp_assign_source_98 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_92, mod_consts.const_str_plain_StaticFileChunkingStrategyObject);
}

CHECK_OBJECT(tmp_import_name_from_92);
Py_DECREF(tmp_import_name_from_92);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_StaticFileChunkingStrategyObject, tmp_assign_source_98);
}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_import_name_from_93;
PyObject *tmp_name_value_77;
PyObject *tmp_globals_arg_value_77;
PyObject *tmp_locals_arg_value_77;
PyObject *tmp_fromlist_value_77;
PyObject *tmp_level_value_77;
tmp_name_value_77 = mod_consts.const_str_digest_0226a3cff429c71651d13c2792e2034b;
tmp_globals_arg_value_77 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_77 = Py_None;
tmp_fromlist_value_77 = mod_consts.const_tuple_str_plain_EvalStoredCompletionsDataSourceConfig_tuple;
tmp_level_value_77 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 99;
tmp_import_name_from_93 = IMPORT_MODULE5(tstate, tmp_name_value_77, tmp_globals_arg_value_77, tmp_locals_arg_value_77, tmp_fromlist_value_77, tmp_level_value_77);
if (tmp_import_name_from_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_93)) {
    tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_93,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_EvalStoredCompletionsDataSourceConfig,
        const_int_0
    );
} else {
    tmp_assign_source_99 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_93, mod_consts.const_str_plain_EvalStoredCompletionsDataSourceConfig);
}

CHECK_OBJECT(tmp_import_name_from_93);
Py_DECREF(tmp_import_name_from_93);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalStoredCompletionsDataSourceConfig, tmp_assign_source_99);
}
{
PyObject *tmp_assign_source_100;
PyObject *tmp_import_name_from_94;
PyObject *tmp_name_value_78;
PyObject *tmp_globals_arg_value_78;
PyObject *tmp_locals_arg_value_78;
PyObject *tmp_fromlist_value_78;
PyObject *tmp_level_value_78;
tmp_name_value_78 = mod_consts.const_str_digest_d84e59d091b540e18da842b001c890d7;
tmp_globals_arg_value_78 = (PyObject *)moduledict_openai$types;
tmp_locals_arg_value_78 = Py_None;
tmp_fromlist_value_78 = mod_consts.const_tuple_str_plain_StaticFileChunkingStrategyObjectParam_tuple;
tmp_level_value_78 = const_int_pos_1;
frame_frame_openai$types->m_frame.f_lineno = 102;
tmp_import_name_from_94 = IMPORT_MODULE5(tstate, tmp_name_value_78, tmp_globals_arg_value_78, tmp_locals_arg_value_78, tmp_fromlist_value_78, tmp_level_value_78);
if (tmp_import_name_from_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_94)) {
    tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_94,
        (PyObject *)moduledict_openai$types,
        mod_consts.const_str_plain_StaticFileChunkingStrategyObjectParam,
        const_int_0
    );
} else {
    tmp_assign_source_100 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_94, mod_consts.const_str_plain_StaticFileChunkingStrategyObjectParam);
}

CHECK_OBJECT(tmp_import_name_from_94);
Py_DECREF(tmp_import_name_from_94);
if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types, (Nuitka_StringObject *)mod_consts.const_str_plain_StaticFileChunkingStrategyObjectParam, tmp_assign_source_100);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types);
    return module_openai$types;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

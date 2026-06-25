/* Generated code for Python module 'openai$resources'
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



/* The "module_openai$resources" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$resources;
PyDictObject *moduledict_openai$resources;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_c0760630ed38e8aa80130ab81decf450_tuple;
PyObject *const_str_plain_resources;
PyObject *const_tuple_ccd1b8406efdaae6902d1be78b2c7c2c_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_beta;
PyObject *const_tuple_a2a228731a13490b6fd079b94d0e7fcf_tuple;
PyObject *const_str_plain_Beta;
PyObject *const_str_plain_AsyncBeta;
PyObject *const_str_plain_BetaWithRawResponse;
PyObject *const_str_plain_AsyncBetaWithRawResponse;
PyObject *const_str_plain_BetaWithStreamingResponse;
PyObject *const_str_plain_AsyncBetaWithStreamingResponse;
PyObject *const_str_plain_chat;
PyObject *const_tuple_be76311918397fc8bece0c2fa60c2424_tuple;
PyObject *const_str_plain_Chat;
PyObject *const_str_plain_AsyncChat;
PyObject *const_str_plain_ChatWithRawResponse;
PyObject *const_str_plain_AsyncChatWithRawResponse;
PyObject *const_str_plain_ChatWithStreamingResponse;
PyObject *const_str_plain_AsyncChatWithStreamingResponse;
PyObject *const_str_plain_audio;
PyObject *const_tuple_798bd9346ea37e24d0374b4e809a3899_tuple;
PyObject *const_str_plain_Audio;
PyObject *const_str_plain_AsyncAudio;
PyObject *const_str_plain_AudioWithRawResponse;
PyObject *const_str_plain_AsyncAudioWithRawResponse;
PyObject *const_str_plain_AudioWithStreamingResponse;
PyObject *const_str_plain_AsyncAudioWithStreamingResponse;
PyObject *const_str_plain_evals;
PyObject *const_tuple_b14d873f5babe7e783530c9a5e7da331_tuple;
PyObject *const_str_plain_Evals;
PyObject *const_str_plain_AsyncEvals;
PyObject *const_str_plain_EvalsWithRawResponse;
PyObject *const_str_plain_AsyncEvalsWithRawResponse;
PyObject *const_str_plain_EvalsWithStreamingResponse;
PyObject *const_str_plain_AsyncEvalsWithStreamingResponse;
PyObject *const_str_plain_files;
PyObject *const_tuple_2fe589ba127e3c1a721f2fe97d29a3b8_tuple;
PyObject *const_str_plain_Files;
PyObject *const_str_plain_AsyncFiles;
PyObject *const_str_plain_FilesWithRawResponse;
PyObject *const_str_plain_AsyncFilesWithRawResponse;
PyObject *const_str_plain_FilesWithStreamingResponse;
PyObject *const_str_plain_AsyncFilesWithStreamingResponse;
PyObject *const_str_plain_images;
PyObject *const_tuple_2d5be8c871fe6f62dd244ef3d076e3c3_tuple;
PyObject *const_str_plain_Images;
PyObject *const_str_plain_AsyncImages;
PyObject *const_str_plain_ImagesWithRawResponse;
PyObject *const_str_plain_AsyncImagesWithRawResponse;
PyObject *const_str_plain_ImagesWithStreamingResponse;
PyObject *const_str_plain_AsyncImagesWithStreamingResponse;
PyObject *const_str_plain_models;
PyObject *const_tuple_32c320dc464cf219a1f9c87e3f970dd1_tuple;
PyObject *const_str_plain_Models;
PyObject *const_str_plain_AsyncModels;
PyObject *const_str_plain_ModelsWithRawResponse;
PyObject *const_str_plain_AsyncModelsWithRawResponse;
PyObject *const_str_plain_ModelsWithStreamingResponse;
PyObject *const_str_plain_AsyncModelsWithStreamingResponse;
PyObject *const_str_plain_batches;
PyObject *const_tuple_1eaf6d22983653cb93469a4423fdfd1a_tuple;
PyObject *const_str_plain_Batches;
PyObject *const_str_plain_AsyncBatches;
PyObject *const_str_plain_BatchesWithRawResponse;
PyObject *const_str_plain_AsyncBatchesWithRawResponse;
PyObject *const_str_plain_BatchesWithStreamingResponse;
PyObject *const_str_plain_AsyncBatchesWithStreamingResponse;
PyObject *const_str_plain_uploads;
PyObject *const_tuple_f1d226718e23b4136280e026bf026b16_tuple;
PyObject *const_str_plain_Uploads;
PyObject *const_str_plain_AsyncUploads;
PyObject *const_str_plain_UploadsWithRawResponse;
PyObject *const_str_plain_AsyncUploadsWithRawResponse;
PyObject *const_str_plain_UploadsWithStreamingResponse;
PyObject *const_str_plain_AsyncUploadsWithStreamingResponse;
PyObject *const_str_plain_containers;
PyObject *const_tuple_3a4a2822359d9ee26fae21cc66f2a179_tuple;
PyObject *const_str_plain_Containers;
PyObject *const_str_plain_AsyncContainers;
PyObject *const_str_plain_ContainersWithRawResponse;
PyObject *const_str_plain_AsyncContainersWithRawResponse;
PyObject *const_str_plain_ContainersWithStreamingResponse;
PyObject *const_str_plain_AsyncContainersWithStreamingResponse;
PyObject *const_str_plain_embeddings;
PyObject *const_tuple_3600f88c0a00956ee57e77ec478429c1_tuple;
PyObject *const_str_plain_Embeddings;
PyObject *const_str_plain_AsyncEmbeddings;
PyObject *const_str_plain_EmbeddingsWithRawResponse;
PyObject *const_str_plain_AsyncEmbeddingsWithRawResponse;
PyObject *const_str_plain_EmbeddingsWithStreamingResponse;
PyObject *const_str_plain_AsyncEmbeddingsWithStreamingResponse;
PyObject *const_str_plain_completions;
PyObject *const_tuple_4848ce88959a3ccb0fa34a259fe7b366_tuple;
PyObject *const_str_plain_Completions;
PyObject *const_str_plain_AsyncCompletions;
PyObject *const_str_plain_CompletionsWithRawResponse;
PyObject *const_str_plain_AsyncCompletionsWithRawResponse;
PyObject *const_str_plain_CompletionsWithStreamingResponse;
PyObject *const_str_plain_AsyncCompletionsWithStreamingResponse;
PyObject *const_str_plain_fine_tuning;
PyObject *const_tuple_363231fba7fd1b7bec760d79058e0284_tuple;
PyObject *const_str_plain_FineTuning;
PyObject *const_str_plain_AsyncFineTuning;
PyObject *const_str_plain_FineTuningWithRawResponse;
PyObject *const_str_plain_AsyncFineTuningWithRawResponse;
PyObject *const_str_plain_FineTuningWithStreamingResponse;
PyObject *const_str_plain_AsyncFineTuningWithStreamingResponse;
PyObject *const_str_plain_moderations;
PyObject *const_tuple_776de51915529dbc1684dfe4fc563a01_tuple;
PyObject *const_str_plain_Moderations;
PyObject *const_str_plain_AsyncModerations;
PyObject *const_str_plain_ModerationsWithRawResponse;
PyObject *const_str_plain_AsyncModerationsWithRawResponse;
PyObject *const_str_plain_ModerationsWithStreamingResponse;
PyObject *const_str_plain_AsyncModerationsWithStreamingResponse;
PyObject *const_str_plain_vector_stores;
PyObject *const_tuple_3ed48b21719740bbca9e4fed5a1d925f_tuple;
PyObject *const_str_plain_VectorStores;
PyObject *const_str_plain_AsyncVectorStores;
PyObject *const_str_plain_VectorStoresWithRawResponse;
PyObject *const_str_plain_AsyncVectorStoresWithRawResponse;
PyObject *const_str_plain_VectorStoresWithStreamingResponse;
PyObject *const_str_plain_AsyncVectorStoresWithStreamingResponse;
PyObject *const_list_52ab796d6ef509d8c95e422fa6135362_list;
PyObject *const_str_digest_dd42ca596462a8ec33e2b0d006dfaa5d;
PyObject *const_str_digest_6ffdb13e0ca4f9e548430d0373cc5efe;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[131];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.resources"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_resources);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_ccd1b8406efdaae6902d1be78b2c7c2c_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_a2a228731a13490b6fd079b94d0e7fcf_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Beta);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBeta);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWithRawResponse);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBetaWithRawResponse);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWithStreamingResponse);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBetaWithStreamingResponse);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_be76311918397fc8bece0c2fa60c2424_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_Chat);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncChat);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatWithRawResponse);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncChatWithRawResponse);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatWithStreamingResponse);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncChatWithStreamingResponse);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_audio);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_798bd9346ea37e24d0374b4e809a3899_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Audio);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAudio);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_AudioWithRawResponse);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAudioWithRawResponse);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_AudioWithStreamingResponse);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAudioWithStreamingResponse);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_evals);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_b14d873f5babe7e783530c9a5e7da331_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Evals);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvals);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalsWithRawResponse);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalsWithStreamingResponse);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_files);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_2fe589ba127e3c1a721f2fe97d29a3b8_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Files);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFiles);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_FilesWithRawResponse);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFilesWithRawResponse);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_FilesWithStreamingResponse);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_images);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_2d5be8c871fe6f62dd244ef3d076e3c3_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_Images);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncImages);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImagesWithRawResponse);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncImagesWithRawResponse);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImagesWithStreamingResponse);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncImagesWithStreamingResponse);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_models);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_32c320dc464cf219a1f9c87e3f970dd1_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Models);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModels);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModelsWithRawResponse);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModelsWithRawResponse);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModelsWithStreamingResponse);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModelsWithStreamingResponse);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_batches);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_1eaf6d22983653cb93469a4423fdfd1a_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_Batches);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBatches);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_BatchesWithRawResponse);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBatchesWithRawResponse);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_BatchesWithStreamingResponse);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBatchesWithStreamingResponse);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_uploads);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_f1d226718e23b4136280e026bf026b16_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_Uploads);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncUploads);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_UploadsWithRawResponse);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncUploadsWithRawResponse);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_UploadsWithStreamingResponse);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncUploadsWithStreamingResponse);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_containers);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_3a4a2822359d9ee26fae21cc66f2a179_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_Containers);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncContainers);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContainersWithRawResponse);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncContainersWithRawResponse);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContainersWithStreamingResponse);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncContainersWithStreamingResponse);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_embeddings);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_3600f88c0a00956ee57e77ec478429c1_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Embeddings);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEmbeddings);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_EmbeddingsWithRawResponse);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEmbeddingsWithRawResponse);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_EmbeddingsWithStreamingResponse);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEmbeddingsWithStreamingResponse);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_completions);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_4848ce88959a3ccb0fa34a259fe7b366_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_Completions);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncCompletions);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionsWithRawResponse);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncCompletionsWithRawResponse);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionsWithStreamingResponse);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncCompletionsWithStreamingResponse);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_363231fba7fd1b7bec760d79058e0284_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuning);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFineTuning);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningWithRawResponse);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFineTuningWithRawResponse);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningWithStreamingResponse);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFineTuningWithStreamingResponse);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_moderations);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_776de51915529dbc1684dfe4fc563a01_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_Moderations);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModerations);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationsWithRawResponse);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModerationsWithRawResponse);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationsWithStreamingResponse);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModerationsWithStreamingResponse);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_stores);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_3ed48b21719740bbca9e4fed5a1d925f_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStores);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncVectorStores);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoresWithRawResponse);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncVectorStoresWithRawResponse);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoresWithStreamingResponse);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncVectorStoresWithStreamingResponse);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_list_52ab796d6ef509d8c95e422fa6135362_list);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd42ca596462a8ec33e2b0d006dfaa5d);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ffdb13e0ca4f9e548430d0373cc5efe);
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
void checkModuleConstants_openai$resources(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_resources));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resources);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_ccd1b8406efdaae6902d1be78b2c7c2c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ccd1b8406efdaae6902d1be78b2c7c2c_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_a2a228731a13490b6fd079b94d0e7fcf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a2a228731a13490b6fd079b94d0e7fcf_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Beta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Beta);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncBeta);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWithRawResponse);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBetaWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncBetaWithRawResponse);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaWithStreamingResponse);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBetaWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncBetaWithStreamingResponse);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_be76311918397fc8bece0c2fa60c2424_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_be76311918397fc8bece0c2fa60c2424_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_Chat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Chat);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncChat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncChat);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatWithRawResponse);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncChatWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncChatWithRawResponse);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatWithStreamingResponse);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncChatWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncChatWithStreamingResponse);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_audio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audio);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_798bd9346ea37e24d0374b4e809a3899_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_798bd9346ea37e24d0374b4e809a3899_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Audio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Audio);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAudio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAudio);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_AudioWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AudioWithRawResponse);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAudioWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAudioWithRawResponse);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_AudioWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AudioWithStreamingResponse);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAudioWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAudioWithStreamingResponse);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_evals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_evals);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_b14d873f5babe7e783530c9a5e7da331_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b14d873f5babe7e783530c9a5e7da331_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Evals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Evals);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEvals);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalsWithRawResponse);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvalsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalsWithStreamingResponse);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_files);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_2fe589ba127e3c1a721f2fe97d29a3b8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2fe589ba127e3c1a721f2fe97d29a3b8_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Files);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFiles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncFiles);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_FilesWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FilesWithRawResponse);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFilesWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncFilesWithRawResponse);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_FilesWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FilesWithStreamingResponse);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFilesWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_images));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_images);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_2d5be8c871fe6f62dd244ef3d076e3c3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2d5be8c871fe6f62dd244ef3d076e3c3_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_Images));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Images);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncImages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncImages);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImagesWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImagesWithRawResponse);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncImagesWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncImagesWithRawResponse);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImagesWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImagesWithStreamingResponse);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncImagesWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncImagesWithStreamingResponse);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_models);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_32c320dc464cf219a1f9c87e3f970dd1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_32c320dc464cf219a1f9c87e3f970dd1_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Models);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModels));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncModels);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModelsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModelsWithRawResponse);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModelsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncModelsWithRawResponse);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModelsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModelsWithStreamingResponse);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModelsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncModelsWithStreamingResponse);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_batches));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_batches);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_1eaf6d22983653cb93469a4423fdfd1a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1eaf6d22983653cb93469a4423fdfd1a_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_Batches));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Batches);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBatches));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncBatches);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_BatchesWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BatchesWithRawResponse);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBatchesWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncBatchesWithRawResponse);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_BatchesWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BatchesWithStreamingResponse);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBatchesWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncBatchesWithStreamingResponse);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_uploads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uploads);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_f1d226718e23b4136280e026bf026b16_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f1d226718e23b4136280e026bf026b16_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_Uploads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Uploads);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncUploads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncUploads);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_UploadsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UploadsWithRawResponse);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncUploadsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncUploadsWithRawResponse);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_UploadsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UploadsWithStreamingResponse);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncUploadsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncUploadsWithStreamingResponse);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_containers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_containers);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_3a4a2822359d9ee26fae21cc66f2a179_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3a4a2822359d9ee26fae21cc66f2a179_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_Containers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Containers);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncContainers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncContainers);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContainersWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContainersWithRawResponse);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncContainersWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncContainersWithRawResponse);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContainersWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContainersWithStreamingResponse);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncContainersWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncContainersWithStreamingResponse);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_embeddings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_embeddings);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_3600f88c0a00956ee57e77ec478429c1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3600f88c0a00956ee57e77ec478429c1_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Embeddings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Embeddings);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEmbeddings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEmbeddings);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_EmbeddingsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EmbeddingsWithRawResponse);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEmbeddingsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEmbeddingsWithRawResponse);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_EmbeddingsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EmbeddingsWithStreamingResponse);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEmbeddingsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEmbeddingsWithStreamingResponse);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_completions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completions);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_4848ce88959a3ccb0fa34a259fe7b366_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4848ce88959a3ccb0fa34a259fe7b366_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_Completions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Completions);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncCompletions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncCompletions);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompletionsWithRawResponse);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncCompletionsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncCompletionsWithRawResponse);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompletionsWithStreamingResponse);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncCompletionsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncCompletionsWithStreamingResponse);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fine_tuning);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_363231fba7fd1b7bec760d79058e0284_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_363231fba7fd1b7bec760d79058e0284_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FineTuning);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFineTuning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncFineTuning);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FineTuningWithRawResponse);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFineTuningWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncFineTuningWithRawResponse);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_FineTuningWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FineTuningWithStreamingResponse);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFineTuningWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncFineTuningWithStreamingResponse);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_moderations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moderations);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_776de51915529dbc1684dfe4fc563a01_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_776de51915529dbc1684dfe4fc563a01_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_Moderations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Moderations);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModerations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncModerations);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModerationsWithRawResponse);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModerationsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncModerationsWithRawResponse);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModerationsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModerationsWithStreamingResponse);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncModerationsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncModerationsWithStreamingResponse);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_stores));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_stores);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_3ed48b21719740bbca9e4fed5a1d925f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3ed48b21719740bbca9e4fed5a1d925f_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStores));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStores);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncVectorStores));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncVectorStores);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoresWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStoresWithRawResponse);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncVectorStoresWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncVectorStoresWithRawResponse);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoresWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStoresWithStreamingResponse);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncVectorStoresWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncVectorStoresWithStreamingResponse);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_list_52ab796d6ef509d8c95e422fa6135362_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_52ab796d6ef509d8c95e422fa6135362_list);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd42ca596462a8ec33e2b0d006dfaa5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd42ca596462a8ec33e2b0d006dfaa5d);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ffdb13e0ca4f9e548430d0373cc5efe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ffdb13e0ca4f9e548430d0373cc5efe);
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
static PyObject *module_var_accessor_openai$resources$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_cf6da64da361582849e6c95972fb7035;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dd42ca596462a8ec33e2b0d006dfaa5d); CHECK_OBJECT(module_filename_obj);
code_objects_cf6da64da361582849e6c95972fb7035 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_6ffdb13e0ca4f9e548430d0373cc5efe, mod_consts.const_str_digest_6ffdb13e0ca4f9e548430d0373cc5efe, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$resources[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$resources);
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
        module_openai$resources,
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
        function_table_openai$resources,
        sizeof(function_table_openai$resources) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.resources";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$resources(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$resources");

    // Store the module for future use.
    module_openai$resources = module;

    moduledict_openai$resources = MODULE_DICT(module_openai$resources);

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
        PRINT_STRING("openai$resources: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$resources: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$resources: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.resources" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$resources\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$resources,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$resources,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$resources,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$resources,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$resources,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$resources);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$resources);
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

        UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_10__module = NULL;
PyObject *tmp_import_from_11__module = NULL;
PyObject *tmp_import_from_12__module = NULL;
PyObject *tmp_import_from_13__module = NULL;
PyObject *tmp_import_from_14__module = NULL;
PyObject *tmp_import_from_15__module = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
PyObject *tmp_import_from_8__module = NULL;
PyObject *tmp_import_from_9__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$resources = MAKE_MODULE_FRAME(code_objects_cf6da64da361582849e6c95972fb7035, module_openai$resources);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources);
assert(Py_REFCNT(frame_frame_openai$resources) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_openai$resources->m_frame.f_lineno = 1;
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
frame_frame_openai$resources->m_frame.f_lineno = 1;
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
frame_frame_openai$resources->m_frame.f_lineno = 1;
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
frame_frame_openai$resources->m_frame.f_lineno = 1;
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
frame_frame_openai$resources->m_frame.f_lineno = 1;
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
tmp_args_element_value_3 = mod_consts.const_str_plain_resources;
frame_frame_openai$resources->m_frame.f_lineno = 1;
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
frame_frame_openai$resources->m_frame.f_lineno = 1;
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
frame_frame_openai$resources->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_ccd1b8406efdaae6902d1be78b2c7c2c_tuple);

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
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$resources$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$resources$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_openai$resources$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_openai$resources$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_beta;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_a2a228731a13490b6fd079b94d0e7fcf_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Beta,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Beta);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Beta, tmp_assign_source_6);
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
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncBeta,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AsyncBeta);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBeta, tmp_assign_source_7);
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
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_BetaWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_BetaWithRawResponse);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWithRawResponse, tmp_assign_source_8);
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
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncBetaWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_AsyncBetaWithRawResponse);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBetaWithRawResponse, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_BetaWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_BetaWithStreamingResponse);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaWithStreamingResponse, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncBetaWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_AsyncBetaWithStreamingResponse);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBetaWithStreamingResponse, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_chat;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_be76311918397fc8bece0c2fa60c2424_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 11;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Chat,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Chat);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Chat, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncChat,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_AsyncChat);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncChat, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_ChatWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ChatWithRawResponse);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatWithRawResponse, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncChatWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_AsyncChatWithRawResponse);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncChatWithRawResponse, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_ChatWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ChatWithStreamingResponse);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatWithStreamingResponse, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncChatWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_AsyncChatWithStreamingResponse);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncChatWithStreamingResponse, tmp_assign_source_18);
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
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_audio;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_798bd9346ea37e24d0374b4e809a3899_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 19;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Audio,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Audio);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Audio, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncAudio,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_AsyncAudio);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAudio, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AudioWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_AudioWithRawResponse);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AudioWithRawResponse, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_16 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncAudioWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_AsyncAudioWithRawResponse);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAudioWithRawResponse, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_17 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AudioWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_AudioWithStreamingResponse);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AudioWithStreamingResponse, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_18 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncAudioWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_AsyncAudioWithStreamingResponse);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAudioWithStreamingResponse, tmp_assign_source_25);
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
PyObject *tmp_assign_source_26;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_evals;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_b14d873f5babe7e783530c9a5e7da331_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 27;
tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_26;
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_19 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Evals,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_Evals);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Evals, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_20 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncEvals,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_AsyncEvals);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvals, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_21 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_EvalsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_EvalsWithRawResponse);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithRawResponse, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_22 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncEvalsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithRawResponse, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_23 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_EvalsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_EvalsWithStreamingResponse);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithStreamingResponse, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_24 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse, tmp_assign_source_32);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_files;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_2fe589ba127e3c1a721f2fe97d29a3b8_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 35;
tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_25 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Files,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_Files);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Files, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_26 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncFiles,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_AsyncFiles);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFiles, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_27 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_FilesWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_FilesWithRawResponse);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithRawResponse, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_28 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncFilesWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_AsyncFilesWithRawResponse);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithRawResponse, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_29 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_FilesWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_FilesWithStreamingResponse);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithStreamingResponse, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_30 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncFilesWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithStreamingResponse, tmp_assign_source_39);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_images;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_2d5be8c871fe6f62dd244ef3d076e3c3_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 43;
tmp_assign_source_40 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_40;
}
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_31 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Images,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_Images);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Images, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_32 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncImages,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_AsyncImages);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncImages, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_33 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_ImagesWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_ImagesWithRawResponse);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagesWithRawResponse, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_34 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncImagesWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_AsyncImagesWithRawResponse);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncImagesWithRawResponse, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_35 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_ImagesWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_ImagesWithStreamingResponse);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagesWithStreamingResponse, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_36 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncImagesWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_AsyncImagesWithStreamingResponse);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncImagesWithStreamingResponse, tmp_assign_source_46);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_models;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_32c320dc464cf219a1f9c87e3f970dd1_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 51;
tmp_assign_source_47 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_47;
}
// Tried code:
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_37;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_37 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Models,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_Models);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Models, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_38 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncModels,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_AsyncModels);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncModels, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_39;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_39 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_ModelsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_ModelsWithRawResponse);
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_ModelsWithRawResponse, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_40;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_40 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncModelsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_AsyncModelsWithRawResponse);
}

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncModelsWithRawResponse, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_41 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_ModelsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_ModelsWithStreamingResponse);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_ModelsWithStreamingResponse, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_42;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_42 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncModelsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_AsyncModelsWithStreamingResponse);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncModelsWithStreamingResponse, tmp_assign_source_53);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_batches;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_1eaf6d22983653cb93469a4423fdfd1a_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 59;
tmp_assign_source_54 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_8__module == NULL);
tmp_import_from_8__module = tmp_assign_source_54;
}
// Tried code:
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_43;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_43 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Batches,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_Batches);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Batches, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_44;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_44 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncBatches,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_AsyncBatches);
}

if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBatches, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_45;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_45 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_BatchesWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_BatchesWithRawResponse);
}

if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_BatchesWithRawResponse, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_46;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_46 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncBatchesWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_AsyncBatchesWithRawResponse);
}

if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBatchesWithRawResponse, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_47;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_47 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_BatchesWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_BatchesWithStreamingResponse);
}

if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_BatchesWithStreamingResponse, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_48;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_48 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncBatchesWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_AsyncBatchesWithStreamingResponse);
}

if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBatchesWithStreamingResponse, tmp_assign_source_60);
}
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_8__module);
CHECK_OBJECT(tmp_import_from_8__module);
Py_DECREF(tmp_import_from_8__module);
tmp_import_from_8__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_import_from_8__module);
CHECK_OBJECT(tmp_import_from_8__module);
Py_DECREF(tmp_import_from_8__module);
tmp_import_from_8__module = NULL;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_uploads;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_f1d226718e23b4136280e026bf026b16_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 67;
tmp_assign_source_61 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_9__module == NULL);
tmp_import_from_9__module = tmp_assign_source_61;
}
// Tried code:
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_49;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_49 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Uploads,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_Uploads);
}

if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Uploads, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_import_name_from_50;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_50 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncUploads,
        const_int_0
    );
} else {
    tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_AsyncUploads);
}

if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncUploads, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_import_name_from_51;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_51 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_UploadsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_UploadsWithRawResponse);
}

if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_UploadsWithRawResponse, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_import_name_from_52;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_52 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncUploadsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain_AsyncUploadsWithRawResponse);
}

if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncUploadsWithRawResponse, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_import_name_from_53;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_53 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_UploadsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain_UploadsWithStreamingResponse);
}

if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_UploadsWithStreamingResponse, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_import_name_from_54;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_54 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_54)) {
    tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_54,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncUploadsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts.const_str_plain_AsyncUploadsWithStreamingResponse);
}

if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncUploadsWithStreamingResponse, tmp_assign_source_67);
}
goto try_end_9;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_9__module);
CHECK_OBJECT(tmp_import_from_9__module);
Py_DECREF(tmp_import_from_9__module);
tmp_import_from_9__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_import_from_9__module);
CHECK_OBJECT(tmp_import_from_9__module);
Py_DECREF(tmp_import_from_9__module);
tmp_import_from_9__module = NULL;
{
PyObject *tmp_assign_source_68;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_containers;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_3a4a2822359d9ee26fae21cc66f2a179_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 75;
tmp_assign_source_68 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_10__module == NULL);
tmp_import_from_10__module = tmp_assign_source_68;
}
// Tried code:
{
PyObject *tmp_assign_source_69;
PyObject *tmp_import_name_from_55;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_55 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_55)) {
    tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_55,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Containers,
        const_int_0
    );
} else {
    tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts.const_str_plain_Containers);
}

if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Containers, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_import_name_from_56;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_56 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_56)) {
    tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_56,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncContainers,
        const_int_0
    );
} else {
    tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts.const_str_plain_AsyncContainers);
}

if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncContainers, tmp_assign_source_70);
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_import_name_from_57;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_57 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_57)) {
    tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_57,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_ContainersWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts.const_str_plain_ContainersWithRawResponse);
}

if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainersWithRawResponse, tmp_assign_source_71);
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_import_name_from_58;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_58 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_58)) {
    tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_58,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncContainersWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts.const_str_plain_AsyncContainersWithRawResponse);
}

if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncContainersWithRawResponse, tmp_assign_source_72);
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_import_name_from_59;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_59 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_59)) {
    tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_59,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_ContainersWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts.const_str_plain_ContainersWithStreamingResponse);
}

if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_ContainersWithStreamingResponse, tmp_assign_source_73);
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_import_name_from_60;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_60 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_60)) {
    tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_60,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncContainersWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts.const_str_plain_AsyncContainersWithStreamingResponse);
}

if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncContainersWithStreamingResponse, tmp_assign_source_74);
}
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_10__module);
CHECK_OBJECT(tmp_import_from_10__module);
Py_DECREF(tmp_import_from_10__module);
tmp_import_from_10__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_import_from_10__module);
CHECK_OBJECT(tmp_import_from_10__module);
Py_DECREF(tmp_import_from_10__module);
tmp_import_from_10__module = NULL;
{
PyObject *tmp_assign_source_75;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_embeddings;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_3600f88c0a00956ee57e77ec478429c1_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 83;
tmp_assign_source_75 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_11__module == NULL);
tmp_import_from_11__module = tmp_assign_source_75;
}
// Tried code:
{
PyObject *tmp_assign_source_76;
PyObject *tmp_import_name_from_61;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_61 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_61)) {
    tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_61,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Embeddings,
        const_int_0
    );
} else {
    tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts.const_str_plain_Embeddings);
}

if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Embeddings, tmp_assign_source_76);
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_import_name_from_62;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_62 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_62)) {
    tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_62,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncEmbeddings,
        const_int_0
    );
} else {
    tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts.const_str_plain_AsyncEmbeddings);
}

if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEmbeddings, tmp_assign_source_77);
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_import_name_from_63;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_63 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_63)) {
    tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_63,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_EmbeddingsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts.const_str_plain_EmbeddingsWithRawResponse);
}

if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_EmbeddingsWithRawResponse, tmp_assign_source_78);
}
{
PyObject *tmp_assign_source_79;
PyObject *tmp_import_name_from_64;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_64 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_64)) {
    tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_64,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncEmbeddingsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts.const_str_plain_AsyncEmbeddingsWithRawResponse);
}

if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEmbeddingsWithRawResponse, tmp_assign_source_79);
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_import_name_from_65;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_65 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_65)) {
    tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_65,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_EmbeddingsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts.const_str_plain_EmbeddingsWithStreamingResponse);
}

if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_EmbeddingsWithStreamingResponse, tmp_assign_source_80);
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_import_name_from_66;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_66 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_66)) {
    tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_66,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncEmbeddingsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts.const_str_plain_AsyncEmbeddingsWithStreamingResponse);
}

if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEmbeddingsWithStreamingResponse, tmp_assign_source_81);
}
goto try_end_11;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_11__module);
CHECK_OBJECT(tmp_import_from_11__module);
Py_DECREF(tmp_import_from_11__module);
tmp_import_from_11__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_import_from_11__module);
CHECK_OBJECT(tmp_import_from_11__module);
Py_DECREF(tmp_import_from_11__module);
tmp_import_from_11__module = NULL;
{
PyObject *tmp_assign_source_82;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_completions;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_4848ce88959a3ccb0fa34a259fe7b366_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 91;
tmp_assign_source_82 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_12__module == NULL);
tmp_import_from_12__module = tmp_assign_source_82;
}
// Tried code:
{
PyObject *tmp_assign_source_83;
PyObject *tmp_import_name_from_67;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_67 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_67)) {
    tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_67,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Completions,
        const_int_0
    );
} else {
    tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts.const_str_plain_Completions);
}

if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Completions, tmp_assign_source_83);
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_import_name_from_68;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_68 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_68)) {
    tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_68,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncCompletions,
        const_int_0
    );
} else {
    tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts.const_str_plain_AsyncCompletions);
}

if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCompletions, tmp_assign_source_84);
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_import_name_from_69;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_69 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_69)) {
    tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_69,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_CompletionsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts.const_str_plain_CompletionsWithRawResponse);
}

if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletionsWithRawResponse, tmp_assign_source_85);
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_import_name_from_70;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_70 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_70)) {
    tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_70,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncCompletionsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts.const_str_plain_AsyncCompletionsWithRawResponse);
}

if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCompletionsWithRawResponse, tmp_assign_source_86);
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_import_name_from_71;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_71 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_71)) {
    tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_71,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_CompletionsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts.const_str_plain_CompletionsWithStreamingResponse);
}

if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletionsWithStreamingResponse, tmp_assign_source_87);
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_import_name_from_72;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_72 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_72)) {
    tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_72,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncCompletionsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts.const_str_plain_AsyncCompletionsWithStreamingResponse);
}

if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCompletionsWithStreamingResponse, tmp_assign_source_88);
}
goto try_end_12;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_12__module);
CHECK_OBJECT(tmp_import_from_12__module);
Py_DECREF(tmp_import_from_12__module);
tmp_import_from_12__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_import_from_12__module);
CHECK_OBJECT(tmp_import_from_12__module);
Py_DECREF(tmp_import_from_12__module);
tmp_import_from_12__module = NULL;
{
PyObject *tmp_assign_source_89;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_fine_tuning;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_363231fba7fd1b7bec760d79058e0284_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 99;
tmp_assign_source_89 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_13__module == NULL);
tmp_import_from_13__module = tmp_assign_source_89;
}
// Tried code:
{
PyObject *tmp_assign_source_90;
PyObject *tmp_import_name_from_73;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_73 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_73)) {
    tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_73,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_FineTuning,
        const_int_0
    );
} else {
    tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts.const_str_plain_FineTuning);
}

if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_FineTuning, tmp_assign_source_90);
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_import_name_from_74;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_74 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_74)) {
    tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_74,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncFineTuning,
        const_int_0
    );
} else {
    tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts.const_str_plain_AsyncFineTuning);
}

if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFineTuning, tmp_assign_source_91);
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_import_name_from_75;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_75 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_75)) {
    tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_75,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_FineTuningWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_92 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts.const_str_plain_FineTuningWithRawResponse);
}

if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_FineTuningWithRawResponse, tmp_assign_source_92);
}
{
PyObject *tmp_assign_source_93;
PyObject *tmp_import_name_from_76;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_76 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_76)) {
    tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_76,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncFineTuningWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_93 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts.const_str_plain_AsyncFineTuningWithRawResponse);
}

if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFineTuningWithRawResponse, tmp_assign_source_93);
}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_import_name_from_77;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_77 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_77)) {
    tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_77,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_FineTuningWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_94 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_77, mod_consts.const_str_plain_FineTuningWithStreamingResponse);
}

if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_FineTuningWithStreamingResponse, tmp_assign_source_94);
}
{
PyObject *tmp_assign_source_95;
PyObject *tmp_import_name_from_78;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_78 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_78)) {
    tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_78,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncFineTuningWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_95 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_78, mod_consts.const_str_plain_AsyncFineTuningWithStreamingResponse);
}

if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFineTuningWithStreamingResponse, tmp_assign_source_95);
}
goto try_end_13;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_13__module);
CHECK_OBJECT(tmp_import_from_13__module);
Py_DECREF(tmp_import_from_13__module);
tmp_import_from_13__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_import_from_13__module);
CHECK_OBJECT(tmp_import_from_13__module);
Py_DECREF(tmp_import_from_13__module);
tmp_import_from_13__module = NULL;
{
PyObject *tmp_assign_source_96;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_moderations;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_776de51915529dbc1684dfe4fc563a01_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 107;
tmp_assign_source_96 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_14__module == NULL);
tmp_import_from_14__module = tmp_assign_source_96;
}
// Tried code:
{
PyObject *tmp_assign_source_97;
PyObject *tmp_import_name_from_79;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_79 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_79)) {
    tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_79,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_Moderations,
        const_int_0
    );
} else {
    tmp_assign_source_97 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_79, mod_consts.const_str_plain_Moderations);
}

if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_Moderations, tmp_assign_source_97);
}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_import_name_from_80;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_80 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_80)) {
    tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_80,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncModerations,
        const_int_0
    );
} else {
    tmp_assign_source_98 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_80, mod_consts.const_str_plain_AsyncModerations);
}

if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncModerations, tmp_assign_source_98);
}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_import_name_from_81;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_81 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_81)) {
    tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_81,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_ModerationsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_99 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_81, mod_consts.const_str_plain_ModerationsWithRawResponse);
}

if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_ModerationsWithRawResponse, tmp_assign_source_99);
}
{
PyObject *tmp_assign_source_100;
PyObject *tmp_import_name_from_82;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_82 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_82)) {
    tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_82,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncModerationsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_100 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_82, mod_consts.const_str_plain_AsyncModerationsWithRawResponse);
}

if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncModerationsWithRawResponse, tmp_assign_source_100);
}
{
PyObject *tmp_assign_source_101;
PyObject *tmp_import_name_from_83;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_83 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_83)) {
    tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_83,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_ModerationsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_101 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_83, mod_consts.const_str_plain_ModerationsWithStreamingResponse);
}

if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_ModerationsWithStreamingResponse, tmp_assign_source_101);
}
{
PyObject *tmp_assign_source_102;
PyObject *tmp_import_name_from_84;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_84 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_84)) {
    tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_84,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncModerationsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_102 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_84, mod_consts.const_str_plain_AsyncModerationsWithStreamingResponse);
}

if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncModerationsWithStreamingResponse, tmp_assign_source_102);
}
goto try_end_14;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_14__module);
CHECK_OBJECT(tmp_import_from_14__module);
Py_DECREF(tmp_import_from_14__module);
tmp_import_from_14__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_import_from_14__module);
CHECK_OBJECT(tmp_import_from_14__module);
Py_DECREF(tmp_import_from_14__module);
tmp_import_from_14__module = NULL;
{
PyObject *tmp_assign_source_103;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_vector_stores;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$resources;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_3ed48b21719740bbca9e4fed5a1d925f_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_openai$resources->m_frame.f_lineno = 115;
tmp_assign_source_103 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_15__module == NULL);
tmp_import_from_15__module = tmp_assign_source_103;
}
// Tried code:
{
PyObject *tmp_assign_source_104;
PyObject *tmp_import_name_from_85;
CHECK_OBJECT(tmp_import_from_15__module);
tmp_import_name_from_85 = tmp_import_from_15__module;
if (PyModule_Check(tmp_import_name_from_85)) {
    tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_85,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_VectorStores,
        const_int_0
    );
} else {
    tmp_assign_source_104 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_85, mod_consts.const_str_plain_VectorStores);
}

if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStores, tmp_assign_source_104);
}
{
PyObject *tmp_assign_source_105;
PyObject *tmp_import_name_from_86;
CHECK_OBJECT(tmp_import_from_15__module);
tmp_import_name_from_86 = tmp_import_from_15__module;
if (PyModule_Check(tmp_import_name_from_86)) {
    tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_86,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncVectorStores,
        const_int_0
    );
} else {
    tmp_assign_source_105 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_86, mod_consts.const_str_plain_AsyncVectorStores);
}

if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncVectorStores, tmp_assign_source_105);
}
{
PyObject *tmp_assign_source_106;
PyObject *tmp_import_name_from_87;
CHECK_OBJECT(tmp_import_from_15__module);
tmp_import_name_from_87 = tmp_import_from_15__module;
if (PyModule_Check(tmp_import_name_from_87)) {
    tmp_assign_source_106 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_87,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_VectorStoresWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_106 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_87, mod_consts.const_str_plain_VectorStoresWithRawResponse);
}

if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoresWithRawResponse, tmp_assign_source_106);
}
{
PyObject *tmp_assign_source_107;
PyObject *tmp_import_name_from_88;
CHECK_OBJECT(tmp_import_from_15__module);
tmp_import_name_from_88 = tmp_import_from_15__module;
if (PyModule_Check(tmp_import_name_from_88)) {
    tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_88,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncVectorStoresWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_107 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_88, mod_consts.const_str_plain_AsyncVectorStoresWithRawResponse);
}

if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncVectorStoresWithRawResponse, tmp_assign_source_107);
}
{
PyObject *tmp_assign_source_108;
PyObject *tmp_import_name_from_89;
CHECK_OBJECT(tmp_import_from_15__module);
tmp_import_name_from_89 = tmp_import_from_15__module;
if (PyModule_Check(tmp_import_name_from_89)) {
    tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_89,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_VectorStoresWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_108 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_89, mod_consts.const_str_plain_VectorStoresWithStreamingResponse);
}

if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoresWithStreamingResponse, tmp_assign_source_108);
}
{
PyObject *tmp_assign_source_109;
PyObject *tmp_import_name_from_90;
CHECK_OBJECT(tmp_import_from_15__module);
tmp_import_name_from_90 = tmp_import_from_15__module;
if (PyModule_Check(tmp_import_name_from_90)) {
    tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_90,
        (PyObject *)moduledict_openai$resources,
        mod_consts.const_str_plain_AsyncVectorStoresWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_109 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_90, mod_consts.const_str_plain_AsyncVectorStoresWithStreamingResponse);
}

if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncVectorStoresWithStreamingResponse, tmp_assign_source_109);
}
goto try_end_15;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_15__module);
CHECK_OBJECT(tmp_import_from_15__module);
Py_DECREF(tmp_import_from_15__module);
tmp_import_from_15__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_15:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$resources);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_import_from_15__module);
CHECK_OBJECT(tmp_import_from_15__module);
Py_DECREF(tmp_import_from_15__module);
tmp_import_from_15__module = NULL;
{
PyObject *tmp_assign_source_110;
tmp_assign_source_110 = LIST_COPY(tstate, mod_consts.const_list_52ab796d6ef509d8c95e422fa6135362_list);
UPDATE_STRING_DICT1(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_110);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$resources", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.resources" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$resources);
    return module_openai$resources;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$resources", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'google$genai$_operations_converters'
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



/* The "module_google$genai$_operations_converters" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$genai$_operations_converters;
PyDictObject *moduledict_google$genai$_operations_converters;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_getv;
PyObject *const_str_plain_operation_name;
PyObject *const_str_digest_1bbe3cc3cc1be5937a26093c0e4478b9;
PyObject *const_str_plain_resource_name;
PyObject *const_str_digest_4b75a4e149960106a4103688757655bc;
PyObject *const_str_plain_config;
PyObject *const_str_digest_1a44b37414b7189204ddb7bbae5713d0;
PyObject *const_str_plain_setv;
PyObject *const_str_plain_operationName;
PyObject *const_str_plain__url;
PyObject *const_str_plain_resourceName;
PyObject *const_str_plain_metadata;
PyObject *const_str_plain_done;
PyObject *const_str_plain_error;
PyObject *const_str_plain_response;
PyObject *const_str_plain_generateVideoResponse;
PyObject *const_str_plain__GenerateVideosResponse_from_mldev;
PyObject *const_str_plain_result;
PyObject *const_str_plain__GenerateVideosResponse_from_vertex;
PyObject *const_str_plain_generatedSamples;
PyObject *const_str_plain_generated_videos;
PyObject *const_str_plain__GeneratedVideo_from_mldev;
PyObject *const_str_plain_to_object;
PyObject *const_str_plain_raiMediaFilteredCount;
PyObject *const_str_plain_rai_media_filtered_count;
PyObject *const_str_plain_raiMediaFilteredReasons;
PyObject *const_str_plain_rai_media_filtered_reasons;
PyObject *const_str_plain_videos;
PyObject *const_str_plain__GeneratedVideo_from_vertex;
PyObject *const_str_plain_video;
PyObject *const_str_plain__Video_from_mldev;
PyObject *const_str_plain__self;
PyObject *const_str_plain__Video_from_vertex;
PyObject *const_str_plain__ImportFileResponse_from_mldev;
PyObject *const_str_plain_sdkHttpResponse;
PyObject *const_str_plain_sdk_http_response;
PyObject *const_str_plain_documentName;
PyObject *const_str_plain_document_name;
PyObject *const_str_digest_d1dbc189c92f9471a6ff49c329cbb044;
PyObject *const_str_plain_uri;
PyObject *const_str_plain_encodedVideo;
PyObject *const_str_plain_video_bytes;
PyObject *const_str_plain_base_t;
PyObject *const_str_plain_t_bytes;
PyObject *const_str_plain_mime_type;
PyObject *const_str_plain_gcsUri;
PyObject *const_str_plain_bytesBase64Encoded;
PyObject *const_str_plain_mimeType;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_Union;
PyObject *const_tuple_str_plain__base_transformers_tuple;
PyObject *const_str_plain__base_transformers;
PyObject *const_str_plain__common;
PyObject *const_tuple_str_plain_get_value_by_path_tuple;
PyObject *const_str_plain_get_value_by_path;
PyObject *const_tuple_str_plain_set_value_by_path_tuple;
PyObject *const_str_plain_set_value_by_path;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_from_object;
PyObject *const_str_plain_parent_object;
PyObject *const_str_plain_return;
PyObject *const_str_digest_b8e911040f4f853d08b74f0288193740;
PyObject *const_str_digest_94b4e9357ce88bbcc7b7b521833078e3;
PyObject *const_str_plain__GenerateVideosOperation_from_mldev;
PyObject *const_str_plain__GenerateVideosOperation_from_vertex;
PyObject *const_str_plain__GetOperationParameters_to_mldev;
PyObject *const_str_plain__GetOperationParameters_to_vertex;
PyObject *const_str_plain__ImportFileOperation_from_mldev;
PyObject *const_str_digest_e6aa277d6462b5a53d21bcc261a66e4c;
PyObject *const_str_digest_11754de8856b48fef39409b91b5130de;
PyObject *const_str_digest_3986bc896132c6e0cda81c1f073248b1;
PyObject *const_tuple_21d332c911c3a2235d61476019cf969b_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[75];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.genai._operations_converters"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_getv);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_operation_name);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bbe3cc3cc1be5937a26093c0e4478b9);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_resource_name);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b75a4e149960106a4103688757655bc);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_config);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a44b37414b7189204ddb7bbae5713d0);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_setv);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_operationName);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__url);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_resourceName);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_done);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_generateVideoResponse);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__GenerateVideosResponse_from_mldev);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_result);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__GenerateVideosResponse_from_vertex);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_generatedSamples);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_generated_videos);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__GeneratedVideo_from_mldev);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_object);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_raiMediaFilteredCount);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_rai_media_filtered_count);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_raiMediaFilteredReasons);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_rai_media_filtered_reasons);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_videos);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__GeneratedVideo_from_vertex);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_video);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__Video_from_mldev);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__self);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__Video_from_vertex);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__ImportFileResponse_from_mldev);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_sdkHttpResponse);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_sdk_http_response);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_documentName);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_document_name);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_uri);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_encodedVideo);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_video_bytes);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_t);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_t_bytes);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_mime_type);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_gcsUri);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_bytesBase64Encoded);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_mimeType);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__base_transformers_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_transformers);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__common);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_value_by_path_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_value_by_path);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_value_by_path_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_value_by_path);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_object);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_parent_object);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8e911040f4f853d08b74f0288193740);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_94b4e9357ce88bbcc7b7b521833078e3);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__GenerateVideosOperation_from_mldev);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__GenerateVideosOperation_from_vertex);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetOperationParameters_to_mldev);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetOperationParameters_to_vertex);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain__ImportFileOperation_from_mldev);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6aa277d6462b5a53d21bcc261a66e4c);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_11754de8856b48fef39409b91b5130de);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_3986bc896132c6e0cda81c1f073248b1);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple);
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
void checkModuleConstants_google$genai$_operations_converters(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_getv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getv);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_operation_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_operation_name);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bbe3cc3cc1be5937a26093c0e4478b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bbe3cc3cc1be5937a26093c0e4478b9);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_resource_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resource_name);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b75a4e149960106a4103688757655bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b75a4e149960106a4103688757655bc);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a44b37414b7189204ddb7bbae5713d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a44b37414b7189204ddb7bbae5713d0);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_setv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setv);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_operationName));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_operationName);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__url);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_resourceName));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resourceName);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_done));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_done);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_generateVideoResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generateVideoResponse);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__GenerateVideosResponse_from_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GenerateVideosResponse_from_mldev);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__GenerateVideosResponse_from_vertex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GenerateVideosResponse_from_vertex);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_generatedSamples));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generatedSamples);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_generated_videos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generated_videos);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__GeneratedVideo_from_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GeneratedVideo_from_mldev);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_object);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_raiMediaFilteredCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raiMediaFilteredCount);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_rai_media_filtered_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rai_media_filtered_count);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_raiMediaFilteredReasons));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raiMediaFilteredReasons);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_rai_media_filtered_reasons));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rai_media_filtered_reasons);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_videos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_videos);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__GeneratedVideo_from_vertex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GeneratedVideo_from_vertex);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_video));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_video);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__Video_from_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Video_from_mldev);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__self);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__Video_from_vertex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Video_from_vertex);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__ImportFileResponse_from_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ImportFileResponse_from_mldev);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_sdkHttpResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sdkHttpResponse);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_sdk_http_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sdk_http_response);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_documentName));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_documentName);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_document_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_document_name);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_uri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uri);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_encodedVideo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encodedVideo);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_video_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_video_bytes);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base_t);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_t_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t_bytes);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_mime_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mime_type);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_gcsUri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gcsUri);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_bytesBase64Encoded));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bytesBase64Encoded);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_mimeType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mimeType);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__base_transformers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__base_transformers_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_transformers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__base_transformers);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__common));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__common);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_value_by_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_value_by_path_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_value_by_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_value_by_path);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_value_by_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_value_by_path_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_value_by_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_value_by_path);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_object);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_parent_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parent_object);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8e911040f4f853d08b74f0288193740));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8e911040f4f853d08b74f0288193740);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_94b4e9357ce88bbcc7b7b521833078e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94b4e9357ce88bbcc7b7b521833078e3);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__GenerateVideosOperation_from_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GenerateVideosOperation_from_mldev);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__GenerateVideosOperation_from_vertex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GenerateVideosOperation_from_vertex);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetOperationParameters_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GetOperationParameters_to_mldev);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetOperationParameters_to_vertex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GetOperationParameters_to_vertex);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain__ImportFileOperation_from_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ImportFileOperation_from_mldev);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6aa277d6462b5a53d21bcc261a66e4c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6aa277d6462b5a53d21bcc261a66e4c);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_11754de8856b48fef39409b91b5130de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11754de8856b48fef39409b91b5130de);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_3986bc896132c6e0cda81c1f073248b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3986bc896132c6e0cda81c1f073248b1);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 15
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
static PyObject *module_var_accessor_google$genai$_operations_converters$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$Optional(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$_GenerateVideosResponse_from_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosResponse_from_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GenerateVideosResponse_from_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GenerateVideosResponse_from_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GenerateVideosResponse_from_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GenerateVideosResponse_from_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosResponse_from_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosResponse_from_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosResponse_from_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$_GenerateVideosResponse_from_vertex(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosResponse_from_vertex);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GenerateVideosResponse_from_vertex);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GenerateVideosResponse_from_vertex, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GenerateVideosResponse_from_vertex);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GenerateVideosResponse_from_vertex, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosResponse_from_vertex);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosResponse_from_vertex);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosResponse_from_vertex);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$_GeneratedVideo_from_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GeneratedVideo_from_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GeneratedVideo_from_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GeneratedVideo_from_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GeneratedVideo_from_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GeneratedVideo_from_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GeneratedVideo_from_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GeneratedVideo_from_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GeneratedVideo_from_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$_GeneratedVideo_from_vertex(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GeneratedVideo_from_vertex);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GeneratedVideo_from_vertex);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GeneratedVideo_from_vertex, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GeneratedVideo_from_vertex);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GeneratedVideo_from_vertex, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GeneratedVideo_from_vertex);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GeneratedVideo_from_vertex);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GeneratedVideo_from_vertex);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$_ImportFileResponse_from_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__ImportFileResponse_from_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ImportFileResponse_from_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ImportFileResponse_from_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ImportFileResponse_from_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ImportFileResponse_from_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__ImportFileResponse_from_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__ImportFileResponse_from_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ImportFileResponse_from_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$_UploadToFileSearchStoreResponse_from_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$_Video_from_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Video_from_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Video_from_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Video_from_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Video_from_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Video_from_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Video_from_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Video_from_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Video_from_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$_Video_from_vertex(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Video_from_vertex);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Video_from_vertex);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Video_from_vertex, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Video_from_vertex);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Video_from_vertex, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Video_from_vertex);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Video_from_vertex);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Video_from_vertex);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$base_t(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_base_t);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base_t);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base_t, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base_t);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base_t, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_base_t);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_base_t);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base_t);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$getv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_getv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_getv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_getv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getv);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_operations_converters$setv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_operations_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_operations_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_operations_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_de6b543aaedba841e279d807c480ee97;
static PyCodeObject *code_objects_fc6cabe23f8581e1f3e5453b5d6fae0d;
static PyCodeObject *code_objects_b24e79233d621ee14b62ac830d0a8b48;
static PyCodeObject *code_objects_daf0f26ad0691a46c4ab36bb68aa5b6c;
static PyCodeObject *code_objects_c85d2a045934196f88910622ee58ac9e;
static PyCodeObject *code_objects_199cdebf6ef9c2c2a7b095dcfcf0dee2;
static PyCodeObject *code_objects_d3ec68fc17b30931298279dcbe574960;
static PyCodeObject *code_objects_b43bb6ccb4ca7891f6174005a1bcb409;
static PyCodeObject *code_objects_08e121aac17c1d531a4a3fa361b4fd07;
static PyCodeObject *code_objects_1ed5acacc227de3add28efaebc6bb6ca;
static PyCodeObject *code_objects_48b23ee8ce40f9c09749cbb2451234c7;
static PyCodeObject *code_objects_fc41fc82cfd139775ee03dd33cc5c0d2;
static PyCodeObject *code_objects_3ad2ba441b2697f8200f3cf92755ddc4;
static PyCodeObject *code_objects_fd2f69068437174f04e2de8988911e5a;
static PyCodeObject *code_objects_2b0cc08e80b11b695ad43f5dfcf3174f;
static PyCodeObject *code_objects_3d10353bbf1bcfd2004423a337b7f6c2;
static PyCodeObject *code_objects_4e5c64f3d5f594c973f21d161d13e06c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_11754de8856b48fef39409b91b5130de); CHECK_OBJECT(module_filename_obj);
code_objects_de6b543aaedba841e279d807c480ee97 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_3986bc896132c6e0cda81c1f073248b1, mod_consts.const_str_digest_3986bc896132c6e0cda81c1f073248b1, NULL, NULL, 0, 0, 0);
code_objects_fc6cabe23f8581e1f3e5453b5d6fae0d = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_digest_b8e911040f4f853d08b74f0288193740, mod_consts.const_str_digest_b8e911040f4f853d08b74f0288193740, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_b24e79233d621ee14b62ac830d0a8b48 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_digest_94b4e9357ce88bbcc7b7b521833078e3, mod_consts.const_str_digest_94b4e9357ce88bbcc7b7b521833078e3, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_daf0f26ad0691a46c4ab36bb68aa5b6c = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GenerateVideosOperation_from_mldev, mod_consts.const_str_plain__GenerateVideosOperation_from_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_c85d2a045934196f88910622ee58ac9e = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GenerateVideosOperation_from_vertex, mod_consts.const_str_plain__GenerateVideosOperation_from_vertex, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_199cdebf6ef9c2c2a7b095dcfcf0dee2 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GenerateVideosResponse_from_mldev, mod_consts.const_str_plain__GenerateVideosResponse_from_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_d3ec68fc17b30931298279dcbe574960 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GenerateVideosResponse_from_vertex, mod_consts.const_str_plain__GenerateVideosResponse_from_vertex, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_b43bb6ccb4ca7891f6174005a1bcb409 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GeneratedVideo_from_mldev, mod_consts.const_str_plain__GeneratedVideo_from_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_08e121aac17c1d531a4a3fa361b4fd07 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GeneratedVideo_from_vertex, mod_consts.const_str_plain__GeneratedVideo_from_vertex, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_1ed5acacc227de3add28efaebc6bb6ca = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GetOperationParameters_to_mldev, mod_consts.const_str_plain__GetOperationParameters_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_48b23ee8ce40f9c09749cbb2451234c7 = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GetOperationParameters_to_vertex, mod_consts.const_str_plain__GetOperationParameters_to_vertex, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_fc41fc82cfd139775ee03dd33cc5c0d2 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ImportFileOperation_from_mldev, mod_consts.const_str_plain__ImportFileOperation_from_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_3ad2ba441b2697f8200f3cf92755ddc4 = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ImportFileResponse_from_mldev, mod_consts.const_str_plain__ImportFileResponse_from_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_fd2f69068437174f04e2de8988911e5a = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_digest_e6aa277d6462b5a53d21bcc261a66e4c, mod_consts.const_str_digest_e6aa277d6462b5a53d21bcc261a66e4c, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_2b0cc08e80b11b695ad43f5dfcf3174f = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044, mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_3d10353bbf1bcfd2004423a337b7f6c2 = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__Video_from_mldev, mod_consts.const_str_plain__Video_from_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_4e5c64f3d5f594c973f21d161d13e06c = MAKE_CODE_OBJECT(module_filename_obj, 385, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__Video_from_vertex, mod_consts.const_str_plain__Video_from_vertex, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__15__Video_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__16__Video_from_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_fc6cabe23f8581e1f3e5453b5d6fae0d, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev = cache_frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_operation_name);
frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev->m_frame.f_lineno = 29;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_1bbe3cc3cc1be5937a26093c0e4478b9;
frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev->m_frame.f_lineno = 30;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 30;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_3 = par_from_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_resource_name);
frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev->m_frame.f_lineno = 35;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_4b75a4e149960106a4103688757655bc;
frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev->m_frame.f_lineno = 36;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 36;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_5 = par_from_object;
tmp_args_element_value_6 = MAKE_LIST1(tstate, mod_consts.const_str_plain_config);
frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev->m_frame.f_lineno = 41;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
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
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_1a44b37414b7189204ddb7bbae5713d0;
frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev->m_frame.f_lineno = 42;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 42;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev == cache_frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev);
    cache_frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev);

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


static PyObject *impl_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex = MAKE_FUNCTION_FRAME(tstate, code_objects_b24e79233d621ee14b62ac830d0a8b48, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex = cache_frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_operation_name);
frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex->m_frame.f_lineno = 55;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_operationName);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_operation_name);
frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex->m_frame.f_lineno = 56;
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

exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex->m_frame.f_lineno = 56;
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


exception_lineno = 56;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_resource_name);
frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex->m_frame.f_lineno = 58;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
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
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST2(tstate, mod_consts.const_str_plain__url,mod_consts.const_str_plain_resourceName);
tmp_called_value_6 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 62;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, mod_consts.const_str_plain_resource_name);
frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex->m_frame.f_lineno = 62;
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

exception_lineno = 62;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex->m_frame.f_lineno = 59;
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


exception_lineno = 59;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex == cache_frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex);
    cache_frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex);

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


static PyObject *impl_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_daf0f26ad0691a46c4ab36bb68aa5b6c, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev = cache_frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, const_str_plain_name);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 73;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, const_str_plain_name);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 74;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, const_str_plain_name);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 74;
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

exception_lineno = 74;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 74;
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


exception_lineno = 74;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 76;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
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
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
tmp_called_value_6 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 77;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 77;
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

exception_lineno = 77;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 77;
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


exception_lineno = 77;
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
tmp_called_value_7 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 79;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
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
tmp_called_value_8 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_17 = var_to_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
tmp_called_value_9 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_18);

exception_lineno = 80;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_20 = par_from_object;
tmp_args_element_value_21 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 80;
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

exception_lineno = 80;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 80;
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


exception_lineno = 80;
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
tmp_called_value_10 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_22 = par_from_object;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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
PyObject *tmp_args_element_value_28;
tmp_called_value_11 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_24 = var_to_object;
tmp_args_element_value_25 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
tmp_called_value_12 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_25);

exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_27 = par_from_object;
tmp_args_element_value_28 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 83;
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

exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 83;
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


exception_lineno = 83;
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
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
tmp_called_value_13 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_29 = par_from_object;
tmp_args_element_value_30 = MAKE_LIST2(tstate, mod_consts.const_str_plain_response,mod_consts.const_str_plain_generateVideoResponse);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 85;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_34;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
tmp_called_value_14 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_31 = var_to_object;
tmp_args_element_value_32 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
tmp_called_value_15 = module_var_accessor_google$genai$_operations_converters$_GenerateVideosResponse_from_mldev(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GenerateVideosResponse_from_mldev);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_32);

exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_32);

exception_lineno = 90;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_35 = par_from_object;
tmp_args_element_value_36 = MAKE_LIST2(tstate, mod_consts.const_str_plain_response,mod_consts.const_str_plain_generateVideoResponse);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 90;
{
    PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_args_element_value_34 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_32);

exception_lineno = 90;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_37 = var_to_object;
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 89;
{
    PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_37};
    tmp_args_element_value_33 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_32);

exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 86;
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


exception_lineno = 86;
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
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
tmp_called_value_17 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_38 = par_from_object;
tmp_args_element_value_39 = MAKE_LIST2(tstate, mod_consts.const_str_plain_response,mod_consts.const_str_plain_generateVideoResponse);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 94;
{
    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39};
    tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
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
PyObject *tmp_called_value_18;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_40;
PyObject *tmp_args_element_value_41;
PyObject *tmp_args_element_value_42;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_43;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_44;
PyObject *tmp_args_element_value_45;
PyObject *tmp_args_element_value_46;
tmp_called_value_18 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_40 = var_to_object;
tmp_args_element_value_41 = MAKE_LIST1(tstate, mod_consts.const_str_plain_result);
tmp_called_value_19 = module_var_accessor_google$genai$_operations_converters$_GenerateVideosResponse_from_mldev(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GenerateVideosResponse_from_mldev);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_41);

exception_lineno = 98;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_20 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_41);

exception_lineno = 99;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_44 = par_from_object;
tmp_args_element_value_45 = MAKE_LIST2(tstate, mod_consts.const_str_plain_response,mod_consts.const_str_plain_generateVideoResponse);
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
    tmp_args_element_value_43 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_args_element_value_45);
Py_DECREF(tmp_args_element_value_45);
if (tmp_args_element_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_41);

exception_lineno = 99;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_46 = var_to_object;
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 98;
{
    PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_46};
    tmp_args_element_value_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_args_element_value_43);
Py_DECREF(tmp_args_element_value_43);
if (tmp_args_element_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_41);

exception_lineno = 98;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame.f_lineno = 95;
{
    PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_args_element_value_41);
Py_DECREF(tmp_args_element_value_41);
CHECK_OBJECT(tmp_args_element_value_42);
Py_DECREF(tmp_args_element_value_42);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_6:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev == cache_frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev);
    cache_frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev);

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


static PyObject *impl_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex = MAKE_FUNCTION_FRAME(tstate, code_objects_c85d2a045934196f88910622ee58ac9e, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex = cache_frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, const_str_plain_name);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 111;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, const_str_plain_name);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 112;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, const_str_plain_name);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 112;
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

exception_lineno = 112;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 112;
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


exception_lineno = 112;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 114;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
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
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
tmp_called_value_6 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 115;
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

exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 115;
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


exception_lineno = 115;
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
tmp_called_value_7 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
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
tmp_called_value_8 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_17 = var_to_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
tmp_called_value_9 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_18);

exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_20 = par_from_object;
tmp_args_element_value_21 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 118;
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

exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 118;
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


exception_lineno = 118;
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
tmp_called_value_10 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_22 = par_from_object;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 120;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
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
PyObject *tmp_args_element_value_28;
tmp_called_value_11 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_24 = var_to_object;
tmp_args_element_value_25 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
tmp_called_value_12 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_25);

exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_27 = par_from_object;
tmp_args_element_value_28 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 121;
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

exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 121;
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


exception_lineno = 121;
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
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
tmp_called_value_13 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_29 = par_from_object;
tmp_args_element_value_30 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
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
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_34;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
tmp_called_value_14 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_31 = var_to_object;
tmp_args_element_value_32 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
tmp_called_value_15 = module_var_accessor_google$genai$_operations_converters$_GenerateVideosResponse_from_vertex(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GenerateVideosResponse_from_vertex);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_32);

exception_lineno = 127;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_32);

exception_lineno = 128;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_35 = par_from_object;
tmp_args_element_value_36 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 128;
{
    PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_args_element_value_34 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_32);

exception_lineno = 128;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_37 = var_to_object;
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 127;
{
    PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_37};
    tmp_args_element_value_33 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_32);

exception_lineno = 127;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 124;
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


exception_lineno = 124;
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
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
tmp_called_value_17 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_38 = par_from_object;
tmp_args_element_value_39 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 132;
{
    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39};
    tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
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
PyObject *tmp_called_value_18;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_40;
PyObject *tmp_args_element_value_41;
PyObject *tmp_args_element_value_42;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_43;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_44;
PyObject *tmp_args_element_value_45;
PyObject *tmp_args_element_value_46;
tmp_called_value_18 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_40 = var_to_object;
tmp_args_element_value_41 = MAKE_LIST1(tstate, mod_consts.const_str_plain_result);
tmp_called_value_19 = module_var_accessor_google$genai$_operations_converters$_GenerateVideosResponse_from_vertex(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GenerateVideosResponse_from_vertex);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_41);

exception_lineno = 136;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_20 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_41);

exception_lineno = 137;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_44 = par_from_object;
tmp_args_element_value_45 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 137;
{
    PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
    tmp_args_element_value_43 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_args_element_value_45);
Py_DECREF(tmp_args_element_value_45);
if (tmp_args_element_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_41);

exception_lineno = 137;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_46 = var_to_object;
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 136;
{
    PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_46};
    tmp_args_element_value_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_args_element_value_43);
Py_DECREF(tmp_args_element_value_43);
if (tmp_args_element_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_41);

exception_lineno = 136;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame.f_lineno = 133;
{
    PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_args_element_value_41);
Py_DECREF(tmp_args_element_value_41);
CHECK_OBJECT(tmp_args_element_value_42);
Py_DECREF(tmp_args_element_value_42);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_6:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex == cache_frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex);
    cache_frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex);

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


static PyObject *impl_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev;
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
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_199cdebf6ef9c2c2a7b095dcfcf0dee2, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev = cache_frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_generatedSamples);
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame.f_lineno = 149;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_generated_videos);
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_generatedSamples);
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
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
exception_lineno = 153;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$_GeneratedVideo_from_mldev(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GeneratedVideo_from_mldev);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_item);
tmp_args_element_value_8 = outline_0_var_item;
if (var_to_object == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "ooo";
    goto try_except_handler_3;
}

tmp_args_element_value_9 = var_to_object;
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame.f_lineno = 154;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
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
exception_lineno = 153;
goto frame_exception_exit_1;
outline_result_1:;
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame.f_lineno = 150;
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


exception_lineno = 150;
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
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_raiMediaFilteredCount);
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame.f_lineno = 159;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
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
tmp_called_value_6 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (var_to_object == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 161;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_12 = var_to_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_rai_media_filtered_count);
tmp_called_value_7 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_13);

exception_lineno = 163;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_raiMediaFilteredCount);
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame.f_lineno = 163;
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

exception_lineno = 163;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame.f_lineno = 160;
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


exception_lineno = 160;
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
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
tmp_called_value_8 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_17 = par_from_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_raiMediaFilteredReasons);
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame.f_lineno = 166;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
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
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
tmp_called_value_9 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (var_to_object == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_19 = var_to_object;
tmp_args_element_value_20 = MAKE_LIST1(tstate, mod_consts.const_str_plain_rai_media_filtered_reasons);
tmp_called_value_10 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_20);

exception_lineno = 170;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_22 = par_from_object;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_raiMediaFilteredReasons);
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame.f_lineno = 170;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_args_element_value_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_20);

exception_lineno = 170;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame.f_lineno = 167;
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


exception_lineno = 167;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
if (var_to_object == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 173;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev == cache_frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev);
    cache_frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev);

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


static PyObject *impl_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex;
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
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex = MAKE_FUNCTION_FRAME(tstate, code_objects_d3ec68fc17b30931298279dcbe574960, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex = cache_frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_videos);
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame.f_lineno = 181;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_generated_videos);
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_videos);
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame.f_lineno = 187;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
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
exception_lineno = 185;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$_GeneratedVideo_from_vertex(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GeneratedVideo_from_vertex);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_item);
tmp_args_element_value_8 = outline_0_var_item;
if (var_to_object == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "ooo";
    goto try_except_handler_3;
}

tmp_args_element_value_9 = var_to_object;
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame.f_lineno = 186;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
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
exception_lineno = 185;
goto frame_exception_exit_1;
outline_result_1:;
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame.f_lineno = 182;
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


exception_lineno = 182;
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
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_raiMediaFilteredCount);
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame.f_lineno = 191;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
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
tmp_called_value_6 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (var_to_object == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_12 = var_to_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_rai_media_filtered_count);
tmp_called_value_7 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_13);

exception_lineno = 195;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_raiMediaFilteredCount);
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame.f_lineno = 195;
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

exception_lineno = 195;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame.f_lineno = 192;
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


exception_lineno = 192;
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
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
tmp_called_value_8 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_17 = par_from_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_raiMediaFilteredReasons);
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame.f_lineno = 198;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
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
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
tmp_called_value_9 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (var_to_object == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 200;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_19 = var_to_object;
tmp_args_element_value_20 = MAKE_LIST1(tstate, mod_consts.const_str_plain_rai_media_filtered_reasons);
tmp_called_value_10 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_20);

exception_lineno = 202;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_22 = par_from_object;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_raiMediaFilteredReasons);
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame.f_lineno = 202;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_args_element_value_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_20);

exception_lineno = 202;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame.f_lineno = 199;
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


exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
if (var_to_object == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 205;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex == cache_frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex);
    cache_frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex);

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


static PyObject *impl_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_b43bb6ccb4ca7891f6174005a1bcb409, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev = cache_frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_video);
frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev->m_frame.f_lineno = 213;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_video);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$_Video_from_mldev(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Video_from_mldev);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 217;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 217;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_7 = par_from_object;
tmp_args_element_value_8 = MAKE_LIST1(tstate, mod_consts.const_str_plain_video);
frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev->m_frame.f_lineno = 217;
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

exception_lineno = 217;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_9 = var_to_object;
frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev->m_frame.f_lineno = 217;
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

exception_lineno = 217;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev->m_frame.f_lineno = 214;
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


exception_lineno = 214;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev == cache_frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev);
    cache_frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev);

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


static PyObject *impl_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex = MAKE_FUNCTION_FRAME(tstate, code_objects_08e121aac17c1d531a4a3fa361b4fd07, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex = cache_frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain__self);
frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_video);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$_Video_from_vertex(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Video_from_vertex);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 232;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 232;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_7 = par_from_object;
tmp_args_element_value_8 = MAKE_LIST1(tstate, mod_consts.const_str_plain__self);
frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex->m_frame.f_lineno = 232;
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

exception_lineno = 232;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_9 = var_to_object;
frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex->m_frame.f_lineno = 232;
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

exception_lineno = 232;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex->m_frame.f_lineno = 229;
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


exception_lineno = 229;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex == cache_frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex);
    cache_frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex);

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


static PyObject *impl_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_1ed5acacc227de3add28efaebc6bb6ca, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev = cache_frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_operation_name);
frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev->m_frame.f_lineno = 243;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST2(tstate, mod_consts.const_str_plain__url,mod_consts.const_str_plain_operationName);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 247;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_operation_name);
frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev->m_frame.f_lineno = 247;
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

exception_lineno = 247;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev->m_frame.f_lineno = 244;
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


exception_lineno = 244;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev == cache_frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev);
    cache_frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev);

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


static PyObject *impl_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex = MAKE_FUNCTION_FRAME(tstate, code_objects_48b23ee8ce40f9c09749cbb2451234c7, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex = cache_frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_operation_name);
frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex->m_frame.f_lineno = 258;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST2(tstate, mod_consts.const_str_plain__url,mod_consts.const_str_plain_operationName);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 262;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_operation_name);
frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex->m_frame.f_lineno = 262;
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

exception_lineno = 262;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex->m_frame.f_lineno = 259;
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


exception_lineno = 259;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex == cache_frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex);
    cache_frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex);

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


static PyObject *impl_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_fc41fc82cfd139775ee03dd33cc5c0d2, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev = cache_frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
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
tmp_args_element_value_2 = MAKE_LIST1(tstate, const_str_plain_name);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 273;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
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
tmp_args_element_value_4 = MAKE_LIST1(tstate, const_str_plain_name);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
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
tmp_args_element_value_7 = MAKE_LIST1(tstate, const_str_plain_name);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 274;
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
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 274;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
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
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 276;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
tmp_called_value_6 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 277;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 277;
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

exception_lineno = 277;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 277;
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


exception_lineno = 277;
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
tmp_called_value_7 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 279;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
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
tmp_called_value_8 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_17 = var_to_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
tmp_called_value_9 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_18);

exception_lineno = 280;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_20 = par_from_object;
tmp_args_element_value_21 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 280;
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

exception_lineno = 280;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 280;
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


exception_lineno = 280;
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
tmp_called_value_10 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_22 = par_from_object;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 282;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
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
PyObject *tmp_args_element_value_28;
tmp_called_value_11 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_24 = var_to_object;
tmp_args_element_value_25 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
tmp_called_value_12 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_25);

exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_27 = par_from_object;
tmp_args_element_value_28 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 283;
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

exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 283;
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


exception_lineno = 283;
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
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
tmp_called_value_13 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_29 = par_from_object;
tmp_args_element_value_30 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 285;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
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
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_34;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
tmp_called_value_14 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_31 = var_to_object;
tmp_args_element_value_32 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
tmp_called_value_15 = module_var_accessor_google$genai$_operations_converters$_ImportFileResponse_from_mldev(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ImportFileResponse_from_mldev);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_32);

exception_lineno = 289;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_32);

exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_35 = par_from_object;
tmp_args_element_value_36 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 290;
{
    PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_args_element_value_34 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_32);

exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_37 = var_to_object;
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 289;
{
    PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_37};
    tmp_args_element_value_33 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_32);

exception_lineno = 289;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame.f_lineno = 286;
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


exception_lineno = 286;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev == cache_frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev);
    cache_frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev);

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


static PyObject *impl_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_3ad2ba441b2697f8200f3cf92755ddc4, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev = cache_frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 302;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_sdkHttpResponse);
frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_frame.f_lineno = 302;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_sdk_http_response);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 304;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_sdkHttpResponse);
frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_frame.f_lineno = 304;
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

exception_lineno = 304;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_frame.f_lineno = 303;
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


exception_lineno = 303;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, const_str_plain_parent);
frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_frame.f_lineno = 307;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
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
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, const_str_plain_parent);
tmp_called_value_6 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 308;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, const_str_plain_parent);
frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_frame.f_lineno = 308;
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

exception_lineno = 308;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_frame.f_lineno = 308;
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


exception_lineno = 308;
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
tmp_called_value_7 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_documentName);
frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_frame.f_lineno = 310;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
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
tmp_called_value_8 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_17 = var_to_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_document_name);
tmp_called_value_9 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_18);

exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_20 = par_from_object;
tmp_args_element_value_21 = MAKE_LIST1(tstate, mod_consts.const_str_plain_documentName);
frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_frame.f_lineno = 311;
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

exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_frame.f_lineno = 311;
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


exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev == cache_frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev);
    cache_frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev);

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


static PyObject *impl_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_fd2f69068437174f04e2de8988911e5a, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev = cache_frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, const_str_plain_name);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 321;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, const_str_plain_name);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, const_str_plain_name);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 322;
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

exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 322;
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


exception_lineno = 322;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 324;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
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
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
tmp_called_value_6 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, mod_consts.const_str_plain_metadata);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 325;
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

exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 325;
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


exception_lineno = 325;
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
tmp_called_value_7 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 327;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
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
tmp_called_value_8 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_17 = var_to_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
tmp_called_value_9 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_18);

exception_lineno = 328;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_20 = par_from_object;
tmp_args_element_value_21 = MAKE_LIST1(tstate, mod_consts.const_str_plain_done);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 328;
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

exception_lineno = 328;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 328;
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


exception_lineno = 328;
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
tmp_called_value_10 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 330;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_22 = par_from_object;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 330;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
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
PyObject *tmp_args_element_value_28;
tmp_called_value_11 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_24 = var_to_object;
tmp_args_element_value_25 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
tmp_called_value_12 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_25);

exception_lineno = 331;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_27 = par_from_object;
tmp_args_element_value_28 = MAKE_LIST1(tstate, mod_consts.const_str_plain_error);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 331;
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

exception_lineno = 331;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 331;
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


exception_lineno = 331;
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
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
tmp_called_value_13 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_29 = par_from_object;
tmp_args_element_value_30 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 333;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
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
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_34;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
tmp_called_value_14 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 334;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_31 = var_to_object;
tmp_args_element_value_32 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
tmp_called_value_15 = module_var_accessor_google$genai$_operations_converters$_UploadToFileSearchStoreResponse_from_mldev(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_32);

exception_lineno = 337;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_32);

exception_lineno = 338;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_35 = par_from_object;
tmp_args_element_value_36 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response);
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 338;
{
    PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_args_element_value_34 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_32);

exception_lineno = 338;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_37 = var_to_object;
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 337;
{
    PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_37};
    tmp_args_element_value_33 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_32);

exception_lineno = 337;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame.f_lineno = 334;
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


exception_lineno = 334;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev == cache_frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev);
    cache_frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev);

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


static PyObject *impl_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_2b0cc08e80b11b695ad43f5dfcf3174f, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev = cache_frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 350;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_sdkHttpResponse);
frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_frame.f_lineno = 350;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 351;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_sdk_http_response);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_sdkHttpResponse);
frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_frame.f_lineno = 352;
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

exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_frame.f_lineno = 351;
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


exception_lineno = 351;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, const_str_plain_parent);
frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_frame.f_lineno = 355;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
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
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 356;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, const_str_plain_parent);
tmp_called_value_6 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 356;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, const_str_plain_parent);
frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_frame.f_lineno = 356;
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

exception_lineno = 356;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_frame.f_lineno = 356;
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


exception_lineno = 356;
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
tmp_called_value_7 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_documentName);
frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_frame.f_lineno = 358;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
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
tmp_called_value_8 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_17 = var_to_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_document_name);
tmp_called_value_9 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_18);

exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_20 = par_from_object;
tmp_args_element_value_21 = MAKE_LIST1(tstate, mod_consts.const_str_plain_documentName);
frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_frame.f_lineno = 359;
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

exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_frame.f_lineno = 359;
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


exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev == cache_frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev);
    cache_frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev);

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


static PyObject *impl_google$genai$_operations_converters$$$function__15__Video_from_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_3d10353bbf1bcfd2004423a337b7f6c2, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev = cache_frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 369;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_uri);
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame.f_lineno = 369;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_uri);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 370;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_uri);
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame.f_lineno = 370;
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

exception_lineno = 370;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame.f_lineno = 370;
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


exception_lineno = 370;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 372;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_encodedVideo);
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame.f_lineno = 372;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
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
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_video_bytes);
tmp_expression_value_1 = module_var_accessor_google$genai$_operations_converters$base_t(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_t);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 376;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_t_bytes);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 376;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);
Py_DECREF(tmp_called_value_6);

exception_lineno = 376;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_14 = par_from_object;
tmp_args_element_value_15 = MAKE_LIST1(tstate, mod_consts.const_str_plain_encodedVideo);
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame.f_lineno = 376;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_args_element_value_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);
Py_DECREF(tmp_called_value_6);

exception_lineno = 376;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame.f_lineno = 376;
tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 376;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame.f_lineno = 373;
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


exception_lineno = 373;
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
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
tmp_called_value_8 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_16 = par_from_object;
tmp_args_element_value_17 = MAKE_LIST1(tstate, const_str_plain_encoding);
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame.f_lineno = 379;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
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
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
tmp_called_value_9 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_18 = var_to_object;
tmp_args_element_value_19 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mime_type);
tmp_called_value_10 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_19);

exception_lineno = 380;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_21 = par_from_object;
tmp_args_element_value_22 = MAKE_LIST1(tstate, const_str_plain_encoding);
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame.f_lineno = 380;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_args_element_value_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 380;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame.f_lineno = 380;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev == cache_frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev);
    cache_frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__15__Video_from_mldev);

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


static PyObject *impl_google$genai$_operations_converters$$$function__16__Video_from_vertex(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex = NULL;
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
if (isFrameUnusable(cache_frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex)) {
    Py_XDECREF(cache_frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex = MAKE_FUNCTION_FRAME(tstate, code_objects_4e5c64f3d5f594c973f21d161d13e06c, module_google$genai$_operations_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_type_description == NULL);
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex = cache_frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 390;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_gcsUri);
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame.f_lineno = 390;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
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
tmp_called_value_2 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_uri);
tmp_called_value_3 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 391;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_gcsUri);
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame.f_lineno = 391;
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

exception_lineno = 391;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame.f_lineno = 391;
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


exception_lineno = 391;
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
tmp_called_value_4 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_bytesBase64Encoded);
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame.f_lineno = 393;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
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
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_called_value_5 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_video_bytes);
tmp_expression_value_1 = module_var_accessor_google$genai$_operations_converters$base_t(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_t);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 397;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_t_bytes);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 397;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);
Py_DECREF(tmp_called_value_6);

exception_lineno = 397;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_14 = par_from_object;
tmp_args_element_value_15 = MAKE_LIST1(tstate, mod_consts.const_str_plain_bytesBase64Encoded);
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame.f_lineno = 397;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_args_element_value_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);
Py_DECREF(tmp_called_value_6);

exception_lineno = 397;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame.f_lineno = 397;
tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 397;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame.f_lineno = 394;
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


exception_lineno = 394;
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
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
tmp_called_value_8 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_16 = par_from_object;
tmp_args_element_value_17 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mimeType);
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame.f_lineno = 400;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
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
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
tmp_called_value_9 = module_var_accessor_google$genai$_operations_converters$setv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_18 = var_to_object;
tmp_args_element_value_19 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mime_type);
tmp_called_value_10 = module_var_accessor_google$genai$_operations_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_19);

exception_lineno = 401;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_21 = par_from_object;
tmp_args_element_value_22 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mimeType);
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame.f_lineno = 401;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_args_element_value_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 401;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame.f_lineno = 401;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex == cache_frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex);
    cache_frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex = NULL;
}

assertFrameObject(frame_frame_google$genai$_operations_converters$$$function__16__Video_from_vertex);

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



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex,
        mod_consts.const_str_plain__GetOperationParameters_to_vertex,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_48b23ee8ce40f9c09749cbb2451234c7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev,
        mod_consts.const_str_plain__ImportFileOperation_from_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fc41fc82cfd139775ee03dd33cc5c0d2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev,
        mod_consts.const_str_plain__ImportFileResponse_from_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3ad2ba441b2697f8200f3cf92755ddc4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev,
        mod_consts.const_str_digest_e6aa277d6462b5a53d21bcc261a66e4c,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fd2f69068437174f04e2de8988911e5a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev,
        mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2b0cc08e80b11b695ad43f5dfcf3174f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__15__Video_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__15__Video_from_mldev,
        mod_consts.const_str_plain__Video_from_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3d10353bbf1bcfd2004423a337b7f6c2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__16__Video_from_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__16__Video_from_vertex,
        mod_consts.const_str_plain__Video_from_vertex,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4e5c64f3d5f594c973f21d161d13e06c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev,
        mod_consts.const_str_digest_b8e911040f4f853d08b74f0288193740,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fc6cabe23f8581e1f3e5453b5d6fae0d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex,
        mod_consts.const_str_digest_94b4e9357ce88bbcc7b7b521833078e3,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b24e79233d621ee14b62ac830d0a8b48,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev,
        mod_consts.const_str_plain__GenerateVideosOperation_from_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_daf0f26ad0691a46c4ab36bb68aa5b6c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex,
        mod_consts.const_str_plain__GenerateVideosOperation_from_vertex,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c85d2a045934196f88910622ee58ac9e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev,
        mod_consts.const_str_plain__GenerateVideosResponse_from_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_199cdebf6ef9c2c2a7b095dcfcf0dee2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex,
        mod_consts.const_str_plain__GenerateVideosResponse_from_vertex,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d3ec68fc17b30931298279dcbe574960,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev,
        mod_consts.const_str_plain__GeneratedVideo_from_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b43bb6ccb4ca7891f6174005a1bcb409,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex,
        mod_consts.const_str_plain__GeneratedVideo_from_vertex,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_08e121aac17c1d531a4a3fa361b4fd07,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev,
        mod_consts.const_str_plain__GetOperationParameters_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1ed5acacc227de3add28efaebc6bb6ca,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_operations_converters,
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

static function_impl_code const function_table_google$genai$_operations_converters[] = {
impl_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev,
impl_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex,
impl_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev,
impl_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex,
impl_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev,
impl_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex,
impl_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev,
impl_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex,
impl_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev,
impl_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex,
impl_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev,
impl_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev,
impl_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev,
impl_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev,
impl_google$genai$_operations_converters$$$function__15__Video_from_mldev,
impl_google$genai$_operations_converters$$$function__16__Video_from_vertex,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$genai$_operations_converters);
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
        module_google$genai$_operations_converters,
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
        function_table_google$genai$_operations_converters,
        sizeof(function_table_google$genai$_operations_converters) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.genai._operations_converters";
#endif

// Internal entry point for module code.
PyObject *module_code_google$genai$_operations_converters(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$genai$_operations_converters");

    // Store the module for future use.
    module_google$genai$_operations_converters = module;

    moduledict_google$genai$_operations_converters = MODULE_DICT(module_google$genai$_operations_converters);

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
        PRINT_STRING("google$genai$_operations_converters: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$genai$_operations_converters: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$genai$_operations_converters: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._operations_converters" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$genai$_operations_converters\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$genai$_operations_converters,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$genai$_operations_converters,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$genai$_operations_converters,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_operations_converters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_operations_converters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$genai$_operations_converters);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$genai$_operations_converters);
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

        UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_operations_converters;
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
UPDATE_STRING_DICT0(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$genai$_operations_converters = MAKE_MODULE_FRAME(code_objects_de6b543aaedba841e279d807c480ee97, module_google$genai$_operations_converters);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_operations_converters);
assert(Py_REFCNT(frame_frame_google$genai$_operations_converters) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$genai$_operations_converters$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$genai$_operations_converters$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
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
        (PyObject *)moduledict_google$genai$_operations_converters,
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
UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_5);
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
        (PyObject *)moduledict_google$genai$_operations_converters,
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
UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_6);
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
        (PyObject *)moduledict_google$genai$_operations_converters,
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
UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_7);
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
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_operations_converters;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain__base_transformers_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_operations_converters->m_frame.f_lineno = 19;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$genai$_operations_converters,
        mod_consts.const_str_plain__base_transformers,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__base_transformers);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_base_t, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__common;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$genai$_operations_converters;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_get_value_by_path_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_google$genai$_operations_converters->m_frame.f_lineno = 20;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$genai$_operations_converters,
        mod_consts.const_str_plain_get_value_by_path,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_get_value_by_path);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_getv, tmp_assign_source_9);
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
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$genai$_operations_converters;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_set_value_by_path_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_google$genai$_operations_converters->m_frame.f_lineno = 21;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$genai$_operations_converters,
        mod_consts.const_str_plain_set_value_by_path,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_set_value_by_path);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_setv, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
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
tmp_expression_value_1 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = (PyObject *)&PyDict_Type;
tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

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


exception_lineno = 25;

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


exception_lineno = 25;

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
tmp_expression_value_3 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto dict_build_exception_1;
}
tmp_expression_value_4 = (PyObject *)&PyDict_Type;
tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

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


exception_lineno = 26;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

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
tmp_tuple_element_4 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

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


exception_lineno = 27;

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

tmp_assign_source_11 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__1__FetchPredictOperationParameters_to_mldev(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_digest_b8e911040f4f853d08b74f0288193740, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
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
tmp_expression_value_6 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_expression_value_7 = (PyObject *)&PyDict_Type;
tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

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


exception_lineno = 51;

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


exception_lineno = 51;

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
tmp_expression_value_8 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto dict_build_exception_2;
}
tmp_expression_value_9 = (PyObject *)&PyDict_Type;
tmp_tuple_element_7 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

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


exception_lineno = 52;

    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

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
tmp_tuple_element_8 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

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


exception_lineno = 53;

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

tmp_assign_source_12 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__2__FetchPredictOperationParameters_to_vertex(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_digest_94b4e9357ce88bbcc7b7b521833078e3, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
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
tmp_expression_value_11 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_expression_value_12 = (PyObject *)&PyDict_Type;
tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

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


exception_lineno = 69;

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


exception_lineno = 69;

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
tmp_expression_value_13 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto dict_build_exception_3;
}
tmp_expression_value_14 = (PyObject *)&PyDict_Type;
tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_14, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

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


exception_lineno = 70;

    goto dict_build_exception_3;
}
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_13);
CHECK_OBJECT(tmp_subscript_value_13);
Py_DECREF(tmp_subscript_value_13);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

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
tmp_tuple_element_12 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

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


exception_lineno = 71;

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

tmp_assign_source_13 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__3__GenerateVideosOperation_from_mldev(tstate, tmp_defaults_3, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosOperation_from_mldev, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
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
tmp_expression_value_16 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto frame_exception_exit_1;
}
tmp_expression_value_17 = (PyObject *)&PyDict_Type;
tmp_tuple_element_14 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_17, 0, tmp_tuple_element_14);
tmp_tuple_element_14 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

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


exception_lineno = 107;

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


exception_lineno = 107;

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
tmp_expression_value_18 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto dict_build_exception_4;
}
tmp_expression_value_19 = (PyObject *)&PyDict_Type;
tmp_tuple_element_15 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_15);
tmp_tuple_element_15 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

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


exception_lineno = 108;

    goto dict_build_exception_4;
}
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_18);
CHECK_OBJECT(tmp_subscript_value_18);
Py_DECREF(tmp_subscript_value_18);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

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
tmp_tuple_element_16 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;

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


exception_lineno = 109;

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

tmp_assign_source_14 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__4__GenerateVideosOperation_from_vertex(tstate, tmp_defaults_4, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosOperation_from_vertex, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_21;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_22;
PyObject *tmp_tuple_element_18;
tmp_defaults_5 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_5 = mod_consts.const_str_plain_from_object;
tmp_expression_value_21 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_expression_value_22 = (PyObject *)&PyDict_Type;
tmp_tuple_element_18 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_22, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_subscript_value_22, 1, tmp_tuple_element_18);
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_subscript_value_22);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_22);
CHECK_OBJECT(tmp_subscript_value_22);
Py_DECREF(tmp_subscript_value_22);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto frame_exception_exit_1;
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


exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_annotations_5 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_24;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_25;
PyObject *tmp_tuple_element_20;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_23 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto dict_build_exception_5;
}
tmp_expression_value_24 = (PyObject *)&PyDict_Type;
tmp_tuple_element_19 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_24, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

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


exception_lineno = 146;

    goto dict_build_exception_5;
}
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_23);
CHECK_OBJECT(tmp_subscript_value_23);
Py_DECREF(tmp_subscript_value_23);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

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
tmp_tuple_element_20 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;

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


exception_lineno = 147;

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

tmp_assign_source_15 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__5__GenerateVideosResponse_from_mldev(tstate, tmp_defaults_5, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosResponse_from_mldev, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_26;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_27;
PyObject *tmp_tuple_element_22;
tmp_defaults_6 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_6 = mod_consts.const_str_plain_from_object;
tmp_expression_value_26 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;

    goto frame_exception_exit_1;
}
tmp_expression_value_27 = (PyObject *)&PyDict_Type;
tmp_tuple_element_22 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_27, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM0(tmp_subscript_value_27, 1, tmp_tuple_element_22);
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_subscript_value_27);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_27);
CHECK_OBJECT(tmp_subscript_value_27);
Py_DECREF(tmp_subscript_value_27);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto frame_exception_exit_1;
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


exception_lineno = 177;

    goto frame_exception_exit_1;
}
tmp_annotations_6 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_29;
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_30;
PyObject *tmp_tuple_element_24;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_28 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;

    goto dict_build_exception_6;
}
tmp_expression_value_29 = (PyObject *)&PyDict_Type;
tmp_tuple_element_23 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_29 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_29, 0, tmp_tuple_element_23);
tmp_tuple_element_23 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;

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


exception_lineno = 178;

    goto dict_build_exception_6;
}
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_28);
CHECK_OBJECT(tmp_subscript_value_28);
Py_DECREF(tmp_subscript_value_28);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;

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
tmp_tuple_element_24 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;

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


exception_lineno = 179;

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

tmp_assign_source_16 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__6__GenerateVideosResponse_from_vertex(tstate, tmp_defaults_6, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GenerateVideosResponse_from_vertex, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
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
tmp_expression_value_31 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;

    goto frame_exception_exit_1;
}
tmp_expression_value_32 = (PyObject *)&PyDict_Type;
tmp_tuple_element_26 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_26);
tmp_tuple_element_26 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;

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


exception_lineno = 209;

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


exception_lineno = 209;

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
tmp_expression_value_33 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;

    goto dict_build_exception_7;
}
tmp_expression_value_34 = (PyObject *)&PyDict_Type;
tmp_tuple_element_27 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_34, 0, tmp_tuple_element_27);
tmp_tuple_element_27 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;

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


exception_lineno = 210;

    goto dict_build_exception_7;
}
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_33);
CHECK_OBJECT(tmp_subscript_value_33);
Py_DECREF(tmp_subscript_value_33);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

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
tmp_tuple_element_28 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;

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


exception_lineno = 211;

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

tmp_assign_source_17 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__7__GeneratedVideo_from_mldev(tstate, tmp_defaults_7, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GeneratedVideo_from_mldev, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
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
tmp_expression_value_36 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;

    goto frame_exception_exit_1;
}
tmp_expression_value_37 = (PyObject *)&PyDict_Type;
tmp_tuple_element_30 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_37 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_37, 0, tmp_tuple_element_30);
tmp_tuple_element_30 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;

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


exception_lineno = 224;

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


exception_lineno = 224;

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
tmp_expression_value_38 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;

    goto dict_build_exception_8;
}
tmp_expression_value_39 = (PyObject *)&PyDict_Type;
tmp_tuple_element_31 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_39 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_39, 0, tmp_tuple_element_31);
tmp_tuple_element_31 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;

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


exception_lineno = 225;

    goto dict_build_exception_8;
}
tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_38);
CHECK_OBJECT(tmp_subscript_value_38);
Py_DECREF(tmp_subscript_value_38);
if (tmp_dict_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;

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
tmp_tuple_element_32 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;

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


exception_lineno = 226;

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

tmp_assign_source_18 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__8__GeneratedVideo_from_vertex(tstate, tmp_defaults_8, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GeneratedVideo_from_vertex, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
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
tmp_expression_value_41 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

    goto frame_exception_exit_1;
}
tmp_expression_value_42 = (PyObject *)&PyDict_Type;
tmp_tuple_element_34 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_42, 0, tmp_tuple_element_34);
tmp_tuple_element_34 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

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


exception_lineno = 239;

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


exception_lineno = 239;

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
tmp_expression_value_43 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;

    goto dict_build_exception_9;
}
tmp_expression_value_44 = (PyObject *)&PyDict_Type;
tmp_tuple_element_35 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_44 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_44, 0, tmp_tuple_element_35);
tmp_tuple_element_35 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;

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


exception_lineno = 240;

    goto dict_build_exception_9;
}
tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_43);
CHECK_OBJECT(tmp_subscript_value_43);
Py_DECREF(tmp_subscript_value_43);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

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
tmp_tuple_element_36 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;

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


exception_lineno = 241;

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

tmp_assign_source_19 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__9__GetOperationParameters_to_mldev(tstate, tmp_defaults_9, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GetOperationParameters_to_mldev, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
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
tmp_expression_value_46 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;

    goto frame_exception_exit_1;
}
tmp_expression_value_47 = (PyObject *)&PyDict_Type;
tmp_tuple_element_38 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_47 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_47, 0, tmp_tuple_element_38);
tmp_tuple_element_38 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;

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


exception_lineno = 254;

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


exception_lineno = 254;

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
tmp_expression_value_48 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

    goto dict_build_exception_10;
}
tmp_expression_value_49 = (PyObject *)&PyDict_Type;
tmp_tuple_element_39 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_49 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_49, 0, tmp_tuple_element_39);
tmp_tuple_element_39 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

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


exception_lineno = 255;

    goto dict_build_exception_10;
}
tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_48);
CHECK_OBJECT(tmp_subscript_value_48);
Py_DECREF(tmp_subscript_value_48);
if (tmp_dict_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

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
tmp_tuple_element_40 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;

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


exception_lineno = 256;

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

tmp_assign_source_20 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__10__GetOperationParameters_to_vertex(tstate, tmp_defaults_10, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GetOperationParameters_to_vertex, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
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
tmp_expression_value_51 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
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
tmp_tuple_element_42 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
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
tmp_expression_value_53 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
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
tmp_tuple_element_43 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
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
tmp_tuple_element_44 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
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

tmp_assign_source_21 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__11__ImportFileOperation_from_mldev(tstate, tmp_defaults_11, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__ImportFileOperation_from_mldev, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_12;
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
PyObject *tmp_expression_value_56;
PyObject *tmp_subscript_value_56;
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_57;
PyObject *tmp_tuple_element_46;
tmp_defaults_12 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_12 = mod_consts.const_str_plain_from_object;
tmp_expression_value_56 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;

    goto frame_exception_exit_1;
}
tmp_expression_value_57 = (PyObject *)&PyDict_Type;
tmp_tuple_element_46 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_57 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_57, 0, tmp_tuple_element_46);
tmp_tuple_element_46 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
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
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_34:;
tmp_tuple_element_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_57);
CHECK_OBJECT(tmp_subscript_value_57);
Py_DECREF(tmp_subscript_value_57);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto frame_exception_exit_1;
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

    goto frame_exception_exit_1;
}
tmp_annotations_12 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_58;
PyObject *tmp_expression_value_59;
PyObject *tmp_subscript_value_59;
PyObject *tmp_tuple_element_47;
PyObject *tmp_expression_value_60;
PyObject *tmp_subscript_value_60;
PyObject *tmp_tuple_element_48;
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_58 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
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
tmp_tuple_element_47 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
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
tmp_tuple_element_48 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
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

tmp_assign_source_22 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__12__ImportFileResponse_from_mldev(tstate, tmp_defaults_12, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__ImportFileResponse_from_mldev, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_13;
PyObject *tmp_annotations_13;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_61;
PyObject *tmp_tuple_element_49;
PyObject *tmp_expression_value_62;
PyObject *tmp_subscript_value_62;
PyObject *tmp_tuple_element_50;
tmp_defaults_13 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_13 = mod_consts.const_str_plain_from_object;
tmp_expression_value_61 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;

    goto frame_exception_exit_1;
}
tmp_expression_value_62 = (PyObject *)&PyDict_Type;
tmp_tuple_element_50 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_62 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_62, 0, tmp_tuple_element_50);
tmp_tuple_element_50 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;

    goto tuple_build_exception_37;
}
PyTuple_SET_ITEM0(tmp_subscript_value_62, 1, tmp_tuple_element_50);
goto tuple_build_no_exception_37;
// Exception handling pass through code for tuple_build:
tuple_build_exception_37:;
Py_DECREF(tmp_subscript_value_62);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_37:;
tmp_tuple_element_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_62);
CHECK_OBJECT(tmp_subscript_value_62);
Py_DECREF(tmp_subscript_value_62);
if (tmp_tuple_element_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

    goto frame_exception_exit_1;
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


exception_lineno = 317;

    goto frame_exception_exit_1;
}
tmp_annotations_13 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_63;
PyObject *tmp_expression_value_64;
PyObject *tmp_subscript_value_64;
PyObject *tmp_tuple_element_51;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_65;
PyObject *tmp_tuple_element_52;
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_63 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;

    goto dict_build_exception_13;
}
tmp_expression_value_64 = (PyObject *)&PyDict_Type;
tmp_tuple_element_51 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_64 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_64, 0, tmp_tuple_element_51);
tmp_tuple_element_51 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;

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


exception_lineno = 318;

    goto dict_build_exception_13;
}
tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_63);
CHECK_OBJECT(tmp_subscript_value_63);
Py_DECREF(tmp_subscript_value_63);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;

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
tmp_tuple_element_52 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;

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


exception_lineno = 319;

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

tmp_assign_source_23 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__13__UploadToFileSearchStoreOperation_from_mldev(tstate, tmp_defaults_13, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_digest_e6aa277d6462b5a53d21bcc261a66e4c, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
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
tmp_expression_value_66 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;

    goto frame_exception_exit_1;
}
tmp_expression_value_67 = (PyObject *)&PyDict_Type;
tmp_tuple_element_54 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_67 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_67, 0, tmp_tuple_element_54);
tmp_tuple_element_54 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;

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


exception_lineno = 346;

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


exception_lineno = 346;

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
tmp_expression_value_68 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;

    goto dict_build_exception_14;
}
tmp_expression_value_69 = (PyObject *)&PyDict_Type;
tmp_tuple_element_55 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_69 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_69, 0, tmp_tuple_element_55);
tmp_tuple_element_55 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;

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


exception_lineno = 347;

    goto dict_build_exception_14;
}
tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_68);
CHECK_OBJECT(tmp_subscript_value_68);
Py_DECREF(tmp_subscript_value_68);
if (tmp_dict_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

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
tmp_tuple_element_56 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;

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


exception_lineno = 348;

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

tmp_assign_source_24 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__14__UploadToFileSearchStoreResponse_from_mldev(tstate, tmp_defaults_14, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_digest_d1dbc189c92f9471a6ff49c329cbb044, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
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
tmp_expression_value_71 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 365;

    goto frame_exception_exit_1;
}
tmp_expression_value_72 = (PyObject *)&PyDict_Type;
tmp_tuple_element_58 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_72 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_72, 0, tmp_tuple_element_58);
tmp_tuple_element_58 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 365;

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


exception_lineno = 365;

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


exception_lineno = 365;

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
tmp_expression_value_73 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 366;

    goto dict_build_exception_15;
}
tmp_expression_value_74 = (PyObject *)&PyDict_Type;
tmp_tuple_element_59 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_74 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_74, 0, tmp_tuple_element_59);
tmp_tuple_element_59 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 366;

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


exception_lineno = 366;

    goto dict_build_exception_15;
}
tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_73);
CHECK_OBJECT(tmp_subscript_value_73);
Py_DECREF(tmp_subscript_value_73);
if (tmp_dict_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;

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
tmp_tuple_element_60 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;

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


exception_lineno = 367;

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

tmp_assign_source_25 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__15__Video_from_mldev(tstate, tmp_defaults_15, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Video_from_mldev, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
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
tmp_expression_value_76 = module_var_accessor_google$genai$_operations_converters$Union(tstate);
if (unlikely(tmp_expression_value_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;

    goto frame_exception_exit_1;
}
tmp_expression_value_77 = (PyObject *)&PyDict_Type;
tmp_tuple_element_62 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_77 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_77, 0, tmp_tuple_element_62);
tmp_tuple_element_62 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;

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


exception_lineno = 386;

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


exception_lineno = 386;

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
tmp_expression_value_78 = module_var_accessor_google$genai$_operations_converters$Optional(tstate);
if (unlikely(tmp_expression_value_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;

    goto dict_build_exception_16;
}
tmp_expression_value_79 = (PyObject *)&PyDict_Type;
tmp_tuple_element_63 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_79 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_79, 0, tmp_tuple_element_63);
tmp_tuple_element_63 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;

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


exception_lineno = 387;

    goto dict_build_exception_16;
}
tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_78);
CHECK_OBJECT(tmp_subscript_value_78);
Py_DECREF(tmp_subscript_value_78);
if (tmp_dict_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

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
tmp_tuple_element_64 = module_var_accessor_google$genai$_operations_converters$Any(tstate);
if (unlikely(tmp_tuple_element_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 388;

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


exception_lineno = 388;

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

tmp_assign_source_26 = MAKE_FUNCTION_google$genai$_operations_converters$$$function__16__Video_from_vertex(tstate, tmp_defaults_16, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Video_from_vertex, tmp_assign_source_26);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_operations_converters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_operations_converters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_operations_converters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$genai$_operations_converters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$genai$_operations_converters", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._operations_converters" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$genai$_operations_converters);
    return module_google$genai$_operations_converters;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_operations_converters, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$genai$_operations_converters", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

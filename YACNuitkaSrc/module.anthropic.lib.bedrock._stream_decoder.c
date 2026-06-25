/* Generated code for Python module 'anthropic$lib$bedrock$_stream_decoder'
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



/* The "module_anthropic$lib$bedrock$_stream_decoder" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$lib$bedrock$_stream_decoder;
PyDictObject *moduledict_anthropic$lib$bedrock$_stream_decoder;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_58a7afcc40cfa27ccf660d567405c43b;
PyObject *const_tuple_str_plain_ServiceModel_tuple;
PyObject *const_str_plain_ServiceModel;
PyObject *const_str_digest_1ddfbcd00a9cc7fdc8137921ca3b0e58;
PyObject *const_tuple_str_plain_Loader_tuple;
PyObject *const_str_plain_Loader;
PyObject *const_str_plain_load_service_model;
PyObject *const_tuple_d6a52509aab8664224e2186020511637_tuple;
PyObject *const_str_plain_shape_for;
PyObject *const_tuple_str_plain_ResponseStream_tuple;
PyObject *const_str_digest_b44c66f464debd72109f7bded5e79a43;
PyObject *const_tuple_str_plain_EventStreamJSONParser_tuple;
PyObject *const_str_plain_EventStreamJSONParser;
PyObject *const_str_plain_parser;
PyObject *const_str_digest_c3c9903424013fc7009a397864bad3c5;
PyObject *const_str_digest_5121d6ae63ae4ab09abbcd0992f2f780;
PyObject *const_tuple_str_plain_EventStreamBuffer_tuple;
PyObject *const_str_plain_EventStreamBuffer;
PyObject *const_str_plain_iterator;
PyObject *const_str_plain_event_stream_buffer;
PyObject *const_str_plain_add_data;
PyObject *const_str_plain_self;
PyObject *const_str_plain__parse_message_from_event;
PyObject *const_str_plain_ServerSentEvent;
PyObject *const_str_plain_completion;
PyObject *const_tuple_str_plain_data_str_plain_event_tuple;
PyObject *const_str_plain_iter_bytes;
PyObject *const_str_digest_6564cbed36c0d30ca0dafacb9d77bb3f;
PyObject *const_str_digest_aca9d9d9ae56e407f625c5e55084a827;
PyObject *const_str_plain_aiter_bytes;
PyObject *const_str_digest_6edf08eaa6c37edac7c86fe4035efcbf;
PyObject *const_str_plain_to_response_dict;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_get_response_stream_shape;
PyObject *const_str_plain_status_code;
PyObject *const_int_pos_200;
PyObject *const_str_digest_4acb358031101ac413a4b31a74d6bd5f;
PyObject *const_tuple_str_plain_chunk_tuple;
PyObject *const_tuple_str_plain_bytes_tuple;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_AsyncIterator;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_lru_cache_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_lru_cache;
PyObject *const_str_plain__streaming;
PyObject *const_tuple_str_plain_ServerSentEvent_tuple;
PyObject *const_tuple_none_tuple;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_dict_da5d054dd412224cb178ac514a4942bb;
PyObject *const_str_digest_cb0680bb996f19d3ca99415ccaad22bb;
PyObject *const_str_plain_AWSEventStreamDecoder;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_24;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_e5d6c6d2090adaba33a6e71c6819a802;
PyObject *const_dict_2ef6b0b9635cdf1501621512ed986763;
PyObject *const_dict_9a07c45ffb238b48f25e6ac6f3557242;
PyObject *const_dict_7343c74cada27037fbf56fe3f4d05764;
PyObject *const_str_digest_ce715b62f1cacd4584d7fd4e3825f33f;
PyObject *const_tuple_str_plain_parser_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_ac4280663727ddaf07dc50d77f925ed2;
PyObject *const_str_digest_28ad9d16d0fb3cdeefdb01e9face67f6;
PyObject *const_tuple_str_plain_self_str_plain_EventStreamJSONParser_tuple;
PyObject *const_tuple_f2bbaceb5ca736689b2aee13df0b2143_tuple;
PyObject *const_tuple_dc7849998332f98d426e4ad871ab91c4_tuple;
PyObject *const_tuple_d40318bf427dc74b233fe428f6ff538d_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[74];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.lib.bedrock._stream_decoder"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_58a7afcc40cfa27ccf660d567405c43b);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ServiceModel_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_ServiceModel);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ddfbcd00a9cc7fdc8137921ca3b0e58);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Loader_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Loader);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_service_model);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_d6a52509aab8664224e2186020511637_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape_for);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseStream_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_b44c66f464debd72109f7bded5e79a43);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EventStreamJSONParser_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_EventStreamJSONParser);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_parser);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3c9903424013fc7009a397864bad3c5);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_5121d6ae63ae4ab09abbcd0992f2f780);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EventStreamBuffer_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_EventStreamBuffer);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterator);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_event_stream_buffer);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_data);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__parse_message_from_event);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_ServerSentEvent);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_completion);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_event_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_bytes);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_6564cbed36c0d30ca0dafacb9d77bb3f);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_aca9d9d9ae56e407f625c5e55084a827);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_bytes);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_6edf08eaa6c37edac7c86fe4035efcbf);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_response_dict);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_response_stream_shape);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_200);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_4acb358031101ac413a4b31a74d6bd5f);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chunk_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bytes_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lru_cache_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__streaming);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ServerSentEvent_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_da5d054dd412224cb178ac514a4942bb);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb0680bb996f19d3ca99415ccaad22bb);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWSEventStreamDecoder);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_int_pos_24);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5d6c6d2090adaba33a6e71c6819a802);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_dict_2ef6b0b9635cdf1501621512ed986763);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_9a07c45ffb238b48f25e6ac6f3557242);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_7343c74cada27037fbf56fe3f4d05764);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce715b62f1cacd4584d7fd4e3825f33f);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parser_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac4280663727ddaf07dc50d77f925ed2);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_28ad9d16d0fb3cdeefdb01e9face67f6);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_EventStreamJSONParser_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_f2bbaceb5ca736689b2aee13df0b2143_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_dc7849998332f98d426e4ad871ab91c4_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_d40318bf427dc74b233fe428f6ff538d_tuple);
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
void checkModuleConstants_anthropic$lib$bedrock$_stream_decoder(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_58a7afcc40cfa27ccf660d567405c43b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58a7afcc40cfa27ccf660d567405c43b);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ServiceModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ServiceModel_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_ServiceModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ServiceModel);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ddfbcd00a9cc7fdc8137921ca3b0e58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ddfbcd00a9cc7fdc8137921ca3b0e58);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Loader_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Loader_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Loader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Loader);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_service_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_service_model);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_d6a52509aab8664224e2186020511637_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d6a52509aab8664224e2186020511637_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape_for));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape_for);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseStream_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_b44c66f464debd72109f7bded5e79a43));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b44c66f464debd72109f7bded5e79a43);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EventStreamJSONParser_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EventStreamJSONParser_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_EventStreamJSONParser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EventStreamJSONParser);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_parser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parser);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3c9903424013fc7009a397864bad3c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3c9903424013fc7009a397864bad3c5);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_5121d6ae63ae4ab09abbcd0992f2f780));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5121d6ae63ae4ab09abbcd0992f2f780);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EventStreamBuffer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EventStreamBuffer_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_EventStreamBuffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EventStreamBuffer);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iterator);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_event_stream_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_event_stream_buffer);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_data);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__parse_message_from_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parse_message_from_event);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_ServerSentEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ServerSentEvent);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_completion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completion);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_str_plain_event_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_bytes);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_6564cbed36c0d30ca0dafacb9d77bb3f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6564cbed36c0d30ca0dafacb9d77bb3f);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_aca9d9d9ae56e407f625c5e55084a827));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aca9d9d9ae56e407f625c5e55084a827);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aiter_bytes);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_6edf08eaa6c37edac7c86fe4035efcbf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6edf08eaa6c37edac7c86fe4035efcbf);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_response_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_response_dict);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_response_stream_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_response_stream_shape);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_200));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_200);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_4acb358031101ac413a4b31a74d6bd5f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4acb358031101ac413a4b31a74d6bd5f);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chunk_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_chunk_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bytes_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterator);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lru_cache_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_lru_cache_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__streaming));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__streaming);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ServerSentEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ServerSentEvent_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_da5d054dd412224cb178ac514a4942bb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_da5d054dd412224cb178ac514a4942bb);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb0680bb996f19d3ca99415ccaad22bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb0680bb996f19d3ca99415ccaad22bb);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWSEventStreamDecoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWSEventStreamDecoder);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_int_pos_24));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_24);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5d6c6d2090adaba33a6e71c6819a802));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5d6c6d2090adaba33a6e71c6819a802);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_dict_2ef6b0b9635cdf1501621512ed986763));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2ef6b0b9635cdf1501621512ed986763);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_9a07c45ffb238b48f25e6ac6f3557242));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9a07c45ffb238b48f25e6ac6f3557242);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_7343c74cada27037fbf56fe3f4d05764));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7343c74cada27037fbf56fe3f4d05764);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce715b62f1cacd4584d7fd4e3825f33f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce715b62f1cacd4584d7fd4e3825f33f);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parser_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_parser_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac4280663727ddaf07dc50d77f925ed2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac4280663727ddaf07dc50d77f925ed2);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_28ad9d16d0fb3cdeefdb01e9face67f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28ad9d16d0fb3cdeefdb01e9face67f6);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_EventStreamJSONParser_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_EventStreamJSONParser_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_f2bbaceb5ca736689b2aee13df0b2143_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f2bbaceb5ca736689b2aee13df0b2143_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_dc7849998332f98d426e4ad871ab91c4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dc7849998332f98d426e4ad871ab91c4_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_d40318bf427dc74b233fe428f6ff538d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d40318bf427dc74b233fe428f6ff538d_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
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
static PyObject *module_var_accessor_anthropic$lib$bedrock$_stream_decoder$ServerSentEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$bedrock$_stream_decoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$bedrock$_stream_decoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerSentEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$bedrock$_stream_decoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerSentEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerSentEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerSentEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerSentEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerSentEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerSentEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerSentEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$bedrock$_stream_decoder$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$bedrock$_stream_decoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$bedrock$_stream_decoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$bedrock$_stream_decoder->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$bedrock$_stream_decoder$get_response_stream_shape(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$bedrock$_stream_decoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$bedrock$_stream_decoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_get_response_stream_shape);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$bedrock$_stream_decoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_response_stream_shape);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_response_stream_shape, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_response_stream_shape);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_response_stream_shape, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_get_response_stream_shape);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_get_response_stream_shape);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_response_stream_shape);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$bedrock$_stream_decoder$lru_cache(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$bedrock$_stream_decoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$bedrock$_stream_decoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$bedrock$_stream_decoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_47f6c91630e127de1d21df461c1ded68;
static PyCodeObject *code_objects_89dd18001487778cb7cbec8436e511e4;
static PyCodeObject *code_objects_60902693310f37e7b89e70192a495593;
static PyCodeObject *code_objects_a124a2ce0e546c827ce622130f9292f8;
static PyCodeObject *code_objects_337e35f7ef735a2153b994de75c4e732;
static PyCodeObject *code_objects_5230c07605e857ee64a5da17ddf09f50;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ac4280663727ddaf07dc50d77f925ed2); CHECK_OBJECT(module_filename_obj);
code_objects_47f6c91630e127de1d21df461c1ded68 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_28ad9d16d0fb3cdeefdb01e9face67f6, mod_consts.const_str_digest_28ad9d16d0fb3cdeefdb01e9face67f6, NULL, NULL, 0, 0, 0);
code_objects_89dd18001487778cb7cbec8436e511e4 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_e5d6c6d2090adaba33a6e71c6819a802, mod_consts.const_tuple_str_plain_self_str_plain_EventStreamJSONParser_tuple, NULL, 1, 0, 0);
code_objects_60902693310f37e7b89e70192a495593 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__parse_message_from_event, mod_consts.const_str_digest_ce715b62f1cacd4584d7fd4e3825f33f, mod_consts.const_tuple_f2bbaceb5ca736689b2aee13df0b2143_tuple, NULL, 2, 0, 0);
code_objects_a124a2ce0e546c827ce622130f9292f8 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aiter_bytes, mod_consts.const_str_digest_6edf08eaa6c37edac7c86fe4035efcbf, mod_consts.const_tuple_dc7849998332f98d426e4ad871ab91c4_tuple, NULL, 2, 0, 0);
code_objects_337e35f7ef735a2153b994de75c4e732 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_response_stream_shape, mod_consts.const_str_plain_get_response_stream_shape, mod_consts.const_tuple_d40318bf427dc74b233fe428f6ff538d_tuple, NULL, 0, 0, 0);
code_objects_5230c07605e857ee64a5da17ddf09f50 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_bytes, mod_consts.const_str_digest_6564cbed36c0d30ca0dafacb9d77bb3f, mod_consts.const_tuple_dc7849998332f98d426e4ad871ab91c4_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes$$$genobj__1_iter_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes$$$asyncgen__1_aiter_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_ServiceModel = NULL;
PyObject *var_Loader = NULL;
PyObject *var_loader = NULL;
PyObject *var_bedrock_service_dict = NULL;
PyObject *var_bedrock_service_model = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape = MAKE_FUNCTION_FRAME(tstate, code_objects_337e35f7ef735a2153b994de75c4e732, module_anthropic$lib$bedrock$_stream_decoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape->m_type_description == NULL);
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape = cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape);
assert(Py_REFCNT(frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_58a7afcc40cfa27ccf660d567405c43b;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_ServiceModel_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape->m_frame.f_lineno = 15;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_ServiceModel,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ServiceModel);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_ServiceModel == NULL);
var_ServiceModel = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_1ddfbcd00a9cc7fdc8137921ca3b0e58;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Loader_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape->m_frame.f_lineno = 16;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_Loader,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Loader);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_Loader == NULL);
var_Loader = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_Loader);
tmp_called_value_1 = var_Loader;
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape->m_frame.f_lineno = 18;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_loader == NULL);
var_loader = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_loader);
tmp_called_instance_1 = var_loader;
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape->m_frame.f_lineno = 19;
tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_load_service_model,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_d6a52509aab8664224e2186020511637_tuple, 0)
);

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_bedrock_service_dict == NULL);
var_bedrock_service_dict = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_ServiceModel);
tmp_called_value_2 = var_ServiceModel;
CHECK_OBJECT(var_bedrock_service_dict);
tmp_args_element_value_1 = var_bedrock_service_dict;
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape->m_frame.f_lineno = 20;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_bedrock_service_model == NULL);
var_bedrock_service_model = tmp_assign_source_5;
}
{
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_bedrock_service_model);
tmp_called_instance_2 = var_bedrock_service_model;
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape->m_frame.f_lineno = 21;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_shape_for,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ResponseStream_tuple, 0)
);

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape,
    type_description_1,
    var_ServiceModel,
    var_Loader,
    var_loader,
    var_bedrock_service_dict,
    var_bedrock_service_model
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape == cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape);
    cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ServiceModel);
CHECK_OBJECT(var_ServiceModel);
Py_DECREF(var_ServiceModel);
var_ServiceModel = NULL;
CHECK_OBJECT(var_Loader);
CHECK_OBJECT(var_Loader);
Py_DECREF(var_Loader);
var_Loader = NULL;
CHECK_OBJECT(var_loader);
CHECK_OBJECT(var_loader);
Py_DECREF(var_loader);
var_loader = NULL;
CHECK_OBJECT(var_bedrock_service_dict);
CHECK_OBJECT(var_bedrock_service_dict);
Py_DECREF(var_bedrock_service_dict);
var_bedrock_service_dict = NULL;
CHECK_OBJECT(var_bedrock_service_model);
CHECK_OBJECT(var_bedrock_service_model);
Py_DECREF(var_bedrock_service_model);
var_bedrock_service_model = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ServiceModel);
var_ServiceModel = NULL;
Py_XDECREF(var_Loader);
var_Loader = NULL;
Py_XDECREF(var_loader);
var_loader = NULL;
Py_XDECREF(var_bedrock_service_dict);
var_bedrock_service_dict = NULL;
Py_XDECREF(var_bedrock_service_model);
var_bedrock_service_model = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_EventStreamJSONParser = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_89dd18001487778cb7cbec8436e511e4, module_anthropic$lib$bedrock$_stream_decoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__->m_type_description == NULL);
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__ = cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__);
assert(Py_REFCNT(frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_b44c66f464debd72109f7bded5e79a43;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_EventStreamJSONParser_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__->m_frame.f_lineno = 26;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_EventStreamJSONParser,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_EventStreamJSONParser);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_EventStreamJSONParser == NULL);
var_EventStreamJSONParser = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_EventStreamJSONParser);
tmp_called_value_1 = var_EventStreamJSONParser;
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__->m_frame.f_lineno = 28;
tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_parser, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__,
    type_description_1,
    par_self,
    var_EventStreamJSONParser
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__ == cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__);
    cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_EventStreamJSONParser);
CHECK_OBJECT(var_EventStreamJSONParser);
Py_DECREF(var_EventStreamJSONParser);
var_EventStreamJSONParser = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_EventStreamJSONParser);
var_EventStreamJSONParser = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_iterator = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_iterator;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes$$$genobj__1_iter_bytes(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_iterator);
CHECK_OBJECT(par_iterator);
Py_DECREF(par_iterator);
par_iterator = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes$$$genobj__1_iter_bytes_locals {
PyObject *var_EventStreamBuffer;
PyObject *var_event_stream_buffer;
PyObject *var_chunk;
PyObject *var_event;
PyObject *var_message;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes$$$genobj__1_iter_bytes_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes$$$genobj__1_iter_bytes_locals *generator_heap = (struct anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes$$$genobj__1_iter_bytes_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_EventStreamBuffer = NULL;
generator_heap->var_event_stream_buffer = NULL;
generator_heap->var_chunk = NULL;
generator_heap->var_event = NULL;
generator_heap->var_message = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5230c07605e857ee64a5da17ddf09f50, module_anthropic$lib$bedrock$_stream_decoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_5121d6ae63ae4ab09abbcd0992f2f780;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_EventStreamBuffer_tuple;
tmp_level_value_1 = const_int_0;
generator->m_frame->m_frame.f_lineno = 32;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 32;
generator_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_EventStreamBuffer,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_EventStreamBuffer);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 32;
generator_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_EventStreamBuffer == NULL);
generator_heap->var_EventStreamBuffer = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
CHECK_OBJECT(generator_heap->var_EventStreamBuffer);
tmp_called_value_1 = generator_heap->var_EventStreamBuffer;
generator->m_frame->m_frame.f_lineno = 34;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 34;
generator_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_event_stream_buffer == NULL);
generator_heap->var_event_stream_buffer = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_iterator);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooooo";
generator_heap->exception_lineno = 35;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_5 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_chunk;
    generator_heap->var_chunk = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (generator_heap->var_event_stream_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_event_stream_buffer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_2;
}

tmp_called_instance_1 = generator_heap->var_event_stream_buffer;
CHECK_OBJECT(generator_heap->var_chunk);
tmp_args_element_value_1 = generator_heap->var_chunk;
generator->m_frame->m_frame.f_lineno = 36;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add_data, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
if (generator_heap->var_event_stream_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_event_stream_buffer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 37;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_2;
}

tmp_iter_arg_2 = generator_heap->var_event_stream_buffer;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 37;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
    generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooooo";
generator_heap->exception_lineno = 37;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_8 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var_event;
    generator_heap->var_event = tmp_assign_source_8;
    Py_INCREF(generator_heap->var_event);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_3;
}

tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_event);
tmp_args_element_value_2 = generator_heap->var_event;
generator->m_frame->m_frame.f_lineno = 38;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__parse_message_from_event, tmp_args_element_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->var_message;
    generator_heap->var_message = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_message);
tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_message);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 39;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_3;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_2 = module_var_accessor_anthropic$lib$bedrock$_stream_decoder$ServerSentEvent(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ServerSentEvent);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 40;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(generator_heap->var_message);
tmp_kw_call_value_0_1 = generator_heap->var_message;
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_completion;
generator->m_frame->m_frame.f_lineno = 40;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_data_str_plain_event_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 40;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 40;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_3;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 37;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "ccooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    generator->m_closure[1],
    generator->m_closure[0],
    generator_heap->var_EventStreamBuffer,
    generator_heap->var_event_stream_buffer,
    generator_heap->var_chunk,
    generator_heap->var_event,
    generator_heap->var_message
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_EventStreamBuffer);
generator_heap->var_EventStreamBuffer = NULL;
Py_XDECREF(generator_heap->var_event_stream_buffer);
generator_heap->var_event_stream_buffer = NULL;
Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
Py_XDECREF(generator_heap->var_event);
generator_heap->var_event = NULL;
Py_XDECREF(generator_heap->var_message);
generator_heap->var_message = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
CHECK_OBJECT(generator_heap->var_EventStreamBuffer);
CHECK_OBJECT(generator_heap->var_EventStreamBuffer);
Py_DECREF(generator_heap->var_EventStreamBuffer);
generator_heap->var_EventStreamBuffer = NULL;
Py_XDECREF(generator_heap->var_event_stream_buffer);
generator_heap->var_event_stream_buffer = NULL;
Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
Py_XDECREF(generator_heap->var_event);
generator_heap->var_event = NULL;
Py_XDECREF(generator_heap->var_message);
generator_heap->var_message = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes$$$genobj__1_iter_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes$$$genobj__1_iter_bytes_context,
        module_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_iter_bytes,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_6564cbed36c0d30ca0dafacb9d77bb3f,
#endif
        code_objects_5230c07605e857ee64a5da17ddf09f50,
        closure,
        2,
#if 1
        sizeof(struct anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes$$$genobj__1_iter_bytes_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_iterator = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_iterator;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_ASYNCGEN_anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes$$$asyncgen__1_aiter_bytes(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_iterator);
CHECK_OBJECT(par_iterator);
Py_DECREF(par_iterator);
par_iterator = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes$$$asyncgen__1_aiter_bytes_locals {
PyObject *var_EventStreamBuffer;
PyObject *var_event_stream_buffer;
PyObject *var_chunk;
PyObject *var_event;
PyObject *var_message;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes$$$asyncgen__1_aiter_bytes_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes$$$asyncgen__1_aiter_bytes_locals *asyncgen_heap = (struct anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes$$$asyncgen__1_aiter_bytes_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_EventStreamBuffer = NULL;
asyncgen_heap->var_event_stream_buffer = NULL;
asyncgen_heap->var_chunk = NULL;
asyncgen_heap->var_event = NULL;
asyncgen_heap->var_message = NULL;
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a124a2ce0e546c827ce622130f9292f8, module_anthropic$lib$bedrock$_stream_decoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
asyncgen->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

assert(asyncgen->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_5121d6ae63ae4ab09abbcd0992f2f780;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_EventStreamBuffer_tuple;
tmp_level_value_1 = const_int_0;
asyncgen->m_frame->m_frame.f_lineno = 44;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 44;
asyncgen_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_EventStreamBuffer,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_EventStreamBuffer);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 44;
asyncgen_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_EventStreamBuffer == NULL);
asyncgen_heap->var_EventStreamBuffer = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
CHECK_OBJECT(asyncgen_heap->var_EventStreamBuffer);
tmp_called_value_1 = asyncgen_heap->var_EventStreamBuffer;
asyncgen->m_frame->m_frame.f_lineno = 46;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 46;
asyncgen_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_event_stream_buffer == NULL);
asyncgen_heap->var_event_stream_buffer = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_value_value_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_iterator);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 47;
asyncgen_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}

tmp_value_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_1 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 47;
asyncgen_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_1;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 47;
asyncgen_heap->type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = yield_return_value;
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_value_value_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_2 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 47;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_2;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 47;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_3;
}
tmp_assign_source_4 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
    asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_1 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = asyncgen_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_1 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_5 = asyncgen_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = asyncgen_heap->var_chunk;
    asyncgen_heap->var_chunk = tmp_assign_source_5;
    Py_INCREF(asyncgen_heap->var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (asyncgen_heap->var_event_stream_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_event_stream_buffer);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 48;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_2;
}

tmp_called_instance_1 = asyncgen_heap->var_event_stream_buffer;
CHECK_OBJECT(asyncgen_heap->var_chunk);
tmp_args_element_value_1 = asyncgen_heap->var_chunk;
asyncgen->m_frame->m_frame.f_lineno = 48;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add_data, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 48;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
if (asyncgen_heap->var_event_stream_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_event_stream_buffer);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 49;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_2;
}

tmp_iter_arg_1 = asyncgen_heap->var_event_stream_buffer;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 49;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = asyncgen_heap->tmp_for_loop_2__for_iterator;
    asyncgen_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_1 = asyncgen_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "ccooooo";
asyncgen_heap->exception_lineno = 49;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = asyncgen_heap->tmp_for_loop_2__iter_value;
    asyncgen_heap->tmp_for_loop_2__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_8 = asyncgen_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = asyncgen_heap->var_event;
    asyncgen_heap->var_event = tmp_assign_source_8;
    Py_INCREF(asyncgen_heap->var_event);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 50;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_4;
}

tmp_called_instance_2 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
CHECK_OBJECT(asyncgen_heap->var_event);
tmp_args_element_value_2 = asyncgen_heap->var_event;
asyncgen->m_frame->m_frame.f_lineno = 50;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__parse_message_from_event, tmp_args_element_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 50;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->var_message;
    asyncgen_heap->var_message = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(asyncgen_heap->var_message);
tmp_truth_name_1 = CHECK_IF_TRUE(asyncgen_heap->var_message);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 51;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_2 = module_var_accessor_anthropic$lib$bedrock$_stream_decoder$ServerSentEvent(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_ServerSentEvent);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 52;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(asyncgen_heap->var_message);
tmp_kw_call_value_0_1 = asyncgen_heap->var_message;
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_completion;
asyncgen->m_frame->m_frame.f_lineno = 52;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_expression_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_data_str_plain_event_tuple);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 52;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 3;
return tmp_expression_value_3;
yield_return_3:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 52;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_4;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 49;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_2__iter_value);
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_2__for_iterator);
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
Py_XDECREF(asyncgen_heap->tmp_for_loop_2__iter_value);
asyncgen_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_2__for_iterator);
asyncgen_heap->tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 47;
asyncgen_heap->type_description_1 = "ccooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_3;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &asyncgen_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    } else if ((asyncgen_heap->exception_lineno != 0) && (exception_tb->tb_frame != &asyncgen->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    asyncgen->m_frame,
    asyncgen_heap->type_description_1,
    asyncgen->m_closure[1],
    asyncgen->m_closure[0],
    asyncgen_heap->var_EventStreamBuffer,
    asyncgen_heap->var_event_stream_buffer,
    asyncgen_heap->var_chunk,
    asyncgen_heap->var_event,
    asyncgen_heap->var_message
);


    // Release cached frame if used for exception.
    if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(asyncgen->m_frame);
}

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(asyncgen_heap->var_EventStreamBuffer);
CHECK_OBJECT(asyncgen_heap->var_EventStreamBuffer);
Py_DECREF(asyncgen_heap->var_EventStreamBuffer);
asyncgen_heap->var_EventStreamBuffer = NULL;
Py_XDECREF(asyncgen_heap->var_event_stream_buffer);
asyncgen_heap->var_event_stream_buffer = NULL;
Py_XDECREF(asyncgen_heap->var_chunk);
asyncgen_heap->var_chunk = NULL;
Py_XDECREF(asyncgen_heap->var_event);
asyncgen_heap->var_event = NULL;
Py_XDECREF(asyncgen_heap->var_message);
asyncgen_heap->var_message = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_EventStreamBuffer);
asyncgen_heap->var_EventStreamBuffer = NULL;
Py_XDECREF(asyncgen_heap->var_event_stream_buffer);
asyncgen_heap->var_event_stream_buffer = NULL;
Py_XDECREF(asyncgen_heap->var_chunk);
asyncgen_heap->var_chunk = NULL;
Py_XDECREF(asyncgen_heap->var_event);
asyncgen_heap->var_event = NULL;
Py_XDECREF(asyncgen_heap->var_message);
asyncgen_heap->var_message = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_4;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes$$$asyncgen__1_aiter_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes$$$asyncgen__1_aiter_bytes_context,
        module_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_aiter_bytes,
        mod_consts.const_str_digest_6edf08eaa6c37edac7c86fe4035efcbf,
        code_objects_a124a2ce0e546c827ce622130f9292f8,
        closure,
        2,
#if 1
        sizeof(struct anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes$$$asyncgen__1_aiter_bytes_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
PyObject *var_response_dict = NULL;
PyObject *var_parsed_response = NULL;
PyObject *var_chunk = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event = MAKE_FUNCTION_FRAME(tstate, code_objects_60902693310f37e7b89e70192a495593, module_anthropic$lib$bedrock$_stream_decoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event->m_type_description == NULL);
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event = cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event);
assert(Py_REFCNT(frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_event);
tmp_called_instance_1 = par_event;
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event->m_frame.f_lineno = 55;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_response_dict);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_response_dict == NULL);
var_response_dict = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_parser);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parse);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_dict);
tmp_args_element_value_1 = var_response_dict;
tmp_called_value_2 = module_var_accessor_anthropic$lib$bedrock$_stream_decoder$get_response_stream_shape(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_response_stream_shape);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event->m_frame.f_lineno = 56;
tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event->m_frame.f_lineno = 56;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_parsed_response == NULL);
var_parsed_response = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_response_dict);
tmp_expression_value_3 = var_response_dict;
tmp_subscript_value_1 = mod_consts.const_str_plain_status_code;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_200;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_4acb358031101ac413a4b31a74d6bd5f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_response_dict);
tmp_format_value_1 = var_response_dict;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event->m_frame.f_lineno = 58;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 58;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_parsed_response);
tmp_expression_value_4 = var_parsed_response;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event->m_frame.f_lineno = 60;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_chunk_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_chunk == NULL);
var_chunk = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_chunk);
tmp_operand_value_1 = var_chunk;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_chunk);
tmp_expression_value_6 = var_chunk;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event->m_frame.f_lineno = 64;
tmp_expression_value_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_bytes_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event->m_frame.f_lineno = 64;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event,
    type_description_1,
    par_self,
    par_event,
    var_response_dict,
    var_parsed_response,
    var_chunk
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event == cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event);
    cache_frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_response_dict);
CHECK_OBJECT(var_response_dict);
Py_DECREF(var_response_dict);
var_response_dict = NULL;
CHECK_OBJECT(var_parsed_response);
CHECK_OBJECT(var_parsed_response);
Py_DECREF(var_parsed_response);
var_parsed_response = NULL;
CHECK_OBJECT(var_chunk);
CHECK_OBJECT(var_chunk);
Py_DECREF(var_chunk);
var_chunk = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_response_dict);
var_response_dict = NULL;
Py_XDECREF(var_parsed_response);
var_parsed_response = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape,
        mod_consts.const_str_plain_get_response_stream_shape,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_337e35f7ef735a2153b994de75c4e732,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$bedrock$_stream_decoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e5d6c6d2090adaba33a6e71c6819a802,
#endif
        code_objects_89dd18001487778cb7cbec8436e511e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$bedrock$_stream_decoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes,
        mod_consts.const_str_plain_iter_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6564cbed36c0d30ca0dafacb9d77bb3f,
#endif
        code_objects_5230c07605e857ee64a5da17ddf09f50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_digest_c3c9903424013fc7009a397864bad3c5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes,
        mod_consts.const_str_plain_aiter_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6edf08eaa6c37edac7c86fe4035efcbf,
#endif
        code_objects_a124a2ce0e546c827ce622130f9292f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_digest_aca9d9d9ae56e407f625c5e55084a827,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event,
        mod_consts.const_str_plain__parse_message_from_event,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ce715b62f1cacd4584d7fd4e3825f33f,
#endif
        code_objects_60902693310f37e7b89e70192a495593,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$bedrock$_stream_decoder,
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

static function_impl_code const function_table_anthropic$lib$bedrock$_stream_decoder[] = {
impl_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape,
impl_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__,
impl_anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes,
impl_anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes,
impl_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$lib$bedrock$_stream_decoder);
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
        module_anthropic$lib$bedrock$_stream_decoder,
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
        function_table_anthropic$lib$bedrock$_stream_decoder,
        sizeof(function_table_anthropic$lib$bedrock$_stream_decoder) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.lib.bedrock._stream_decoder";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$lib$bedrock$_stream_decoder(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$lib$bedrock$_stream_decoder");

    // Store the module for future use.
    module_anthropic$lib$bedrock$_stream_decoder = module;

    moduledict_anthropic$lib$bedrock$_stream_decoder = MODULE_DICT(module_anthropic$lib$bedrock$_stream_decoder);

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
        PRINT_STRING("anthropic$lib$bedrock$_stream_decoder: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$lib$bedrock$_stream_decoder: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$lib$bedrock$_stream_decoder: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.bedrock._stream_decoder" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$lib$bedrock$_stream_decoder\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$lib$bedrock$_stream_decoder,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$bedrock$_stream_decoder,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$bedrock$_stream_decoder,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$bedrock$_stream_decoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$bedrock$_stream_decoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$lib$bedrock$_stream_decoder);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$lib$bedrock$_stream_decoder);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$bedrock$_stream_decoder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$lib$bedrock$_stream_decoder = MAKE_MODULE_FRAME(code_objects_47f6c91630e127de1d21df461c1ded68, module_anthropic$lib$bedrock$_stream_decoder);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$bedrock$_stream_decoder);
assert(Py_REFCNT(frame_frame_anthropic$lib$bedrock$_stream_decoder) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$lib$bedrock$_stream_decoder$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$lib$bedrock$_stream_decoder$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_5);
tmp_import_from_1__module = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_False;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_6);
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
        (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_7);
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
        (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_AsyncIterator,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator, tmp_assign_source_8);
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
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_lru_cache_tuple;
tmp_level_value_1 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$bedrock$_stream_decoder->m_frame.f_lineno = 5;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_lru_cache);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__streaming;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ServerSentEvent_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$bedrock$_stream_decoder->m_frame.f_lineno = 6;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$lib$bedrock$_stream_decoder,
        mod_consts.const_str_plain_ServerSentEvent,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ServerSentEvent);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerSentEvent, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = module_var_accessor_anthropic$lib$bedrock$_stream_decoder$lru_cache(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$bedrock$_stream_decoder->m_frame.f_lineno = 13;
tmp_called_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_none_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_da5d054dd412224cb178ac514a4942bb);

tmp_args_element_value_1 = MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__1_get_response_stream_shape(tstate, tmp_annotations_1);

frame_frame_anthropic$lib$bedrock$_stream_decoder->m_frame.f_lineno = 13;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_get_response_stream_shape, tmp_assign_source_11);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_cb0680bb996f19d3ca99415ccaad22bb;
tmp_result = DICT_SET_ITEM(locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AWSEventStreamDecoder;
tmp_result = DICT_SET_ITEM(locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_24;
tmp_result = DICT_SET_ITEM(locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__2___init__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_2ef6b0b9635cdf1501621512ed986763);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__3_iter_bytes(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24, mod_consts.const_str_plain_iter_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_9a07c45ffb238b48f25e6ac6f3557242);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__4_aiter_bytes(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24, mod_consts.const_str_plain_aiter_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_7343c74cada27037fbf56fe3f4d05764);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$bedrock$_stream_decoder$$$function__5__parse_message_from_event(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24, mod_consts.const_str_plain__parse_message_from_event, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_parser_tuple;
tmp_result = DICT_SET_ITEM(locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_3 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_AWSEventStreamDecoder;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$lib$bedrock$_stream_decoder->m_frame.f_lineno = 24;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_15;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_14 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_14);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24);
locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24);
locals_anthropic$lib$bedrock$_stream_decoder$$$class__1_AWSEventStreamDecoder_24 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 24;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)mod_consts.const_str_plain_AWSEventStreamDecoder, tmp_assign_source_14);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$bedrock$_stream_decoder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$bedrock$_stream_decoder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$bedrock$_stream_decoder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$lib$bedrock$_stream_decoder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$lib$bedrock$_stream_decoder", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.bedrock._stream_decoder" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$lib$bedrock$_stream_decoder);
    return module_anthropic$lib$bedrock$_stream_decoder;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_stream_decoder, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$lib$bedrock$_stream_decoder", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

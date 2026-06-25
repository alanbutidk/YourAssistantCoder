/* Generated code for Python module 'openai$resources$evals$evals'
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



/* The "module_openai$resources$evals$evals" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$resources$evals$evals;
PyDictObject *moduledict_openai$resources$evals$evals;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Runs;
PyObject *const_str_plain__client;
PyObject *const_str_plain_EvalsWithRawResponse;
PyObject *const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b;
PyObject *const_str_plain_EvalsWithStreamingResponse;
PyObject *const_str_digest_83b043a94791b7a89fe1b103b91c36a3;
PyObject *const_str_plain__post;
PyObject *const_str_plain_maybe_transform;
PyObject *const_str_plain_data_source_config;
PyObject *const_str_plain_testing_criteria;
PyObject *const_str_plain_metadata;
PyObject *const_str_plain_eval_create_params;
PyObject *const_str_plain_EvalCreateParams;
PyObject *const_str_plain_make_request_options;
PyObject *const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple;
PyObject *const_str_plain_EvalCreateResponse;
PyObject *const_tuple_str_digest_938a6f6c85c78e320d476f8d0f139537_tuple;
PyObject *const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple;
PyObject *const_str_digest_7120c78a3471eb637d708064c4cb4631;
PyObject *const_str_digest_68bf73ccc80c1d4638349decd0b5ed2e;
PyObject *const_str_plain__get;
PyObject *const_str_digest_66905a7339355b571a7958406c96c3c1;
PyObject *const_str_plain_EvalRetrieveResponse;
PyObject *const_tuple_str_plain_options_str_plain_cast_to_tuple;
PyObject *const_str_digest_833c5448c1d45d7c8ed0bd59ff92f30c;
PyObject *const_str_plain_eval_update_params;
PyObject *const_str_plain_EvalUpdateParams;
PyObject *const_str_plain_EvalUpdateResponse;
PyObject *const_str_digest_d1dfd1a64fe6cc60846272f03b5299eb;
PyObject *const_str_plain__get_api_list;
PyObject *const_str_plain_SyncCursorPage;
PyObject *const_str_plain_EvalListResponse;
PyObject *const_str_plain_after;
PyObject *const_str_plain_limit;
PyObject *const_str_plain_order;
PyObject *const_str_plain_order_by;
PyObject *const_str_plain_eval_list_params;
PyObject *const_str_plain_EvalListParams;
PyObject *const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple;
PyObject *const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple;
PyObject *const_str_digest_324084b38365a641ab60038fffb5af18;
PyObject *const_str_plain__delete;
PyObject *const_str_plain_EvalDeleteResponse;
PyObject *const_str_digest_a8da9fd4f438b9285ffd085ee1dda350;
PyObject *const_str_plain_AsyncRuns;
PyObject *const_str_plain_AsyncEvalsWithRawResponse;
PyObject *const_str_plain_AsyncEvalsWithStreamingResponse;
PyObject *const_str_plain_self;
PyObject *const_str_plain_async_maybe_transform;
PyObject *const_str_plain_extra_headers;
PyObject *const_str_plain_extra_query;
PyObject *const_str_plain_extra_body;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_create;
PyObject *const_str_digest_629f9ba5c6ae184b0fc4983bd3cf9819;
PyObject *const_str_plain_eval_id;
PyObject *const_str_plain_retrieve;
PyObject *const_str_digest_dbbb6b1a6ce4f3fc3e70aaa37cacebd4;
PyObject *const_str_plain_update;
PyObject *const_str_digest_d7048fcc381a02ea83e60481cd7ca1b4;
PyObject *const_str_plain_AsyncCursorPage;
PyObject *const_str_plain_delete;
PyObject *const_str_digest_fc6e1f02d46c4447d6807c38e95ecd3e;
PyObject *const_str_plain__evals;
PyObject *const_str_plain__legacy_response;
PyObject *const_str_plain_to_raw_response_wrapper;
PyObject *const_str_plain_list;
PyObject *const_str_plain_RunsWithRawResponse;
PyObject *const_str_plain_runs;
PyObject *const_str_plain_async_to_raw_response_wrapper;
PyObject *const_str_plain_AsyncRunsWithRawResponse;
PyObject *const_str_plain_to_streamed_response_wrapper;
PyObject *const_str_plain_RunsWithStreamingResponse;
PyObject *const_str_plain_async_to_streamed_response_wrapper;
PyObject *const_str_plain_AsyncRunsWithStreamingResponse;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Literal_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_httpx;
PyObject *const_tuple_str_plain__legacy_response_tuple;
PyObject *const_int_pos_3;
PyObject *const_tuple_80264cdcc63ce5403babfe5a37e92330_tuple;
PyObject *const_str_plain__types;
PyObject *const_tuple_588f21ecebfad4c9dbc0f7aa769b8795_tuple;
PyObject *const_str_plain_NOT_GIVEN;
PyObject *const_str_plain_Body;
PyObject *const_str_plain_Query;
PyObject *const_str_plain_Headers;
PyObject *const_str_plain_NotGiven;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_maybe_transform_str_plain_async_maybe_transform_tuple;
PyObject *const_str_plain__compat;
PyObject *const_tuple_str_plain_cached_property_tuple;
PyObject *const_str_plain_cached_property;
PyObject *const_str_digest_376933c40963c3ea758c5293e882d65d;
PyObject *const_tuple_088a3546989703aa8b5fc781b886cd18_tuple;
PyObject *const_str_plain__resource;
PyObject *const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple;
PyObject *const_str_plain_SyncAPIResource;
PyObject *const_str_plain_AsyncAPIResource;
PyObject *const_str_plain__response;
PyObject *const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple;
PyObject *const_str_plain_pagination;
PyObject *const_tuple_str_plain_SyncCursorPage_str_plain_AsyncCursorPage_tuple;
PyObject *const_str_plain__base_client;
PyObject *const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple;
PyObject *const_str_plain_AsyncPaginator;
PyObject *const_str_digest_ab55976185b5f82efa04db85b4b52190;
PyObject *const_tuple_str_plain_EvalListResponse_tuple;
PyObject *const_str_digest_d73b412af85fe6f8a0c7076a59ee661d;
PyObject *const_tuple_str_plain_EvalCreateResponse_tuple;
PyObject *const_str_digest_5e60ebc1b952446ee36fccd895ce9353;
PyObject *const_tuple_str_plain_EvalDeleteResponse_tuple;
PyObject *const_str_digest_443f7b32757908aaf0a40ebd70a578c9;
PyObject *const_tuple_str_plain_EvalUpdateResponse_tuple;
PyObject *const_str_digest_96767a1987c00775c7abf3e5fe0cb8ab;
PyObject *const_tuple_str_plain_EvalRetrieveResponse_tuple;
PyObject *const_str_digest_8f4cfd1ed3283a1c9947c5431ec224c2;
PyObject *const_tuple_str_plain_Metadata_tuple;
PyObject *const_str_plain_Metadata;
PyObject *const_str_plain_Evals;
PyObject *const_str_plain_AsyncEvals;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_947223c5c1cd95b7f2bc29bd912b809d;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_37;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_dea8d280dcefbd36feaa62a481c2f5df;
PyObject *const_str_digest_a4ddeafa7364688ce8b3b596d46b7840;
PyObject *const_dict_9eae6a8ad038e39c5b26181073b33eb5;
PyObject *const_str_plain_with_raw_response;
PyObject *const_str_digest_b7aa4aa8b18b01fe91b2d42b5a0c8815;
PyObject *const_dict_055d4ccb4e9e0eafa267c3adde6a4b2a;
PyObject *const_str_plain_with_streaming_response;
PyObject *const_str_digest_8c221ea90afa1ed5aadcc62f74534829;
PyObject *const_dict_70c0214d0eb17b9ea95f7b3d2af80860;
PyObject *const_str_digest_9ba35289f1330bb79b314052fa284f15;
PyObject *const_dict_abd96e405580a6c0d5bb72500908124b;
PyObject *const_str_digest_6edca2f65de415d07028b3225580b90c;
PyObject *const_dict_c70c26b7882adbe68f1b1e73bb68808f;
PyObject *const_str_digest_9d50d01a485d69940f7403c04f1fa7a3;
PyObject *const_dict_f8671feec9d39cd4d03d516e1b44f594;
PyObject *const_str_digest_8788955ef13ee73367d31615580fae44;
PyObject *const_dict_b4f7bb1169a37fd74b11bc58a07f72ff;
PyObject *const_str_digest_4ac0ae152aa10325db20936b63e0c387;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_301;
PyObject *const_dict_92a1867ef9bb37f8d9d3b8fe72e59133;
PyObject *const_str_digest_dac150a11e7279d4200eb5e9ebaaa7d0;
PyObject *const_dict_1279acb8939ddf2e14557aff603366a6;
PyObject *const_str_digest_3582a0f29ea8f4f269e7f5903f4082cc;
PyObject *const_dict_b95fbe806dc63a7c0db0991f75c4841b;
PyObject *const_str_digest_d162bac5d75be7a986bb60f0acf30d5d;
PyObject *const_dict_1136dc2979a681fc0c8a98ef33aa4892;
PyObject *const_str_digest_04d437e6b41b4883cb64c1a7f5b0238d;
PyObject *const_int_pos_565;
PyObject *const_dict_4a46d155eb1584855bef40fb4b07821d;
PyObject *const_str_digest_1d291af916a63d5c912c531aa9d91255;
PyObject *const_dict_012afb9b3add46f9d1a77345c379e2ce;
PyObject *const_str_digest_9be406495834b2950a2ca516b1ebd13e;
PyObject *const_tuple_03b6f48e679f19f9c85a429f7beaf129_tuple;
PyObject *const_int_pos_590;
PyObject *const_dict_1b62036e06e17cdbec7298e39f0f69cb;
PyObject *const_str_digest_f30ce6670d09b81ed331d98084b2f0c7;
PyObject *const_dict_9e5217d07f9ea584d86c0d118b2c53f0;
PyObject *const_str_digest_844c53be2408b67f523f0898482ccb9e;
PyObject *const_int_pos_615;
PyObject *const_str_digest_3a0334f77b909b7fb9062c2aafb2afb6;
PyObject *const_dict_d2a800fcd99225c7a6a93cdfaf7eb2f9;
PyObject *const_str_digest_02e3fa135464fdbcd7c393aa1fab976a;
PyObject *const_int_pos_640;
PyObject *const_str_digest_f8cb45c3fbed8dc8c392c804c6d1c638;
PyObject *const_dict_e5526c4ebfac4252f244893d7ee8b68f;
PyObject *const_str_digest_20e4d1ab0bc99b923fb3ad88504ea020;
PyObject *const_str_digest_7f352005411b90a0c20cb3b32c994aae;
PyObject *const_str_digest_c829cf57ccba4e746e8b63f309599d70;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_evals_tuple;
PyObject *const_tuple_b1db223aa5d77c8354e4fa852d235304_tuple;
PyObject *const_tuple_90be3f3f8cd009cec52842b5587bc1b6_tuple;
PyObject *const_tuple_3f7de3e6a8409d7e24c3ab0360426faf_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_5a51181619568eb5d312532d5ff1e479_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[192];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.resources.evals.evals"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Runs);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalsWithRawResponse);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalsWithStreamingResponse);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__post);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_data_source_config);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_testing_criteria);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_create_params);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalCreateParams);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_request_options);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalCreateResponse);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_938a6f6c85c78e320d476f8d0f139537_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_7120c78a3471eb637d708064c4cb4631);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_68bf73ccc80c1d4638349decd0b5ed2e);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__get);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_66905a7339355b571a7958406c96c3c1);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalRetrieveResponse);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_833c5448c1d45d7c8ed0bd59ff92f30c);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_update_params);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalUpdateParams);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalUpdateResponse);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1dfd1a64fe6cc60846272f03b5299eb);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_api_list);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncCursorPage);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalListResponse);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_after);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_limit);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_order);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_order_by);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_list_params);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalListParams);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_324084b38365a641ab60038fffb5af18);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__delete);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_EvalDeleteResponse);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8da9fd4f438b9285ffd085ee1dda350);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncRuns);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_maybe_transform);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_body);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_create);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_629f9ba5c6ae184b0fc4983bd3cf9819);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval_id);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbbb6b1a6ce4f3fc3e70aaa37cacebd4);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7048fcc381a02ea83e60481cd7ca1b4);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncCursorPage);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc6e1f02d46c4447d6807c38e95ecd3e);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__evals);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_list);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunsWithRawResponse);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_runs);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncRunsWithRawResponse);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_streamed_response_wrapper);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunsWithStreamingResponse);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncRunsWithStreamingResponse);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__legacy_response_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_80264cdcc63ce5403babfe5a37e92330_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_588f21ecebfad4c9dbc0f7aa769b8795_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Body);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_Query);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_Headers);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maybe_transform_str_plain_async_maybe_transform_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_376933c40963c3ea758c5293e882d65d);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_088a3546989703aa8b5fc781b886cd18_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__resource);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIResource);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResource);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__response);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_pagination);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncCursorPage_str_plain_AsyncCursorPage_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_client);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncPaginator);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab55976185b5f82efa04db85b4b52190);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalListResponse_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_d73b412af85fe6f8a0c7076a59ee661d);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalCreateResponse_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e60ebc1b952446ee36fccd895ce9353);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalDeleteResponse_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_443f7b32757908aaf0a40ebd70a578c9);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalUpdateResponse_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_96767a1987c00775c7abf3e5fe0cb8ab);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalRetrieveResponse_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f4cfd1ed3283a1c9947c5431ec224c2);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Metadata_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_Evals);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvals);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_947223c5c1cd95b7f2bc29bd912b809d);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_37);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_dict_dea8d280dcefbd36feaa62a481c2f5df);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4ddeafa7364688ce8b3b596d46b7840);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_9eae6a8ad038e39c5b26181073b33eb5);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7aa4aa8b18b01fe91b2d42b5a0c8815);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_dict_055d4ccb4e9e0eafa267c3adde6a4b2a);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c221ea90afa1ed5aadcc62f74534829);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_70c0214d0eb17b9ea95f7b3d2af80860);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ba35289f1330bb79b314052fa284f15);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_abd96e405580a6c0d5bb72500908124b);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_6edca2f65de415d07028b3225580b90c);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_c70c26b7882adbe68f1b1e73bb68808f);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d50d01a485d69940f7403c04f1fa7a3);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_f8671feec9d39cd4d03d516e1b44f594);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_8788955ef13ee73367d31615580fae44);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_b4f7bb1169a37fd74b11bc58a07f72ff);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ac0ae152aa10325db20936b63e0c387);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_int_pos_301);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_92a1867ef9bb37f8d9d3b8fe72e59133);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_dac150a11e7279d4200eb5e9ebaaa7d0);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_1279acb8939ddf2e14557aff603366a6);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_3582a0f29ea8f4f269e7f5903f4082cc);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_b95fbe806dc63a7c0db0991f75c4841b);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_d162bac5d75be7a986bb60f0acf30d5d);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_1136dc2979a681fc0c8a98ef33aa4892);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_04d437e6b41b4883cb64c1a7f5b0238d);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_int_pos_565);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_dict_4a46d155eb1584855bef40fb4b07821d);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d291af916a63d5c912c531aa9d91255);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_012afb9b3add46f9d1a77345c379e2ce);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_9be406495834b2950a2ca516b1ebd13e);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_03b6f48e679f19f9c85a429f7beaf129_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_int_pos_590);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_1b62036e06e17cdbec7298e39f0f69cb);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_f30ce6670d09b81ed331d98084b2f0c7);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_9e5217d07f9ea584d86c0d118b2c53f0);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_844c53be2408b67f523f0898482ccb9e);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_int_pos_615);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a0334f77b909b7fb9062c2aafb2afb6);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_d2a800fcd99225c7a6a93cdfaf7eb2f9);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_02e3fa135464fdbcd7c393aa1fab976a);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_int_pos_640);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_f8cb45c3fbed8dc8c392c804c6d1c638);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_e5526c4ebfac4252f244893d7ee8b68f);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_20e4d1ab0bc99b923fb3ad88504ea020);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f352005411b90a0c20cb3b32c994aae);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_c829cf57ccba4e746e8b63f309599d70);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_evals_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_b1db223aa5d77c8354e4fa852d235304_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_90be3f3f8cd009cec52842b5587bc1b6_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_3f7de3e6a8409d7e24c3ab0360426faf_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_5a51181619568eb5d312532d5ff1e479_tuple);
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
void checkModuleConstants_openai$resources$evals$evals(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Runs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Runs);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalsWithRawResponse);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalsWithStreamingResponse);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__post);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_transform);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_data_source_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data_source_config);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_testing_criteria));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_testing_criteria);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_create_params);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalCreateParams);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_request_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_request_options);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalCreateResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalCreateResponse);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_938a6f6c85c78e320d476f8d0f139537_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_938a6f6c85c78e320d476f8d0f139537_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_7120c78a3471eb637d708064c4cb4631));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7120c78a3471eb637d708064c4cb4631);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_68bf73ccc80c1d4638349decd0b5ed2e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68bf73ccc80c1d4638349decd0b5ed2e);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__get));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_66905a7339355b571a7958406c96c3c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66905a7339355b571a7958406c96c3c1);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalRetrieveResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalRetrieveResponse);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_833c5448c1d45d7c8ed0bd59ff92f30c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_833c5448c1d45d7c8ed0bd59ff92f30c);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_update_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_update_params);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalUpdateParams);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalUpdateResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalUpdateResponse);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1dfd1a64fe6cc60846272f03b5299eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1dfd1a64fe6cc60846272f03b5299eb);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_api_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_api_list);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncCursorPage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncCursorPage);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalListResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalListResponse);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_after);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_limit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_limit);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_order));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_order);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_order_by));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_order_by);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_list_params);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalListParams);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_324084b38365a641ab60038fffb5af18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_324084b38365a641ab60038fffb5af18);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__delete);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_EvalDeleteResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EvalDeleteResponse);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8da9fd4f438b9285ffd085ee1dda350));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8da9fd4f438b9285ffd085ee1dda350);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncRuns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncRuns);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvalsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_maybe_transform);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_headers);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_query);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_body);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_create));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_629f9ba5c6ae184b0fc4983bd3cf9819));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_629f9ba5c6ae184b0fc4983bd3cf9819);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eval_id);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retrieve);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbbb6b1a6ce4f3fc3e70aaa37cacebd4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbbb6b1a6ce4f3fc3e70aaa37cacebd4);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7048fcc381a02ea83e60481cd7ca1b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7048fcc381a02ea83e60481cd7ca1b4);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncCursorPage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncCursorPage);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc6e1f02d46c4447d6807c38e95ecd3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc6e1f02d46c4447d6807c38e95ecd3e);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__evals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__evals);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__legacy_response);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_raw_response_wrapper);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunsWithRawResponse);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_runs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_runs);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_raw_response_wrapper);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncRunsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncRunsWithRawResponse);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_streamed_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_streamed_response_wrapper);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunsWithStreamingResponse);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_streamed_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_streamed_response_wrapper);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncRunsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncRunsWithStreamingResponse);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Literal_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__legacy_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__legacy_response_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_80264cdcc63ce5403babfe5a37e92330_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_80264cdcc63ce5403babfe5a37e92330_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_588f21ecebfad4c9dbc0f7aa769b8795_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_588f21ecebfad4c9dbc0f7aa769b8795_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_GIVEN);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Body);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_Query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Query);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_Headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Headers);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotGiven);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maybe_transform_str_plain_async_maybe_transform_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maybe_transform_str_plain_async_maybe_transform_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cached_property_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cached_property);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_376933c40963c3ea758c5293e882d65d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_376933c40963c3ea758c5293e882d65d);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_088a3546989703aa8b5fc781b886cd18_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_088a3546989703aa8b5fc781b886cd18_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__resource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__resource);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncAPIResource);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAPIResource);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__response);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_pagination));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pagination);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncCursorPage_str_plain_AsyncCursorPage_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SyncCursorPage_str_plain_AsyncCursorPage_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__base_client);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncPaginator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncPaginator);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab55976185b5f82efa04db85b4b52190));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab55976185b5f82efa04db85b4b52190);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalListResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalListResponse_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_d73b412af85fe6f8a0c7076a59ee661d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d73b412af85fe6f8a0c7076a59ee661d);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalCreateResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalCreateResponse_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e60ebc1b952446ee36fccd895ce9353));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e60ebc1b952446ee36fccd895ce9353);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalDeleteResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalDeleteResponse_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_443f7b32757908aaf0a40ebd70a578c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_443f7b32757908aaf0a40ebd70a578c9);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalUpdateResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalUpdateResponse_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_96767a1987c00775c7abf3e5fe0cb8ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96767a1987c00775c7abf3e5fe0cb8ab);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EvalRetrieveResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EvalRetrieveResponse_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f4cfd1ed3283a1c9947c5431ec224c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f4cfd1ed3283a1c9947c5431ec224c2);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Metadata_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Metadata_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Metadata);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_Evals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Evals);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEvals);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_947223c5c1cd95b7f2bc29bd912b809d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_947223c5c1cd95b7f2bc29bd912b809d);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_37));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_37);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_dict_dea8d280dcefbd36feaa62a481c2f5df));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dea8d280dcefbd36feaa62a481c2f5df);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4ddeafa7364688ce8b3b596d46b7840));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4ddeafa7364688ce8b3b596d46b7840);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_9eae6a8ad038e39c5b26181073b33eb5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9eae6a8ad038e39c5b26181073b33eb5);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_raw_response);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7aa4aa8b18b01fe91b2d42b5a0c8815));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7aa4aa8b18b01fe91b2d42b5a0c8815);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_dict_055d4ccb4e9e0eafa267c3adde6a4b2a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_055d4ccb4e9e0eafa267c3adde6a4b2a);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_streaming_response);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c221ea90afa1ed5aadcc62f74534829));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c221ea90afa1ed5aadcc62f74534829);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_70c0214d0eb17b9ea95f7b3d2af80860));
CHECK_OBJECT_DEEP(mod_consts.const_dict_70c0214d0eb17b9ea95f7b3d2af80860);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ba35289f1330bb79b314052fa284f15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ba35289f1330bb79b314052fa284f15);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_abd96e405580a6c0d5bb72500908124b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_abd96e405580a6c0d5bb72500908124b);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_6edca2f65de415d07028b3225580b90c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6edca2f65de415d07028b3225580b90c);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_c70c26b7882adbe68f1b1e73bb68808f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c70c26b7882adbe68f1b1e73bb68808f);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d50d01a485d69940f7403c04f1fa7a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d50d01a485d69940f7403c04f1fa7a3);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_f8671feec9d39cd4d03d516e1b44f594));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f8671feec9d39cd4d03d516e1b44f594);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_8788955ef13ee73367d31615580fae44));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8788955ef13ee73367d31615580fae44);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_b4f7bb1169a37fd74b11bc58a07f72ff));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b4f7bb1169a37fd74b11bc58a07f72ff);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ac0ae152aa10325db20936b63e0c387));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ac0ae152aa10325db20936b63e0c387);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_int_pos_301));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_301);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_92a1867ef9bb37f8d9d3b8fe72e59133));
CHECK_OBJECT_DEEP(mod_consts.const_dict_92a1867ef9bb37f8d9d3b8fe72e59133);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_dac150a11e7279d4200eb5e9ebaaa7d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dac150a11e7279d4200eb5e9ebaaa7d0);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_1279acb8939ddf2e14557aff603366a6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1279acb8939ddf2e14557aff603366a6);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_3582a0f29ea8f4f269e7f5903f4082cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3582a0f29ea8f4f269e7f5903f4082cc);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_b95fbe806dc63a7c0db0991f75c4841b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b95fbe806dc63a7c0db0991f75c4841b);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_d162bac5d75be7a986bb60f0acf30d5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d162bac5d75be7a986bb60f0acf30d5d);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_1136dc2979a681fc0c8a98ef33aa4892));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1136dc2979a681fc0c8a98ef33aa4892);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_04d437e6b41b4883cb64c1a7f5b0238d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04d437e6b41b4883cb64c1a7f5b0238d);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_int_pos_565));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_565);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_dict_4a46d155eb1584855bef40fb4b07821d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4a46d155eb1584855bef40fb4b07821d);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d291af916a63d5c912c531aa9d91255));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d291af916a63d5c912c531aa9d91255);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_012afb9b3add46f9d1a77345c379e2ce));
CHECK_OBJECT_DEEP(mod_consts.const_dict_012afb9b3add46f9d1a77345c379e2ce);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_9be406495834b2950a2ca516b1ebd13e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9be406495834b2950a2ca516b1ebd13e);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_03b6f48e679f19f9c85a429f7beaf129_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_03b6f48e679f19f9c85a429f7beaf129_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_int_pos_590));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_590);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_1b62036e06e17cdbec7298e39f0f69cb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1b62036e06e17cdbec7298e39f0f69cb);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_f30ce6670d09b81ed331d98084b2f0c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f30ce6670d09b81ed331d98084b2f0c7);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_9e5217d07f9ea584d86c0d118b2c53f0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9e5217d07f9ea584d86c0d118b2c53f0);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_844c53be2408b67f523f0898482ccb9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_844c53be2408b67f523f0898482ccb9e);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_int_pos_615));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_615);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a0334f77b909b7fb9062c2aafb2afb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a0334f77b909b7fb9062c2aafb2afb6);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_d2a800fcd99225c7a6a93cdfaf7eb2f9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d2a800fcd99225c7a6a93cdfaf7eb2f9);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_02e3fa135464fdbcd7c393aa1fab976a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02e3fa135464fdbcd7c393aa1fab976a);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_int_pos_640));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_640);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_f8cb45c3fbed8dc8c392c804c6d1c638));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f8cb45c3fbed8dc8c392c804c6d1c638);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_e5526c4ebfac4252f244893d7ee8b68f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e5526c4ebfac4252f244893d7ee8b68f);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_20e4d1ab0bc99b923fb3ad88504ea020));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20e4d1ab0bc99b923fb3ad88504ea020);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f352005411b90a0c20cb3b32c994aae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f352005411b90a0c20cb3b32c994aae);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_c829cf57ccba4e746e8b63f309599d70));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c829cf57ccba4e746e8b63f309599d70);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_evals_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_evals_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_b1db223aa5d77c8354e4fa852d235304_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b1db223aa5d77c8354e4fa852d235304_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_90be3f3f8cd009cec52842b5587bc1b6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_90be3f3f8cd009cec52842b5587bc1b6_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_3f7de3e6a8409d7e24c3ab0360426faf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3f7de3e6a8409d7e24c3ab0360426faf_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_5a51181619568eb5d312532d5ff1e479_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5a51181619568eb5d312532d5ff1e479_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 31
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
static PyObject *module_var_accessor_openai$resources$evals$evals$AsyncAPIResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncAPIResource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncAPIResource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncAPIResource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncAPIResource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$AsyncCursorPage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCursorPage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncCursorPage);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncCursorPage, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncCursorPage);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncCursorPage, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCursorPage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCursorPage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCursorPage);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$AsyncEvalsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncEvalsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncEvalsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$AsyncEvalsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$AsyncRuns(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRuns);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncRuns);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncRuns, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncRuns);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncRuns, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRuns);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRuns);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRuns);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$AsyncRunsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRunsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncRunsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncRunsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncRunsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncRunsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRunsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRunsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRunsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$AsyncRunsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRunsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncRunsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncRunsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncRunsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncRunsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRunsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRunsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRunsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$EvalCreateResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalCreateResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalCreateResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalCreateResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalCreateResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalCreateResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalCreateResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalCreateResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalCreateResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$EvalDeleteResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalDeleteResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalDeleteResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalDeleteResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalDeleteResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalDeleteResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalDeleteResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalDeleteResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalDeleteResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$EvalListResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalListResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalListResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalListResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalListResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalListResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalListResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalListResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalListResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$EvalRetrieveResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalRetrieveResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalRetrieveResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalRetrieveResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalRetrieveResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalRetrieveResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalRetrieveResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalRetrieveResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalRetrieveResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$EvalUpdateResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalUpdateResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalUpdateResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalUpdateResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalUpdateResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalUpdateResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalUpdateResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalUpdateResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalUpdateResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$EvalsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$EvalsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EvalsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EvalsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NOT_GIVEN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NOT_GIVEN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NOT_GIVEN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NOT_GIVEN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$Runs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Runs);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Runs);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Runs, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Runs);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Runs, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Runs);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Runs);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Runs);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$RunsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_RunsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_RunsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_RunsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RunsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$RunsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_RunsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_RunsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_RunsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RunsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$SyncAPIResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncAPIResource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncAPIResource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncAPIResource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncAPIResource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$SyncCursorPage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncCursorPage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncCursorPage);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncCursorPage, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncCursorPage);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncCursorPage, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncCursorPage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncCursorPage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncCursorPage);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$_legacy_response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__legacy_response);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__legacy_response, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__legacy_response);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__legacy_response, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$async_maybe_transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_async_maybe_transform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_async_maybe_transform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_async_maybe_transform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_async_maybe_transform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$async_to_streamed_response_wrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_async_to_streamed_response_wrapper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_async_to_streamed_response_wrapper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_async_to_streamed_response_wrapper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_async_to_streamed_response_wrapper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$cached_property(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cached_property);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cached_property, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cached_property);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cached_property, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$eval_create_params(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_create_params);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_eval_create_params);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_eval_create_params, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_eval_create_params);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_eval_create_params, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_create_params);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_create_params);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_create_params);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$eval_list_params(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_list_params);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_eval_list_params);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_eval_list_params, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_eval_list_params);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_eval_list_params, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_list_params);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_list_params);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_list_params);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$eval_update_params(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_update_params);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_eval_update_params);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_eval_update_params, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_eval_update_params);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_eval_update_params, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_update_params);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_update_params);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_update_params);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$make_request_options(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_make_request_options);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_make_request_options, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_make_request_options);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_make_request_options, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$maybe_transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_maybe_transform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_maybe_transform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_maybe_transform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_maybe_transform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$evals$evals$to_streamed_response_wrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$evals$evals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$evals$evals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$evals$evals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_streamed_response_wrapper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_streamed_response_wrapper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_streamed_response_wrapper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_streamed_response_wrapper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_980c7b3dd6872616926af85fb45b61d8;
static PyCodeObject *code_objects_4f019fbaade939cd62c710ba30f83dac;
static PyCodeObject *code_objects_03c0e010b0bf12a78d08ac3e2d417f93;
static PyCodeObject *code_objects_e7631998cbace4f97ed5eed6a26e7dc2;
static PyCodeObject *code_objects_7b2b9e81c5d376d3cdf36d978b874015;
static PyCodeObject *code_objects_d687a05f3d4a9d57ae81948a41b8097e;
static PyCodeObject *code_objects_a5abf8a7b54fc5624e411653b6a2cd31;
static PyCodeObject *code_objects_f86ac5c1f7c8caa072d6c5cc3a128078;
static PyCodeObject *code_objects_12fe1aa3674fff4c51a323beb7e42ea9;
static PyCodeObject *code_objects_a8dc49ef7c51ddf8ce26f9587708e96b;
static PyCodeObject *code_objects_46b9a662fc7e52bc297ab1528481131d;
static PyCodeObject *code_objects_5a86191db0a6827c317d77679d6ec42c;
static PyCodeObject *code_objects_a006bd063b761fc924d150c3e8cf0815;
static PyCodeObject *code_objects_726637282a85518acec8045e9583f890;
static PyCodeObject *code_objects_d1f3db1ef084beafe968ce1d13e4e35c;
static PyCodeObject *code_objects_cea59072d2d5b09bb4b1bb947f8fffdb;
static PyCodeObject *code_objects_6210cd7335eace6d56f9f819764a5647;
static PyCodeObject *code_objects_0cacaf92edeeaa077f7ae0bd1c684576;
static PyCodeObject *code_objects_b64a878b338dfb41419854bde757bb3c;
static PyCodeObject *code_objects_831d9c7f623ebf292aa3467023a99b24;
static PyCodeObject *code_objects_47cfcfec2dbe2a4cff471175cd25021a;
static PyCodeObject *code_objects_96158ae32edc99e7fa22085c64fc2a6a;
static PyCodeObject *code_objects_8d15f418dfbdb8bccc57db668be0ccd4;
static PyCodeObject *code_objects_469901c0733cb4c60d2fa39483c421fc;
static PyCodeObject *code_objects_2d06ba8dba68b674a1e1391966e802c6;
static PyCodeObject *code_objects_c45705c402900a679c8460f8009143fb;
static PyCodeObject *code_objects_b619f3508d07e549151f589b217483a9;
static PyCodeObject *code_objects_284aa8305895f6eda9198ba33d83450c;
static PyCodeObject *code_objects_232a1100e6037f58846e6f1a11e614a2;
static PyCodeObject *code_objects_091144284565c88ed1aa723e420c57cd;
static PyCodeObject *code_objects_fb3f7d5038969975cdd8b08ae5f8cf1a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7f352005411b90a0c20cb3b32c994aae); CHECK_OBJECT(module_filename_obj);
code_objects_980c7b3dd6872616926af85fb45b61d8 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c829cf57ccba4e746e8b63f309599d70, mod_consts.const_str_digest_c829cf57ccba4e746e8b63f309599d70, NULL, NULL, 0, 0, 0);
code_objects_4f019fbaade939cd62c710ba30f83dac = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncEvals, mod_consts.const_str_plain_AsyncEvals, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_03c0e010b0bf12a78d08ac3e2d417f93 = MAKE_CODE_OBJECT(module_filename_obj, 590, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncEvalsWithRawResponse, mod_consts.const_str_plain_AsyncEvalsWithRawResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e7631998cbace4f97ed5eed6a26e7dc2 = MAKE_CODE_OBJECT(module_filename_obj, 640, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse, mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7b2b9e81c5d376d3cdf36d978b874015 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Evals, mod_consts.const_str_plain_Evals, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d687a05f3d4a9d57ae81948a41b8097e = MAKE_CODE_OBJECT(module_filename_obj, 565, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_EvalsWithRawResponse, mod_consts.const_str_plain_EvalsWithRawResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a5abf8a7b54fc5624e411653b6a2cd31 = MAKE_CODE_OBJECT(module_filename_obj, 615, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_EvalsWithStreamingResponse, mod_consts.const_str_plain_EvalsWithStreamingResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f86ac5c1f7c8caa072d6c5cc3a128078 = MAKE_CODE_OBJECT(module_filename_obj, 591, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f30ce6670d09b81ed331d98084b2f0c7, mod_consts.const_tuple_str_plain_self_str_plain_evals_tuple, NULL, 2, 0, 0);
code_objects_12fe1aa3674fff4c51a323beb7e42ea9 = MAKE_CODE_OBJECT(module_filename_obj, 641, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f8cb45c3fbed8dc8c392c804c6d1c638, mod_consts.const_tuple_str_plain_self_str_plain_evals_tuple, NULL, 2, 0, 0);
code_objects_a8dc49ef7c51ddf8ce26f9587708e96b = MAKE_CODE_OBJECT(module_filename_obj, 566, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_1d291af916a63d5c912c531aa9d91255, mod_consts.const_tuple_str_plain_self_str_plain_evals_tuple, NULL, 2, 0, 0);
code_objects_46b9a662fc7e52bc297ab1528481131d = MAKE_CODE_OBJECT(module_filename_obj, 616, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_3a0334f77b909b7fb9062c2aafb2afb6, mod_consts.const_tuple_str_plain_self_str_plain_evals_tuple, NULL, 2, 0, 0);
code_objects_5a86191db0a6827c317d77679d6ec42c = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_629f9ba5c6ae184b0fc4983bd3cf9819, mod_consts.const_tuple_b1db223aa5d77c8354e4fa852d235304_tuple, NULL, 1, 8, 0);
code_objects_a006bd063b761fc924d150c3e8cf0815 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_9ba35289f1330bb79b314052fa284f15, mod_consts.const_tuple_b1db223aa5d77c8354e4fa852d235304_tuple, NULL, 1, 8, 0);
code_objects_726637282a85518acec8045e9583f890 = MAKE_CODE_OBJECT(module_filename_obj, 531, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete, mod_consts.const_str_digest_fc6e1f02d46c4447d6807c38e95ecd3e, mod_consts.const_tuple_90be3f3f8cd009cec52842b5587bc1b6_tuple, NULL, 2, 4, 0);
code_objects_d1f3db1ef084beafe968ce1d13e4e35c = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete, mod_consts.const_str_digest_4ac0ae152aa10325db20936b63e0c387, mod_consts.const_tuple_90be3f3f8cd009cec52842b5587bc1b6_tuple, NULL, 2, 4, 0);
code_objects_cea59072d2d5b09bb4b1bb947f8fffdb = MAKE_CODE_OBJECT(module_filename_obj, 474, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_list, mod_consts.const_str_digest_04d437e6b41b4883cb64c1a7f5b0238d, mod_consts.const_tuple_3f7de3e6a8409d7e24c3ab0360426faf_tuple, NULL, 1, 8, 0);
code_objects_6210cd7335eace6d56f9f819764a5647 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_list, mod_consts.const_str_digest_8788955ef13ee73367d31615580fae44, mod_consts.const_tuple_3f7de3e6a8409d7e24c3ab0360426faf_tuple, NULL, 1, 8, 0);
code_objects_0cacaf92edeeaa077f7ae0bd1c684576 = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_retrieve, mod_consts.const_str_digest_dbbb6b1a6ce4f3fc3e70aaa37cacebd4, mod_consts.const_tuple_90be3f3f8cd009cec52842b5587bc1b6_tuple, NULL, 2, 4, 0);
code_objects_b64a878b338dfb41419854bde757bb3c = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_retrieve, mod_consts.const_str_digest_6edca2f65de415d07028b3225580b90c, mod_consts.const_tuple_90be3f3f8cd009cec52842b5587bc1b6_tuple, NULL, 2, 4, 0);
code_objects_831d9c7f623ebf292aa3467023a99b24 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_runs, mod_consts.const_str_digest_dac150a11e7279d4200eb5e9ebaaa7d0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_47cfcfec2dbe2a4cff471175cd25021a = MAKE_CODE_OBJECT(module_filename_obj, 611, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_runs, mod_consts.const_str_digest_844c53be2408b67f523f0898482ccb9e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_96158ae32edc99e7fa22085c64fc2a6a = MAKE_CODE_OBJECT(module_filename_obj, 661, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_runs, mod_consts.const_str_digest_20e4d1ab0bc99b923fb3ad88504ea020, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8d15f418dfbdb8bccc57db668be0ccd4 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_runs, mod_consts.const_str_digest_a4ddeafa7364688ce8b3b596d46b7840, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_469901c0733cb4c60d2fa39483c421fc = MAKE_CODE_OBJECT(module_filename_obj, 586, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_runs, mod_consts.const_str_digest_9be406495834b2950a2ca516b1ebd13e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2d06ba8dba68b674a1e1391966e802c6 = MAKE_CODE_OBJECT(module_filename_obj, 636, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_runs, mod_consts.const_str_digest_02e3fa135464fdbcd7c393aa1fab976a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c45705c402900a679c8460f8009143fb = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_d7048fcc381a02ea83e60481cd7ca1b4, mod_consts.const_tuple_5a51181619568eb5d312532d5ff1e479_tuple, NULL, 2, 6, 0);
code_objects_b619f3508d07e549151f589b217483a9 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_9d50d01a485d69940f7403c04f1fa7a3, mod_consts.const_tuple_5a51181619568eb5d312532d5ff1e479_tuple, NULL, 2, 6, 0);
code_objects_284aa8305895f6eda9198ba33d83450c = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_3582a0f29ea8f4f269e7f5903f4082cc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_232a1100e6037f58846e6f1a11e614a2 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_b7aa4aa8b18b01fe91b2d42b5a0c8815, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_091144284565c88ed1aa723e420c57cd = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_d162bac5d75be7a986bb60f0acf30d5d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fb3f7d5038969975cdd8b08ae5f8cf1a = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_8c221ea90afa1ed5aadcc62f74534829, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_openai$resources$evals$evals$$$function__12_create$$$coroutine__1_create(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$evals$evals$$$function__13_retrieve$$$coroutine__1_retrieve(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$evals$evals$$$function__14_update$$$coroutine__1_update(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$evals$evals$$$function__16_delete$$$coroutine__1_delete(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__10_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__11_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__12_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__13_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__14_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__15_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__16_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__17___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__18_runs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__19___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__1_runs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__20_runs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__21___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__22_runs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__23___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__24_runs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__2_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__3_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__4_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__5_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__6_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__7_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__8_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__9_runs(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_openai$resources$evals$evals$$$function__1_runs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__1_runs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__1_runs = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__1_runs)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__1_runs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__1_runs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__1_runs = MAKE_FUNCTION_FRAME(tstate, code_objects_8d15f418dfbdb8bccc57db668be0ccd4, module_openai$resources$evals$evals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__1_runs->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__1_runs = cache_frame_frame_openai$resources$evals$evals$$$function__1_runs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__1_runs);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__1_runs) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$Runs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Runs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__client);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__1_runs->m_frame.f_lineno = 40;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__1_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__1_runs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__1_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__1_runs,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__1_runs == cache_frame_frame_openai$resources$evals$evals$$$function__1_runs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__1_runs);
    cache_frame_frame_openai$resources$evals$evals$$$function__1_runs = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__1_runs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_openai$resources$evals$evals$$$function__2_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_232a1100e6037f58846e6f1a11e614a2, module_openai$resources$evals$evals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response = cache_frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$EvalsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response->m_frame.f_lineno = 50;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response == cache_frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response);
    cache_frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__2_with_raw_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_openai$resources$evals$evals$$$function__3_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_fb3f7d5038969975cdd8b08ae5f8cf1a, module_openai$resources$evals$evals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response = cache_frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$EvalsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response->m_frame.f_lineno = 59;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response == cache_frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response);
    cache_frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__3_with_streaming_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_openai$resources$evals$evals$$$function__4_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data_source_config = python_pars[1];
PyObject *par_testing_criteria = python_pars[2];
PyObject *par_metadata = python_pars[3];
PyObject *par_name = python_pars[4];
PyObject *par_extra_headers = python_pars[5];
PyObject *par_extra_query = python_pars[6];
PyObject *par_extra_body = python_pars[7];
PyObject *par_timeout = python_pars[8];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__4_create;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__4_create = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__4_create)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__4_create);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__4_create == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__4_create = MAKE_FUNCTION_FRAME(tstate, code_objects_a006bd063b761fc924d150c3e8cf0815, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__4_create->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__4_create = cache_frame_frame_openai$resources$evals$evals$$$function__4_create;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__4_create);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__4_create) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_2_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__post);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_data_source_config;
CHECK_OBJECT(par_data_source_config);
tmp_dict_value_1 = par_data_source_config;
tmp_args_element_value_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_testing_criteria;
CHECK_OBJECT(par_testing_criteria);
tmp_dict_value_1 = par_testing_criteria;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_metadata;
CHECK_OBJECT(par_metadata);
tmp_dict_value_1 = par_metadata;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_name;
CHECK_OBJECT(par_name);
tmp_dict_value_1 = par_name;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_2 = module_var_accessor_openai$resources$evals$evals$eval_create_params(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_eval_create_params);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 118;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_EvalCreateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 118;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__4_create->m_frame.f_lineno = 111;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_openai$resources$evals$evals$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 120;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_extra_headers);
tmp_kw_call_value_0_2 = par_extra_headers;
CHECK_OBJECT(par_extra_query);
tmp_kw_call_value_1_2 = par_extra_query;
CHECK_OBJECT(par_extra_body);
tmp_kw_call_value_2_1 = par_extra_body;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
frame_frame_openai$resources$evals$evals$$$function__4_create->m_frame.f_lineno = 120;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 120;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = module_var_accessor_openai$resources$evals$evals$EvalCreateResponse(tstate);
if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalCreateResponse);
}

if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__4_create->m_frame.f_lineno = 109;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_2};
    tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_938a6f6c85c78e320d476f8d0f139537_tuple, kw_values, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooo";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__4_create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__4_create->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__4_create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__4_create,
    type_description_1,
    par_self,
    par_data_source_config,
    par_testing_criteria,
    par_metadata,
    par_name,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__4_create == cache_frame_frame_openai$resources$evals$evals$$$function__4_create) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__4_create);
    cache_frame_frame_openai$resources$evals$evals$$$function__4_create = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__4_create);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data_source_config);
Py_DECREF(par_data_source_config);
CHECK_OBJECT(par_testing_criteria);
Py_DECREF(par_testing_criteria);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data_source_config);
Py_DECREF(par_data_source_config);
CHECK_OBJECT(par_testing_criteria);
Py_DECREF(par_testing_criteria);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$evals$evals$$$function__5_retrieve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_eval_id = python_pars[1];
PyObject *par_extra_headers = python_pars[2];
PyObject *par_extra_query = python_pars[3];
PyObject *par_extra_body = python_pars[4];
PyObject *par_timeout = python_pars[5];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__5_retrieve;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__5_retrieve = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__5_retrieve)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__5_retrieve);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__5_retrieve == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__5_retrieve = MAKE_FUNCTION_FRAME(tstate, code_objects_b64a878b338dfb41419854bde757bb3c, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__5_retrieve->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__5_retrieve = cache_frame_frame_openai$resources$evals$evals$$$function__5_retrieve;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__5_retrieve);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__5_retrieve) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_eval_id);
tmp_operand_value_1 = par_eval_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_68bf73ccc80c1d4638349decd0b5ed2e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_eval_id);
tmp_operand_value_2 = par_eval_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooo";
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
frame_frame_openai$resources$evals$evals$$$function__5_retrieve->m_frame.f_lineno = 150;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 150;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_66905a7339355b571a7958406c96c3c1;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_eval_id);
tmp_format_value_2 = par_eval_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 153;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_extra_headers);
tmp_kw_call_value_0_1 = par_extra_headers;
CHECK_OBJECT(par_extra_query);
tmp_kw_call_value_1_1 = par_extra_query;
CHECK_OBJECT(par_extra_body);
tmp_kw_call_value_2_1 = par_extra_body;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
frame_frame_openai$resources$evals$evals$$$function__5_retrieve->m_frame.f_lineno = 153;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 153;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$evals$evals$EvalRetrieveResponse(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalRetrieveResponse);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 156;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__5_retrieve->m_frame.f_lineno = 151;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooo";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__5_retrieve, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__5_retrieve->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__5_retrieve, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__5_retrieve,
    type_description_1,
    par_self,
    par_eval_id,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__5_retrieve == cache_frame_frame_openai$resources$evals$evals$$$function__5_retrieve) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__5_retrieve);
    cache_frame_frame_openai$resources$evals$evals$$$function__5_retrieve = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__5_retrieve);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_eval_id);
Py_DECREF(par_eval_id);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_eval_id);
Py_DECREF(par_eval_id);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$evals$evals$$$function__6_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_eval_id = python_pars[1];
PyObject *par_metadata = python_pars[2];
PyObject *par_name = python_pars[3];
PyObject *par_extra_headers = python_pars[4];
PyObject *par_extra_query = python_pars[5];
PyObject *par_extra_body = python_pars[6];
PyObject *par_timeout = python_pars[7];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__6_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__6_update = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__6_update)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__6_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__6_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__6_update = MAKE_FUNCTION_FRAME(tstate, code_objects_b619f3508d07e549151f589b217483a9, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__6_update->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__6_update = cache_frame_frame_openai$resources$evals$evals$$$function__6_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__6_update);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__6_update) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_eval_id);
tmp_operand_value_1 = par_eval_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_68bf73ccc80c1d4638349decd0b5ed2e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_eval_id);
tmp_operand_value_2 = par_eval_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
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
frame_frame_openai$resources$evals$evals$$$function__6_update->m_frame.f_lineno = 194;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 194;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__post);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_66905a7339355b571a7958406c96c3c1;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_eval_id);
tmp_format_value_2 = par_eval_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 197;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_metadata;
CHECK_OBJECT(par_metadata);
tmp_dict_value_1 = par_metadata;
tmp_args_element_value_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_name;
CHECK_OBJECT(par_name);
tmp_dict_value_1 = par_name;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_2 = module_var_accessor_openai$resources$evals$evals$eval_update_params(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_eval_update_params);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 202;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_EvalUpdateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 202;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__6_update->m_frame.f_lineno = 197;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 197;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_openai$resources$evals$evals$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 204;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_extra_headers);
tmp_kw_call_value_0_1 = par_extra_headers;
CHECK_OBJECT(par_extra_query);
tmp_kw_call_value_1_1 = par_extra_query;
CHECK_OBJECT(par_extra_body);
tmp_kw_call_value_2_1 = par_extra_body;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
frame_frame_openai$resources$evals$evals$$$function__6_update->m_frame.f_lineno = 204;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 204;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$evals$evals$EvalUpdateResponse(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalUpdateResponse);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 207;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__6_update->m_frame.f_lineno = 195;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooo";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__6_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__6_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__6_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__6_update,
    type_description_1,
    par_self,
    par_eval_id,
    par_metadata,
    par_name,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__6_update == cache_frame_frame_openai$resources$evals$evals$$$function__6_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__6_update);
    cache_frame_frame_openai$resources$evals$evals$$$function__6_update = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__6_update);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_eval_id);
Py_DECREF(par_eval_id);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_eval_id);
Py_DECREF(par_eval_id);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$evals$evals$$$function__7_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_after = python_pars[1];
PyObject *par_limit = python_pars[2];
PyObject *par_order = python_pars[3];
PyObject *par_order_by = python_pars[4];
PyObject *par_extra_headers = python_pars[5];
PyObject *par_extra_query = python_pars[6];
PyObject *par_extra_body = python_pars[7];
PyObject *par_timeout = python_pars[8];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__7_list;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__7_list = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__7_list)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__7_list);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__7_list == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__7_list = MAKE_FUNCTION_FRAME(tstate, code_objects_6210cd7335eace6d56f9f819764a5647, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__7_list->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__7_list = cache_frame_frame_openai$resources$evals$evals$$$function__7_list;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__7_list);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__7_list) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_2_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get_api_list);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_openai$resources$evals$evals$SyncCursorPage(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncCursorPage);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 248;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_openai$resources$evals$evals$EvalListResponse(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalListResponse);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 248;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 248;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 249;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_extra_headers);
tmp_kw_call_value_0_2 = par_extra_headers;
CHECK_OBJECT(par_extra_query);
tmp_kw_call_value_1_2 = par_extra_query;
CHECK_OBJECT(par_extra_body);
tmp_kw_call_value_2_1 = par_extra_body;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
tmp_called_value_3 = module_var_accessor_openai$resources$evals$evals$maybe_transform(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_after;
CHECK_OBJECT(par_after);
tmp_dict_value_1 = par_after;
tmp_args_element_value_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_limit;
CHECK_OBJECT(par_limit);
tmp_dict_value_1 = par_limit;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_order;
CHECK_OBJECT(par_order);
tmp_dict_value_1 = par_order;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_order_by;
CHECK_OBJECT(par_order_by);
tmp_dict_value_1 = par_order_by;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_3 = module_var_accessor_openai$resources$evals$evals$eval_list_params(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_eval_list_params);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 261;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_EvalListParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 261;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__7_list->m_frame.f_lineno = 254;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_kw_call_value_4_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__7_list->m_frame.f_lineno = 249;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 249;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = module_var_accessor_openai$resources$evals$evals$EvalListResponse(tstate);
if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalListResponse);
}

if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 264;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__7_list->m_frame.f_lineno = 246;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_2};
    tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_938a6f6c85c78e320d476f8d0f139537_tuple, kw_values, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooo";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__7_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__7_list->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__7_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__7_list,
    type_description_1,
    par_self,
    par_after,
    par_limit,
    par_order,
    par_order_by,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__7_list == cache_frame_frame_openai$resources$evals$evals$$$function__7_list) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__7_list);
    cache_frame_frame_openai$resources$evals$evals$$$function__7_list = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__7_list);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_after);
Py_DECREF(par_after);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
CHECK_OBJECT(par_order_by);
Py_DECREF(par_order_by);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_after);
Py_DECREF(par_after);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
CHECK_OBJECT(par_order_by);
Py_DECREF(par_order_by);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$evals$evals$$$function__8_delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_eval_id = python_pars[1];
PyObject *par_extra_headers = python_pars[2];
PyObject *par_extra_query = python_pars[3];
PyObject *par_extra_body = python_pars[4];
PyObject *par_timeout = python_pars[5];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__8_delete;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__8_delete = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__8_delete)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__8_delete);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__8_delete == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__8_delete = MAKE_FUNCTION_FRAME(tstate, code_objects_d1f3db1ef084beafe968ce1d13e4e35c, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__8_delete->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__8_delete = cache_frame_frame_openai$resources$evals$evals$$$function__8_delete;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__8_delete);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__8_delete) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_eval_id);
tmp_operand_value_1 = par_eval_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_68bf73ccc80c1d4638349decd0b5ed2e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_eval_id);
tmp_operand_value_2 = par_eval_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooo";
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
frame_frame_openai$resources$evals$evals$$$function__8_delete->m_frame.f_lineno = 291;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 291;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__delete);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_66905a7339355b571a7958406c96c3c1;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_eval_id);
tmp_format_value_2 = par_eval_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 294;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_extra_headers);
tmp_kw_call_value_0_1 = par_extra_headers;
CHECK_OBJECT(par_extra_query);
tmp_kw_call_value_1_1 = par_extra_query;
CHECK_OBJECT(par_extra_body);
tmp_kw_call_value_2_1 = par_extra_body;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
frame_frame_openai$resources$evals$evals$$$function__8_delete->m_frame.f_lineno = 294;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 294;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$evals$evals$EvalDeleteResponse(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalDeleteResponse);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 297;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__8_delete->m_frame.f_lineno = 292;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooo";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__8_delete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__8_delete->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__8_delete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__8_delete,
    type_description_1,
    par_self,
    par_eval_id,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__8_delete == cache_frame_frame_openai$resources$evals$evals$$$function__8_delete) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__8_delete);
    cache_frame_frame_openai$resources$evals$evals$$$function__8_delete = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__8_delete);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_eval_id);
Py_DECREF(par_eval_id);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_eval_id);
Py_DECREF(par_eval_id);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$evals$evals$$$function__9_runs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__9_runs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__9_runs = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__9_runs)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__9_runs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__9_runs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__9_runs = MAKE_FUNCTION_FRAME(tstate, code_objects_831d9c7f623ebf292aa3467023a99b24, module_openai$resources$evals$evals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__9_runs->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__9_runs = cache_frame_frame_openai$resources$evals$evals$$$function__9_runs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__9_runs);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__9_runs) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$AsyncRuns(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncRuns);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__client);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__9_runs->m_frame.f_lineno = 304;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__9_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__9_runs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__9_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__9_runs,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__9_runs == cache_frame_frame_openai$resources$evals$evals$$$function__9_runs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__9_runs);
    cache_frame_frame_openai$resources$evals$evals$$$function__9_runs = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__9_runs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_openai$resources$evals$evals$$$function__10_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_284aa8305895f6eda9198ba33d83450c, module_openai$resources$evals$evals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response = cache_frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$AsyncEvalsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncEvalsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response->m_frame.f_lineno = 314;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response == cache_frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response);
    cache_frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__10_with_raw_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_openai$resources$evals$evals$$$function__11_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_091144284565c88ed1aa723e420c57cd, module_openai$resources$evals$evals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response = cache_frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$AsyncEvalsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response->m_frame.f_lineno = 323;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response == cache_frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response);
    cache_frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__11_with_streaming_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_openai$resources$evals$evals$$$function__12_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_data_source_config = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_testing_criteria = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_metadata = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[7]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[8]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[9];
tmp_closure_1[0] = par_data_source_config;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_body;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_headers;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_extra_query;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_metadata;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_name;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_self;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_testing_criteria;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = par_timeout;
Py_INCREF(tmp_closure_1[8]);
tmp_return_value = MAKE_COROUTINE_openai$resources$evals$evals$$$function__12_create$$$coroutine__1_create(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_data_source_config);
CHECK_OBJECT(par_data_source_config);
Py_DECREF(par_data_source_config);
par_data_source_config = NULL;
CHECK_OBJECT(par_testing_criteria);
CHECK_OBJECT(par_testing_criteria);
Py_DECREF(par_testing_criteria);
par_testing_criteria = NULL;
CHECK_OBJECT(par_metadata);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
par_metadata = NULL;
CHECK_OBJECT(par_name);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
par_name = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
CHECK_OBJECT(par_extra_query);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
par_extra_query = NULL;
CHECK_OBJECT(par_extra_body);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
par_extra_body = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
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
struct openai$resources$evals$evals$$$function__12_create$$$coroutine__1_create_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$evals$evals$$$function__12_create$$$coroutine__1_create_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$evals$evals$$$function__12_create$$$coroutine__1_create_locals *coroutine_heap = (struct openai$resources$evals$evals$$$function__12_create$$$coroutine__1_create_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5a86191db0a6827c317d77679d6ec42c, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_2_2;
coroutine->m_frame->m_frame.f_lineno = 373;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 373;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__post);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 373;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 375;
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$async_maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 375;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_data_source_config;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data_source_config);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_1 = _PyDict_NewPresized( 4 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_testing_criteria;
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_testing_criteria);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccccccccc";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_metadata;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_metadata);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 379;
coroutine_heap->type_description_1 = "ccccccccc";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = const_str_plain_name;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 380;
coroutine_heap->type_description_1 = "ccccccccc";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_expression_value_6 = module_var_accessor_openai$resources$evals$evals$eval_create_params(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_create_params);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_EvalCreateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 375;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 375;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 375;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 375;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = yield_return_value;
tmp_called_value_3 = module_var_accessor_openai$resources$evals$evals$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 385;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 385;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 385;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 385;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[8]);
coroutine->m_frame->m_frame.f_lineno = 384;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = module_var_accessor_openai$resources$evals$evals$EvalCreateResponse(tstate);
if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_EvalCreateResponse);
}

if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 373;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_2};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_938a6f6c85c78e320d476f8d0f139537_tuple, kw_values, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 373;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 373;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_value_2_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_value_2_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 373;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[6],
    coroutine->m_closure[0],
    coroutine->m_closure[7],
    coroutine->m_closure[4],
    coroutine->m_closure[5],
    coroutine->m_closure[2],
    coroutine->m_closure[3],
    coroutine->m_closure[1],
    coroutine->m_closure[8]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$evals$evals$$$function__12_create$$$coroutine__1_create(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$evals$evals$$$function__12_create$$$coroutine__1_create_context,
        module_openai$resources$evals$evals,
        mod_consts.const_str_plain_create,
        mod_consts.const_str_digest_629f9ba5c6ae184b0fc4983bd3cf9819,
        code_objects_5a86191db0a6827c317d77679d6ec42c,
        closure,
        9,
#if 1
        sizeof(struct openai$resources$evals$evals$$$function__12_create$$$coroutine__1_create_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$evals$evals$$$function__13_retrieve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_eval_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[5]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[6];
tmp_closure_1[0] = par_eval_id;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_body;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_headers;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_extra_query;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_timeout;
Py_INCREF(tmp_closure_1[5]);
tmp_return_value = MAKE_COROUTINE_openai$resources$evals$evals$$$function__13_retrieve$$$coroutine__1_retrieve(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_eval_id);
CHECK_OBJECT(par_eval_id);
Py_DECREF(par_eval_id);
par_eval_id = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
CHECK_OBJECT(par_extra_query);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
par_extra_query = NULL;
CHECK_OBJECT(par_extra_body);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
par_extra_body = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
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
struct openai$resources$evals$evals$$$function__13_retrieve$$$coroutine__1_retrieve_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$evals$evals$$$function__13_retrieve$$$coroutine__1_retrieve_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$evals$evals$$$function__13_retrieve$$$coroutine__1_retrieve_locals *coroutine_heap = (struct openai$resources$evals$evals$$$function__13_retrieve$$$coroutine__1_retrieve_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_0cacaf92edeeaa077f7ae0bd1c684576, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 413;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 413;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_68bf73ccc80c1d4638349decd0b5ed2e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cccccc";
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
coroutine->m_frame->m_frame.f_lineno = 414;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 414;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 415;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 415;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 415;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_66905a7339355b571a7958406c96c3c1;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 416;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_2;
}

tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 416;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 417;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine->m_frame->m_frame.f_lineno = 417;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 417;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$evals$evals$EvalRetrieveResponse(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_EvalRetrieveResponse);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 420;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 415;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 415;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 415;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 415;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[4],
    coroutine->m_closure[0],
    coroutine->m_closure[2],
    coroutine->m_closure[3],
    coroutine->m_closure[1],
    coroutine->m_closure[5]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$evals$evals$$$function__13_retrieve$$$coroutine__1_retrieve(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$evals$evals$$$function__13_retrieve$$$coroutine__1_retrieve_context,
        module_openai$resources$evals$evals,
        mod_consts.const_str_plain_retrieve,
        mod_consts.const_str_digest_dbbb6b1a6ce4f3fc3e70aaa37cacebd4,
        code_objects_0cacaf92edeeaa077f7ae0bd1c684576,
        closure,
        6,
#if 1
        sizeof(struct openai$resources$evals$evals$$$function__13_retrieve$$$coroutine__1_retrieve_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$evals$evals$$$function__14_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_eval_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_metadata = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_eval_id;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_body;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_headers;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_extra_query;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_metadata;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_name;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_self;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_timeout;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_openai$resources$evals$evals$$$function__14_update$$$coroutine__1_update(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_eval_id);
CHECK_OBJECT(par_eval_id);
Py_DECREF(par_eval_id);
par_eval_id = NULL;
CHECK_OBJECT(par_metadata);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
par_metadata = NULL;
CHECK_OBJECT(par_name);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
par_name = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
CHECK_OBJECT(par_extra_query);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
par_extra_query = NULL;
CHECK_OBJECT(par_extra_body);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
par_extra_body = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
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
struct openai$resources$evals$evals$$$function__14_update$$$coroutine__1_update_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$evals$evals$$$function__14_update$$$coroutine__1_update_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$evals$evals$$$function__14_update$$$coroutine__1_update_locals *coroutine_heap = (struct openai$resources$evals$evals$$$function__14_update$$$coroutine__1_update_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c45705c402900a679c8460f8009143fb, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 457;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 457;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_68bf73ccc80c1d4638349decd0b5ed2e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 458;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 458;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 458;
coroutine_heap->type_description_1 = "cccccccc";
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
coroutine->m_frame->m_frame.f_lineno = 458;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 458;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccccc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_2_1;
coroutine->m_frame->m_frame.f_lineno = 459;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__post);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_66905a7339355b571a7958406c96c3c1;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 460;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_2;
}

tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 460;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
coroutine->m_frame->m_frame.f_lineno = 461;
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$async_maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_metadata;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_metadata);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 463;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_args_element_value_1 = _PyDict_NewPresized( 2 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = const_str_plain_name;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 464;
coroutine_heap->type_description_1 = "cccccccc";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_expression_value_6 = module_var_accessor_openai$resources$evals$evals$eval_update_params(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_update_params);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 466;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_EvalUpdateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 466;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 461;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = yield_return_value;
tmp_called_value_3 = module_var_accessor_openai$resources$evals$evals$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 469;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 469;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 469;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 469;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine->m_frame->m_frame.f_lineno = 468;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$evals$evals$EvalUpdateResponse(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_EvalUpdateResponse);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 459;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[6],
    coroutine->m_closure[0],
    coroutine->m_closure[4],
    coroutine->m_closure[5],
    coroutine->m_closure[2],
    coroutine->m_closure[3],
    coroutine->m_closure[1],
    coroutine->m_closure[7]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$evals$evals$$$function__14_update$$$coroutine__1_update(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$evals$evals$$$function__14_update$$$coroutine__1_update_context,
        module_openai$resources$evals$evals,
        mod_consts.const_str_plain_update,
        mod_consts.const_str_digest_d7048fcc381a02ea83e60481cd7ca1b4,
        code_objects_c45705c402900a679c8460f8009143fb,
        closure,
        8,
#if 1
        sizeof(struct openai$resources$evals$evals$$$function__14_update$$$coroutine__1_update_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$evals$evals$$$function__15_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_after = python_pars[1];
PyObject *par_limit = python_pars[2];
PyObject *par_order = python_pars[3];
PyObject *par_order_by = python_pars[4];
PyObject *par_extra_headers = python_pars[5];
PyObject *par_extra_query = python_pars[6];
PyObject *par_extra_body = python_pars[7];
PyObject *par_timeout = python_pars[8];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__15_list;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__15_list = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__15_list)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__15_list);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__15_list == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__15_list = MAKE_FUNCTION_FRAME(tstate, code_objects_cea59072d2d5b09bb4b1bb947f8fffdb, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__15_list->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__15_list = cache_frame_frame_openai$resources$evals$evals$$$function__15_list;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__15_list);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__15_list) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_2_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get_api_list);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_openai$resources$evals$evals$AsyncCursorPage(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncCursorPage);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 512;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_openai$resources$evals$evals$EvalListResponse(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalListResponse);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 512;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 512;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 513;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_extra_headers);
tmp_kw_call_value_0_2 = par_extra_headers;
CHECK_OBJECT(par_extra_query);
tmp_kw_call_value_1_2 = par_extra_query;
CHECK_OBJECT(par_extra_body);
tmp_kw_call_value_2_1 = par_extra_body;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
tmp_called_value_3 = module_var_accessor_openai$resources$evals$evals$maybe_transform(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 518;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_after;
CHECK_OBJECT(par_after);
tmp_dict_value_1 = par_after;
tmp_args_element_value_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_limit;
CHECK_OBJECT(par_limit);
tmp_dict_value_1 = par_limit;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_order;
CHECK_OBJECT(par_order);
tmp_dict_value_1 = par_order;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_order_by;
CHECK_OBJECT(par_order_by);
tmp_dict_value_1 = par_order_by;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_3 = module_var_accessor_openai$resources$evals$evals$eval_list_params(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_eval_list_params);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 525;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_EvalListParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 525;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__15_list->m_frame.f_lineno = 518;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_kw_call_value_4_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 518;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__15_list->m_frame.f_lineno = 513;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 513;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = module_var_accessor_openai$resources$evals$evals$EvalListResponse(tstate);
if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EvalListResponse);
}

if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 528;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__15_list->m_frame.f_lineno = 510;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_2};
    tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_938a6f6c85c78e320d476f8d0f139537_tuple, kw_values, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "ooooooooo";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__15_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__15_list->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__15_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__15_list,
    type_description_1,
    par_self,
    par_after,
    par_limit,
    par_order,
    par_order_by,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__15_list == cache_frame_frame_openai$resources$evals$evals$$$function__15_list) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__15_list);
    cache_frame_frame_openai$resources$evals$evals$$$function__15_list = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__15_list);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_after);
Py_DECREF(par_after);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
CHECK_OBJECT(par_order_by);
Py_DECREF(par_order_by);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_after);
Py_DECREF(par_after);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
CHECK_OBJECT(par_order_by);
Py_DECREF(par_order_by);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$evals$evals$$$function__16_delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_eval_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[5]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[6];
tmp_closure_1[0] = par_eval_id;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_body;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_headers;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_extra_query;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_timeout;
Py_INCREF(tmp_closure_1[5]);
tmp_return_value = MAKE_COROUTINE_openai$resources$evals$evals$$$function__16_delete$$$coroutine__1_delete(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_eval_id);
CHECK_OBJECT(par_eval_id);
Py_DECREF(par_eval_id);
par_eval_id = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
CHECK_OBJECT(par_extra_query);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
par_extra_query = NULL;
CHECK_OBJECT(par_extra_body);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
par_extra_body = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
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
struct openai$resources$evals$evals$$$function__16_delete$$$coroutine__1_delete_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$evals$evals$$$function__16_delete$$$coroutine__1_delete_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$evals$evals$$$function__16_delete$$$coroutine__1_delete_locals *coroutine_heap = (struct openai$resources$evals$evals$$$function__16_delete$$$coroutine__1_delete_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_726637282a85518acec8045e9583f890, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 554;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 554;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_68bf73ccc80c1d4638349decd0b5ed2e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 555;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 555;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 555;
coroutine_heap->type_description_1 = "cccccc";
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
coroutine->m_frame->m_frame.f_lineno = 555;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 555;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 556;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 556;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__delete);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 556;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_66905a7339355b571a7958406c96c3c1;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_eval_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_2;
}

tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 558;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 559;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 559;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 559;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 559;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine->m_frame->m_frame.f_lineno = 558;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 558;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$evals$evals$EvalDeleteResponse(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_EvalDeleteResponse);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 561;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 556;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 556;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 556;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 556;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[4],
    coroutine->m_closure[0],
    coroutine->m_closure[2],
    coroutine->m_closure[3],
    coroutine->m_closure[1],
    coroutine->m_closure[5]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$evals$evals$$$function__16_delete$$$coroutine__1_delete(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$evals$evals$$$function__16_delete$$$coroutine__1_delete_context,
        module_openai$resources$evals$evals,
        mod_consts.const_str_plain_delete,
        mod_consts.const_str_digest_fc6e1f02d46c4447d6807c38e95ecd3e,
        code_objects_726637282a85518acec8045e9583f890,
        closure,
        6,
#if 1
        sizeof(struct openai$resources$evals$evals$$$function__16_delete$$$coroutine__1_delete_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$evals$evals$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_evals = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__17___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__17___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__17___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__17___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__17___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__17___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a8dc49ef7c51ddf8ce26f9587708e96b, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__17___init__->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__17___init__ = cache_frame_frame_openai$resources$evals$evals$$$function__17___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__17___init__);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__17___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_evals);
tmp_assattr_value_1 = par_evals;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__evals, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_2;
tmp_expression_value_1 = module_var_accessor_openai$resources$evals$evals$_legacy_response(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 569;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_2 = par_evals;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 570;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__17___init__->m_frame.f_lineno = 569;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_create, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_3;
tmp_expression_value_3 = module_var_accessor_openai$resources$evals$evals$_legacy_response(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 572;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_4 = par_evals;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 573;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__17___init__->m_frame.f_lineno = 572;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_retrieve, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_4;
tmp_expression_value_5 = module_var_accessor_openai$resources$evals$evals$_legacy_response(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 575;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_6 = par_evals;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 576;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__17___init__->m_frame.f_lineno = 575;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_update, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_5;
tmp_expression_value_7 = module_var_accessor_openai$resources$evals$evals$_legacy_response(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 578;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_8 = par_evals;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_list);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 579;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__17___init__->m_frame.f_lineno = 578;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_list, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_assattr_target_6;
tmp_expression_value_9 = module_var_accessor_openai$resources$evals$evals$_legacy_response(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 581;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_10 = par_evals;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 582;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__17___init__->m_frame.f_lineno = 581;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_delete, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__17___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__17___init__,
    type_description_1,
    par_self,
    par_evals
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__17___init__ == cache_frame_frame_openai$resources$evals$evals$$$function__17___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__17___init__);
    cache_frame_frame_openai$resources$evals$evals$$$function__17___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__17___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_evals);
Py_DECREF(par_evals);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_evals);
Py_DECREF(par_evals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$evals$evals$$$function__18_runs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__18_runs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__18_runs = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__18_runs)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__18_runs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__18_runs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__18_runs = MAKE_FUNCTION_FRAME(tstate, code_objects_469901c0733cb4c60d2fa39483c421fc, module_openai$resources$evals$evals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__18_runs->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__18_runs = cache_frame_frame_openai$resources$evals$evals$$$function__18_runs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__18_runs);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__18_runs) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$RunsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 587;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__evals);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_runs);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__18_runs->m_frame.f_lineno = 587;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__18_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__18_runs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__18_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__18_runs,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__18_runs == cache_frame_frame_openai$resources$evals$evals$$$function__18_runs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__18_runs);
    cache_frame_frame_openai$resources$evals$evals$$$function__18_runs = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__18_runs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_openai$resources$evals$evals$$$function__19___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_evals = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__19___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__19___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__19___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__19___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__19___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__19___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f86ac5c1f7c8caa072d6c5cc3a128078, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__19___init__->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__19___init__ = cache_frame_frame_openai$resources$evals$evals$$$function__19___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__19___init__);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__19___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_evals);
tmp_assattr_value_1 = par_evals;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__evals, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_2;
tmp_expression_value_1 = module_var_accessor_openai$resources$evals$evals$_legacy_response(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 594;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_2 = par_evals;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 595;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__19___init__->m_frame.f_lineno = 594;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_create, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_3;
tmp_expression_value_3 = module_var_accessor_openai$resources$evals$evals$_legacy_response(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 597;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_4 = par_evals;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 598;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__19___init__->m_frame.f_lineno = 597;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_retrieve, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_4;
tmp_expression_value_5 = module_var_accessor_openai$resources$evals$evals$_legacy_response(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 600;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_6 = par_evals;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 601;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__19___init__->m_frame.f_lineno = 600;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_update, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_5;
tmp_expression_value_7 = module_var_accessor_openai$resources$evals$evals$_legacy_response(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 603;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_8 = par_evals;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_list);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 604;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__19___init__->m_frame.f_lineno = 603;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_list, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_assattr_target_6;
tmp_expression_value_9 = module_var_accessor_openai$resources$evals$evals$_legacy_response(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 606;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_10 = par_evals;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 607;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__19___init__->m_frame.f_lineno = 606;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_delete, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__19___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__19___init__,
    type_description_1,
    par_self,
    par_evals
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__19___init__ == cache_frame_frame_openai$resources$evals$evals$$$function__19___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__19___init__);
    cache_frame_frame_openai$resources$evals$evals$$$function__19___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__19___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_evals);
Py_DECREF(par_evals);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_evals);
Py_DECREF(par_evals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$evals$evals$$$function__20_runs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__20_runs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__20_runs = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__20_runs)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__20_runs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__20_runs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__20_runs = MAKE_FUNCTION_FRAME(tstate, code_objects_47cfcfec2dbe2a4cff471175cd25021a, module_openai$resources$evals$evals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__20_runs->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__20_runs = cache_frame_frame_openai$resources$evals$evals$$$function__20_runs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__20_runs);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__20_runs) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$AsyncRunsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncRunsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 612;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__evals);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_runs);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__20_runs->m_frame.f_lineno = 612;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__20_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__20_runs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__20_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__20_runs,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__20_runs == cache_frame_frame_openai$resources$evals$evals$$$function__20_runs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__20_runs);
    cache_frame_frame_openai$resources$evals$evals$$$function__20_runs = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__20_runs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_openai$resources$evals$evals$$$function__21___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_evals = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__21___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__21___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__21___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__21___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__21___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__21___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_46b9a662fc7e52bc297ab1528481131d, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__21___init__->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__21___init__ = cache_frame_frame_openai$resources$evals$evals$$$function__21___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__21___init__);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__21___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_evals);
tmp_assattr_value_1 = par_evals;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__evals, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 619;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_1 = par_evals;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__21___init__->m_frame.f_lineno = 619;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_create, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_3;
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 622;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_2 = par_evals;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 623;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__21___init__->m_frame.f_lineno = 622;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_retrieve, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_4;
tmp_called_value_3 = module_var_accessor_openai$resources$evals$evals$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 625;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_3 = par_evals;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__21___init__->m_frame.f_lineno = 625;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_update, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_5;
tmp_called_value_4 = module_var_accessor_openai$resources$evals$evals$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 628;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_4 = par_evals;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_list);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 629;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__21___init__->m_frame.f_lineno = 628;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_list, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_6;
tmp_called_value_5 = module_var_accessor_openai$resources$evals$evals$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 631;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_5 = par_evals;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__21___init__->m_frame.f_lineno = 631;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_delete, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__21___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__21___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__21___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__21___init__,
    type_description_1,
    par_self,
    par_evals
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__21___init__ == cache_frame_frame_openai$resources$evals$evals$$$function__21___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__21___init__);
    cache_frame_frame_openai$resources$evals$evals$$$function__21___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__21___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_evals);
Py_DECREF(par_evals);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_evals);
Py_DECREF(par_evals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$evals$evals$$$function__22_runs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__22_runs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__22_runs = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__22_runs)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__22_runs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__22_runs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__22_runs = MAKE_FUNCTION_FRAME(tstate, code_objects_2d06ba8dba68b674a1e1391966e802c6, module_openai$resources$evals$evals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__22_runs->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__22_runs = cache_frame_frame_openai$resources$evals$evals$$$function__22_runs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__22_runs);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__22_runs) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$RunsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 637;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__evals);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_runs);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__22_runs->m_frame.f_lineno = 637;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__22_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__22_runs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__22_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__22_runs,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__22_runs == cache_frame_frame_openai$resources$evals$evals$$$function__22_runs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__22_runs);
    cache_frame_frame_openai$resources$evals$evals$$$function__22_runs = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__22_runs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_openai$resources$evals$evals$$$function__23___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_evals = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__23___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__23___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__23___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__23___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__23___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__23___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_12fe1aa3674fff4c51a323beb7e42ea9, module_openai$resources$evals$evals, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__23___init__->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__23___init__ = cache_frame_frame_openai$resources$evals$evals$$$function__23___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__23___init__);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__23___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_evals);
tmp_assattr_value_1 = par_evals;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__evals, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 642;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 644;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_1 = par_evals;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__23___init__->m_frame.f_lineno = 644;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_create, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_3;
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 647;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_2 = par_evals;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__23___init__->m_frame.f_lineno = 647;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_retrieve, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_4;
tmp_called_value_3 = module_var_accessor_openai$resources$evals$evals$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 650;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_3 = par_evals;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__23___init__->m_frame.f_lineno = 650;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_update, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_5;
tmp_called_value_4 = module_var_accessor_openai$resources$evals$evals$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 653;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_4 = par_evals;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_list);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__23___init__->m_frame.f_lineno = 653;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 653;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_list, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 653;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_6;
tmp_called_value_5 = module_var_accessor_openai$resources$evals$evals$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 656;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_evals);
tmp_expression_value_5 = par_evals;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__23___init__->m_frame.f_lineno = 656;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_delete, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__23___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__23___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__23___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__23___init__,
    type_description_1,
    par_self,
    par_evals
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__23___init__ == cache_frame_frame_openai$resources$evals$evals$$$function__23___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__23___init__);
    cache_frame_frame_openai$resources$evals$evals$$$function__23___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__23___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_evals);
Py_DECREF(par_evals);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_evals);
Py_DECREF(par_evals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$evals$evals$$$function__24_runs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$function__24_runs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$evals$evals$$$function__24_runs = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$evals$evals$$$function__24_runs)) {
    Py_XDECREF(cache_frame_frame_openai$resources$evals$evals$$$function__24_runs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$evals$evals$$$function__24_runs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$evals$evals$$$function__24_runs = MAKE_FUNCTION_FRAME(tstate, code_objects_96158ae32edc99e7fa22085c64fc2a6a, module_openai$resources$evals$evals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$evals$evals$$$function__24_runs->m_type_description == NULL);
frame_frame_openai$resources$evals$evals$$$function__24_runs = cache_frame_frame_openai$resources$evals$evals$$$function__24_runs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$function__24_runs);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$function__24_runs) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$resources$evals$evals$AsyncRunsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncRunsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 662;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__evals);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_runs);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$evals$evals$$$function__24_runs->m_frame.f_lineno = 662;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$function__24_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$function__24_runs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$function__24_runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$function__24_runs,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$evals$evals$$$function__24_runs == cache_frame_frame_openai$resources$evals$evals$$$function__24_runs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$evals$evals$$$function__24_runs);
    cache_frame_frame_openai$resources$evals$evals$$$function__24_runs = NULL;
}

assertFrameObject(frame_frame_openai$resources$evals$evals$$$function__24_runs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__10_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__10_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3582a0f29ea8f4f269e7f5903f4082cc,
#endif
        code_objects_284aa8305895f6eda9198ba33d83450c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__11_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__11_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d162bac5d75be7a986bb60f0acf30d5d,
#endif
        code_objects_091144284565c88ed1aa723e420c57cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__12_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__12_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_629f9ba5c6ae184b0fc4983bd3cf9819,
#endif
        code_objects_5a86191db0a6827c317d77679d6ec42c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_7120c78a3471eb637d708064c4cb4631,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__13_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__13_retrieve,
        mod_consts.const_str_plain_retrieve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dbbb6b1a6ce4f3fc3e70aaa37cacebd4,
#endif
        code_objects_0cacaf92edeeaa077f7ae0bd1c684576,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_833c5448c1d45d7c8ed0bd59ff92f30c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__14_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__14_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d7048fcc381a02ea83e60481cd7ca1b4,
#endif
        code_objects_c45705c402900a679c8460f8009143fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_d1dfd1a64fe6cc60846272f03b5299eb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__15_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__15_list,
        mod_consts.const_str_plain_list,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04d437e6b41b4883cb64c1a7f5b0238d,
#endif
        code_objects_cea59072d2d5b09bb4b1bb947f8fffdb,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_324084b38365a641ab60038fffb5af18,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__16_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__16_delete,
        mod_consts.const_str_plain_delete,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fc6e1f02d46c4447d6807c38e95ecd3e,
#endif
        code_objects_726637282a85518acec8045e9583f890,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_a8da9fd4f438b9285ffd085ee1dda350,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__17___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1d291af916a63d5c912c531aa9d91255,
#endif
        code_objects_a8dc49ef7c51ddf8ce26f9587708e96b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__18_runs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__18_runs,
        mod_consts.const_str_plain_runs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9be406495834b2950a2ca516b1ebd13e,
#endif
        code_objects_469901c0733cb4c60d2fa39483c421fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__19___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f30ce6670d09b81ed331d98084b2f0c7,
#endif
        code_objects_f86ac5c1f7c8caa072d6c5cc3a128078,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__1_runs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__1_runs,
        mod_consts.const_str_plain_runs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a4ddeafa7364688ce8b3b596d46b7840,
#endif
        code_objects_8d15f418dfbdb8bccc57db668be0ccd4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__20_runs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__20_runs,
        mod_consts.const_str_plain_runs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_844c53be2408b67f523f0898482ccb9e,
#endif
        code_objects_47cfcfec2dbe2a4cff471175cd25021a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__21___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__21___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3a0334f77b909b7fb9062c2aafb2afb6,
#endif
        code_objects_46b9a662fc7e52bc297ab1528481131d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__22_runs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__22_runs,
        mod_consts.const_str_plain_runs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_02e3fa135464fdbcd7c393aa1fab976a,
#endif
        code_objects_2d06ba8dba68b674a1e1391966e802c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__23___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__23___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f8cb45c3fbed8dc8c392c804c6d1c638,
#endif
        code_objects_12fe1aa3674fff4c51a323beb7e42ea9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__24_runs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__24_runs,
        mod_consts.const_str_plain_runs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_20e4d1ab0bc99b923fb3ad88504ea020,
#endif
        code_objects_96158ae32edc99e7fa22085c64fc2a6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__2_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__2_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b7aa4aa8b18b01fe91b2d42b5a0c8815,
#endif
        code_objects_232a1100e6037f58846e6f1a11e614a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__3_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__3_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8c221ea90afa1ed5aadcc62f74534829,
#endif
        code_objects_fb3f7d5038969975cdd8b08ae5f8cf1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__4_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__4_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ba35289f1330bb79b314052fa284f15,
#endif
        code_objects_a006bd063b761fc924d150c3e8cf0815,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_7120c78a3471eb637d708064c4cb4631,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__5_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__5_retrieve,
        mod_consts.const_str_plain_retrieve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6edca2f65de415d07028b3225580b90c,
#endif
        code_objects_b64a878b338dfb41419854bde757bb3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_833c5448c1d45d7c8ed0bd59ff92f30c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__6_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__6_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9d50d01a485d69940f7403c04f1fa7a3,
#endif
        code_objects_b619f3508d07e549151f589b217483a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_d1dfd1a64fe6cc60846272f03b5299eb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__7_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__7_list,
        mod_consts.const_str_plain_list,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8788955ef13ee73367d31615580fae44,
#endif
        code_objects_6210cd7335eace6d56f9f819764a5647,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_324084b38365a641ab60038fffb5af18,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__8_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__8_delete,
        mod_consts.const_str_plain_delete,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ac0ae152aa10325db20936b63e0c387,
#endif
        code_objects_d1f3db1ef084beafe968ce1d13e4e35c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$evals$evals,
        mod_consts.const_str_digest_a8da9fd4f438b9285ffd085ee1dda350,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$evals$evals$$$function__9_runs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$evals$evals$$$function__9_runs,
        mod_consts.const_str_plain_runs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dac150a11e7279d4200eb5e9ebaaa7d0,
#endif
        code_objects_831d9c7f623ebf292aa3467023a99b24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$evals$evals,
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

static function_impl_code const function_table_openai$resources$evals$evals[] = {
impl_openai$resources$evals$evals$$$function__1_runs,
impl_openai$resources$evals$evals$$$function__2_with_raw_response,
impl_openai$resources$evals$evals$$$function__3_with_streaming_response,
impl_openai$resources$evals$evals$$$function__4_create,
impl_openai$resources$evals$evals$$$function__5_retrieve,
impl_openai$resources$evals$evals$$$function__6_update,
impl_openai$resources$evals$evals$$$function__7_list,
impl_openai$resources$evals$evals$$$function__8_delete,
impl_openai$resources$evals$evals$$$function__9_runs,
impl_openai$resources$evals$evals$$$function__10_with_raw_response,
impl_openai$resources$evals$evals$$$function__11_with_streaming_response,
impl_openai$resources$evals$evals$$$function__12_create,
impl_openai$resources$evals$evals$$$function__13_retrieve,
impl_openai$resources$evals$evals$$$function__14_update,
impl_openai$resources$evals$evals$$$function__15_list,
impl_openai$resources$evals$evals$$$function__16_delete,
impl_openai$resources$evals$evals$$$function__17___init__,
impl_openai$resources$evals$evals$$$function__18_runs,
impl_openai$resources$evals$evals$$$function__19___init__,
impl_openai$resources$evals$evals$$$function__20_runs,
impl_openai$resources$evals$evals$$$function__21___init__,
impl_openai$resources$evals$evals$$$function__22_runs,
impl_openai$resources$evals$evals$$$function__23___init__,
impl_openai$resources$evals$evals$$$function__24_runs,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$resources$evals$evals);
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
        module_openai$resources$evals$evals,
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
        function_table_openai$resources$evals$evals,
        sizeof(function_table_openai$resources$evals$evals) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.resources.evals.evals";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$resources$evals$evals(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$resources$evals$evals");

    // Store the module for future use.
    module_openai$resources$evals$evals = module;

    moduledict_openai$resources$evals$evals = MODULE_DICT(module_openai$resources$evals$evals);

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
        PRINT_STRING("openai$resources$evals$evals: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$resources$evals$evals: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$resources$evals$evals: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.resources.evals.evals" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$resources$evals$evals\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$resources$evals$evals,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$resources$evals$evals,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$resources$evals$evals,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$resources$evals$evals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$resources$evals$evals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$resources$evals$evals);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$resources$evals$evals);
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

        UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
PyObject *tmp_import_from_8__module = NULL;
PyObject *tmp_import_from_9__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_openai$resources$evals$evals$$$class__1_Evals_37 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$class__1_Evals_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
PyObject *locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$resources$evals$evals = MAKE_MODULE_FRAME(code_objects_980c7b3dd6872616926af85fb45b61d8, module_openai$resources$evals$evals);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$resources$evals$evals$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$resources$evals$evals$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
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
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_6);
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
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_7);
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
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Literal_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 6;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Literal);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 8;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__legacy_response_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 10;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain__legacy_response,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__legacy_response);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_plain_types;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_80264cdcc63ce5403babfe5a37e92330_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 11;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

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
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_eval_list_params,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_eval_list_params);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_list_params, tmp_assign_source_12);
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
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_eval_create_params,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_eval_create_params);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_create_params, tmp_assign_source_13);
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
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_eval_update_params,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_eval_update_params);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_eval_update_params, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_588f21ecebfad4c9dbc0f7aa769b8795_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 12;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_NOT_GIVEN,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_Body,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Body);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Body, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_Query,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Query);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Query, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_Headers,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Headers);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_NotGiven,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_NotGiven);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_maybe_transform_str_plain_async_maybe_transform_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 13;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_13 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_async_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform, tmp_assign_source_23);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_cached_property_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 14;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_cached_property,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_cached_property);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_376933c40963c3ea758c5293e882d65d;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_088a3546989703aa8b5fc781b886cd18_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 15;
tmp_assign_source_25 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_16 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_Runs,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_Runs);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Runs, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_17 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_AsyncRuns,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_AsyncRuns);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRuns, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_18 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_RunsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_RunsWithRawResponse);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_RunsWithRawResponse, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_19 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_AsyncRunsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_AsyncRunsWithRawResponse);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRunsWithRawResponse, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_20 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_RunsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_RunsWithStreamingResponse);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_RunsWithStreamingResponse, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_21 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_AsyncRunsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_AsyncRunsWithStreamingResponse);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncRunsWithStreamingResponse, tmp_assign_source_31);
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
PyObject *tmp_assign_source_32;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__resource;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 23;
tmp_assign_source_32 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_32;
}
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_22 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_SyncAPIResource,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_SyncAPIResource);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_23 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_AsyncAPIResource,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_AsyncAPIResource);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource, tmp_assign_source_34);
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
PyObject *tmp_assign_source_35;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__response;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 24;
tmp_assign_source_35 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_35;
}
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_24 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_to_streamed_response_wrapper,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_25 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_async_to_streamed_response_wrapper,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper, tmp_assign_source_37);
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
PyObject *tmp_assign_source_38;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_pagination;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_SyncCursorPage_str_plain_AsyncCursorPage_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 25;
tmp_assign_source_38 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_8__module == NULL);
tmp_import_from_8__module = tmp_assign_source_38;
}
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_26 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_SyncCursorPage,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_SyncCursorPage);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncCursorPage, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_27 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_AsyncCursorPage,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_AsyncCursorPage);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCursorPage, tmp_assign_source_40);
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
PyObject *tmp_assign_source_41;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain__base_client;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple;
tmp_level_value_12 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 26;
tmp_assign_source_41 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_9__module == NULL);
tmp_import_from_9__module = tmp_assign_source_41;
}
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_28 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_AsyncPaginator,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_AsyncPaginator);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPaginator, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_29 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_make_request_options,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_make_request_options);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options, tmp_assign_source_43);
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
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_ab55976185b5f82efa04db85b4b52190;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_EvalListResponse_tuple;
tmp_level_value_13 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 27;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_EvalListResponse,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_EvalListResponse);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalListResponse, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_d73b412af85fe6f8a0c7076a59ee661d;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_EvalCreateResponse_tuple;
tmp_level_value_14 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 28;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_EvalCreateResponse,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_EvalCreateResponse);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalCreateResponse, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_digest_5e60ebc1b952446ee36fccd895ce9353;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_EvalDeleteResponse_tuple;
tmp_level_value_15 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 29;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_EvalDeleteResponse,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_EvalDeleteResponse);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalDeleteResponse, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_digest_443f7b32757908aaf0a40ebd70a578c9;
tmp_globals_arg_value_16 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_EvalUpdateResponse_tuple;
tmp_level_value_16 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 30;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_EvalUpdateResponse,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_EvalUpdateResponse);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalUpdateResponse, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_digest_96767a1987c00775c7abf3e5fe0cb8ab;
tmp_globals_arg_value_17 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_EvalRetrieveResponse_tuple;
tmp_level_value_17 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 31;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_EvalRetrieveResponse,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_EvalRetrieveResponse);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalRetrieveResponse, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_35;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_digest_8f4cfd1ed3283a1c9947c5431ec224c2;
tmp_globals_arg_value_18 = (PyObject *)moduledict_openai$resources$evals$evals;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_Metadata_tuple;
tmp_level_value_18 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 32;
tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_openai$resources$evals$evals,
        mod_consts.const_str_plain_Metadata,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_Metadata);
}

CHECK_OBJECT(tmp_import_name_from_35);
Py_DECREF(tmp_import_name_from_35);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Metadata, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_LIST2(tstate, mod_consts.const_str_plain_Evals,mod_consts.const_str_plain_AsyncEvals);
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_50);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_51;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_openai$resources$evals$evals$SyncAPIResource(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncAPIResource);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto try_except_handler_10;
}
tmp_assign_source_51 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_52 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
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


exception_lineno = 37;

    goto try_except_handler_10;
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


exception_lineno = 37;

    goto try_except_handler_10;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_10;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_54 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_54;
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


exception_lineno = 37;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_55;
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


exception_lineno = 37;

    goto try_except_handler_10;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Evals;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 37;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_55;
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


exception_lineno = 37;

    goto try_except_handler_10;
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
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_19, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_10;
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


exception_lineno = 37;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_10;
}
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 37;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 37;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_56;
}
branch_end_1:;
{
PyObject *tmp_assign_source_57;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$resources$evals$evals$$$class__1_Evals_37 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_947223c5c1cd95b7f2bc29bd912b809d;
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_Evals;
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_37;
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_12;
}
frame_frame_openai$resources$evals$evals$$$class__1_Evals_2 = MAKE_CLASS_FRAME(tstate, code_objects_7b2b9e81c5d376d3cdf36d978b874015, module_openai$resources$evals$evals, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$class__1_Evals_2);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$class__1_Evals_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = module_var_accessor_openai$resources$evals$evals$cached_property(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_dea8d280dcefbd36feaa62a481c2f5df);

tmp_args_element_value_1 = MAKE_FUNCTION_openai$resources$evals$evals$$$function__1_runs(tstate, tmp_annotations_1);

frame_frame_openai$resources$evals$evals$$$class__1_Evals_2->m_frame.f_lineno = 38;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_runs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_value_3 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_openai$resources$evals$evals$cached_property(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_9eae6a8ad038e39c5b26181073b33eb5);

tmp_args_element_value_2 = MAKE_FUNCTION_openai$resources$evals$evals$$$function__2_with_raw_response(tstate, tmp_annotations_2);

frame_frame_openai$resources$evals$evals$$$class__1_Evals_2->m_frame.f_lineno = 42;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_3;
tmp_called_value_4 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_openai$resources$evals$evals$cached_property(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_055d4ccb4e9e0eafa267c3adde6a4b2a);

tmp_args_element_value_3 = MAKE_FUNCTION_openai$resources$evals$evals$$$function__3_with_streaming_response(tstate, tmp_annotations_3);

frame_frame_openai$resources$evals$evals$$$class__1_Evals_2->m_frame.f_lineno = 52;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_4;
tmp_dict_key_1 = mod_consts.const_str_plain_metadata;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_1 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_name;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_2 = "o";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_2 = "o";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_1);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_70c0214d0eb17b9ea95f7b3d2af80860);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__4_create(tstate, tmp_kw_defaults_1, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_5;
tmp_dict_key_2 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_2 = Py_None;
tmp_kw_defaults_2 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_timeout;
tmp_dict_value_2 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_defaults_2);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_abd96e405580a6c0d5bb72500908124b);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__5_retrieve(tstate, tmp_kw_defaults_2, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_retrieve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_annotations_6;
tmp_dict_key_3 = mod_consts.const_str_plain_metadata;
tmp_dict_value_3 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_3 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = const_str_plain_name;
tmp_dict_value_3 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_timeout;
tmp_dict_value_3 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_kw_defaults_3);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_c70c26b7882adbe68f1b1e73bb68808f);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__6_update(tstate, tmp_kw_defaults_3, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_annotations_7;
tmp_dict_key_4 = mod_consts.const_str_plain_after;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_4 = _PyDict_NewPresized( 8 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_limit;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_2 = "o";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_order;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_2 = "o";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_order_by;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_2 = "o";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_timeout;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_2 = "o";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_kw_defaults_4);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_f8671feec9d39cd4d03d516e1b44f594);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__7_list(tstate, tmp_kw_defaults_4, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_list, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_annotations_8;
tmp_dict_key_5 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_5 = Py_None;
tmp_kw_defaults_5 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_timeout;
tmp_dict_value_5 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_2 = "o";
    goto dict_build_exception_5;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_5;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_kw_defaults_5);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_b4f7bb1169a37fd74b11bc58a07f72ff);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__8_delete(tstate, tmp_kw_defaults_5, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain_delete, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$class__1_Evals_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$class__1_Evals_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$class__1_Evals_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$class__1_Evals_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$resources$evals$evals$$$class__1_Evals_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_12;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_12;
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


exception_lineno = 37;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__1_Evals_37, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_12;
}
branch_no_3:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Evals;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$resources$evals$evals$$$class__1_Evals_37;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 37;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_12;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_58;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_57 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_57);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_openai$resources$evals$evals$$$class__1_Evals_37);
locals_openai$resources$evals$evals$$$class__1_Evals_37 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$evals$evals$$$class__1_Evals_37);
locals_openai$resources$evals$evals$$$class__1_Evals_37 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 37;
goto try_except_handler_10;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_Evals, tmp_assign_source_57);
}
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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
PyObject *tmp_assign_source_59;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_openai$resources$evals$evals$AsyncAPIResource(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncAPIResource);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;

    goto try_except_handler_13;
}
tmp_assign_source_59 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_59, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_60 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
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


exception_lineno = 301;

    goto try_except_handler_13;
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


exception_lineno = 301;

    goto try_except_handler_13;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_13;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_62;
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


exception_lineno = 301;

    goto try_except_handler_13;
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
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_13;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_AsyncEvals;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 301;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_63;
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


exception_lineno = 301;

    goto try_except_handler_13;
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
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_20, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_13;
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


exception_lineno = 301;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_13;
}
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 301;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 301;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_64;
}
branch_end_4:;
{
PyObject *tmp_assign_source_65;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_947223c5c1cd95b7f2bc29bd912b809d;
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncEvals;
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_301;
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_15;
}
frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3 = MAKE_CLASS_FRAME(tstate, code_objects_4f019fbaade939cd62c710ba30f83dac, module_openai$resources$evals$evals, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_9;
tmp_called_value_7 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_openai$resources$evals$evals$cached_property(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_92a1867ef9bb37f8d9d3b8fe72e59133);

tmp_args_element_value_4 = MAKE_FUNCTION_openai$resources$evals$evals$$$function__9_runs(tstate, tmp_annotations_9);

frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3->m_frame.f_lineno = 302;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_runs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_10;
tmp_called_value_8 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = module_var_accessor_openai$resources$evals$evals$cached_property(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_1279acb8939ddf2e14557aff603366a6);

tmp_args_element_value_5 = MAKE_FUNCTION_openai$resources$evals$evals$$$function__10_with_raw_response(tstate, tmp_annotations_10);

frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3->m_frame.f_lineno = 306;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_11;
tmp_called_value_9 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = module_var_accessor_openai$resources$evals$evals$cached_property(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_b95fbe806dc63a7c0db0991f75c4841b);

tmp_args_element_value_6 = MAKE_FUNCTION_openai$resources$evals$evals$$$function__11_with_streaming_response(tstate, tmp_annotations_11);

frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3->m_frame.f_lineno = 316;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_annotations_12;
tmp_dict_key_6 = mod_consts.const_str_plain_metadata;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 330;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_6 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = const_str_plain_name;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_2 = "o";
    goto dict_build_exception_6;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_6;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_timeout;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;
type_description_2 = "o";
    goto dict_build_exception_6;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_6;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_kw_defaults_6);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_70c0214d0eb17b9ea95f7b3d2af80860);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__12_create(tstate, tmp_kw_defaults_6, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_7;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
PyObject *tmp_annotations_13;
tmp_dict_key_7 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_7 = Py_None;
tmp_kw_defaults_7 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_timeout;
tmp_dict_value_7 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 399;
type_description_2 = "o";
    goto dict_build_exception_7;
}
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_7;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_kw_defaults_7);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_abd96e405580a6c0d5bb72500908124b);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__13_retrieve(tstate, tmp_kw_defaults_7, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_retrieve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_8;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
PyObject *tmp_annotations_14;
tmp_dict_key_8 = mod_consts.const_str_plain_metadata;
tmp_dict_value_8 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 427;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_8 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = const_str_plain_name;
tmp_dict_value_8 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 428;
type_description_2 = "o";
    goto dict_build_exception_8;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_8;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_timeout;
tmp_dict_value_8 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 434;
type_description_2 = "o";
    goto dict_build_exception_8;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_8;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_kw_defaults_8);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_c70c26b7882adbe68f1b1e73bb68808f);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__14_update(tstate, tmp_kw_defaults_8, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_9;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
PyObject *tmp_annotations_15;
tmp_dict_key_9 = mod_consts.const_str_plain_after;
tmp_dict_value_9 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 477;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_9 = _PyDict_NewPresized( 8 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_limit;
tmp_dict_value_9 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 478;
type_description_2 = "o";
    goto dict_build_exception_9;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_9;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_order;
tmp_dict_value_9 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 479;
type_description_2 = "o";
    goto dict_build_exception_9;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_9;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_order_by;
tmp_dict_value_9 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 480;
type_description_2 = "o";
    goto dict_build_exception_9;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_9;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_timeout;
tmp_dict_value_9 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 486;
type_description_2 = "o";
    goto dict_build_exception_9;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_9;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
goto dict_build_no_exception_9;
// Exception handling pass through code for dict_build:
dict_build_exception_9:;
Py_DECREF(tmp_kw_defaults_9);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_9:;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_1136dc2979a681fc0c8a98ef33aa4892);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__15_list(tstate, tmp_kw_defaults_9, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_list, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_10;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
PyObject *tmp_annotations_16;
tmp_dict_key_10 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_10 = Py_None;
tmp_kw_defaults_10 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_timeout;
tmp_dict_value_10 = PyObject_GetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_10 = module_var_accessor_openai$resources$evals$evals$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 540;
type_description_2 = "o";
    goto dict_build_exception_10;
}
        Py_INCREF(tmp_dict_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_10;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
goto dict_build_no_exception_10;
// Exception handling pass through code for dict_build:
dict_build_exception_10:;
Py_DECREF(tmp_kw_defaults_10);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_10:;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_b4f7bb1169a37fd74b11bc58a07f72ff);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__16_delete(tstate, tmp_kw_defaults_10, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain_delete, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$resources$evals$evals$$$class__2_AsyncEvals_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_15;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_15;
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


exception_lineno = 301;

    goto try_except_handler_15;
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
tmp_res = PyObject_SetItem(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_15;
}
branch_no_6:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_AsyncEvals;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 301;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto try_except_handler_15;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_66;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_65 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_65);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301);
locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301);
locals_openai$resources$evals$evals$$$class__2_AsyncEvals_301 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 301;
goto try_except_handler_13;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvals, tmp_assign_source_65);
}
goto try_end_11;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_68;
}
// Tried code:
{
PyObject *tmp_assign_source_69;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_947223c5c1cd95b7f2bc29bd912b809d;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_EvalsWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_565;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_4a46d155eb1584855bef40fb4b07821d);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__17___init__(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_4 = MAKE_CLASS_FRAME(tstate, code_objects_d687a05f3d4a9d57ae81948a41b8097e, module_openai$resources$evals$evals, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_4);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_18;
tmp_called_value_11 = module_var_accessor_openai$resources$evals$evals$cached_property(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 585;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_012afb9b3add46f9d1a77345c379e2ce);

tmp_args_element_value_7 = MAKE_FUNCTION_openai$resources$evals$evals$$$function__18_runs(tstate, tmp_annotations_18);

frame_frame_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_4->m_frame.f_lineno = 585;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565, mod_consts.const_str_plain_runs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_18;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_03b6f48e679f19f9c85a429f7beaf129_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
tmp_called_value_12 = (PyObject *)&PyType_Type;
tmp_tuple_element_9 = mod_consts.const_str_plain_EvalsWithRawResponse;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 565;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 565;

    goto try_except_handler_18;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_70;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_69 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_69);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565);
locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565);
locals_openai$resources$evals$evals$$$class__3_EvalsWithRawResponse_565 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 565;
goto try_except_handler_16;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithRawResponse, tmp_assign_source_69);
}
goto try_end_12;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
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
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_72;
}
// Tried code:
{
PyObject *tmp_assign_source_73;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
tmp_dictset_value = mod_consts.const_str_digest_947223c5c1cd95b7f2bc29bd912b809d;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncEvalsWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_590;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_1b62036e06e17cdbec7298e39f0f69cb);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__19___init__(tstate, tmp_annotations_19);

tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_5 = MAKE_CLASS_FRAME(tstate, code_objects_03c0e010b0bf12a78d08ac3e2d417f93, module_openai$resources$evals$evals, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_5);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_5) == 2);

// Framed code:
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_20;
tmp_called_value_13 = module_var_accessor_openai$resources$evals$evals$cached_property(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 610;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_9e5217d07f9ea584d86c0d118b2c53f0);

tmp_args_element_value_8 = MAKE_FUNCTION_openai$resources$evals$evals$$$function__20_runs(tstate, tmp_annotations_20);

frame_frame_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_5->m_frame.f_lineno = 610;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590, mod_consts.const_str_plain_runs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_21;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_03b6f48e679f19f9c85a429f7beaf129_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
tmp_called_value_14 = (PyObject *)&PyType_Type;
tmp_tuple_element_10 = mod_consts.const_str_plain_AsyncEvalsWithRawResponse;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 590;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;

    goto try_except_handler_21;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_74;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_73 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_73);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590);
locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590);
locals_openai$resources$evals$evals$$$class__4_AsyncEvalsWithRawResponse_590 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 590;
goto try_except_handler_19;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithRawResponse, tmp_assign_source_73);
}
goto try_end_13;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
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
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_76;
}
// Tried code:
{
PyObject *tmp_assign_source_77;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
tmp_dictset_value = mod_consts.const_str_digest_947223c5c1cd95b7f2bc29bd912b809d;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_EvalsWithStreamingResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_615;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_4a46d155eb1584855bef40fb4b07821d);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__21___init__(tstate, tmp_annotations_21);

tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_6 = MAKE_CLASS_FRAME(tstate, code_objects_a5abf8a7b54fc5624e411653b6a2cd31, module_openai$resources$evals$evals, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_6);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_6) == 2);

// Framed code:
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_22;
tmp_called_value_15 = module_var_accessor_openai$resources$evals$evals$cached_property(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 635;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_d2a800fcd99225c7a6a93cdfaf7eb2f9);

tmp_args_element_value_9 = MAKE_FUNCTION_openai$resources$evals$evals$$$function__22_runs(tstate, tmp_annotations_22);

frame_frame_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_6->m_frame.f_lineno = 635;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615, mod_consts.const_str_plain_runs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_24;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_03b6f48e679f19f9c85a429f7beaf129_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_7;
tmp_called_value_16 = (PyObject *)&PyType_Type;
tmp_tuple_element_11 = mod_consts.const_str_plain_EvalsWithStreamingResponse;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 615;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;

    goto try_except_handler_24;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_78;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_77 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_77);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615);
locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615);
locals_openai$resources$evals$evals$$$class__5_EvalsWithStreamingResponse_615 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_23;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 615;
goto try_except_handler_22;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_EvalsWithStreamingResponse, tmp_assign_source_77);
}
goto try_end_14;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
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
{
PyObject *tmp_assign_source_79;
tmp_assign_source_79 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_79;
}
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_80;
}
// Tried code:
{
PyObject *tmp_assign_source_81;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
tmp_dictset_value = mod_consts.const_str_digest_947223c5c1cd95b7f2bc29bd912b809d;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_640;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_1b62036e06e17cdbec7298e39f0f69cb);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$evals$evals$$$function__23___init__(tstate, tmp_annotations_23);

tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_7 = MAKE_CLASS_FRAME(tstate, code_objects_e7631998cbace4f97ed5eed6a26e7dc2, module_openai$resources$evals$evals, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_7);
assert(Py_REFCNT(frame_frame_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_7) == 2);

// Framed code:
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_24;
tmp_called_value_17 = module_var_accessor_openai$resources$evals$evals$cached_property(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 660;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_e5526c4ebfac4252f244893d7ee8b68f);

tmp_args_element_value_10 = MAKE_FUNCTION_openai$resources$evals$evals$$$function__24_runs(tstate, tmp_annotations_24);

frame_frame_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_7->m_frame.f_lineno = 660;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640, mod_consts.const_str_plain_runs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_27;
skip_nested_handling_6:;
tmp_dictset_value = mod_consts.const_tuple_03b6f48e679f19f9c85a429f7beaf129_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_8;
tmp_called_value_18 = (PyObject *)&PyType_Type;
tmp_tuple_element_12 = mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$resources$evals$evals->m_frame.f_lineno = 640;
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 640;

    goto try_except_handler_27;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_82;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_81 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_81);
goto try_return_handler_27;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
Py_DECREF(locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640);
locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640);
locals_openai$resources$evals$evals$$$class__6_AsyncEvalsWithStreamingResponse_640 = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_26;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 640;
goto try_except_handler_25;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvalsWithStreamingResponse, tmp_assign_source_81);
}
goto try_end_15;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$evals$evals, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$evals$evals->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$evals$evals, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$resources$evals$evals);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_7:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$resources$evals$evals", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.resources.evals.evals" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$resources$evals$evals);
    return module_openai$resources$evals$evals;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$evals$evals, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$resources$evals$evals", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'anthropic$resources$beta$sessions$threads$threads'
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



/* The "module_anthropic$resources$beta$sessions$threads$threads" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$resources$beta$sessions$threads$threads;
PyDictObject *moduledict_anthropic$resources$beta$sessions$threads$threads;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Events;
PyObject *const_str_plain__client;
PyObject *const_str_plain_ThreadsWithRawResponse;
PyObject *const_str_digest_cc9d097b4c3e867b2cb93ca07b8778be;
PyObject *const_str_plain_ThreadsWithStreamingResponse;
PyObject *const_str_digest_a2b3f8f34b6ca68c25c767c5b9560a59;
PyObject *const_str_digest_b4b04d9415125b5a1f3ce99c328bcdbe;
PyObject *const_str_digest_8c408178c0bd646676e70e91fbaa9e4b;
PyObject *const_str_plain_strip_not_given;
PyObject *const_str_digest_23a18424c7eecf41c1fa0adea4459fea;
PyObject *const_str_plain_is_given;
PyObject *const_str_chr_44;
PyObject *const_str_plain_chain;
PyObject *const_str_digest_31d1d05b3da022a48c772d52fdd7f8b4;
PyObject *const_str_plain_not_given;
PyObject *const_dict_2f50e5703eb04812a608b45ac9a9937c;
PyObject *const_str_plain__get;
PyObject *const_str_plain_path_template;
PyObject *const_tuple_str_digest_c9d0d0e8c811aeb479b338c48647b17e_tuple;
PyObject *const_tuple_str_plain_session_id_str_plain_thread_id_tuple;
PyObject *const_str_plain_make_request_options;
PyObject *const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple;
PyObject *const_str_plain_BetaManagedAgentsSessionThread;
PyObject *const_tuple_str_plain_options_str_plain_cast_to_tuple;
PyObject *const_str_digest_b299af0f5e5750a93c5efcb6be21e001;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_7fb6222b88ccb739ec28dfbcde31b57b;
PyObject *const_str_plain__get_api_list;
PyObject *const_tuple_str_digest_15c6b5be896216991efd063f41b7d81c_tuple;
PyObject *const_tuple_str_plain_session_id_tuple;
PyObject *const_str_plain_SyncPageCursor;
PyObject *const_str_plain_maybe_transform;
PyObject *const_str_plain_limit;
PyObject *const_str_plain_page;
PyObject *const_str_plain_thread_list_params;
PyObject *const_str_plain_ThreadListParams;
PyObject *const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple;
PyObject *const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple;
PyObject *const_str_digest_df9c4a0eb275612190d580273335f264;
PyObject *const_str_digest_c86f30fdb1188f0d35792ea754ed1a8a;
PyObject *const_str_plain__post;
PyObject *const_tuple_str_digest_c9ae248c4f9d87246557806f78ceb54a_tuple;
PyObject *const_str_digest_531f896873fb0e9ebec730530ec90734;
PyObject *const_str_digest_5806f1dfa1065c2b9ef8c338319f4ddb;
PyObject *const_str_plain_AsyncEvents;
PyObject *const_str_plain_AsyncThreadsWithRawResponse;
PyObject *const_str_plain_AsyncThreadsWithStreamingResponse;
PyObject *const_str_plain_session_id;
PyObject *const_str_plain_thread_id;
PyObject *const_str_plain_betas;
PyObject *const_str_plain_extra_headers;
PyObject *const_str_plain_self;
PyObject *const_str_plain_extra_query;
PyObject *const_str_plain_extra_body;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_retrieve;
PyObject *const_str_digest_d5cf6cb275fac23596f35703bfc29ba5;
PyObject *const_str_digest_f251ef981dafce22c9a2d7b530bdf53d;
PyObject *const_str_plain_AsyncPageCursor;
PyObject *const_str_digest_b8a5e7c34b393b1bd52c857f0c473867;
PyObject *const_str_plain_archive;
PyObject *const_str_digest_d8294341b850b4a61d2eac62062cfee8;
PyObject *const_str_digest_f7d98e75d141d2af44a3f0024b057cb9;
PyObject *const_str_plain__threads;
PyObject *const_str_plain__legacy_response;
PyObject *const_str_plain_to_raw_response_wrapper;
PyObject *const_str_plain_list;
PyObject *const_str_plain_EventsWithRawResponse;
PyObject *const_str_plain_events;
PyObject *const_str_plain_async_to_raw_response_wrapper;
PyObject *const_str_plain_AsyncEventsWithRawResponse;
PyObject *const_str_plain_to_streamed_response_wrapper;
PyObject *const_str_plain_EventsWithStreamingResponse;
PyObject *const_str_plain_async_to_streamed_response_wrapper;
PyObject *const_str_plain_AsyncEventsWithStreamingResponse;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_List;
PyObject *const_str_plain_itertools;
PyObject *const_tuple_str_plain_chain_tuple;
PyObject *const_str_plain_httpx;
PyObject *const_tuple_str_plain__legacy_response_tuple;
PyObject *const_int_pos_5;
PyObject *const_tuple_11af28b2e07f98d87574793b5b8fbc5e_tuple;
PyObject *const_str_plain__types;
PyObject *const_tuple_07016efe8cd4ed2e66700c3bc169e261_tuple;
PyObject *const_str_plain_Body;
PyObject *const_str_plain_Omit;
PyObject *const_str_plain_Query;
PyObject *const_str_plain_Headers;
PyObject *const_str_plain_NotGiven;
PyObject *const_str_plain_omit;
PyObject *const_str_plain__utils;
PyObject *const_tuple_2cae30cf81c292629f7888f30efed195_tuple;
PyObject *const_str_plain__compat;
PyObject *const_tuple_str_plain_cached_property_tuple;
PyObject *const_str_plain_cached_property;
PyObject *const_str_plain__resource;
PyObject *const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple;
PyObject *const_str_plain_SyncAPIResource;
PyObject *const_str_plain_AsyncAPIResource;
PyObject *const_str_plain__response;
PyObject *const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple;
PyObject *const_str_plain_pagination;
PyObject *const_tuple_str_plain_SyncPageCursor_str_plain_AsyncPageCursor_tuple;
PyObject *const_str_plain__base_client;
PyObject *const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple;
PyObject *const_str_plain_AsyncPaginator;
PyObject *const_str_digest_034db19e132b383f67def7d430d9916a;
PyObject *const_tuple_str_plain_thread_list_params_tuple;
PyObject *const_str_digest_d5a4501ea1d87b503d9013c81caa343a;
PyObject *const_tuple_str_plain_AnthropicBetaParam_tuple;
PyObject *const_str_plain_AnthropicBetaParam;
PyObject *const_str_digest_76341c9a0b60037d1c9c3bc2e49272ba;
PyObject *const_tuple_str_plain_BetaManagedAgentsSessionThread_tuple;
PyObject *const_str_plain_Threads;
PyObject *const_str_plain_AsyncThreads;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_1f4c0364067c7ab15f03bda450d89e2f;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_33;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_880bd9b200113fec2ce7c28b303b1e5e;
PyObject *const_str_digest_3e9a68b058ca0efd869f874f340830cf;
PyObject *const_dict_1ea15c5e635f4088f8bf669c0445f94e;
PyObject *const_str_plain_with_raw_response;
PyObject *const_str_digest_22202ffedf18b71e21de4bcf28eb7502;
PyObject *const_dict_dca5c7839374dc6d7fcd1e30a5f1a1bb;
PyObject *const_str_plain_with_streaming_response;
PyObject *const_str_digest_bdf093bdaf249401444826d02df3a13b;
PyObject *const_dict_cbb6ebc90afb5d5deb91d5c97cabae5d;
PyObject *const_str_digest_aa26560ac0edaae6faac31d435b2f6fb;
PyObject *const_dict_e12d440bcd5824af7d7b7e539bd520be;
PyObject *const_str_digest_e049eaf21ad98645d6f3dc8edef753e6;
PyObject *const_str_digest_195c549fe6c1fdc32f4b25f281a069c5;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_229;
PyObject *const_dict_88147e9db04c3acfea848d6b2aeafb35;
PyObject *const_str_digest_2e3931de9d1da436bcf560d1d14f9398;
PyObject *const_dict_6cc21c29fb73507c304ff21b22dcc12b;
PyObject *const_str_digest_36c3ad8ad97614c892f270a045513a12;
PyObject *const_dict_cfcc8e3307ac7b1e99ae5402014bbb5e;
PyObject *const_str_digest_4695a1aa0aed310aeb3e29678403f337;
PyObject *const_dict_f303460f57508a65afb3f5352fa28dc8;
PyObject *const_str_digest_37bb534ba168cba54de10a9afffbd436;
PyObject *const_int_pos_425;
PyObject *const_dict_f6f503b777987c0efc9357102f3ccedd;
PyObject *const_str_digest_9fed56071b0bb77666e9f0094c8bba47;
PyObject *const_dict_c62c1253783757478dda8f3d37ba1e5e;
PyObject *const_str_digest_45e64490f93213489dea0f54c33cb3f8;
PyObject *const_tuple_bd4e4a1ce8bb9db5a48a8579daaae84e_tuple;
PyObject *const_int_pos_444;
PyObject *const_dict_09e00a9031e6d530d8a94954a007775e;
PyObject *const_str_digest_4af89e670f7ff31046a4aa6835c5e23b;
PyObject *const_dict_66d262d28a887f9146b542a6ad34dcc0;
PyObject *const_str_digest_ab82d06c6947745d8ae44993fe92141c;
PyObject *const_int_pos_463;
PyObject *const_str_digest_3bfbe444ebdcbdc88c925f5f2248cd44;
PyObject *const_dict_11eae713501451e3144af5fb8dde041d;
PyObject *const_str_digest_2af9163287278c807e01ac711e6666ef;
PyObject *const_int_pos_482;
PyObject *const_str_digest_11477e7244f5d049e9aa903c064531c5;
PyObject *const_dict_75cf418c44e34e5b0a5cfdf54da6ed00;
PyObject *const_str_digest_ead053a11b9e239f3c183120d43a67af;
PyObject *const_str_digest_c3e50b9039c9f291d42f419e04579dc2;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_e_tuple;
PyObject *const_str_digest_043491fe22b1ad5644ae829ed62ff6b4;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_threads_tuple;
PyObject *const_tuple_e620e66c6d5af418e725ed74028449f4_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_2006f572122980ae134eb727ebf1f91c_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[177];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.resources.beta.sessions.threads.threads"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Events);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadsWithRawResponse);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc9d097b4c3e867b2cb93ca07b8778be);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadsWithStreamingResponse);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2b3f8f34b6ca68c25c767c5b9560a59);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4b04d9415125b5a1f3ce99c328bcdbe);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c408178c0bd646676e70e91fbaa9e4b);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip_not_given);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_given);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_chain);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_31d1d05b3da022a48c772d52fdd7f8b4);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_not_given);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_dict_2f50e5703eb04812a608b45ac9a9937c);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__get);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_path_template);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c9d0d0e8c811aeb479b338c48647b17e_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_id_str_plain_thread_id_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_request_options);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_b299af0f5e5750a93c5efcb6be21e001);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_7fb6222b88ccb739ec28dfbcde31b57b);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_api_list);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_15c6b5be896216991efd063f41b7d81c_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_id_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncPageCursor);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_limit);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_page);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_thread_list_params);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadListParams);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_df9c4a0eb275612190d580273335f264);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_c86f30fdb1188f0d35792ea754ed1a8a);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__post);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c9ae248c4f9d87246557806f78ceb54a_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_531f896873fb0e9ebec730530ec90734);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_5806f1dfa1065c2b9ef8c338319f4ddb);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvents);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncThreadsWithRawResponse);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_id);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_thread_id);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_betas);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_body);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5cf6cb275fac23596f35703bfc29ba5);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_f251ef981dafce22c9a2d7b530bdf53d);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncPageCursor);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8a5e7c34b393b1bd52c857f0c473867);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_archive);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8294341b850b4a61d2eac62062cfee8);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7d98e75d141d2af44a3f0024b057cb9);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__threads);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_list);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_EventsWithRawResponse);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_events);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEventsWithRawResponse);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_streamed_response_wrapper);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_EventsWithStreamingResponse);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEventsWithStreamingResponse);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_itertools);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chain_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__legacy_response_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_11af28b2e07f98d87574793b5b8fbc5e_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_07016efe8cd4ed2e66700c3bc169e261_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_Body);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_Omit);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Query);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Headers);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_omit);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_2cae30cf81c292629f7888f30efed195_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__resource);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIResource);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResource);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain__response);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_pagination);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncPageCursor_str_plain_AsyncPageCursor_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_client);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncPaginator);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_034db19e132b383f67def7d430d9916a);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_thread_list_params_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5a4501ea1d87b503d9013c81caa343a);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnthropicBetaParam_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnthropicBetaParam);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_76341c9a0b60037d1c9c3bc2e49272ba);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionThread_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_Threads);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncThreads);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f4c0364067c7ab15f03bda450d89e2f);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_dict_880bd9b200113fec2ce7c28b303b1e5e);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e9a68b058ca0efd869f874f340830cf);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_1ea15c5e635f4088f8bf669c0445f94e);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_22202ffedf18b71e21de4bcf28eb7502);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_dca5c7839374dc6d7fcd1e30a5f1a1bb);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_bdf093bdaf249401444826d02df3a13b);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_cbb6ebc90afb5d5deb91d5c97cabae5d);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa26560ac0edaae6faac31d435b2f6fb);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_e12d440bcd5824af7d7b7e539bd520be);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_e049eaf21ad98645d6f3dc8edef753e6);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_195c549fe6c1fdc32f4b25f281a069c5);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_int_pos_229);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_88147e9db04c3acfea848d6b2aeafb35);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e3931de9d1da436bcf560d1d14f9398);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_6cc21c29fb73507c304ff21b22dcc12b);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_36c3ad8ad97614c892f270a045513a12);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_cfcc8e3307ac7b1e99ae5402014bbb5e);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_4695a1aa0aed310aeb3e29678403f337);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_dict_f303460f57508a65afb3f5352fa28dc8);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_37bb534ba168cba54de10a9afffbd436);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_int_pos_425);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_f6f503b777987c0efc9357102f3ccedd);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fed56071b0bb77666e9f0094c8bba47);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_dict_c62c1253783757478dda8f3d37ba1e5e);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_45e64490f93213489dea0f54c33cb3f8);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_bd4e4a1ce8bb9db5a48a8579daaae84e_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_444);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_09e00a9031e6d530d8a94954a007775e);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_4af89e670f7ff31046a4aa6835c5e23b);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_dict_66d262d28a887f9146b542a6ad34dcc0);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab82d06c6947745d8ae44993fe92141c);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_int_pos_463);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_3bfbe444ebdcbdc88c925f5f2248cd44);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_11eae713501451e3144af5fb8dde041d);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_2af9163287278c807e01ac711e6666ef);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_int_pos_482);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_11477e7244f5d049e9aa903c064531c5);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_75cf418c44e34e5b0a5cfdf54da6ed00);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_ead053a11b9e239f3c183120d43a67af);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3e50b9039c9f291d42f419e04579dc2);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_e_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_043491fe22b1ad5644ae829ed62ff6b4);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_threads_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_e620e66c6d5af418e725ed74028449f4_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_2006f572122980ae134eb727ebf1f91c_tuple);
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
void checkModuleConstants_anthropic$resources$beta$sessions$threads$threads(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Events);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadsWithRawResponse);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc9d097b4c3e867b2cb93ca07b8778be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc9d097b4c3e867b2cb93ca07b8778be);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadsWithStreamingResponse);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2b3f8f34b6ca68c25c767c5b9560a59));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2b3f8f34b6ca68c25c767c5b9560a59);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4b04d9415125b5a1f3ce99c328bcdbe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4b04d9415125b5a1f3ce99c328bcdbe);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c408178c0bd646676e70e91fbaa9e4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c408178c0bd646676e70e91fbaa9e4b);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip_not_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip_not_given);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_given);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_chr_44));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_44);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_chain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chain);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_31d1d05b3da022a48c772d52fdd7f8b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31d1d05b3da022a48c772d52fdd7f8b4);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_not_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_not_given);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_dict_2f50e5703eb04812a608b45ac9a9937c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2f50e5703eb04812a608b45ac9a9937c);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__get));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_path_template));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_path_template);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c9d0d0e8c811aeb479b338c48647b17e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c9d0d0e8c811aeb479b338c48647b17e_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_id_str_plain_thread_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_session_id_str_plain_thread_id_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_request_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_request_options);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionThread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_b299af0f5e5750a93c5efcb6be21e001));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b299af0f5e5750a93c5efcb6be21e001);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_7fb6222b88ccb739ec28dfbcde31b57b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7fb6222b88ccb739ec28dfbcde31b57b);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_api_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_api_list);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_15c6b5be896216991efd063f41b7d81c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_15c6b5be896216991efd063f41b7d81c_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_session_id_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncPageCursor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncPageCursor);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_transform);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_limit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_limit);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_page));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_page);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_thread_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thread_list_params);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadListParams);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_df9c4a0eb275612190d580273335f264));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df9c4a0eb275612190d580273335f264);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_c86f30fdb1188f0d35792ea754ed1a8a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c86f30fdb1188f0d35792ea754ed1a8a);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__post);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c9ae248c4f9d87246557806f78ceb54a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c9ae248c4f9d87246557806f78ceb54a_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_531f896873fb0e9ebec730530ec90734));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_531f896873fb0e9ebec730530ec90734);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_5806f1dfa1065c2b9ef8c338319f4ddb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5806f1dfa1065c2b9ef8c338319f4ddb);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEvents));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEvents);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncThreadsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncThreadsWithRawResponse);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_id);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_thread_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thread_id);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_betas));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_betas);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_headers);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_query);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_body);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retrieve);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5cf6cb275fac23596f35703bfc29ba5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5cf6cb275fac23596f35703bfc29ba5);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_f251ef981dafce22c9a2d7b530bdf53d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f251ef981dafce22c9a2d7b530bdf53d);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncPageCursor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncPageCursor);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8a5e7c34b393b1bd52c857f0c473867));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8a5e7c34b393b1bd52c857f0c473867);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_archive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_archive);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8294341b850b4a61d2eac62062cfee8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8294341b850b4a61d2eac62062cfee8);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7d98e75d141d2af44a3f0024b057cb9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7d98e75d141d2af44a3f0024b057cb9);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__threads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__threads);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__legacy_response);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_raw_response_wrapper);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_EventsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EventsWithRawResponse);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_events);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_raw_response_wrapper);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEventsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEventsWithRawResponse);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_streamed_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_streamed_response_wrapper);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_EventsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EventsWithStreamingResponse);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_streamed_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_streamed_response_wrapper);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncEventsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncEventsWithStreamingResponse);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_itertools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itertools);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chain_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_chain_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__legacy_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__legacy_response_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_int_pos_5));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_11af28b2e07f98d87574793b5b8fbc5e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_11af28b2e07f98d87574793b5b8fbc5e_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_07016efe8cd4ed2e66700c3bc169e261_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_07016efe8cd4ed2e66700c3bc169e261_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_Body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Body);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_Omit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Omit);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Query);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Headers);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotGiven);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_omit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_omit);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_2cae30cf81c292629f7888f30efed195_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2cae30cf81c292629f7888f30efed195_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cached_property_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cached_property);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__resource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__resource);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncAPIResource);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAPIResource);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain__response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__response);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_pagination));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pagination);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncPageCursor_str_plain_AsyncPageCursor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SyncPageCursor_str_plain_AsyncPageCursor_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__base_client);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncPaginator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncPaginator);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_034db19e132b383f67def7d430d9916a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_034db19e132b383f67def7d430d9916a);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_thread_list_params_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_thread_list_params_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5a4501ea1d87b503d9013c81caa343a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5a4501ea1d87b503d9013c81caa343a);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnthropicBetaParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnthropicBetaParam_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnthropicBetaParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnthropicBetaParam);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_76341c9a0b60037d1c9c3bc2e49272ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76341c9a0b60037d1c9c3bc2e49272ba);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionThread_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionThread_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_Threads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Threads);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncThreads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncThreads);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f4c0364067c7ab15f03bda450d89e2f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f4c0364067c7ab15f03bda450d89e2f);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_33));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_33);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_dict_880bd9b200113fec2ce7c28b303b1e5e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_880bd9b200113fec2ce7c28b303b1e5e);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e9a68b058ca0efd869f874f340830cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e9a68b058ca0efd869f874f340830cf);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_1ea15c5e635f4088f8bf669c0445f94e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1ea15c5e635f4088f8bf669c0445f94e);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_raw_response);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_22202ffedf18b71e21de4bcf28eb7502));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22202ffedf18b71e21de4bcf28eb7502);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_dca5c7839374dc6d7fcd1e30a5f1a1bb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dca5c7839374dc6d7fcd1e30a5f1a1bb);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_streaming_response);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_bdf093bdaf249401444826d02df3a13b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bdf093bdaf249401444826d02df3a13b);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_cbb6ebc90afb5d5deb91d5c97cabae5d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cbb6ebc90afb5d5deb91d5c97cabae5d);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa26560ac0edaae6faac31d435b2f6fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa26560ac0edaae6faac31d435b2f6fb);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_e12d440bcd5824af7d7b7e539bd520be));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e12d440bcd5824af7d7b7e539bd520be);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_e049eaf21ad98645d6f3dc8edef753e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e049eaf21ad98645d6f3dc8edef753e6);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_195c549fe6c1fdc32f4b25f281a069c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_195c549fe6c1fdc32f4b25f281a069c5);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_int_pos_229));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_229);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_88147e9db04c3acfea848d6b2aeafb35));
CHECK_OBJECT_DEEP(mod_consts.const_dict_88147e9db04c3acfea848d6b2aeafb35);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e3931de9d1da436bcf560d1d14f9398));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e3931de9d1da436bcf560d1d14f9398);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_6cc21c29fb73507c304ff21b22dcc12b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6cc21c29fb73507c304ff21b22dcc12b);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_36c3ad8ad97614c892f270a045513a12));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36c3ad8ad97614c892f270a045513a12);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_cfcc8e3307ac7b1e99ae5402014bbb5e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cfcc8e3307ac7b1e99ae5402014bbb5e);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_4695a1aa0aed310aeb3e29678403f337));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4695a1aa0aed310aeb3e29678403f337);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_dict_f303460f57508a65afb3f5352fa28dc8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f303460f57508a65afb3f5352fa28dc8);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_37bb534ba168cba54de10a9afffbd436));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37bb534ba168cba54de10a9afffbd436);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_int_pos_425));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_425);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_f6f503b777987c0efc9357102f3ccedd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f6f503b777987c0efc9357102f3ccedd);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fed56071b0bb77666e9f0094c8bba47));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9fed56071b0bb77666e9f0094c8bba47);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_dict_c62c1253783757478dda8f3d37ba1e5e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c62c1253783757478dda8f3d37ba1e5e);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_45e64490f93213489dea0f54c33cb3f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45e64490f93213489dea0f54c33cb3f8);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_bd4e4a1ce8bb9db5a48a8579daaae84e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bd4e4a1ce8bb9db5a48a8579daaae84e_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_444));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_444);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_09e00a9031e6d530d8a94954a007775e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_09e00a9031e6d530d8a94954a007775e);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_4af89e670f7ff31046a4aa6835c5e23b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4af89e670f7ff31046a4aa6835c5e23b);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_dict_66d262d28a887f9146b542a6ad34dcc0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_66d262d28a887f9146b542a6ad34dcc0);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab82d06c6947745d8ae44993fe92141c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab82d06c6947745d8ae44993fe92141c);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_int_pos_463));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_463);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_3bfbe444ebdcbdc88c925f5f2248cd44));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3bfbe444ebdcbdc88c925f5f2248cd44);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_11eae713501451e3144af5fb8dde041d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_11eae713501451e3144af5fb8dde041d);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_2af9163287278c807e01ac711e6666ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2af9163287278c807e01ac711e6666ef);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_int_pos_482));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_482);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_11477e7244f5d049e9aa903c064531c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11477e7244f5d049e9aa903c064531c5);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_75cf418c44e34e5b0a5cfdf54da6ed00));
CHECK_OBJECT_DEEP(mod_consts.const_dict_75cf418c44e34e5b0a5cfdf54da6ed00);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_ead053a11b9e239f3c183120d43a67af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ead053a11b9e239f3c183120d43a67af);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3e50b9039c9f291d42f419e04579dc2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3e50b9039c9f291d42f419e04579dc2);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_e_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_043491fe22b1ad5644ae829ed62ff6b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_043491fe22b1ad5644ae829ed62ff6b4);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_threads_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_threads_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_e620e66c6d5af418e725ed74028449f4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e620e66c6d5af418e725ed74028449f4_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_2006f572122980ae134eb727ebf1f91c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2006f572122980ae134eb727ebf1f91c_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 29
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
static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncAPIResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncEvents(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvents);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncEvents);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncEvents, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncEvents);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncEvents, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvents);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvents);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvents);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncEventsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEventsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncEventsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncEventsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncEventsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncEventsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEventsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEventsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEventsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncEventsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEventsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncEventsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncEventsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncEventsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncEventsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEventsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEventsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEventsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncPageCursor(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPageCursor);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncPageCursor);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncPageCursor, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncPageCursor);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncPageCursor, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPageCursor);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPageCursor);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPageCursor);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncThreadsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreadsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncThreadsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncThreadsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncThreadsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncThreadsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreadsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreadsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreadsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncThreadsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$BetaManagedAgentsSessionThread(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsSessionThread, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsSessionThread, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$Events(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Events);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Events, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Events);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Events, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$EventsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_EventsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EventsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EventsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EventsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EventsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_EventsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_EventsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EventsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$EventsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_EventsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EventsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EventsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EventsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EventsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_EventsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_EventsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EventsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$SyncAPIResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$SyncPageCursor(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncPageCursor);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncPageCursor);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncPageCursor, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncPageCursor);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncPageCursor, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncPageCursor);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncPageCursor);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncPageCursor);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$ThreadsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$ThreadsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$_legacy_response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$async_to_streamed_response_wrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$chain(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_chain);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chain);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chain, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chain);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chain, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_chain);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_chain);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_chain);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$is_given(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_given);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_given, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_given);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_given, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$make_request_options(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$maybe_transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_not_given);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_not_given);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_not_given, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_not_given);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_not_given, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_not_given);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_not_given);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_not_given);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_omit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_omit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_omit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_omit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_omit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_omit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_omit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_omit);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$path_template(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_path_template);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_path_template);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_path_template, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_path_template);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_path_template, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_path_template);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_path_template);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_path_template);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$strip_not_given(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_not_given);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_strip_not_given);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_strip_not_given, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_strip_not_given);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_strip_not_given, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_not_given);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_not_given);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_not_given);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$thread_list_params(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_thread_list_params);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_thread_list_params);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_thread_list_params, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_thread_list_params);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_thread_list_params, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_thread_list_params);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_thread_list_params);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_thread_list_params);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$resources$beta$sessions$threads$threads$to_streamed_response_wrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$resources$beta$sessions$threads$threads->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f46279e7721635811c3146fed28001d1;
static PyCodeObject *code_objects_2b8fd213f67e6bced6f16a780ca26065;
static PyCodeObject *code_objects_842348904dc5d66241b1499c6903e8de;
static PyCodeObject *code_objects_c29183f6991c12c5389cff151cf1e005;
static PyCodeObject *code_objects_4c15f0f5e0dbac2270b09e84689b2915;
static PyCodeObject *code_objects_06f5dc889cdbb700dfe90b1d1c4d40d4;
static PyCodeObject *code_objects_5a12adcd9b5d4f7eadc8c014ed839e88;
static PyCodeObject *code_objects_e22d05e285b79e3637627ffb1042a1d0;
static PyCodeObject *code_objects_06ff4cf8e8702c5676647fa01c97bdef;
static PyCodeObject *code_objects_399c558d8ed09361f1a4d9f0c48f88f5;
static PyCodeObject *code_objects_bd89f34067ac69a3ec42b9350d104255;
static PyCodeObject *code_objects_450832156ecfc1dc68a37ab13627b14a;
static PyCodeObject *code_objects_f421702f33ad237e7e5fff39c50a1fc3;
static PyCodeObject *code_objects_f7296fc26080c56b6ce20e461df47d89;
static PyCodeObject *code_objects_1f623ab726de7e93fb994b79566c874f;
static PyCodeObject *code_objects_1a7792eac9898939a8522bd80474444e;
static PyCodeObject *code_objects_7c74acb253dd545e420cca27d20d8a42;
static PyCodeObject *code_objects_8f2349737cd1f48c4486eeb08427fd1a;
static PyCodeObject *code_objects_2a22b146bcef05cf1000001da222fe85;
static PyCodeObject *code_objects_166a5aea9f96f3c9dbfe9e44721948df;
static PyCodeObject *code_objects_c4aa65e89086c1fc3bfe3a05d54f9781;
static PyCodeObject *code_objects_06a7bdb40ae2beb93a5eda2326e1ecaa;
static PyCodeObject *code_objects_4d8c71f9c1c8a34aa9b6ffd93c887029;
static PyCodeObject *code_objects_571c6e68f06aee0fc024244a7f238e5e;
static PyCodeObject *code_objects_f54f02f3c0578ca12ce0f0ac92f02b20;
static PyCodeObject *code_objects_8d854b971092ca5ed3c5296fceaf3a13;
static PyCodeObject *code_objects_d6baf1aff38c60344bcfb81e31617019;
static PyCodeObject *code_objects_6763d3d051dee0fedc99007da0e05ad7;
static PyCodeObject *code_objects_77ad713834deaea4b6b90f37d826fa18;
static PyCodeObject *code_objects_229f458c2dea71de452e6f2c4f78c153;
static PyCodeObject *code_objects_d9c80e38b6a571e28ff1b1bcebac98b6;
static PyCodeObject *code_objects_65c7ba97cb8235984e7378fa2b8fb44f;
static PyCodeObject *code_objects_7fea44885daa611bfc058efbd308439a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c3e50b9039c9f291d42f419e04579dc2); CHECK_OBJECT(module_filename_obj);
code_objects_f46279e7721635811c3146fed28001d1 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_f7d98e75d141d2af44a3f0024b057cb9, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_e_tuple, NULL, 1, 0, 0);
code_objects_2b8fd213f67e6bced6f16a780ca26065 = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_b8a5e7c34b393b1bd52c857f0c473867, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_e_tuple, NULL, 1, 0, 0);
code_objects_842348904dc5d66241b1499c6903e8de = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_f251ef981dafce22c9a2d7b530bdf53d, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_e_tuple, NULL, 1, 0, 0);
code_objects_c29183f6991c12c5389cff151cf1e005 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_5806f1dfa1065c2b9ef8c338319f4ddb, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_e_tuple, NULL, 1, 0, 0);
code_objects_4c15f0f5e0dbac2270b09e84689b2915 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_c86f30fdb1188f0d35792ea754ed1a8a, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_e_tuple, NULL, 1, 0, 0);
code_objects_06f5dc889cdbb700dfe90b1d1c4d40d4 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_7fb6222b88ccb739ec28dfbcde31b57b, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_e_tuple, NULL, 1, 0, 0);
code_objects_5a12adcd9b5d4f7eadc8c014ed839e88 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_043491fe22b1ad5644ae829ed62ff6b4, mod_consts.const_str_digest_043491fe22b1ad5644ae829ed62ff6b4, NULL, NULL, 0, 0, 0);
code_objects_e22d05e285b79e3637627ffb1042a1d0 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncThreads, mod_consts.const_str_plain_AsyncThreads, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_06ff4cf8e8702c5676647fa01c97bdef = MAKE_CODE_OBJECT(module_filename_obj, 444, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncThreadsWithRawResponse, mod_consts.const_str_plain_AsyncThreadsWithRawResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_399c558d8ed09361f1a4d9f0c48f88f5 = MAKE_CODE_OBJECT(module_filename_obj, 482, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse, mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bd89f34067ac69a3ec42b9350d104255 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Threads, mod_consts.const_str_plain_Threads, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_450832156ecfc1dc68a37ab13627b14a = MAKE_CODE_OBJECT(module_filename_obj, 425, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadsWithRawResponse, mod_consts.const_str_plain_ThreadsWithRawResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f421702f33ad237e7e5fff39c50a1fc3 = MAKE_CODE_OBJECT(module_filename_obj, 463, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ThreadsWithStreamingResponse, mod_consts.const_str_plain_ThreadsWithStreamingResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f7296fc26080c56b6ce20e461df47d89 = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_4af89e670f7ff31046a4aa6835c5e23b, mod_consts.const_tuple_str_plain_self_str_plain_threads_tuple, NULL, 2, 0, 0);
code_objects_1f623ab726de7e93fb994b79566c874f = MAKE_CODE_OBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_11477e7244f5d049e9aa903c064531c5, mod_consts.const_tuple_str_plain_self_str_plain_threads_tuple, NULL, 2, 0, 0);
code_objects_1a7792eac9898939a8522bd80474444e = MAKE_CODE_OBJECT(module_filename_obj, 426, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_9fed56071b0bb77666e9f0094c8bba47, mod_consts.const_tuple_str_plain_self_str_plain_threads_tuple, NULL, 2, 0, 0);
code_objects_7c74acb253dd545e420cca27d20d8a42 = MAKE_CODE_OBJECT(module_filename_obj, 464, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_3bfbe444ebdcbdc88c925f5f2248cd44, mod_consts.const_tuple_str_plain_self_str_plain_threads_tuple, NULL, 2, 0, 0);
code_objects_8f2349737cd1f48c4486eeb08427fd1a = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_archive, mod_consts.const_str_digest_d8294341b850b4a61d2eac62062cfee8, mod_consts.const_tuple_e620e66c6d5af418e725ed74028449f4_tuple, NULL, 2, 6, 0);
code_objects_2a22b146bcef05cf1000001da222fe85 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_archive, mod_consts.const_str_digest_195c549fe6c1fdc32f4b25f281a069c5, mod_consts.const_tuple_e620e66c6d5af418e725ed74028449f4_tuple, NULL, 2, 6, 0);
code_objects_166a5aea9f96f3c9dbfe9e44721948df = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_events, mod_consts.const_str_digest_2e3931de9d1da436bcf560d1d14f9398, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c4aa65e89086c1fc3bfe3a05d54f9781 = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_events, mod_consts.const_str_digest_ab82d06c6947745d8ae44993fe92141c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_06a7bdb40ae2beb93a5eda2326e1ecaa = MAKE_CODE_OBJECT(module_filename_obj, 497, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_events, mod_consts.const_str_digest_ead053a11b9e239f3c183120d43a67af, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4d8c71f9c1c8a34aa9b6ffd93c887029 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_events, mod_consts.const_str_digest_3e9a68b058ca0efd869f874f340830cf, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_571c6e68f06aee0fc024244a7f238e5e = MAKE_CODE_OBJECT(module_filename_obj, 440, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_events, mod_consts.const_str_digest_45e64490f93213489dea0f54c33cb3f8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f54f02f3c0578ca12ce0f0ac92f02b20 = MAKE_CODE_OBJECT(module_filename_obj, 478, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_events, mod_consts.const_str_digest_2af9163287278c807e01ac711e6666ef, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8d854b971092ca5ed3c5296fceaf3a13 = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_list, mod_consts.const_str_digest_37bb534ba168cba54de10a9afffbd436, mod_consts.const_tuple_2006f572122980ae134eb727ebf1f91c_tuple, NULL, 2, 7, 0);
code_objects_d6baf1aff38c60344bcfb81e31617019 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_list, mod_consts.const_str_digest_e049eaf21ad98645d6f3dc8edef753e6, mod_consts.const_tuple_2006f572122980ae134eb727ebf1f91c_tuple, NULL, 2, 7, 0);
code_objects_6763d3d051dee0fedc99007da0e05ad7 = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_retrieve, mod_consts.const_str_digest_d5cf6cb275fac23596f35703bfc29ba5, mod_consts.const_tuple_e620e66c6d5af418e725ed74028449f4_tuple, NULL, 2, 6, 0);
code_objects_77ad713834deaea4b6b90f37d826fa18 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_retrieve, mod_consts.const_str_digest_aa26560ac0edaae6faac31d435b2f6fb, mod_consts.const_tuple_e620e66c6d5af418e725ed74028449f4_tuple, NULL, 2, 6, 0);
code_objects_229f458c2dea71de452e6f2c4f78c153 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_36c3ad8ad97614c892f270a045513a12, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d9c80e38b6a571e28ff1b1bcebac98b6 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_22202ffedf18b71e21de4bcf28eb7502, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_65c7ba97cb8235984e7378fa2b8fb44f = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_4695a1aa0aed310aeb3e29678403f337, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7fea44885daa611bfc058efbd308439a = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_bdf093bdaf249401444826d02df3a13b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__5_list$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__11_list$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__11_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__14_events(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__16_events(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__18_events(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__1_events(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__20_events(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__5_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__7_events(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__1_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events = MAKE_FUNCTION_FRAME(tstate, code_objects_4d8c71f9c1c8a34aa9b6ffd93c887029, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$Events(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Events);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__client);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events->m_frame.f_lineno = 36;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__1_events);

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


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_d9c80e38b6a571e28ff1b1bcebac98b6, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$ThreadsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response->m_frame.f_lineno = 46;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response);

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


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_7fea44885daa611bfc058efbd308439a, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$ThreadsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response->m_frame.f_lineno = 55;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response);

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


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_thread_id = python_pars[1];
PyObject *par_session_id = python_pars[2];
PyObject *par_betas = python_pars[3];
PyObject *par_extra_headers = python_pars[4];
PyObject *par_extra_query = python_pars[5];
PyObject *par_extra_body = python_pars[6];
PyObject *par_timeout = python_pars[7];
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve = MAKE_FUNCTION_FRAME(tstate, code_objects_77ad713834deaea4b6b90f37d826fa18, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_session_id);
tmp_operand_value_1 = par_session_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b4b04d9415125b5a1f3ce99c328bcdbe;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_session_id);
tmp_operand_value_2 = par_session_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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


exception_lineno = 85;
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
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve->m_frame.f_lineno = 85;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_thread_id);
tmp_operand_value_3 = par_thread_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooo";
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
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_8c408178c0bd646676e70e91fbaa9e4b;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_thread_id);
tmp_operand_value_4 = par_thread_id;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve->m_frame.f_lineno = 87;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 87;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$strip_not_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_not_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea;
tmp_called_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$is_given(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_betas);
tmp_args_element_value_2 = par_betas;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve->m_frame.f_lineno = 92;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 92;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
tmp_called_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$chain(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chain);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_betas);
tmp_iter_arg_1 = par_betas;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_args_element_value_3 = MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_digest_31d1d05b3da022a48c772d52fdd7f8b4);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve->m_frame.f_lineno = 91;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_dict_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_dict_value_1);
condexpr_end_1:;
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve->m_frame.f_lineno = 89;
tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_extra_headers);
tmp_or_left_value_1 = par_extra_headers;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_tuple_element_3 = tmp_or_left_value_1;
or_end_1:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_extra_headers;
    assert(old != NULL);
    par_extra_headers = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = DICT_COPY(tstate, mod_consts.const_dict_2f50e5703eb04812a608b45ac9a9937c);
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_extra_headers);
tmp_or_left_value_2 = par_extra_headers;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_4 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_tuple_element_4 = tmp_or_left_value_2;
or_end_2:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_direct_call_arg1_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_extra_headers;
    assert(old != NULL);
    par_extra_headers = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$path_template(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_path_template);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 100;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_session_id);
tmp_kw_call_value_0_1 = par_session_id;
CHECK_OBJECT(par_thread_id);
tmp_kw_call_value_1_1 = par_thread_id;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve->m_frame.f_lineno = 100;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c9d0d0e8c811aeb479b338c48647b17e_tuple, kw_values, mod_consts.const_tuple_str_plain_session_id_str_plain_thread_id_tuple);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 100;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$make_request_options(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 103;
type_description_1 = "oooooooo";
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
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve->m_frame.f_lineno = 103;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 103;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$BetaManagedAgentsSessionThread(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 106;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve->m_frame.f_lineno = 99;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve,
    type_description_1,
    par_self,
    par_thread_id,
    par_session_id,
    par_betas,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_extra_headers);
par_extra_headers = NULL;
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
CHECK_OBJECT(par_thread_id);
Py_DECREF(par_thread_id);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_betas);
Py_DECREF(par_betas);
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
CHECK_OBJECT(par_thread_id);
Py_DECREF(par_thread_id);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_betas);
Py_DECREF(par_betas);
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



#if 1
struct anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve$$$genexpr__1_genexpr_locals {
PyObject *var_e;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve$$$genexpr__1_genexpr_locals *generator_heap = (struct anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_e = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_06f5dc889cdbb700dfe90b1d1c4d40d4, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 91;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_unicode_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_e);
tmp_unicode_arg_1 = generator_heap->var_e;
tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 91;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 91;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 91;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_e
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve$$$genexpr__1_genexpr_context,
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7fb6222b88ccb739ec28dfbcde31b57b,
#endif
        code_objects_06f5dc889cdbb700dfe90b1d1c4d40d4,
        closure,
        1,
#if 1
        sizeof(struct anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__5_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_session_id = python_pars[1];
PyObject *par_limit = python_pars[2];
PyObject *par_page = python_pars[3];
PyObject *par_betas = python_pars[4];
PyObject *par_extra_headers = python_pars[5];
PyObject *par_extra_query = python_pars[6];
PyObject *par_extra_body = python_pars[7];
PyObject *par_timeout = python_pars[8];
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list = MAKE_FUNCTION_FRAME(tstate, code_objects_d6baf1aff38c60344bcfb81e31617019, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_session_id);
tmp_operand_value_1 = par_session_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooo";
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b4b04d9415125b5a1f3ce99c328bcdbe;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_session_id);
tmp_operand_value_2 = par_session_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooo";
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
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list->m_frame.f_lineno = 143;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 143;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$strip_not_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_not_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea;
tmp_called_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$is_given(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_betas);
tmp_args_element_value_2 = par_betas;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list->m_frame.f_lineno = 148;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 148;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
tmp_called_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$chain(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chain);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_betas);
tmp_iter_arg_1 = par_betas;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_args_element_value_3 = MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__5_list$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_digest_31d1d05b3da022a48c772d52fdd7f8b4);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list->m_frame.f_lineno = 147;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_dict_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_dict_value_1);
condexpr_end_1:;
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list->m_frame.f_lineno = 145;
tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_extra_headers);
tmp_or_left_value_1 = par_extra_headers;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_tuple_element_2 = tmp_or_left_value_1;
or_end_1:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_extra_headers;
    assert(old != NULL);
    par_extra_headers = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = DICT_COPY(tstate, mod_consts.const_dict_2f50e5703eb04812a608b45ac9a9937c);
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_extra_headers);
tmp_or_left_value_2 = par_extra_headers;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_3;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_tuple_element_3 = tmp_or_left_value_2;
or_end_2:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_direct_call_arg1_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_extra_headers;
    assert(old != NULL);
    par_extra_headers = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get_api_list);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$path_template(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_path_template);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 156;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_session_id);
tmp_kw_call_value_0_1 = par_session_id;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list->m_frame.f_lineno = 156;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_15c6b5be896216991efd063f41b7d81c_tuple, kw_values, mod_consts.const_tuple_str_plain_session_id_tuple);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 156;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$SyncPageCursor(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncPageCursor);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 157;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$BetaManagedAgentsSessionThread(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 157;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 157;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$make_request_options(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 158;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_extra_headers);
tmp_kw_call_value_0_2 = par_extra_headers;
CHECK_OBJECT(par_extra_query);
tmp_kw_call_value_1_1 = par_extra_query;
CHECK_OBJECT(par_extra_body);
tmp_kw_call_value_2_1 = par_extra_body;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
tmp_called_value_7 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$maybe_transform(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 163;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = mod_consts.const_str_plain_limit;
CHECK_OBJECT(par_limit);
tmp_dict_value_2 = par_limit;
tmp_args_element_value_5 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_page;
CHECK_OBJECT(par_page);
tmp_dict_value_2 = par_page;
tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_expression_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$thread_list_params(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_thread_list_params);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 168;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ThreadListParams);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 168;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list->m_frame.f_lineno = 163;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_kw_call_value_4_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 163;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list->m_frame.f_lineno = 158;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 158;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$BetaManagedAgentsSessionThread(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 171;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list->m_frame.f_lineno = 155;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list,
    type_description_1,
    par_self,
    par_session_id,
    par_limit,
    par_page,
    par_betas,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__5_list);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_extra_headers);
par_extra_headers = NULL;
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
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_page);
Py_DECREF(par_page);
CHECK_OBJECT(par_betas);
Py_DECREF(par_betas);
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
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_page);
Py_DECREF(par_page);
CHECK_OBJECT(par_betas);
Py_DECREF(par_betas);
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



#if 1
struct anthropic$resources$beta$sessions$threads$threads$$$function__5_list$$$genexpr__1_genexpr_locals {
PyObject *var_e;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *anthropic$resources$beta$sessions$threads$threads$$$function__5_list$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$resources$beta$sessions$threads$threads$$$function__5_list$$$genexpr__1_genexpr_locals *generator_heap = (struct anthropic$resources$beta$sessions$threads$threads$$$function__5_list$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_e = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4c15f0f5e0dbac2270b09e84689b2915, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 147;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_unicode_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_e);
tmp_unicode_arg_1 = generator_heap->var_e;
tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_e
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__5_list$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anthropic$resources$beta$sessions$threads$threads$$$function__5_list$$$genexpr__1_genexpr_context,
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_c86f30fdb1188f0d35792ea754ed1a8a,
#endif
        code_objects_4c15f0f5e0dbac2270b09e84689b2915,
        closure,
        1,
#if 1
        sizeof(struct anthropic$resources$beta$sessions$threads$threads$$$function__5_list$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_thread_id = python_pars[1];
PyObject *par_session_id = python_pars[2];
PyObject *par_betas = python_pars[3];
PyObject *par_extra_headers = python_pars[4];
PyObject *par_extra_query = python_pars[5];
PyObject *par_extra_body = python_pars[6];
PyObject *par_timeout = python_pars[7];
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive = MAKE_FUNCTION_FRAME(tstate, code_objects_2a22b146bcef05cf1000001da222fe85, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_session_id);
tmp_operand_value_1 = par_session_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b4b04d9415125b5a1f3ce99c328bcdbe;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_session_id);
tmp_operand_value_2 = par_session_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
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


exception_lineno = 202;
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
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive->m_frame.f_lineno = 202;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 202;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_thread_id);
tmp_operand_value_3 = par_thread_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooo";
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
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_8c408178c0bd646676e70e91fbaa9e4b;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_thread_id);
tmp_operand_value_4 = par_thread_id;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive->m_frame.f_lineno = 204;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 204;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$strip_not_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_not_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea;
tmp_called_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$is_given(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_betas);
tmp_args_element_value_2 = par_betas;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive->m_frame.f_lineno = 209;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 209;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
tmp_called_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$chain(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chain);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_betas);
tmp_iter_arg_1 = par_betas;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_args_element_value_3 = MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_digest_31d1d05b3da022a48c772d52fdd7f8b4);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive->m_frame.f_lineno = 208;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_dict_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_dict_value_1);
condexpr_end_1:;
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive->m_frame.f_lineno = 206;
tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_extra_headers);
tmp_or_left_value_1 = par_extra_headers;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_tuple_element_3 = tmp_or_left_value_1;
or_end_1:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_extra_headers;
    assert(old != NULL);
    par_extra_headers = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = DICT_COPY(tstate, mod_consts.const_dict_2f50e5703eb04812a608b45ac9a9937c);
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_extra_headers);
tmp_or_left_value_2 = par_extra_headers;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_4 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_tuple_element_4 = tmp_or_left_value_2;
or_end_2:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_direct_call_arg1_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_extra_headers;
    assert(old != NULL);
    par_extra_headers = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__post);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$path_template(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_path_template);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 217;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_session_id);
tmp_kw_call_value_0_1 = par_session_id;
CHECK_OBJECT(par_thread_id);
tmp_kw_call_value_1_1 = par_thread_id;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive->m_frame.f_lineno = 217;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c9ae248c4f9d87246557806f78ceb54a_tuple, kw_values, mod_consts.const_tuple_str_plain_session_id_str_plain_thread_id_tuple);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 217;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$make_request_options(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 222;
type_description_1 = "oooooooo";
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
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive->m_frame.f_lineno = 222;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 222;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$BetaManagedAgentsSessionThread(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 225;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive->m_frame.f_lineno = 216;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive,
    type_description_1,
    par_self,
    par_thread_id,
    par_session_id,
    par_betas,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_extra_headers);
par_extra_headers = NULL;
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
CHECK_OBJECT(par_thread_id);
Py_DECREF(par_thread_id);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_betas);
Py_DECREF(par_betas);
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
CHECK_OBJECT(par_thread_id);
Py_DECREF(par_thread_id);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_betas);
Py_DECREF(par_betas);
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



#if 1
struct anthropic$resources$beta$sessions$threads$threads$$$function__6_archive$$$genexpr__1_genexpr_locals {
PyObject *var_e;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *anthropic$resources$beta$sessions$threads$threads$$$function__6_archive$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$resources$beta$sessions$threads$threads$$$function__6_archive$$$genexpr__1_genexpr_locals *generator_heap = (struct anthropic$resources$beta$sessions$threads$threads$$$function__6_archive$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_e = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c29183f6991c12c5389cff151cf1e005, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 208;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_unicode_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_e);
tmp_unicode_arg_1 = generator_heap->var_e;
tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_e
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anthropic$resources$beta$sessions$threads$threads$$$function__6_archive$$$genexpr__1_genexpr_context,
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_5806f1dfa1065c2b9ef8c338319f4ddb,
#endif
        code_objects_c29183f6991c12c5389cff151cf1e005,
        closure,
        1,
#if 1
        sizeof(struct anthropic$resources$beta$sessions$threads$threads$$$function__6_archive$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__7_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events = MAKE_FUNCTION_FRAME(tstate, code_objects_166a5aea9f96f3c9dbfe9e44721948df, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncEvents(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncEvents);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__client);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events->m_frame.f_lineno = 232;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__7_events);

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


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_229f458c2dea71de452e6f2c4f78c153, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncThreadsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncThreadsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response->m_frame.f_lineno = 242;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response);

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


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_65c7ba97cb8235984e7378fa2b8fb44f, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncThreadsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response->m_frame.f_lineno = 251;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response);

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


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_thread_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_session_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_betas = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_betas;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_body;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_headers;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_extra_query;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_session_id;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_thread_id;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_timeout;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_thread_id);
CHECK_OBJECT(par_thread_id);
Py_DECREF(par_thread_id);
par_thread_id = NULL;
CHECK_OBJECT(par_session_id);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
par_session_id = NULL;
CHECK_OBJECT(par_betas);
CHECK_OBJECT(par_betas);
Py_DECREF(par_betas);
par_betas = NULL;
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
struct anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve_locals {
PyObject *tmp_genexpr_1__$0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve_locals *coroutine_heap = (struct anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->tmp_genexpr_1__$0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6763d3d051dee0fedc99007da0e05ad7, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_session_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 280;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 280;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b4b04d9415125b5a1f3ce99c328bcdbe;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_session_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
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


coroutine_heap->exception_lineno = 281;
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
coroutine->m_frame->m_frame.f_lineno = 281;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 281;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccccc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_thread_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_3 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_8c408178c0bd646676e70e91fbaa9e4b;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_thread_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_2;
}

tmp_operand_value_4 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
coroutine->m_frame->m_frame.f_lineno = 283;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 283;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccccc";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$strip_not_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_strip_not_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 285;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea;
tmp_called_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$is_given(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_betas);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 288;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_1);

coroutine_heap->exception_lineno = 288;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
tmp_called_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$chain(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_chain);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_betas);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->tmp_genexpr_1__$0 == NULL);
coroutine_heap->tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(coroutine_heap->tmp_genexpr_1__$0);
tmp_args_element_value_3 = MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->tmp_genexpr_1__$0);
CHECK_OBJECT(coroutine_heap->tmp_genexpr_1__$0);
Py_DECREF(coroutine_heap->tmp_genexpr_1__$0);
coroutine_heap->tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_digest_31d1d05b3da022a48c772d52fdd7f8b4);
coroutine->m_frame->m_frame.f_lineno = 287;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_dict_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 289;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_dict_value_1);
condexpr_end_1:;
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
coroutine->m_frame->m_frame.f_lineno = 285;
tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 285;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_3);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_3;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_3;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_tuple_element_3 = tmp_or_left_value_1;
or_end_1:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 284;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
    Nuitka_Cell_SET(coroutine->m_closure[2], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = DICT_COPY(tstate, mod_consts.const_dict_2f50e5703eb04812a608b45ac9a9937c);
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[2]));
tmp_or_left_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 294;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_4;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_4 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_tuple_element_4 = tmp_or_left_value_2;
or_end_2:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_direct_call_arg1_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 294;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
    Nuitka_Cell_SET(coroutine->m_closure[2], tmp_assign_source_3);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 295;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$path_template(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_path_template);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_session_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 297;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_thread_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 297;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine->m_frame->m_frame.f_lineno = 296;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c9d0d0e8c811aeb479b338c48647b17e_tuple, kw_values, mod_consts.const_tuple_str_plain_session_id_str_plain_thread_id_tuple);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$make_request_options(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[2]));
tmp_kw_call_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 300;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 300;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 300;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine->m_frame->m_frame.f_lineno = 299;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$BetaManagedAgentsSessionThread(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 302;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 295;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
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
    coroutine->m_closure[4],
    coroutine->m_closure[6],
    coroutine->m_closure[5],
    coroutine->m_closure[0],
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

static PyObject *MAKE_COROUTINE_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve_context,
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_retrieve,
        mod_consts.const_str_digest_d5cf6cb275fac23596f35703bfc29ba5,
        code_objects_6763d3d051dee0fedc99007da0e05ad7,
        closure,
        8,
#if 1
        sizeof(struct anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve_locals)
#else
        0
#endif
    );
}



#if 1
struct anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve$$$genexpr__1_genexpr_locals {
PyObject *var_e;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve$$$genexpr__1_genexpr_locals *generator_heap = (struct anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_e = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_842348904dc5d66241b1499c6903e8de, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 287;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_unicode_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_e);
tmp_unicode_arg_1 = generator_heap->var_e;
tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 287;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 287;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 287;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_e
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve$$$genexpr__1_genexpr_context,
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_f251ef981dafce22c9a2d7b530bdf53d,
#endif
        code_objects_842348904dc5d66241b1499c6903e8de,
        closure,
        1,
#if 1
        sizeof(struct anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve$$$coroutine__1_retrieve$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__11_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_session_id = python_pars[1];
PyObject *par_limit = python_pars[2];
PyObject *par_page = python_pars[3];
PyObject *par_betas = python_pars[4];
PyObject *par_extra_headers = python_pars[5];
PyObject *par_extra_query = python_pars[6];
PyObject *par_extra_body = python_pars[7];
PyObject *par_timeout = python_pars[8];
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list = MAKE_FUNCTION_FRAME(tstate, code_objects_8d854b971092ca5ed3c5296fceaf3a13, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_session_id);
tmp_operand_value_1 = par_session_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooooooo";
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b4b04d9415125b5a1f3ce99c328bcdbe;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_session_id);
tmp_operand_value_2 = par_session_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooooooo";
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
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list->m_frame.f_lineno = 339;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 339;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$strip_not_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_not_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 341;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea;
tmp_called_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$is_given(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 344;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_betas);
tmp_args_element_value_2 = par_betas;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list->m_frame.f_lineno = 344;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 344;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
tmp_called_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$chain(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chain);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_betas);
tmp_iter_arg_1 = par_betas;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_args_element_value_3 = MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__11_list$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_digest_31d1d05b3da022a48c772d52fdd7f8b4);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list->m_frame.f_lineno = 343;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_dict_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_dict_value_1);
condexpr_end_1:;
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list->m_frame.f_lineno = 341;
tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_extra_headers);
tmp_or_left_value_1 = par_extra_headers;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_tuple_element_2 = tmp_or_left_value_1;
or_end_1:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_extra_headers;
    assert(old != NULL);
    par_extra_headers = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = DICT_COPY(tstate, mod_consts.const_dict_2f50e5703eb04812a608b45ac9a9937c);
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_extra_headers);
tmp_or_left_value_2 = par_extra_headers;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_3;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_tuple_element_3 = tmp_or_left_value_2;
or_end_2:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_direct_call_arg1_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_extra_headers;
    assert(old != NULL);
    par_extra_headers = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get_api_list);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$path_template(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_path_template);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 352;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_session_id);
tmp_kw_call_value_0_1 = par_session_id;
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list->m_frame.f_lineno = 352;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_15c6b5be896216991efd063f41b7d81c_tuple, kw_values, mod_consts.const_tuple_str_plain_session_id_tuple);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 352;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncPageCursor(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncPageCursor);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$BetaManagedAgentsSessionThread(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$make_request_options(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 354;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_extra_headers);
tmp_kw_call_value_0_2 = par_extra_headers;
CHECK_OBJECT(par_extra_query);
tmp_kw_call_value_1_1 = par_extra_query;
CHECK_OBJECT(par_extra_body);
tmp_kw_call_value_2_1 = par_extra_body;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
tmp_called_value_7 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$maybe_transform(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 359;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = mod_consts.const_str_plain_limit;
CHECK_OBJECT(par_limit);
tmp_dict_value_2 = par_limit;
tmp_args_element_value_5 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_page;
CHECK_OBJECT(par_page);
tmp_dict_value_2 = par_page;
tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_expression_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$thread_list_params(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_thread_list_params);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 364;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ThreadListParams);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 364;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list->m_frame.f_lineno = 359;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_kw_call_value_4_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 359;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list->m_frame.f_lineno = 354;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 354;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$BetaManagedAgentsSessionThread(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 367;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list->m_frame.f_lineno = 351;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list,
    type_description_1,
    par_self,
    par_session_id,
    par_limit,
    par_page,
    par_betas,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__11_list);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_extra_headers);
par_extra_headers = NULL;
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
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_page);
Py_DECREF(par_page);
CHECK_OBJECT(par_betas);
Py_DECREF(par_betas);
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
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_page);
Py_DECREF(par_page);
CHECK_OBJECT(par_betas);
Py_DECREF(par_betas);
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



#if 1
struct anthropic$resources$beta$sessions$threads$threads$$$function__11_list$$$genexpr__1_genexpr_locals {
PyObject *var_e;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *anthropic$resources$beta$sessions$threads$threads$$$function__11_list$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$resources$beta$sessions$threads$threads$$$function__11_list$$$genexpr__1_genexpr_locals *generator_heap = (struct anthropic$resources$beta$sessions$threads$threads$$$function__11_list$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_e = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2b8fd213f67e6bced6f16a780ca26065, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 343;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_unicode_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_e);
tmp_unicode_arg_1 = generator_heap->var_e;
tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 343;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 343;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 343;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_e
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__11_list$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anthropic$resources$beta$sessions$threads$threads$$$function__11_list$$$genexpr__1_genexpr_context,
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_b8a5e7c34b393b1bd52c857f0c473867,
#endif
        code_objects_2b8fd213f67e6bced6f16a780ca26065,
        closure,
        1,
#if 1
        sizeof(struct anthropic$resources$beta$sessions$threads$threads$$$function__11_list$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_thread_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_session_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_betas = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_betas;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_body;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_headers;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_extra_query;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_session_id;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_thread_id;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_timeout;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_thread_id);
CHECK_OBJECT(par_thread_id);
Py_DECREF(par_thread_id);
par_thread_id = NULL;
CHECK_OBJECT(par_session_id);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
par_session_id = NULL;
CHECK_OBJECT(par_betas);
CHECK_OBJECT(par_betas);
Py_DECREF(par_betas);
par_betas = NULL;
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
struct anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive_locals {
PyObject *tmp_genexpr_1__$0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive_locals *coroutine_heap = (struct anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->tmp_genexpr_1__$0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8f2349737cd1f48c4486eeb08427fd1a, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_session_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b4b04d9415125b5a1f3ce99c328bcdbe;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_session_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 398;
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


coroutine_heap->exception_lineno = 398;
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
coroutine->m_frame->m_frame.f_lineno = 398;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 398;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccccc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_thread_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 399;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_3 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 399;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_8c408178c0bd646676e70e91fbaa9e4b;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_thread_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 400;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_2;
}

tmp_operand_value_4 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 400;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 400;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
coroutine->m_frame->m_frame.f_lineno = 400;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 400;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccccc";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$strip_not_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_strip_not_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 402;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea;
tmp_called_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$is_given(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 405;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_betas);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 405;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 405;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 405;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_1);

coroutine_heap->exception_lineno = 405;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
tmp_called_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$chain(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_chain);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 404;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_betas);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 404;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 404;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->tmp_genexpr_1__$0 == NULL);
coroutine_heap->tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(coroutine_heap->tmp_genexpr_1__$0);
tmp_args_element_value_3 = MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->tmp_genexpr_1__$0);
CHECK_OBJECT(coroutine_heap->tmp_genexpr_1__$0);
Py_DECREF(coroutine_heap->tmp_genexpr_1__$0);
coroutine_heap->tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_digest_31d1d05b3da022a48c772d52fdd7f8b4);
coroutine->m_frame->m_frame.f_lineno = 404;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 404;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 404;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_dict_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 406;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_dict_value_1);
condexpr_end_1:;
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
coroutine->m_frame->m_frame.f_lineno = 402;
tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 402;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_3);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 409;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_3;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 409;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_3;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_tuple_element_3 = tmp_or_left_value_1;
or_end_1:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 401;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
    Nuitka_Cell_SET(coroutine->m_closure[2], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = DICT_COPY(tstate, mod_consts.const_dict_2f50e5703eb04812a608b45ac9a9937c);
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[2]));
tmp_or_left_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_4;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_4 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_tuple_element_4 = tmp_or_left_value_2;
or_end_2:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_direct_call_arg1_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
    Nuitka_Cell_SET(coroutine->m_closure[2], tmp_assign_source_3);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 412;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 412;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__post);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 412;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$path_template(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_path_template);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 413;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_session_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 415;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_thread_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 416;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine->m_frame->m_frame.f_lineno = 413;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c9ae248c4f9d87246557806f78ceb54a_tuple, kw_values, mod_consts.const_tuple_str_plain_session_id_str_plain_thread_id_tuple);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 413;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$make_request_options(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[2]));
tmp_kw_call_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 419;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 419;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 419;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine->m_frame->m_frame.f_lineno = 418;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$BetaManagedAgentsSessionThread(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 421;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 412;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 412;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 412;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 412;
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
    coroutine->m_closure[4],
    coroutine->m_closure[6],
    coroutine->m_closure[5],
    coroutine->m_closure[0],
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

static PyObject *MAKE_COROUTINE_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive_context,
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_archive,
        mod_consts.const_str_digest_d8294341b850b4a61d2eac62062cfee8,
        code_objects_8f2349737cd1f48c4486eeb08427fd1a,
        closure,
        8,
#if 1
        sizeof(struct anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive_locals)
#else
        0
#endif
    );
}



#if 1
struct anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive$$$genexpr__1_genexpr_locals {
PyObject *var_e;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive$$$genexpr__1_genexpr_locals *generator_heap = (struct anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_e = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f46279e7721635811c3146fed28001d1, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 404;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_unicode_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_e);
tmp_unicode_arg_1 = generator_heap->var_e;
tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 404;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 404;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 404;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_e
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive$$$genexpr__1_genexpr_context,
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_f7d98e75d141d2af44a3f0024b057cb9,
#endif
        code_objects_f46279e7721635811c3146fed28001d1,
        closure,
        1,
#if 1
        sizeof(struct anthropic$resources$beta$sessions$threads$threads$$$function__12_archive$$$coroutine__1_archive$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_threads = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1a7792eac9898939a8522bd80474444e, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__ = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_threads);
tmp_assattr_value_1 = par_threads;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__threads, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
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
tmp_expression_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$_legacy_response(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 429;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_2 = par_threads;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__->m_frame.f_lineno = 429;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_retrieve, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
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
tmp_expression_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$_legacy_response(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 432;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_4 = par_threads;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_list);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 433;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__->m_frame.f_lineno = 432;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_list, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
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
tmp_expression_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$_legacy_response(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 435;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_6 = par_threads;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_archive);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 436;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__->m_frame.f_lineno = 435;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_archive, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__,
    type_description_1,
    par_self,
    par_threads
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__ == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__ = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__);

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
CHECK_OBJECT(par_threads);
Py_DECREF(par_threads);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_threads);
Py_DECREF(par_threads);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__14_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events = MAKE_FUNCTION_FRAME(tstate, code_objects_571c6e68f06aee0fc024244a7f238e5e, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$EventsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EventsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 441;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__threads);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_events);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events->m_frame.f_lineno = 441;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__14_events);

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


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_threads = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f7296fc26080c56b6ce20e461df47d89, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__ = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_threads);
tmp_assattr_value_1 = par_threads;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__threads, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
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
tmp_expression_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$_legacy_response(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 448;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_2 = par_threads;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 449;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__->m_frame.f_lineno = 448;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_retrieve, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
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
tmp_expression_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$_legacy_response(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 451;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_4 = par_threads;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_list);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 452;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__->m_frame.f_lineno = 451;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_list, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
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
tmp_expression_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$_legacy_response(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_6 = par_threads;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_archive);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 455;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__->m_frame.f_lineno = 454;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_archive, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__,
    type_description_1,
    par_self,
    par_threads
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__ == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__);

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
CHECK_OBJECT(par_threads);
Py_DECREF(par_threads);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_threads);
Py_DECREF(par_threads);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__16_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events = MAKE_FUNCTION_FRAME(tstate, code_objects_c4aa65e89086c1fc3bfe3a05d54f9781, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncEventsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncEventsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__threads);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_events);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events->m_frame.f_lineno = 460;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__16_events);

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


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_threads = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7c74acb253dd545e420cca27d20d8a42, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__ = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_threads);
tmp_assattr_value_1 = par_threads;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__threads, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
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
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 467;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_1 = par_threads;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__->m_frame.f_lineno = 467;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_retrieve, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
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
tmp_called_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 470;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_2 = par_threads;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_list);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__->m_frame.f_lineno = 470;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_list, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
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
tmp_called_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 473;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_3 = par_threads;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_archive);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__->m_frame.f_lineno = 473;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_archive, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__,
    type_description_1,
    par_self,
    par_threads
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__ == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__ = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__);

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
CHECK_OBJECT(par_threads);
Py_DECREF(par_threads);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_threads);
Py_DECREF(par_threads);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__18_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events = MAKE_FUNCTION_FRAME(tstate, code_objects_f54f02f3c0578ca12ce0f0ac92f02b20, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$EventsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EventsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 479;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__threads);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_events);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events->m_frame.f_lineno = 479;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__18_events);

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


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_threads = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1f623ab726de7e93fb994b79566c874f, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__ = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_threads);
tmp_assattr_value_1 = par_threads;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__threads, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
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
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 486;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_1 = par_threads;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__->m_frame.f_lineno = 486;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_retrieve, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
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
tmp_called_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 489;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_2 = par_threads;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_list);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__->m_frame.f_lineno = 489;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_list, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
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
tmp_called_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 492;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_threads);
tmp_expression_value_3 = par_threads;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_archive);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__->m_frame.f_lineno = 492;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_archive, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__,
    type_description_1,
    par_self,
    par_threads
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__ == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__ = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__);

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
CHECK_OBJECT(par_threads);
Py_DECREF(par_threads);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_threads);
Py_DECREF(par_threads);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$resources$beta$sessions$threads$threads$$$function__20_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events)) {
    Py_XDECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events = MAKE_FUNCTION_FRAME(tstate, code_objects_06a7bdb40ae2beb93a5eda2326e1ecaa, module_anthropic$resources$beta$sessions$threads$threads, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events->m_type_description == NULL);
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events = cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncEventsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncEventsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 498;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__threads);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_events);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events->m_frame.f_lineno = 498;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events == cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events);
    cache_frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events = NULL;
}

assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$function__20_events);

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



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve,
        mod_consts.const_str_plain_retrieve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d5cf6cb275fac23596f35703bfc29ba5,
#endif
        code_objects_6763d3d051dee0fedc99007da0e05ad7,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_digest_b299af0f5e5750a93c5efcb6be21e001,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__11_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__11_list,
        mod_consts.const_str_plain_list,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_37bb534ba168cba54de10a9afffbd436,
#endif
        code_objects_8d854b971092ca5ed3c5296fceaf3a13,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_digest_df9c4a0eb275612190d580273335f264,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive,
        mod_consts.const_str_plain_archive,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d8294341b850b4a61d2eac62062cfee8,
#endif
        code_objects_8f2349737cd1f48c4486eeb08427fd1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_digest_531f896873fb0e9ebec730530ec90734,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9fed56071b0bb77666e9f0094c8bba47,
#endif
        code_objects_1a7792eac9898939a8522bd80474444e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__14_events(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__14_events,
        mod_consts.const_str_plain_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_45e64490f93213489dea0f54c33cb3f8,
#endif
        code_objects_571c6e68f06aee0fc024244a7f238e5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4af89e670f7ff31046a4aa6835c5e23b,
#endif
        code_objects_f7296fc26080c56b6ce20e461df47d89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__16_events(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__16_events,
        mod_consts.const_str_plain_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ab82d06c6947745d8ae44993fe92141c,
#endif
        code_objects_c4aa65e89086c1fc3bfe3a05d54f9781,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3bfbe444ebdcbdc88c925f5f2248cd44,
#endif
        code_objects_7c74acb253dd545e420cca27d20d8a42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__18_events(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__18_events,
        mod_consts.const_str_plain_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2af9163287278c807e01ac711e6666ef,
#endif
        code_objects_f54f02f3c0578ca12ce0f0ac92f02b20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_11477e7244f5d049e9aa903c064531c5,
#endif
        code_objects_1f623ab726de7e93fb994b79566c874f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__1_events(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__1_events,
        mod_consts.const_str_plain_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3e9a68b058ca0efd869f874f340830cf,
#endif
        code_objects_4d8c71f9c1c8a34aa9b6ffd93c887029,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__20_events(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__20_events,
        mod_consts.const_str_plain_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ead053a11b9e239f3c183120d43a67af,
#endif
        code_objects_06a7bdb40ae2beb93a5eda2326e1ecaa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_22202ffedf18b71e21de4bcf28eb7502,
#endif
        code_objects_d9c80e38b6a571e28ff1b1bcebac98b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_digest_cc9d097b4c3e867b2cb93ca07b8778be,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bdf093bdaf249401444826d02df3a13b,
#endif
        code_objects_7fea44885daa611bfc058efbd308439a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_digest_a2b3f8f34b6ca68c25c767c5b9560a59,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve,
        mod_consts.const_str_plain_retrieve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aa26560ac0edaae6faac31d435b2f6fb,
#endif
        code_objects_77ad713834deaea4b6b90f37d826fa18,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_digest_b299af0f5e5750a93c5efcb6be21e001,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__5_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__5_list,
        mod_consts.const_str_plain_list,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e049eaf21ad98645d6f3dc8edef753e6,
#endif
        code_objects_d6baf1aff38c60344bcfb81e31617019,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_digest_df9c4a0eb275612190d580273335f264,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive,
        mod_consts.const_str_plain_archive,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_195c549fe6c1fdc32f4b25f281a069c5,
#endif
        code_objects_2a22b146bcef05cf1000001da222fe85,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_digest_531f896873fb0e9ebec730530ec90734,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__7_events(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__7_events,
        mod_consts.const_str_plain_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2e3931de9d1da436bcf560d1d14f9398,
#endif
        code_objects_166a5aea9f96f3c9dbfe9e44721948df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_36c3ad8ad97614c892f270a045513a12,
#endif
        code_objects_229f458c2dea71de452e6f2c4f78c153,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_digest_cc9d097b4c3e867b2cb93ca07b8778be,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4695a1aa0aed310aeb3e29678403f337,
#endif
        code_objects_65c7ba97cb8235984e7378fa2b8fb44f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_digest_a2b3f8f34b6ca68c25c767c5b9560a59,
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

static function_impl_code const function_table_anthropic$resources$beta$sessions$threads$threads[] = {
impl_anthropic$resources$beta$sessions$threads$threads$$$function__1_events,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__5_list,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__7_events,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__11_list,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__14_events,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__16_events,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__18_events,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__,
impl_anthropic$resources$beta$sessions$threads$threads$$$function__20_events,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$resources$beta$sessions$threads$threads);
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
        module_anthropic$resources$beta$sessions$threads$threads,
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
        function_table_anthropic$resources$beta$sessions$threads$threads,
        sizeof(function_table_anthropic$resources$beta$sessions$threads$threads) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.resources.beta.sessions.threads.threads";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$resources$beta$sessions$threads$threads(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$resources$beta$sessions$threads$threads");

    // Store the module for future use.
    module_anthropic$resources$beta$sessions$threads$threads = module;

    moduledict_anthropic$resources$beta$sessions$threads$threads = MODULE_DICT(module_anthropic$resources$beta$sessions$threads$threads);

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
        PRINT_STRING("anthropic$resources$beta$sessions$threads$threads: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$resources$beta$sessions$threads$threads: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$resources$beta$sessions$threads$threads: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.resources.beta.sessions.threads.threads" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$resources$beta$sessions$threads$threads\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$resources$beta$sessions$threads$threads,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$resources$beta$sessions$threads$threads,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$resources$beta$sessions$threads$threads,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$resources$beta$sessions$threads$threads,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$resources$beta$sessions$threads$threads,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$resources$beta$sessions$threads$threads);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$resources$beta$sessions$threads$threads);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
PyObject *locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
PyObject *locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$resources$beta$sessions$threads$threads = MAKE_MODULE_FRAME(code_objects_5a12adcd9b5d4f7eadc8c014ed839e88, module_anthropic$resources$beta$sessions$threads$threads);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_itertools;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_chain_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_chain,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_chain);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_chain, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 8;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__legacy_response_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 10;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain__legacy_response,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__legacy_response);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_events;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_11af28b2e07f98d87574793b5b8fbc5e_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 11;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

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
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_Events,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Events);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Events, tmp_assign_source_10);
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
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_AsyncEvents,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_AsyncEvents);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEvents, tmp_assign_source_11);
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
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_EventsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_EventsWithRawResponse);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_EventsWithRawResponse, tmp_assign_source_12);
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
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_AsyncEventsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_AsyncEventsWithRawResponse);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEventsWithRawResponse, tmp_assign_source_13);
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
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_EventsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_EventsWithStreamingResponse);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_EventsWithStreamingResponse, tmp_assign_source_14);
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
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_AsyncEventsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_AsyncEventsWithStreamingResponse);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncEventsWithStreamingResponse, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_07016efe8cd4ed2e66700c3bc169e261_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 19;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_Body,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Body);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Body, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_Omit,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Omit);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Omit, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_Query,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Query);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Query, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_Headers,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Headers);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_NotGiven,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_NotGiven);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_omit,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_omit);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_omit, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_not_given,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_not_given);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_not_given, tmp_assign_source_23);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_2cae30cf81c292629f7888f30efed195_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 20;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_17 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_is_given,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_is_given);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_18 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_path_template,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_path_template);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_path_template, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_19 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_20 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_strip_not_given,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_strip_not_given);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_not_given, tmp_assign_source_28);
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
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_cached_property_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 21;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_cached_property,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_cached_property);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__resource;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 22;
tmp_assign_source_30 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_30;
}
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_22 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_SyncAPIResource,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_SyncAPIResource);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_23 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_AsyncAPIResource,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_AsyncAPIResource);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource, tmp_assign_source_32);
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
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__response;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 23;
tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_24 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_to_streamed_response_wrapper,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_25 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_async_to_streamed_response_wrapper,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper, tmp_assign_source_35);
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
PyObject *tmp_assign_source_36;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_pagination;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_SyncPageCursor_str_plain_AsyncPageCursor_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 24;
tmp_assign_source_36 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_36;
}
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_26 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_SyncPageCursor,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_SyncPageCursor);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncPageCursor, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_27 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_AsyncPageCursor,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_AsyncPageCursor);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPageCursor, tmp_assign_source_38);
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
PyObject *tmp_assign_source_39;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__base_client;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 25;
tmp_assign_source_39 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_39;
}
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_28 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_AsyncPaginator,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_AsyncPaginator);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPaginator, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_29 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_make_request_options,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_make_request_options);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options, tmp_assign_source_41);
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
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_034db19e132b383f67def7d430d9916a;
tmp_globals_arg_value_12 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_thread_list_params_tuple;
tmp_level_value_12 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 26;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_thread_list_params,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_thread_list_params);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_thread_list_params, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_d5a4501ea1d87b503d9013c81caa343a;
tmp_globals_arg_value_13 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_AnthropicBetaParam_tuple;
tmp_level_value_13 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 27;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_AnthropicBetaParam,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_AnthropicBetaParam);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AnthropicBetaParam, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_76341c9a0b60037d1c9c3bc2e49272ba;
tmp_globals_arg_value_14 = (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionThread_tuple;
tmp_level_value_14 = mod_consts.const_int_pos_5;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 28;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_anthropic$resources$beta$sessions$threads$threads,
        mod_consts.const_str_plain_BetaManagedAgentsSessionThread,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_BetaManagedAgentsSessionThread);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionThread, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_LIST2(tstate, mod_consts.const_str_plain_Threads,mod_consts.const_str_plain_AsyncThreads);
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_45);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_46;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$SyncAPIResource(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncAPIResource);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto try_except_handler_8;
}
tmp_assign_source_46 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_47 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
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


exception_lineno = 33;

    goto try_except_handler_8;
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


exception_lineno = 33;

    goto try_except_handler_8;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_49 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_49;
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


exception_lineno = 33;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_50;
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


exception_lineno = 33;

    goto try_except_handler_8;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Threads;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 33;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_50;
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


exception_lineno = 33;

    goto try_except_handler_8;
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
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_15, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
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


exception_lineno = 33;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 33;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 33;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_51;
}
branch_end_1:;
{
PyObject *tmp_assign_source_52;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1f4c0364067c7ab15f03bda450d89e2f;
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_Threads;
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_33;
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2 = MAKE_CLASS_FRAME(tstate, code_objects_bd89f34067ac69a3ec42b9350d104255, module_anthropic$resources$beta$sessions$threads$threads, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_880bd9b200113fec2ce7c28b303b1e5e);

tmp_args_element_value_1 = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__1_events(tstate, tmp_annotations_1);

frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2->m_frame.f_lineno = 34;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_value_3 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_1ea15c5e635f4088f8bf669c0445f94e);

tmp_args_element_value_2 = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__2_with_raw_response(tstate, tmp_annotations_2);

frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2->m_frame.f_lineno = 38;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
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
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_3;
tmp_called_value_4 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_dca5c7839374dc6d7fcd1e30a5f1a1bb);

tmp_args_element_value_3 = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__3_with_streaming_response(tstate, tmp_annotations_3);

frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2->m_frame.f_lineno = 48;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_4;
tmp_dict_key_1 = mod_consts.const_str_plain_betas;
tmp_dict_value_1 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_omit);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_1 = _PyDict_NewPresized( 5 );
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
tmp_dict_value_1 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
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
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_cbb6ebc90afb5d5deb91d5c97cabae5d);

tmp_dictset_value = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__4_retrieve(tstate, tmp_kw_defaults_1, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_retrieve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_5;
tmp_dict_key_2 = mod_consts.const_str_plain_limit;
tmp_dict_value_2 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_omit);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_2 = _PyDict_NewPresized( 7 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_page;
tmp_dict_value_2 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_omit);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
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
tmp_dict_key_2 = mod_consts.const_str_plain_betas;
tmp_dict_value_2 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_omit);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
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
tmp_dict_key_2 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_2 = Py_None;
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
tmp_dict_value_2 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
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
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e12d440bcd5824af7d7b7e539bd520be);

tmp_dictset_value = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__5_list(tstate, tmp_kw_defaults_2, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_list, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_annotations_6;
tmp_dict_key_3 = mod_consts.const_str_plain_betas;
tmp_dict_value_3 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_omit);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_3 = _PyDict_NewPresized( 5 );
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
tmp_dict_value_3 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
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
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_cbb6ebc90afb5d5deb91d5c97cabae5d);

tmp_dictset_value = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__6_archive(tstate, tmp_kw_defaults_3, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain_archive, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_10;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
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


exception_lineno = 33;

    goto try_except_handler_10;
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
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
}
branch_no_3:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Threads;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 33;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_53;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_52 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_52);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__1_Threads_33 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 33;
goto try_except_handler_8;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_Threads, tmp_assign_source_52);
}
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_54;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$AsyncAPIResource(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncAPIResource);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;

    goto try_except_handler_11;
}
tmp_assign_source_54 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_54, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_55 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
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


exception_lineno = 229;

    goto try_except_handler_11;
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


exception_lineno = 229;

    goto try_except_handler_11;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_11;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_57;
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


exception_lineno = 229;

    goto try_except_handler_11;
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
PyObject *tmp_assign_source_58;
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


exception_lineno = 229;

    goto try_except_handler_11;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_AsyncThreads;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 229;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_58;
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


exception_lineno = 229;

    goto try_except_handler_11;
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
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_16, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_11;
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


exception_lineno = 229;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_11;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 229;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 229;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_59;
}
branch_end_4:;
{
PyObject *tmp_assign_source_60;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1f4c0364067c7ab15f03bda450d89e2f;
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncThreads;
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_229;
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_13;
}
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3 = MAKE_CLASS_FRAME(tstate, code_objects_e22d05e285b79e3637627ffb1042a1d0, module_anthropic$resources$beta$sessions$threads$threads, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_7;
tmp_called_value_7 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_88147e9db04c3acfea848d6b2aeafb35);

tmp_args_element_value_4 = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__7_events(tstate, tmp_annotations_7);

frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3->m_frame.f_lineno = 230;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_8;
tmp_called_value_8 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_6cc21c29fb73507c304ff21b22dcc12b);

tmp_args_element_value_5 = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__8_with_raw_response(tstate, tmp_annotations_8);

frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3->m_frame.f_lineno = 234;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_9;
tmp_called_value_9 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_cfcc8e3307ac7b1e99ae5402014bbb5e);

tmp_args_element_value_6 = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__9_with_streaming_response(tstate, tmp_annotations_9);

frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3->m_frame.f_lineno = 244;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_annotations_10;
tmp_dict_key_4 = mod_consts.const_str_plain_betas;
tmp_dict_value_4 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_omit);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_4 = _PyDict_NewPresized( 5 );
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
tmp_dict_value_4 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
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
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_cbb6ebc90afb5d5deb91d5c97cabae5d);

tmp_dictset_value = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__10_retrieve(tstate, tmp_kw_defaults_4, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_retrieve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_annotations_11;
tmp_dict_key_5 = mod_consts.const_str_plain_limit;
tmp_dict_value_5 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_omit);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_5 = _PyDict_NewPresized( 7 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_page;
tmp_dict_value_5 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_omit);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
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
tmp_dict_key_5 = mod_consts.const_str_plain_betas;
tmp_dict_value_5 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_omit);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
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
tmp_dict_key_5 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_5 = Py_None;
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
tmp_dict_value_5 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;
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
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_f303460f57508a65afb3f5352fa28dc8);

tmp_dictset_value = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__11_list(tstate, tmp_kw_defaults_5, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_list, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_annotations_12;
tmp_dict_key_6 = mod_consts.const_str_plain_betas;
tmp_dict_value_6 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_omit);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$omit(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_omit);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_6 = _PyDict_NewPresized( 5 );
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
tmp_dict_value_6 = PyObject_GetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$not_given(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 381;
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
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_cbb6ebc90afb5d5deb91d5c97cabae5d);

tmp_dictset_value = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__12_archive(tstate, tmp_kw_defaults_6, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain_archive, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_13;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_13;
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


exception_lineno = 229;

    goto try_except_handler_13;
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
tmp_res = PyObject_SetItem(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_13;
}
branch_no_6:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_AsyncThreads;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 229;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_13;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_61;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_60 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_60);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__2_AsyncThreads_229 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 229;
goto try_except_handler_11;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreads, tmp_assign_source_60);
}
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_63;
}
// Tried code:
{
PyObject *tmp_assign_source_64;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_1f4c0364067c7ab15f03bda450d89e2f;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ThreadsWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_425;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_f6f503b777987c0efc9357102f3ccedd);

tmp_dictset_value = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__13___init__(tstate, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_4 = MAKE_CLASS_FRAME(tstate, code_objects_450832156ecfc1dc68a37ab13627b14a, module_anthropic$resources$beta$sessions$threads$threads, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_4);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_14;
tmp_called_value_11 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 439;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_c62c1253783757478dda8f3d37ba1e5e);

tmp_args_element_value_7 = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__14_events(tstate, tmp_annotations_14);

frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_4->m_frame.f_lineno = 439;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425, mod_consts.const_str_plain_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_16;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_bd4e4a1ce8bb9db5a48a8579daaae84e_tuple;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_65;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
tmp_called_value_12 = (PyObject *)&PyType_Type;
tmp_tuple_element_9 = mod_consts.const_str_plain_ThreadsWithRawResponse;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 425;
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;

    goto try_except_handler_16;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_65;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_64 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_64);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__3_ThreadsWithRawResponse_425 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 425;
goto try_except_handler_14;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadsWithRawResponse, tmp_assign_source_64);
}
goto try_end_10;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
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
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_67;
}
// Tried code:
{
PyObject *tmp_assign_source_68;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
tmp_dictset_value = mod_consts.const_str_digest_1f4c0364067c7ab15f03bda450d89e2f;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncThreadsWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_444;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_09e00a9031e6d530d8a94954a007775e);

tmp_dictset_value = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__15___init__(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_5 = MAKE_CLASS_FRAME(tstate, code_objects_06ff4cf8e8702c5676647fa01c97bdef, module_anthropic$resources$beta$sessions$threads$threads, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_5);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_5) == 2);

// Framed code:
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_16;
tmp_called_value_13 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_66d262d28a887f9146b542a6ad34dcc0);

tmp_args_element_value_8 = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__16_events(tstate, tmp_annotations_16);

frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_5->m_frame.f_lineno = 458;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444, mod_consts.const_str_plain_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_19;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_bd4e4a1ce8bb9db5a48a8579daaae84e_tuple;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_69;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
tmp_called_value_14 = (PyObject *)&PyType_Type;
tmp_tuple_element_10 = mod_consts.const_str_plain_AsyncThreadsWithRawResponse;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 444;
tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_19;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_69;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_68 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_68);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__4_AsyncThreadsWithRawResponse_444 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 444;
goto try_except_handler_17;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreadsWithRawResponse, tmp_assign_source_68);
}
goto try_end_11;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
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
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_70;
}
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_71;
}
// Tried code:
{
PyObject *tmp_assign_source_72;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
tmp_dictset_value = mod_consts.const_str_digest_1f4c0364067c7ab15f03bda450d89e2f;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ThreadsWithStreamingResponse;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_463;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_f6f503b777987c0efc9357102f3ccedd);

tmp_dictset_value = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__17___init__(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_6 = MAKE_CLASS_FRAME(tstate, code_objects_f421702f33ad237e7e5fff39c50a1fc3, module_anthropic$resources$beta$sessions$threads$threads, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_6);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_6) == 2);

// Framed code:
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_18;
tmp_called_value_15 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 477;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_11eae713501451e3144af5fb8dde041d);

tmp_args_element_value_9 = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__18_events(tstate, tmp_annotations_18);

frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_6->m_frame.f_lineno = 477;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463, mod_consts.const_str_plain_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_22;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_bd4e4a1ce8bb9db5a48a8579daaae84e_tuple;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_73;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_7;
tmp_called_value_16 = (PyObject *)&PyType_Type;
tmp_tuple_element_11 = mod_consts.const_str_plain_ThreadsWithStreamingResponse;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 463;
tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;

    goto try_except_handler_22;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_73;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_72 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_72);
goto try_return_handler_22;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463 = NULL;
goto try_return_handler_21;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__5_ThreadsWithStreamingResponse_463 = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto try_except_handler_21;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 463;
goto try_except_handler_20;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadsWithStreamingResponse, tmp_assign_source_72);
}
goto try_end_12;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
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
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
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
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_75;
}
// Tried code:
{
PyObject *tmp_assign_source_76;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
tmp_dictset_value = mod_consts.const_str_digest_1f4c0364067c7ab15f03bda450d89e2f;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_482;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_09e00a9031e6d530d8a94954a007775e);

tmp_dictset_value = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__19___init__(tstate, tmp_annotations_19);

tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_7 = MAKE_CLASS_FRAME(tstate, code_objects_399c558d8ed09361f1a4d9f0c48f88f5, module_anthropic$resources$beta$sessions$threads$threads, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_7);
assert(Py_REFCNT(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_7) == 2);

// Framed code:
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_20;
tmp_called_value_17 = module_var_accessor_anthropic$resources$beta$sessions$threads$threads$cached_property(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 496;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_75cf418c44e34e5b0a5cfdf54da6ed00);

tmp_args_element_value_10 = MAKE_FUNCTION_anthropic$resources$beta$sessions$threads$threads$$$function__20_events(tstate, tmp_annotations_20);

frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_7->m_frame.f_lineno = 496;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482, mod_consts.const_str_plain_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_25;
skip_nested_handling_6:;
tmp_dictset_value = mod_consts.const_tuple_bd4e4a1ce8bb9db5a48a8579daaae84e_tuple;
tmp_result = DICT_SET_ITEM(locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_8;
tmp_called_value_18 = (PyObject *)&PyType_Type;
tmp_tuple_element_12 = mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame.f_lineno = 482;
tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;

    goto try_except_handler_25;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_77;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_76 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_76);
goto try_return_handler_25;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482 = NULL;
goto try_return_handler_24;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482);
locals_anthropic$resources$beta$sessions$threads$threads$$$class__6_AsyncThreadsWithStreamingResponse_482 = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_24;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 482;
goto try_except_handler_23;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncThreadsWithStreamingResponse, tmp_assign_source_76);
}
goto try_end_13;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
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
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$resources$beta$sessions$threads$threads, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$resources$beta$sessions$threads$threads->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$resources$beta$sessions$threads$threads, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$resources$beta$sessions$threads$threads);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_7:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$resources$beta$sessions$threads$threads", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.resources.beta.sessions.threads.threads" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$resources$beta$sessions$threads$threads);
    return module_anthropic$resources$beta$sessions$threads$threads;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$resources$beta$sessions$threads$threads, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$resources$beta$sessions$threads$threads", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'openai$resources$conversations$conversations'
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



/* The "module_openai$resources$conversations$conversations" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$resources$conversations$conversations;
PyDictObject *moduledict_openai$resources$conversations$conversations;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Items;
PyObject *const_str_plain__client;
PyObject *const_str_plain_ConversationsWithRawResponse;
PyObject *const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b;
PyObject *const_str_plain_ConversationsWithStreamingResponse;
PyObject *const_str_digest_83b043a94791b7a89fe1b103b91c36a3;
PyObject *const_str_plain__post;
PyObject *const_str_plain_maybe_transform;
PyObject *const_str_plain_items;
PyObject *const_str_plain_metadata;
PyObject *const_str_plain_conversation_create_params;
PyObject *const_str_plain_ConversationCreateParams;
PyObject *const_str_plain_make_request_options;
PyObject *const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple;
PyObject *const_str_plain_Conversation;
PyObject *const_tuple_str_digest_d990244823207845ee1b05f9ef040926_tuple;
PyObject *const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple;
PyObject *const_str_digest_39528f115dcb2328dadb971411cce9cd;
PyObject *const_str_digest_b9f40489ba67c90da7b7c48142fa200c;
PyObject *const_str_plain__get;
PyObject *const_str_digest_49f579f89709946bdf3dcb3ef31390eb;
PyObject *const_tuple_str_plain_options_str_plain_cast_to_tuple;
PyObject *const_str_digest_8073448ca2e4d06bc87a5400099ebfa1;
PyObject *const_str_plain_conversation_update_params;
PyObject *const_str_plain_ConversationUpdateParams;
PyObject *const_str_digest_678484ae5f9391f0ba25ec3983822d6c;
PyObject *const_str_plain__delete;
PyObject *const_str_plain_ConversationDeletedResource;
PyObject *const_str_digest_b7edc135782fe1312f888af3babef0ea;
PyObject *const_str_plain_AsyncItems;
PyObject *const_str_plain_AsyncConversationsWithRawResponse;
PyObject *const_str_plain_AsyncConversationsWithStreamingResponse;
PyObject *const_str_plain_self;
PyObject *const_str_plain_async_maybe_transform;
PyObject *const_str_plain_extra_headers;
PyObject *const_str_plain_extra_query;
PyObject *const_str_plain_extra_body;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_create;
PyObject *const_str_digest_c4d8d9f2a8bef684d6a34050bea5d2b6;
PyObject *const_str_plain_conversation_id;
PyObject *const_str_plain_retrieve;
PyObject *const_str_digest_142b47c7a4b4ea9008f0e93049a3b361;
PyObject *const_str_plain_update;
PyObject *const_str_digest_ea4b0ff95f9dd06b53ae94bd6e04e427;
PyObject *const_str_plain_delete;
PyObject *const_str_digest_f2fef2374c2e05e32a815bd9bdf27903;
PyObject *const_str_plain__conversations;
PyObject *const_str_plain__legacy_response;
PyObject *const_str_plain_to_raw_response_wrapper;
PyObject *const_str_plain_ItemsWithRawResponse;
PyObject *const_str_plain_async_to_raw_response_wrapper;
PyObject *const_str_plain_AsyncItemsWithRawResponse;
PyObject *const_str_plain_to_streamed_response_wrapper;
PyObject *const_str_plain_ItemsWithStreamingResponse;
PyObject *const_str_plain_async_to_streamed_response_wrapper;
PyObject *const_str_plain_AsyncItemsWithStreamingResponse;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Dict;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_httpx;
PyObject *const_tuple_str_plain__legacy_response_tuple;
PyObject *const_int_pos_3;
PyObject *const_tuple_1b6687b75e152742f9bc4e24b5b66227_tuple;
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
PyObject *const_str_plain__resource;
PyObject *const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple;
PyObject *const_str_plain_SyncAPIResource;
PyObject *const_str_plain_AsyncAPIResource;
PyObject *const_str_plain__response;
PyObject *const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple;
PyObject *const_str_plain__base_client;
PyObject *const_tuple_str_plain_make_request_options_tuple;
PyObject *const_str_digest_df04e8b3af1722938d5a3de93dab68a3;
PyObject *const_tuple_16af26876362c35f61fb34e42e168dbe_tuple;
PyObject *const_str_digest_8f4cfd1ed3283a1c9947c5431ec224c2;
PyObject *const_tuple_str_plain_Metadata_tuple;
PyObject *const_str_plain_Metadata;
PyObject *const_str_digest_0432ecddf23b48c7ad052c7d4ec49287;
PyObject *const_tuple_str_plain_Conversation_tuple;
PyObject *const_str_digest_424fcb649f5fac2a4f7f4fcf8bdcc0c6;
PyObject *const_tuple_str_plain_ResponseInputItemParam_tuple;
PyObject *const_str_plain_ResponseInputItemParam;
PyObject *const_str_digest_46ad31be6e690b3ae368aca9067dd9b5;
PyObject *const_tuple_str_plain_ConversationDeletedResource_tuple;
PyObject *const_str_plain_Conversations;
PyObject *const_str_plain_AsyncConversations;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_36a868fe718e2817fe4ddf80a279bac6;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_33;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_cb7e0d37d32fd009bafc3240a6a276e1;
PyObject *const_str_digest_cd6da4ff672954d8f0a8fedce4c16a9c;
PyObject *const_dict_3c5e34bfddd161e0514c8b9e1b007d92;
PyObject *const_str_plain_with_raw_response;
PyObject *const_str_digest_51dada464604e5c4c2eb701bb9b49c89;
PyObject *const_dict_50098b73d42b699400cdee3fff66d301;
PyObject *const_str_plain_with_streaming_response;
PyObject *const_str_digest_f072de03f4c8b6c73cdee93bb382823e;
PyObject *const_dict_c403c85d54ba35c1a7ed79402c1840d2;
PyObject *const_str_digest_1df7216043d8496b97f17a28e4febbf4;
PyObject *const_dict_020c038121411c2ff9c2967c48e7fab7;
PyObject *const_str_digest_d6ea08fe795a906d63b3e0c6ab44a168;
PyObject *const_dict_46b3a5636ba5ba3e88057ab043a09e49;
PyObject *const_str_digest_8c36434e486628521c1824357cead5f5;
PyObject *const_dict_8b0b4f830959fa6d1d5abbcf56df4f64;
PyObject *const_str_digest_342cd395234eedab950d48cdf28c7875;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_210;
PyObject *const_dict_303f7ac2f1c1e7fdf1299064c3b0621d;
PyObject *const_str_digest_69d4ae43a8f761062d2b091beb17d58a;
PyObject *const_dict_1dbb621a38a1526764d44b1e7cfd2351;
PyObject *const_str_digest_2d2ae42ef05f6da7a31c179a58ce774a;
PyObject *const_dict_2b81b05d5cd9f2b8cb7ccd5747e22b1c;
PyObject *const_str_digest_6c02cc311c2aeb3b7de601cae4a4343d;
PyObject *const_int_pos_389;
PyObject *const_dict_53f1aa345b5c6641b88511a7049e8b19;
PyObject *const_str_digest_c575df32fb32429fe4a9463915d54941;
PyObject *const_dict_4922735ee3681c17827f98bcf6d0c006;
PyObject *const_str_digest_15444022f15924acd40b6fd0b36a3221;
PyObject *const_tuple_8bca05d836d97d9489defc4d99c52473_tuple;
PyObject *const_int_pos_411;
PyObject *const_dict_7981d31f35dfaf9c0afef5b47a0dc4d3;
PyObject *const_str_digest_88b6ca63d3047a20dfed921f3af82dc6;
PyObject *const_dict_833cb78df49b1f24f96c912aad71d470;
PyObject *const_str_digest_baaa46dc21ba4634bd99c993c158c4a3;
PyObject *const_int_pos_433;
PyObject *const_str_digest_ebab25cc3cfc566815ebd631de50454d;
PyObject *const_dict_9b51c8cb833cdb3f0912b8ee100914bc;
PyObject *const_str_digest_048773aad2950b5d084a17af639237de;
PyObject *const_int_pos_455;
PyObject *const_str_digest_ed1545a10b4dc62f287be622203ec616;
PyObject *const_dict_2d1e41d160f9064098a1d6743759ffd1;
PyObject *const_str_digest_1def987907a2ee325f067163d1f49297;
PyObject *const_str_digest_02499b93a6a02d986c395f55b05bd3c6;
PyObject *const_str_digest_66bb945a0d949cb285162ff49f240959;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_conversations_tuple;
PyObject *const_tuple_0eb6c71b45d0d6ca04abc9b716867ab4_tuple;
PyObject *const_tuple_bd90d5313821b1d90639154c201a2a90_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_b0a8aebd220f13809f9423dad338ef45_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[161];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.resources.conversations.conversations"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Items);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationsWithRawResponse);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationsWithStreamingResponse);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__post);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_create_params);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationCreateParams);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_request_options);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_Conversation);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d990244823207845ee1b05f9ef040926_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_39528f115dcb2328dadb971411cce9cd);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9f40489ba67c90da7b7c48142fa200c);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__get);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_49f579f89709946bdf3dcb3ef31390eb);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_8073448ca2e4d06bc87a5400099ebfa1);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_update_params);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationUpdateParams);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_678484ae5f9391f0ba25ec3983822d6c);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__delete);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationDeletedResource);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7edc135782fe1312f888af3babef0ea);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncItems);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConversationsWithRawResponse);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_maybe_transform);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_body);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_create);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4d8d9f2a8bef684d6a34050bea5d2b6);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_id);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_142b47c7a4b4ea9008f0e93049a3b361);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea4b0ff95f9dd06b53ae94bd6e04e427);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2fef2374c2e05e32a815bd9bdf27903);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__conversations);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_ItemsWithRawResponse);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncItemsWithRawResponse);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_streamed_response_wrapper);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_ItemsWithStreamingResponse);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncItemsWithStreamingResponse);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dict);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__legacy_response_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_1b6687b75e152742f9bc4e24b5b66227_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_588f21ecebfad4c9dbc0f7aa769b8795_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Body);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_Query);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_Headers);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maybe_transform_str_plain_async_maybe_transform_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__resource);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIResource);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResource);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__response);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_client);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_make_request_options_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_df04e8b3af1722938d5a3de93dab68a3);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_16af26876362c35f61fb34e42e168dbe_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f4cfd1ed3283a1c9947c5431ec224c2);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Metadata_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_0432ecddf23b48c7ad052c7d4ec49287);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Conversation_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_424fcb649f5fac2a4f7f4fcf8bdcc0c6);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseInputItemParam_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseInputItemParam);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_46ad31be6e690b3ae368aca9067dd9b5);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationDeletedResource_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_Conversations);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConversations);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_36a868fe718e2817fe4ddf80a279bac6);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_dict_cb7e0d37d32fd009bafc3240a6a276e1);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd6da4ff672954d8f0a8fedce4c16a9c);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_dict_3c5e34bfddd161e0514c8b9e1b007d92);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_51dada464604e5c4c2eb701bb9b49c89);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_dict_50098b73d42b699400cdee3fff66d301);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_f072de03f4c8b6c73cdee93bb382823e);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_dict_c403c85d54ba35c1a7ed79402c1840d2);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_1df7216043d8496b97f17a28e4febbf4);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_dict_020c038121411c2ff9c2967c48e7fab7);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6ea08fe795a906d63b3e0c6ab44a168);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_dict_46b3a5636ba5ba3e88057ab043a09e49);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c36434e486628521c1824357cead5f5);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_dict_8b0b4f830959fa6d1d5abbcf56df4f64);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_342cd395234eedab950d48cdf28c7875);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_int_pos_210);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_303f7ac2f1c1e7fdf1299064c3b0621d);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_69d4ae43a8f761062d2b091beb17d58a);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_dict_1dbb621a38a1526764d44b1e7cfd2351);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d2ae42ef05f6da7a31c179a58ce774a);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_dict_2b81b05d5cd9f2b8cb7ccd5747e22b1c);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c02cc311c2aeb3b7de601cae4a4343d);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_int_pos_389);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_dict_53f1aa345b5c6641b88511a7049e8b19);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_c575df32fb32429fe4a9463915d54941);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_4922735ee3681c17827f98bcf6d0c006);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_15444022f15924acd40b6fd0b36a3221);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_8bca05d836d97d9489defc4d99c52473_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_411);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_7981d31f35dfaf9c0afef5b47a0dc4d3);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_88b6ca63d3047a20dfed921f3af82dc6);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_833cb78df49b1f24f96c912aad71d470);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_baaa46dc21ba4634bd99c993c158c4a3);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_int_pos_433);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_ebab25cc3cfc566815ebd631de50454d);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_9b51c8cb833cdb3f0912b8ee100914bc);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_048773aad2950b5d084a17af639237de);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_int_pos_455);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed1545a10b4dc62f287be622203ec616);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_2d1e41d160f9064098a1d6743759ffd1);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_1def987907a2ee325f067163d1f49297);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_02499b93a6a02d986c395f55b05bd3c6);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_66bb945a0d949cb285162ff49f240959);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_conversations_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_0eb6c71b45d0d6ca04abc9b716867ab4_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_bd90d5313821b1d90639154c201a2a90_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_b0a8aebd220f13809f9423dad338ef45_tuple);
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
void checkModuleConstants_openai$resources$conversations$conversations(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Items);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationsWithRawResponse);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationsWithStreamingResponse);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__post);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_transform);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_create_params);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationCreateParams);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_request_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_request_options);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_Conversation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Conversation);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d990244823207845ee1b05f9ef040926_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d990244823207845ee1b05f9ef040926_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_39528f115dcb2328dadb971411cce9cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39528f115dcb2328dadb971411cce9cd);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9f40489ba67c90da7b7c48142fa200c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9f40489ba67c90da7b7c48142fa200c);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__get));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_49f579f89709946bdf3dcb3ef31390eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_49f579f89709946bdf3dcb3ef31390eb);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_8073448ca2e4d06bc87a5400099ebfa1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8073448ca2e4d06bc87a5400099ebfa1);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_update_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_update_params);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationUpdateParams);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_678484ae5f9391f0ba25ec3983822d6c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_678484ae5f9391f0ba25ec3983822d6c);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__delete);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConversationDeletedResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConversationDeletedResource);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7edc135782fe1312f888af3babef0ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7edc135782fe1312f888af3babef0ea);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncItems));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncItems);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConversationsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncConversationsWithRawResponse);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_maybe_transform);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_headers);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_query);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_body);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_create));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4d8d9f2a8bef684d6a34050bea5d2b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4d8d9f2a8bef684d6a34050bea5d2b6);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversation_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversation_id);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retrieve);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_142b47c7a4b4ea9008f0e93049a3b361));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_142b47c7a4b4ea9008f0e93049a3b361);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea4b0ff95f9dd06b53ae94bd6e04e427));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea4b0ff95f9dd06b53ae94bd6e04e427);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2fef2374c2e05e32a815bd9bdf27903));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2fef2374c2e05e32a815bd9bdf27903);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__conversations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__conversations);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__legacy_response);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_raw_response_wrapper);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_ItemsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ItemsWithRawResponse);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_raw_response_wrapper);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncItemsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncItemsWithRawResponse);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_streamed_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_streamed_response_wrapper);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_ItemsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ItemsWithStreamingResponse);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_streamed_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_streamed_response_wrapper);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncItemsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncItemsWithStreamingResponse);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dict);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__legacy_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__legacy_response_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_1b6687b75e152742f9bc4e24b5b66227_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1b6687b75e152742f9bc4e24b5b66227_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_588f21ecebfad4c9dbc0f7aa769b8795_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_588f21ecebfad4c9dbc0f7aa769b8795_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_GIVEN);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Body);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_Query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Query);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_Headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Headers);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotGiven);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maybe_transform_str_plain_async_maybe_transform_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maybe_transform_str_plain_async_maybe_transform_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cached_property_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cached_property);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__resource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__resource);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncAPIResource);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAPIResource);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__response);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__base_client);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_make_request_options_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_make_request_options_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_df04e8b3af1722938d5a3de93dab68a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df04e8b3af1722938d5a3de93dab68a3);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_16af26876362c35f61fb34e42e168dbe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_16af26876362c35f61fb34e42e168dbe_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f4cfd1ed3283a1c9947c5431ec224c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f4cfd1ed3283a1c9947c5431ec224c2);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Metadata_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Metadata_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_Metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Metadata);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_0432ecddf23b48c7ad052c7d4ec49287));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0432ecddf23b48c7ad052c7d4ec49287);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Conversation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Conversation_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_424fcb649f5fac2a4f7f4fcf8bdcc0c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_424fcb649f5fac2a4f7f4fcf8bdcc0c6);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseInputItemParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseInputItemParam_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseInputItemParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseInputItemParam);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_46ad31be6e690b3ae368aca9067dd9b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46ad31be6e690b3ae368aca9067dd9b5);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConversationDeletedResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConversationDeletedResource_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_Conversations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Conversations);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncConversations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncConversations);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_36a868fe718e2817fe4ddf80a279bac6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36a868fe718e2817fe4ddf80a279bac6);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_int_pos_33));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_33);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_dict_cb7e0d37d32fd009bafc3240a6a276e1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cb7e0d37d32fd009bafc3240a6a276e1);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd6da4ff672954d8f0a8fedce4c16a9c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cd6da4ff672954d8f0a8fedce4c16a9c);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_dict_3c5e34bfddd161e0514c8b9e1b007d92));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3c5e34bfddd161e0514c8b9e1b007d92);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_raw_response);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_51dada464604e5c4c2eb701bb9b49c89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51dada464604e5c4c2eb701bb9b49c89);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_dict_50098b73d42b699400cdee3fff66d301));
CHECK_OBJECT_DEEP(mod_consts.const_dict_50098b73d42b699400cdee3fff66d301);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_streaming_response);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_f072de03f4c8b6c73cdee93bb382823e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f072de03f4c8b6c73cdee93bb382823e);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_dict_c403c85d54ba35c1a7ed79402c1840d2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c403c85d54ba35c1a7ed79402c1840d2);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_1df7216043d8496b97f17a28e4febbf4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1df7216043d8496b97f17a28e4febbf4);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_dict_020c038121411c2ff9c2967c48e7fab7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_020c038121411c2ff9c2967c48e7fab7);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6ea08fe795a906d63b3e0c6ab44a168));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6ea08fe795a906d63b3e0c6ab44a168);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_dict_46b3a5636ba5ba3e88057ab043a09e49));
CHECK_OBJECT_DEEP(mod_consts.const_dict_46b3a5636ba5ba3e88057ab043a09e49);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c36434e486628521c1824357cead5f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c36434e486628521c1824357cead5f5);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_dict_8b0b4f830959fa6d1d5abbcf56df4f64));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8b0b4f830959fa6d1d5abbcf56df4f64);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_342cd395234eedab950d48cdf28c7875));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_342cd395234eedab950d48cdf28c7875);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_int_pos_210));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_210);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_303f7ac2f1c1e7fdf1299064c3b0621d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_303f7ac2f1c1e7fdf1299064c3b0621d);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_69d4ae43a8f761062d2b091beb17d58a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69d4ae43a8f761062d2b091beb17d58a);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_dict_1dbb621a38a1526764d44b1e7cfd2351));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1dbb621a38a1526764d44b1e7cfd2351);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d2ae42ef05f6da7a31c179a58ce774a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d2ae42ef05f6da7a31c179a58ce774a);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_dict_2b81b05d5cd9f2b8cb7ccd5747e22b1c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2b81b05d5cd9f2b8cb7ccd5747e22b1c);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c02cc311c2aeb3b7de601cae4a4343d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c02cc311c2aeb3b7de601cae4a4343d);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_int_pos_389));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_389);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_dict_53f1aa345b5c6641b88511a7049e8b19));
CHECK_OBJECT_DEEP(mod_consts.const_dict_53f1aa345b5c6641b88511a7049e8b19);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_c575df32fb32429fe4a9463915d54941));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c575df32fb32429fe4a9463915d54941);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_4922735ee3681c17827f98bcf6d0c006));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4922735ee3681c17827f98bcf6d0c006);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_15444022f15924acd40b6fd0b36a3221));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15444022f15924acd40b6fd0b36a3221);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_8bca05d836d97d9489defc4d99c52473_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8bca05d836d97d9489defc4d99c52473_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_411));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_411);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_7981d31f35dfaf9c0afef5b47a0dc4d3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7981d31f35dfaf9c0afef5b47a0dc4d3);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_88b6ca63d3047a20dfed921f3af82dc6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88b6ca63d3047a20dfed921f3af82dc6);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_833cb78df49b1f24f96c912aad71d470));
CHECK_OBJECT_DEEP(mod_consts.const_dict_833cb78df49b1f24f96c912aad71d470);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_baaa46dc21ba4634bd99c993c158c4a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_baaa46dc21ba4634bd99c993c158c4a3);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_int_pos_433));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_433);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_ebab25cc3cfc566815ebd631de50454d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ebab25cc3cfc566815ebd631de50454d);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_9b51c8cb833cdb3f0912b8ee100914bc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9b51c8cb833cdb3f0912b8ee100914bc);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_048773aad2950b5d084a17af639237de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_048773aad2950b5d084a17af639237de);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_int_pos_455));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_455);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed1545a10b4dc62f287be622203ec616));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed1545a10b4dc62f287be622203ec616);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_2d1e41d160f9064098a1d6743759ffd1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2d1e41d160f9064098a1d6743759ffd1);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_1def987907a2ee325f067163d1f49297));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1def987907a2ee325f067163d1f49297);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_02499b93a6a02d986c395f55b05bd3c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02499b93a6a02d986c395f55b05bd3c6);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_66bb945a0d949cb285162ff49f240959));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66bb945a0d949cb285162ff49f240959);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_conversations_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_conversations_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_0eb6c71b45d0d6ca04abc9b716867ab4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0eb6c71b45d0d6ca04abc9b716867ab4_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_bd90d5313821b1d90639154c201a2a90_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bd90d5313821b1d90639154c201a2a90_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_b0a8aebd220f13809f9423dad338ef45_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b0a8aebd220f13809f9423dad338ef45_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 25
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
static PyObject *module_var_accessor_openai$resources$conversations$conversations$AsyncAPIResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$AsyncConversationsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversationsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncConversationsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncConversationsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncConversationsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncConversationsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversationsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversationsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversationsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$AsyncConversationsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$AsyncItems(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItems);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncItems);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncItems, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncItems);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncItems, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItems);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItems);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItems);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$AsyncItemsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItemsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncItemsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncItemsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncItemsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncItemsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItemsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItemsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItemsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$AsyncItemsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItemsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncItemsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncItemsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncItemsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncItemsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItemsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItemsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItemsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$Conversation(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Conversation);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Conversation);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Conversation, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Conversation);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Conversation, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Conversation);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Conversation);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Conversation);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$ConversationDeletedResource(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationDeletedResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConversationDeletedResource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConversationDeletedResource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConversationDeletedResource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConversationDeletedResource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationDeletedResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationDeletedResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationDeletedResource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$ConversationsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConversationsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConversationsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConversationsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConversationsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$ConversationsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConversationsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConversationsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConversationsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConversationsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$Items(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Items);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Items);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Items, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Items);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Items, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Items);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Items);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Items);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$ItemsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ItemsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ItemsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ItemsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ItemsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ItemsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ItemsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ItemsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ItemsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$ItemsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ItemsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ItemsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ItemsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ItemsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ItemsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ItemsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ItemsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ItemsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$SyncAPIResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$_legacy_response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$async_maybe_transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$async_to_streamed_response_wrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$cached_property(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$conversation_create_params(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_conversation_create_params);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_conversation_create_params);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_conversation_create_params, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_conversation_create_params);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_conversation_create_params, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_conversation_create_params);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_conversation_create_params);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_conversation_create_params);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$conversation_update_params(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_conversation_update_params);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_conversation_update_params);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_conversation_update_params, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_conversation_update_params);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_conversation_update_params, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_conversation_update_params);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_conversation_update_params);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_conversation_update_params);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$make_request_options(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$maybe_transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$conversations$conversations$to_streamed_response_wrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$conversations$conversations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$conversations$conversations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$conversations$conversations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_dea29218101d871a0fd4c0edd5786d16;
static PyCodeObject *code_objects_3c0ba3dec98364833253bdc5ea5f116e;
static PyCodeObject *code_objects_19ea955f28c1fb38d97677723cb8cb31;
static PyCodeObject *code_objects_57783f1cd059ecd1f898641a60274d4b;
static PyCodeObject *code_objects_9547c9668c82c0e871d9b97b8e7afdc0;
static PyCodeObject *code_objects_1cb848b4c981971dd58614274a4d713a;
static PyCodeObject *code_objects_116c6368ed70ca826f7b9e9608d1caa5;
static PyCodeObject *code_objects_49905b02d20029795331547bec454cc7;
static PyCodeObject *code_objects_c73c3aadc6976213afc5064d76d7301b;
static PyCodeObject *code_objects_bdd8d0aef98d6b59c32e04018b151086;
static PyCodeObject *code_objects_450928888e8d15b65e5a2b551a353b94;
static PyCodeObject *code_objects_260ac36d4e1f7df44a81e7808e887213;
static PyCodeObject *code_objects_08d9d2e0d8a4ec2b44d814279bba6cc0;
static PyCodeObject *code_objects_d2fe27d7efb8d9b630960ed9557bb835;
static PyCodeObject *code_objects_37bbca6a4c35a7edbe98142b6824dd9b;
static PyCodeObject *code_objects_c0dda708f0b941b94087df470de75dc8;
static PyCodeObject *code_objects_88dd7ea1f05fcc6eb36651b38e330db7;
static PyCodeObject *code_objects_b76258fa597ea4bfe2da750420eafeae;
static PyCodeObject *code_objects_6f9b72843dabee962bbd740c4842eea5;
static PyCodeObject *code_objects_48d0986b48f8efc35a42e51193eaad03;
static PyCodeObject *code_objects_3eee68b20292f4e1230c4a9edd1408fa;
static PyCodeObject *code_objects_2698c7637a51c5b9af90cbc95f2bdf09;
static PyCodeObject *code_objects_766d4e16cd16750ba2a3d502efa336e9;
static PyCodeObject *code_objects_38d49c98ebe56cebb99206a7dd57a065;
static PyCodeObject *code_objects_441006217b604556ac87552b4eee92a9;
static PyCodeObject *code_objects_273c10c87657e53d1eab37fb583b9a7c;
static PyCodeObject *code_objects_9530a2d4ad2118115f57cbf4d59c9f5c;
static PyCodeObject *code_objects_32192ee88e819ea6a897895589b98a69;
static PyCodeObject *code_objects_3c7b7a8e4bbeafce80b45c94f9c6dcb3;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_02499b93a6a02d986c395f55b05bd3c6); CHECK_OBJECT(module_filename_obj);
code_objects_dea29218101d871a0fd4c0edd5786d16 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_66bb945a0d949cb285162ff49f240959, mod_consts.const_str_digest_66bb945a0d949cb285162ff49f240959, NULL, NULL, 0, 0, 0);
code_objects_3c0ba3dec98364833253bdc5ea5f116e = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncConversations, mod_consts.const_str_plain_AsyncConversations, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_19ea955f28c1fb38d97677723cb8cb31 = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncConversationsWithRawResponse, mod_consts.const_str_plain_AsyncConversationsWithRawResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_57783f1cd059ecd1f898641a60274d4b = MAKE_CODE_OBJECT(module_filename_obj, 455, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse, mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9547c9668c82c0e871d9b97b8e7afdc0 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Conversations, mod_consts.const_str_plain_Conversations, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1cb848b4c981971dd58614274a4d713a = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ConversationsWithRawResponse, mod_consts.const_str_plain_ConversationsWithRawResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_116c6368ed70ca826f7b9e9608d1caa5 = MAKE_CODE_OBJECT(module_filename_obj, 433, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ConversationsWithStreamingResponse, mod_consts.const_str_plain_ConversationsWithStreamingResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_49905b02d20029795331547bec454cc7 = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_88b6ca63d3047a20dfed921f3af82dc6, mod_consts.const_tuple_str_plain_self_str_plain_conversations_tuple, NULL, 2, 0, 0);
code_objects_c73c3aadc6976213afc5064d76d7301b = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ed1545a10b4dc62f287be622203ec616, mod_consts.const_tuple_str_plain_self_str_plain_conversations_tuple, NULL, 2, 0, 0);
code_objects_bdd8d0aef98d6b59c32e04018b151086 = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_c575df32fb32429fe4a9463915d54941, mod_consts.const_tuple_str_plain_self_str_plain_conversations_tuple, NULL, 2, 0, 0);
code_objects_450928888e8d15b65e5a2b551a353b94 = MAKE_CODE_OBJECT(module_filename_obj, 434, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ebab25cc3cfc566815ebd631de50454d, mod_consts.const_tuple_str_plain_self_str_plain_conversations_tuple, NULL, 2, 0, 0);
code_objects_260ac36d4e1f7df44a81e7808e887213 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_c4d8d9f2a8bef684d6a34050bea5d2b6, mod_consts.const_tuple_0eb6c71b45d0d6ca04abc9b716867ab4_tuple, NULL, 1, 6, 0);
code_objects_08d9d2e0d8a4ec2b44d814279bba6cc0 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_1df7216043d8496b97f17a28e4febbf4, mod_consts.const_tuple_0eb6c71b45d0d6ca04abc9b716867ab4_tuple, NULL, 1, 6, 0);
code_objects_d2fe27d7efb8d9b630960ed9557bb835 = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete, mod_consts.const_str_digest_f2fef2374c2e05e32a815bd9bdf27903, mod_consts.const_tuple_bd90d5313821b1d90639154c201a2a90_tuple, NULL, 2, 4, 0);
code_objects_37bbca6a4c35a7edbe98142b6824dd9b = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete, mod_consts.const_str_digest_342cd395234eedab950d48cdf28c7875, mod_consts.const_tuple_bd90d5313821b1d90639154c201a2a90_tuple, NULL, 2, 4, 0);
code_objects_c0dda708f0b941b94087df470de75dc8 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_items, mod_consts.const_str_digest_69d4ae43a8f761062d2b091beb17d58a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_88dd7ea1f05fcc6eb36651b38e330db7 = MAKE_CODE_OBJECT(module_filename_obj, 429, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_items, mod_consts.const_str_digest_baaa46dc21ba4634bd99c993c158c4a3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b76258fa597ea4bfe2da750420eafeae = MAKE_CODE_OBJECT(module_filename_obj, 473, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_items, mod_consts.const_str_digest_1def987907a2ee325f067163d1f49297, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6f9b72843dabee962bbd740c4842eea5 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_items, mod_consts.const_str_digest_cd6da4ff672954d8f0a8fedce4c16a9c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_48d0986b48f8efc35a42e51193eaad03 = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_items, mod_consts.const_str_digest_15444022f15924acd40b6fd0b36a3221, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3eee68b20292f4e1230c4a9edd1408fa = MAKE_CODE_OBJECT(module_filename_obj, 451, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_items, mod_consts.const_str_digest_048773aad2950b5d084a17af639237de, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2698c7637a51c5b9af90cbc95f2bdf09 = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_retrieve, mod_consts.const_str_digest_142b47c7a4b4ea9008f0e93049a3b361, mod_consts.const_tuple_bd90d5313821b1d90639154c201a2a90_tuple, NULL, 2, 4, 0);
code_objects_766d4e16cd16750ba2a3d502efa336e9 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_retrieve, mod_consts.const_str_digest_d6ea08fe795a906d63b3e0c6ab44a168, mod_consts.const_tuple_bd90d5313821b1d90639154c201a2a90_tuple, NULL, 2, 4, 0);
code_objects_38d49c98ebe56cebb99206a7dd57a065 = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_ea4b0ff95f9dd06b53ae94bd6e04e427, mod_consts.const_tuple_b0a8aebd220f13809f9423dad338ef45_tuple, NULL, 2, 5, 0);
code_objects_441006217b604556ac87552b4eee92a9 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_8c36434e486628521c1824357cead5f5, mod_consts.const_tuple_b0a8aebd220f13809f9423dad338ef45_tuple, NULL, 2, 5, 0);
code_objects_273c10c87657e53d1eab37fb583b9a7c = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_2d2ae42ef05f6da7a31c179a58ce774a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9530a2d4ad2118115f57cbf4d59c9f5c = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_51dada464604e5c4c2eb701bb9b49c89, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_32192ee88e819ea6a897895589b98a69 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_6c02cc311c2aeb3b7de601cae4a4343d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3c7b7a8e4bbeafce80b45c94f9c6dcb3 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_f072de03f4c8b6c73cdee93bb382823e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__11_create$$$coroutine__1_create(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__12_retrieve$$$coroutine__1_retrieve(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__13_update$$$coroutine__1_update(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__14_delete$$$coroutine__1_delete(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__10_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__11_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__12_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__13_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__14_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__15___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__16_items(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__17___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__18_items(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__19___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__1_items(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__20_items(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__21___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__22_items(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__2_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__3_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__4_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__5_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__6_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__7_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__8_items(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__9_with_raw_response(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_openai$resources$conversations$conversations$$$function__1_items(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__1_items;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__1_items = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__1_items)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__1_items);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__1_items == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__1_items = MAKE_FUNCTION_FRAME(tstate, code_objects_6f9b72843dabee962bbd740c4842eea5, module_openai$resources$conversations$conversations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__1_items->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__1_items = cache_frame_frame_openai$resources$conversations$conversations$$$function__1_items;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__1_items);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__1_items) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$Items(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Items);
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
frame_frame_openai$resources$conversations$conversations$$$function__1_items->m_frame.f_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__1_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__1_items->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__1_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__1_items,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__1_items == cache_frame_frame_openai$resources$conversations$conversations$$$function__1_items) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__1_items);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__1_items = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__1_items);

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


static PyObject *impl_openai$resources$conversations$conversations$$$function__2_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_9530a2d4ad2118115f57cbf4d59c9f5c, module_openai$resources$conversations$conversations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response = cache_frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$ConversationsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConversationsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response->m_frame.f_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response == cache_frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__2_with_raw_response);

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


static PyObject *impl_openai$resources$conversations$conversations$$$function__3_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_3c7b7a8e4bbeafce80b45c94f9c6dcb3, module_openai$resources$conversations$conversations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response = cache_frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$ConversationsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConversationsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response->m_frame.f_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response == cache_frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__3_with_streaming_response);

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


static PyObject *impl_openai$resources$conversations$conversations$$$function__4_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_items = python_pars[1];
PyObject *par_metadata = python_pars[2];
PyObject *par_extra_headers = python_pars[3];
PyObject *par_extra_query = python_pars[4];
PyObject *par_extra_body = python_pars[5];
PyObject *par_timeout = python_pars[6];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__4_create;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__4_create = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__4_create)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__4_create);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__4_create == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__4_create = MAKE_FUNCTION_FRAME(tstate, code_objects_08d9d2e0d8a4ec2b44d814279bba6cc0, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__4_create->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__4_create = cache_frame_frame_openai$resources$conversations$conversations$$$function__4_create;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__4_create);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__4_create) == 2);

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


exception_lineno = 87;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 89;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_items;
CHECK_OBJECT(par_items);
tmp_dict_value_1 = par_items;
tmp_args_element_value_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_metadata;
CHECK_OBJECT(par_metadata);
tmp_dict_value_1 = par_metadata;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_2 = module_var_accessor_openai$resources$conversations$conversations$conversation_create_params(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conversation_create_params);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 94;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ConversationCreateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 94;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__4_create->m_frame.f_lineno = 89;
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

exception_lineno = 89;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_openai$resources$conversations$conversations$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 96;
type_description_1 = "ooooooo";
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
frame_frame_openai$resources$conversations$conversations$$$function__4_create->m_frame.f_lineno = 96;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 96;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = module_var_accessor_openai$resources$conversations$conversations$Conversation(tstate);
if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Conversation);
}

if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 99;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__4_create->m_frame.f_lineno = 87;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_2};
    tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_d990244823207845ee1b05f9ef040926_tuple, kw_values, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
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


exception_lineno = 87;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__4_create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__4_create->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__4_create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__4_create,
    type_description_1,
    par_self,
    par_items,
    par_metadata,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__4_create == cache_frame_frame_openai$resources$conversations$conversations$$$function__4_create) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__4_create);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__4_create = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__4_create);

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
CHECK_OBJECT(par_items);
Py_DECREF(par_items);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
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
CHECK_OBJECT(par_items);
Py_DECREF(par_items);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
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


static PyObject *impl_openai$resources$conversations$conversations$$$function__5_retrieve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_conversation_id = python_pars[1];
PyObject *par_extra_headers = python_pars[2];
PyObject *par_extra_query = python_pars[3];
PyObject *par_extra_body = python_pars[4];
PyObject *par_timeout = python_pars[5];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve = MAKE_FUNCTION_FRAME(tstate, code_objects_766d4e16cd16750ba2a3d502efa336e9, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve = cache_frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_conversation_id);
tmp_operand_value_1 = par_conversation_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b9f40489ba67c90da7b7c48142fa200c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_conversation_id);
tmp_operand_value_2 = par_conversation_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
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


exception_lineno = 126;
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
frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve->m_frame.f_lineno = 126;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 126;
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


exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_49f579f89709946bdf3dcb3ef31390eb;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_conversation_id);
tmp_format_value_2 = par_conversation_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
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
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 129;
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
frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve->m_frame.f_lineno = 129;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 129;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$conversations$conversations$Conversation(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Conversation);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 132;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve->m_frame.f_lineno = 127;
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


exception_lineno = 127;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve,
    type_description_1,
    par_self,
    par_conversation_id,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve == cache_frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__5_retrieve);

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
CHECK_OBJECT(par_conversation_id);
Py_DECREF(par_conversation_id);
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
CHECK_OBJECT(par_conversation_id);
Py_DECREF(par_conversation_id);
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


static PyObject *impl_openai$resources$conversations$conversations$$$function__6_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_conversation_id = python_pars[1];
PyObject *par_metadata = python_pars[2];
PyObject *par_extra_headers = python_pars[3];
PyObject *par_extra_query = python_pars[4];
PyObject *par_extra_body = python_pars[5];
PyObject *par_timeout = python_pars[6];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__6_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__6_update = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__6_update)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__6_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__6_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__6_update = MAKE_FUNCTION_FRAME(tstate, code_objects_441006217b604556ac87552b4eee92a9, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__6_update->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__6_update = cache_frame_frame_openai$resources$conversations$conversations$$$function__6_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__6_update);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__6_update) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_conversation_id);
tmp_operand_value_1 = par_conversation_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooooo";
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b9f40489ba67c90da7b7c48142fa200c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_conversation_id);
tmp_operand_value_2 = par_conversation_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooo";
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
frame_frame_openai$resources$conversations$conversations$$$function__6_update->m_frame.f_lineno = 166;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 166;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
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


exception_lineno = 167;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_49f579f89709946bdf3dcb3ef31390eb;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_conversation_id);
tmp_format_value_2 = par_conversation_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooo";
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
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 169;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_metadata;
CHECK_OBJECT(par_metadata);
tmp_dict_value_1 = par_metadata;
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_2 = module_var_accessor_openai$resources$conversations$conversations$conversation_update_params(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conversation_update_params);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 169;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ConversationUpdateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 169;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__6_update->m_frame.f_lineno = 169;
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

exception_lineno = 169;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_openai$resources$conversations$conversations$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 170;
type_description_1 = "ooooooo";
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
frame_frame_openai$resources$conversations$conversations$$$function__6_update->m_frame.f_lineno = 170;
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

exception_lineno = 170;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$conversations$conversations$Conversation(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Conversation);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 173;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__6_update->m_frame.f_lineno = 167;
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


exception_lineno = 167;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__6_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__6_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__6_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__6_update,
    type_description_1,
    par_self,
    par_conversation_id,
    par_metadata,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__6_update == cache_frame_frame_openai$resources$conversations$conversations$$$function__6_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__6_update);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__6_update = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__6_update);

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
CHECK_OBJECT(par_conversation_id);
Py_DECREF(par_conversation_id);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
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
CHECK_OBJECT(par_conversation_id);
Py_DECREF(par_conversation_id);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
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


static PyObject *impl_openai$resources$conversations$conversations$$$function__7_delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_conversation_id = python_pars[1];
PyObject *par_extra_headers = python_pars[2];
PyObject *par_extra_query = python_pars[3];
PyObject *par_extra_body = python_pars[4];
PyObject *par_timeout = python_pars[5];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__7_delete;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__7_delete = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__7_delete)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__7_delete);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__7_delete == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__7_delete = MAKE_FUNCTION_FRAME(tstate, code_objects_37bbca6a4c35a7edbe98142b6824dd9b, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__7_delete->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__7_delete = cache_frame_frame_openai$resources$conversations$conversations$$$function__7_delete;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__7_delete);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__7_delete) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_conversation_id);
tmp_operand_value_1 = par_conversation_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b9f40489ba67c90da7b7c48142fa200c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_conversation_id);
tmp_operand_value_2 = par_conversation_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
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


exception_lineno = 200;
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
frame_frame_openai$resources$conversations$conversations$$$function__7_delete->m_frame.f_lineno = 200;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 200;
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


exception_lineno = 201;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_49f579f89709946bdf3dcb3ef31390eb;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_conversation_id);
tmp_format_value_2 = par_conversation_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
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
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 203;
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
frame_frame_openai$resources$conversations$conversations$$$function__7_delete->m_frame.f_lineno = 203;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 203;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$conversations$conversations$ConversationDeletedResource(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConversationDeletedResource);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 206;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__7_delete->m_frame.f_lineno = 201;
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


exception_lineno = 201;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__7_delete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__7_delete->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__7_delete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__7_delete,
    type_description_1,
    par_self,
    par_conversation_id,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__7_delete == cache_frame_frame_openai$resources$conversations$conversations$$$function__7_delete) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__7_delete);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__7_delete = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__7_delete);

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
CHECK_OBJECT(par_conversation_id);
Py_DECREF(par_conversation_id);
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
CHECK_OBJECT(par_conversation_id);
Py_DECREF(par_conversation_id);
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


static PyObject *impl_openai$resources$conversations$conversations$$$function__8_items(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__8_items;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__8_items = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__8_items)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__8_items);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__8_items == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__8_items = MAKE_FUNCTION_FRAME(tstate, code_objects_c0dda708f0b941b94087df470de75dc8, module_openai$resources$conversations$conversations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__8_items->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__8_items = cache_frame_frame_openai$resources$conversations$conversations$$$function__8_items;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__8_items);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__8_items) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$AsyncItems(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncItems);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__client);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__8_items->m_frame.f_lineno = 213;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__8_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__8_items->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__8_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__8_items,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__8_items == cache_frame_frame_openai$resources$conversations$conversations$$$function__8_items) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__8_items);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__8_items = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__8_items);

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


static PyObject *impl_openai$resources$conversations$conversations$$$function__9_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_273c10c87657e53d1eab37fb583b9a7c, module_openai$resources$conversations$conversations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response = cache_frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$AsyncConversationsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncConversationsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response->m_frame.f_lineno = 223;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response == cache_frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__9_with_raw_response);

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


static PyObject *impl_openai$resources$conversations$conversations$$$function__10_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_32192ee88e819ea6a897895589b98a69, module_openai$resources$conversations$conversations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response = cache_frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$AsyncConversationsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response->m_frame.f_lineno = 232;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response == cache_frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__10_with_streaming_response);

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


static PyObject *impl_openai$resources$conversations$conversations$$$function__11_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_items = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_metadata = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[6]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[7];
tmp_closure_1[0] = par_extra_body;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_query;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_items;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_metadata;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_self;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_timeout;
Py_INCREF(tmp_closure_1[6]);
tmp_return_value = MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__11_create$$$coroutine__1_create(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_items);
CHECK_OBJECT(par_items);
Py_DECREF(par_items);
par_items = NULL;
CHECK_OBJECT(par_metadata);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
par_metadata = NULL;
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
struct openai$resources$conversations$conversations$$$function__11_create$$$coroutine__1_create_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$conversations$conversations$$$function__11_create$$$coroutine__1_create_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$conversations$conversations$$$function__11_create$$$coroutine__1_create_locals *coroutine_heap = (struct openai$resources$conversations$conversations$$$function__11_create$$$coroutine__1_create_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_260ac36d4e1f7df44a81e7808e887213, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
coroutine->m_frame->m_frame.f_lineno = 264;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 264;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__post);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 264;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 266;
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$async_maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_items;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_items);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 268;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_args_element_value_1 = _PyDict_NewPresized( 2 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_metadata;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_metadata);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "ccccccc";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
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
tmp_expression_value_6 = module_var_accessor_openai$resources$conversations$conversations$conversation_create_params(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_create_params);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 271;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ConversationCreateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 271;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 266;
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

coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccccccc";
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

coroutine_heap->exception_lineno = 266;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = yield_return_value;
tmp_called_value_3 = module_var_accessor_openai$resources$conversations$conversations$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 273;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 274;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine->m_frame->m_frame.f_lineno = 273;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 273;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = module_var_accessor_openai$resources$conversations$conversations$Conversation(tstate);
if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Conversation);
}

if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

coroutine_heap->exception_lineno = 276;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 264;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_2};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_d990244823207845ee1b05f9ef040926_tuple, kw_values, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
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


coroutine_heap->exception_lineno = 264;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 264;
coroutine_heap->type_description_1 = "ccccccc";
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


coroutine_heap->exception_lineno = 264;
coroutine_heap->type_description_1 = "ccccccc";
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
    coroutine->m_closure[5],
    coroutine->m_closure[3],
    coroutine->m_closure[4],
    coroutine->m_closure[1],
    coroutine->m_closure[2],
    coroutine->m_closure[0],
    coroutine->m_closure[6]
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

static PyObject *MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__11_create$$$coroutine__1_create(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$conversations$conversations$$$function__11_create$$$coroutine__1_create_context,
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_create,
        mod_consts.const_str_digest_c4d8d9f2a8bef684d6a34050bea5d2b6,
        code_objects_260ac36d4e1f7df44a81e7808e887213,
        closure,
        7,
#if 1
        sizeof(struct openai$resources$conversations$conversations$$$function__11_create$$$coroutine__1_create_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$conversations$conversations$$$function__12_retrieve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_conversation_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[5]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[6];
tmp_closure_1[0] = par_conversation_id;
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
tmp_return_value = MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__12_retrieve$$$coroutine__1_retrieve(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_conversation_id);
CHECK_OBJECT(par_conversation_id);
Py_DECREF(par_conversation_id);
par_conversation_id = NULL;
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
struct openai$resources$conversations$conversations$$$function__12_retrieve$$$coroutine__1_retrieve_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$conversations$conversations$$$function__12_retrieve$$$coroutine__1_retrieve_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$conversations$conversations$$$function__12_retrieve$$$coroutine__1_retrieve_locals *coroutine_heap = (struct openai$resources$conversations$conversations$$$function__12_retrieve$$$coroutine__1_retrieve_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2698c7637a51c5b9af90cbc95f2bdf09, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 302;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 302;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b9f40489ba67c90da7b7c48142fa200c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 303;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 303;
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


coroutine_heap->exception_lineno = 303;
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
coroutine->m_frame->m_frame.f_lineno = 303;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 303;
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
coroutine->m_frame->m_frame.f_lineno = 304;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 304;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 304;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_49f579f89709946bdf3dcb3ef31390eb;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 305;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_2;
}

tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 305;
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
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 307;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 307;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 307;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 307;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine->m_frame->m_frame.f_lineno = 306;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$conversations$conversations$Conversation(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Conversation);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 304;
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


coroutine_heap->exception_lineno = 304;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 304;
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


coroutine_heap->exception_lineno = 304;
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

static PyObject *MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__12_retrieve$$$coroutine__1_retrieve(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$conversations$conversations$$$function__12_retrieve$$$coroutine__1_retrieve_context,
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_retrieve,
        mod_consts.const_str_digest_142b47c7a4b4ea9008f0e93049a3b361,
        code_objects_2698c7637a51c5b9af90cbc95f2bdf09,
        closure,
        6,
#if 1
        sizeof(struct openai$resources$conversations$conversations$$$function__12_retrieve$$$coroutine__1_retrieve_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$conversations$conversations$$$function__13_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_conversation_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_metadata = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[6]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[7];
tmp_closure_1[0] = par_conversation_id;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_body;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_headers;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_extra_query;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_metadata;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_self;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_timeout;
Py_INCREF(tmp_closure_1[6]);
tmp_return_value = MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__13_update$$$coroutine__1_update(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_conversation_id);
CHECK_OBJECT(par_conversation_id);
Py_DECREF(par_conversation_id);
par_conversation_id = NULL;
CHECK_OBJECT(par_metadata);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
par_metadata = NULL;
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
struct openai$resources$conversations$conversations$$$function__13_update$$$coroutine__1_update_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$conversations$conversations$$$function__13_update$$$coroutine__1_update_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$conversations$conversations$$$function__13_update$$$coroutine__1_update_locals *coroutine_heap = (struct openai$resources$conversations$conversations$$$function__13_update$$$coroutine__1_update_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_38d49c98ebe56cebb99206a7dd57a065, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccccccc";
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b9f40489ba67c90da7b7c48142fa200c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "ccccccc";
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
coroutine->m_frame->m_frame.f_lineno = 343;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 343;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccccc";
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
coroutine->m_frame->m_frame.f_lineno = 344;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__post);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_49f579f89709946bdf3dcb3ef31390eb;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 345;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_2;
}

tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 345;
coroutine_heap->type_description_1 = "ccccccc";
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
coroutine->m_frame->m_frame.f_lineno = 346;
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$async_maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 346;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_metadata;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_metadata);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_expression_value_6 = module_var_accessor_openai$resources$conversations$conversations$conversation_update_params(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_update_params);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ConversationUpdateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 346;
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

coroutine_heap->exception_lineno = 346;
coroutine_heap->type_description_1 = "ccccccc";
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

coroutine_heap->exception_lineno = 346;
coroutine_heap->type_description_1 = "ccccccc";
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

coroutine_heap->exception_lineno = 346;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = yield_return_value;
tmp_called_value_3 = module_var_accessor_openai$resources$conversations$conversations$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 350;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine->m_frame->m_frame.f_lineno = 349;
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

coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$conversations$conversations$Conversation(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Conversation);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

coroutine_heap->exception_lineno = 352;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 344;
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


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "ccccccc";
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


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "ccccccc";
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
    coroutine->m_closure[5],
    coroutine->m_closure[0],
    coroutine->m_closure[4],
    coroutine->m_closure[2],
    coroutine->m_closure[3],
    coroutine->m_closure[1],
    coroutine->m_closure[6]
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

static PyObject *MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__13_update$$$coroutine__1_update(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$conversations$conversations$$$function__13_update$$$coroutine__1_update_context,
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_update,
        mod_consts.const_str_digest_ea4b0ff95f9dd06b53ae94bd6e04e427,
        code_objects_38d49c98ebe56cebb99206a7dd57a065,
        closure,
        7,
#if 1
        sizeof(struct openai$resources$conversations$conversations$$$function__13_update$$$coroutine__1_update_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$conversations$conversations$$$function__14_delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_conversation_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[5]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[6];
tmp_closure_1[0] = par_conversation_id;
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
tmp_return_value = MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__14_delete$$$coroutine__1_delete(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_conversation_id);
CHECK_OBJECT(par_conversation_id);
Py_DECREF(par_conversation_id);
par_conversation_id = NULL;
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
struct openai$resources$conversations$conversations$$$function__14_delete$$$coroutine__1_delete_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$conversations$conversations$$$function__14_delete$$$coroutine__1_delete_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$conversations$conversations$$$function__14_delete$$$coroutine__1_delete_locals *coroutine_heap = (struct openai$resources$conversations$conversations$$$function__14_delete$$$coroutine__1_delete_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_d2fe27d7efb8d9b630960ed9557bb835, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 378;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_b9f40489ba67c90da7b7c48142fa200c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 379;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 379;
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


coroutine_heap->exception_lineno = 379;
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
coroutine->m_frame->m_frame.f_lineno = 379;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 379;
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
coroutine->m_frame->m_frame.f_lineno = 380;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 380;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__delete);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 380;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_49f579f89709946bdf3dcb3ef31390eb;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_conversation_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "cccccc";
    goto tuple_build_exception_2;
}

tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
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
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 383;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 383;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 383;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 383;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine->m_frame->m_frame.f_lineno = 382;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$conversations$conversations$ConversationDeletedResource(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ConversationDeletedResource);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 385;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 380;
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


coroutine_heap->exception_lineno = 380;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 380;
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


coroutine_heap->exception_lineno = 380;
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

static PyObject *MAKE_COROUTINE_openai$resources$conversations$conversations$$$function__14_delete$$$coroutine__1_delete(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$conversations$conversations$$$function__14_delete$$$coroutine__1_delete_context,
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_delete,
        mod_consts.const_str_digest_f2fef2374c2e05e32a815bd9bdf27903,
        code_objects_d2fe27d7efb8d9b630960ed9557bb835,
        closure,
        6,
#if 1
        sizeof(struct openai$resources$conversations$conversations$$$function__14_delete$$$coroutine__1_delete_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$conversations$conversations$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_conversations = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bdd8d0aef98d6b59c32e04018b151086, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__15___init__->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__15___init__ = cache_frame_frame_openai$resources$conversations$conversations$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__15___init__);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__15___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_conversations);
tmp_assattr_value_1 = par_conversations;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__conversations, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
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
tmp_expression_value_1 = module_var_accessor_openai$resources$conversations$conversations$_legacy_response(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_2 = par_conversations;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 394;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__15___init__->m_frame.f_lineno = 393;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
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


exception_lineno = 393;
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
tmp_expression_value_3 = module_var_accessor_openai$resources$conversations$conversations$_legacy_response(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_4 = par_conversations;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 397;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__15___init__->m_frame.f_lineno = 396;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
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


exception_lineno = 396;
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
tmp_expression_value_5 = module_var_accessor_openai$resources$conversations$conversations$_legacy_response(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 399;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_6 = par_conversations;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 400;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__15___init__->m_frame.f_lineno = 399;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
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


exception_lineno = 399;
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
tmp_expression_value_7 = module_var_accessor_openai$resources$conversations$conversations$_legacy_response(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 402;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_8 = par_conversations;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 403;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__15___init__->m_frame.f_lineno = 402;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_delete, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__15___init__,
    type_description_1,
    par_self,
    par_conversations
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__15___init__ == cache_frame_frame_openai$resources$conversations$conversations$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__15___init__);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__15___init__);

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
CHECK_OBJECT(par_conversations);
Py_DECREF(par_conversations);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_conversations);
Py_DECREF(par_conversations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$conversations$conversations$$$function__16_items(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__16_items;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__16_items = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__16_items)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__16_items);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__16_items == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__16_items = MAKE_FUNCTION_FRAME(tstate, code_objects_48d0986b48f8efc35a42e51193eaad03, module_openai$resources$conversations$conversations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__16_items->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__16_items = cache_frame_frame_openai$resources$conversations$conversations$$$function__16_items;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__16_items);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__16_items) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$ItemsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ItemsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__conversations);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__16_items->m_frame.f_lineno = 408;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__16_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__16_items->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__16_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__16_items,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__16_items == cache_frame_frame_openai$resources$conversations$conversations$$$function__16_items) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__16_items);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__16_items = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__16_items);

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


static PyObject *impl_openai$resources$conversations$conversations$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_conversations = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__17___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__17___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__17___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__17___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__17___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__17___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_49905b02d20029795331547bec454cc7, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__17___init__->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__17___init__ = cache_frame_frame_openai$resources$conversations$conversations$$$function__17___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__17___init__);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__17___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_conversations);
tmp_assattr_value_1 = par_conversations;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__conversations, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
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
tmp_expression_value_1 = module_var_accessor_openai$resources$conversations$conversations$_legacy_response(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 415;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_2 = par_conversations;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 416;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__17___init__->m_frame.f_lineno = 415;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
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


exception_lineno = 415;
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
tmp_expression_value_3 = module_var_accessor_openai$resources$conversations$conversations$_legacy_response(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 418;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_4 = par_conversations;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 419;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__17___init__->m_frame.f_lineno = 418;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
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


exception_lineno = 418;
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
tmp_expression_value_5 = module_var_accessor_openai$resources$conversations$conversations$_legacy_response(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_6 = par_conversations;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 422;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__17___init__->m_frame.f_lineno = 421;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
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


exception_lineno = 421;
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
tmp_expression_value_7 = module_var_accessor_openai$resources$conversations$conversations$_legacy_response(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 424;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_8 = par_conversations;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 425;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__17___init__->m_frame.f_lineno = 424;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_delete, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__17___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__17___init__,
    type_description_1,
    par_self,
    par_conversations
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__17___init__ == cache_frame_frame_openai$resources$conversations$conversations$$$function__17___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__17___init__);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__17___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__17___init__);

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
CHECK_OBJECT(par_conversations);
Py_DECREF(par_conversations);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_conversations);
Py_DECREF(par_conversations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$conversations$conversations$$$function__18_items(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__18_items;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__18_items = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__18_items)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__18_items);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__18_items == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__18_items = MAKE_FUNCTION_FRAME(tstate, code_objects_88dd7ea1f05fcc6eb36651b38e330db7, module_openai$resources$conversations$conversations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__18_items->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__18_items = cache_frame_frame_openai$resources$conversations$conversations$$$function__18_items;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__18_items);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__18_items) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$AsyncItemsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncItemsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 430;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__conversations);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__18_items->m_frame.f_lineno = 430;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__18_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__18_items->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__18_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__18_items,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__18_items == cache_frame_frame_openai$resources$conversations$conversations$$$function__18_items) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__18_items);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__18_items = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__18_items);

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


static PyObject *impl_openai$resources$conversations$conversations$$$function__19___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_conversations = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__19___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__19___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__19___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__19___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__19___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__19___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_450928888e8d15b65e5a2b551a353b94, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__19___init__->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__19___init__ = cache_frame_frame_openai$resources$conversations$conversations$$$function__19___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__19___init__);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__19___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_conversations);
tmp_assattr_value_1 = par_conversations;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__conversations, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
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
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 437;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_1 = par_conversations;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__19___init__->m_frame.f_lineno = 437;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
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


exception_lineno = 437;
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
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_2 = par_conversations;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__19___init__->m_frame.f_lineno = 440;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
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


exception_lineno = 440;
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
tmp_called_value_3 = module_var_accessor_openai$resources$conversations$conversations$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 443;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_3 = par_conversations;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__19___init__->m_frame.f_lineno = 443;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
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


exception_lineno = 443;
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
tmp_called_value_4 = module_var_accessor_openai$resources$conversations$conversations$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 446;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_4 = par_conversations;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__19___init__->m_frame.f_lineno = 446;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_delete, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__19___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__19___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__19___init__,
    type_description_1,
    par_self,
    par_conversations
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__19___init__ == cache_frame_frame_openai$resources$conversations$conversations$$$function__19___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__19___init__);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__19___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__19___init__);

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
CHECK_OBJECT(par_conversations);
Py_DECREF(par_conversations);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_conversations);
Py_DECREF(par_conversations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$conversations$conversations$$$function__20_items(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__20_items;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__20_items = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__20_items)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__20_items);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__20_items == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__20_items = MAKE_FUNCTION_FRAME(tstate, code_objects_3eee68b20292f4e1230c4a9edd1408fa, module_openai$resources$conversations$conversations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__20_items->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__20_items = cache_frame_frame_openai$resources$conversations$conversations$$$function__20_items;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__20_items);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__20_items) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$ItemsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ItemsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 452;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__conversations);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__20_items->m_frame.f_lineno = 452;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__20_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__20_items->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__20_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__20_items,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__20_items == cache_frame_frame_openai$resources$conversations$conversations$$$function__20_items) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__20_items);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__20_items = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__20_items);

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


static PyObject *impl_openai$resources$conversations$conversations$$$function__21___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_conversations = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__21___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__21___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__21___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__21___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__21___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__21___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c73c3aadc6976213afc5064d76d7301b, module_openai$resources$conversations$conversations, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__21___init__->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__21___init__ = cache_frame_frame_openai$resources$conversations$conversations$$$function__21___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__21___init__);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__21___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_conversations);
tmp_assattr_value_1 = par_conversations;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__conversations, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
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
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 459;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_1 = par_conversations;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__21___init__->m_frame.f_lineno = 459;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
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


exception_lineno = 459;
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
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 462;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_2 = par_conversations;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__21___init__->m_frame.f_lineno = 462;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
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


exception_lineno = 462;
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
tmp_called_value_3 = module_var_accessor_openai$resources$conversations$conversations$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 465;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_3 = par_conversations;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__21___init__->m_frame.f_lineno = 465;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
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


exception_lineno = 465;
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
tmp_called_value_4 = module_var_accessor_openai$resources$conversations$conversations$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_conversations);
tmp_expression_value_4 = par_conversations;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__21___init__->m_frame.f_lineno = 468;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_delete, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__21___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__21___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__21___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__21___init__,
    type_description_1,
    par_self,
    par_conversations
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__21___init__ == cache_frame_frame_openai$resources$conversations$conversations$$$function__21___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__21___init__);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__21___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__21___init__);

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
CHECK_OBJECT(par_conversations);
Py_DECREF(par_conversations);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_conversations);
Py_DECREF(par_conversations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$conversations$conversations$$$function__22_items(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$function__22_items;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$conversations$conversations$$$function__22_items = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$conversations$conversations$$$function__22_items)) {
    Py_XDECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__22_items);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$conversations$conversations$$$function__22_items == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$conversations$conversations$$$function__22_items = MAKE_FUNCTION_FRAME(tstate, code_objects_b76258fa597ea4bfe2da750420eafeae, module_openai$resources$conversations$conversations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$conversations$conversations$$$function__22_items->m_type_description == NULL);
frame_frame_openai$resources$conversations$conversations$$$function__22_items = cache_frame_frame_openai$resources$conversations$conversations$$$function__22_items;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$function__22_items);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$function__22_items) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$resources$conversations$conversations$AsyncItemsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncItemsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 474;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__conversations);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$conversations$conversations$$$function__22_items->m_frame.f_lineno = 474;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$function__22_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$function__22_items->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$function__22_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$function__22_items,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$conversations$conversations$$$function__22_items == cache_frame_frame_openai$resources$conversations$conversations$$$function__22_items) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$conversations$conversations$$$function__22_items);
    cache_frame_frame_openai$resources$conversations$conversations$$$function__22_items = NULL;
}

assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$function__22_items);

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



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__10_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__10_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6c02cc311c2aeb3b7de601cae4a4343d,
#endif
        code_objects_32192ee88e819ea6a897895589b98a69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__11_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__11_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c4d8d9f2a8bef684d6a34050bea5d2b6,
#endif
        code_objects_260ac36d4e1f7df44a81e7808e887213,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_39528f115dcb2328dadb971411cce9cd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__12_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__12_retrieve,
        mod_consts.const_str_plain_retrieve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_142b47c7a4b4ea9008f0e93049a3b361,
#endif
        code_objects_2698c7637a51c5b9af90cbc95f2bdf09,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_8073448ca2e4d06bc87a5400099ebfa1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__13_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__13_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea4b0ff95f9dd06b53ae94bd6e04e427,
#endif
        code_objects_38d49c98ebe56cebb99206a7dd57a065,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_678484ae5f9391f0ba25ec3983822d6c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__14_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__14_delete,
        mod_consts.const_str_plain_delete,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f2fef2374c2e05e32a815bd9bdf27903,
#endif
        code_objects_d2fe27d7efb8d9b630960ed9557bb835,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_b7edc135782fe1312f888af3babef0ea,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__15___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c575df32fb32429fe4a9463915d54941,
#endif
        code_objects_bdd8d0aef98d6b59c32e04018b151086,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__16_items(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__16_items,
        mod_consts.const_str_plain_items,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_15444022f15924acd40b6fd0b36a3221,
#endif
        code_objects_48d0986b48f8efc35a42e51193eaad03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__17___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_88b6ca63d3047a20dfed921f3af82dc6,
#endif
        code_objects_49905b02d20029795331547bec454cc7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__18_items(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__18_items,
        mod_consts.const_str_plain_items,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_baaa46dc21ba4634bd99c993c158c4a3,
#endif
        code_objects_88dd7ea1f05fcc6eb36651b38e330db7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__19___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ebab25cc3cfc566815ebd631de50454d,
#endif
        code_objects_450928888e8d15b65e5a2b551a353b94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__1_items(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__1_items,
        mod_consts.const_str_plain_items,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cd6da4ff672954d8f0a8fedce4c16a9c,
#endif
        code_objects_6f9b72843dabee962bbd740c4842eea5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__20_items(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__20_items,
        mod_consts.const_str_plain_items,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_048773aad2950b5d084a17af639237de,
#endif
        code_objects_3eee68b20292f4e1230c4a9edd1408fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__21___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__21___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ed1545a10b4dc62f287be622203ec616,
#endif
        code_objects_c73c3aadc6976213afc5064d76d7301b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__22_items(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__22_items,
        mod_consts.const_str_plain_items,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1def987907a2ee325f067163d1f49297,
#endif
        code_objects_b76258fa597ea4bfe2da750420eafeae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__2_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__2_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_51dada464604e5c4c2eb701bb9b49c89,
#endif
        code_objects_9530a2d4ad2118115f57cbf4d59c9f5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__3_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__3_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f072de03f4c8b6c73cdee93bb382823e,
#endif
        code_objects_3c7b7a8e4bbeafce80b45c94f9c6dcb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__4_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__4_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1df7216043d8496b97f17a28e4febbf4,
#endif
        code_objects_08d9d2e0d8a4ec2b44d814279bba6cc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_39528f115dcb2328dadb971411cce9cd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__5_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__5_retrieve,
        mod_consts.const_str_plain_retrieve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d6ea08fe795a906d63b3e0c6ab44a168,
#endif
        code_objects_766d4e16cd16750ba2a3d502efa336e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_8073448ca2e4d06bc87a5400099ebfa1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__6_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__6_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8c36434e486628521c1824357cead5f5,
#endif
        code_objects_441006217b604556ac87552b4eee92a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_678484ae5f9391f0ba25ec3983822d6c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__7_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__7_delete,
        mod_consts.const_str_plain_delete,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_342cd395234eedab950d48cdf28c7875,
#endif
        code_objects_37bbca6a4c35a7edbe98142b6824dd9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_b7edc135782fe1312f888af3babef0ea,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__8_items(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__8_items,
        mod_consts.const_str_plain_items,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_69d4ae43a8f761062d2b091beb17d58a,
#endif
        code_objects_c0dda708f0b941b94087df470de75dc8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__9_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$conversations$conversations$$$function__9_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d2ae42ef05f6da7a31c179a58ce774a,
#endif
        code_objects_273c10c87657e53d1eab37fb583b9a7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$conversations$conversations,
        mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b,
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

static function_impl_code const function_table_openai$resources$conversations$conversations[] = {
impl_openai$resources$conversations$conversations$$$function__1_items,
impl_openai$resources$conversations$conversations$$$function__2_with_raw_response,
impl_openai$resources$conversations$conversations$$$function__3_with_streaming_response,
impl_openai$resources$conversations$conversations$$$function__4_create,
impl_openai$resources$conversations$conversations$$$function__5_retrieve,
impl_openai$resources$conversations$conversations$$$function__6_update,
impl_openai$resources$conversations$conversations$$$function__7_delete,
impl_openai$resources$conversations$conversations$$$function__8_items,
impl_openai$resources$conversations$conversations$$$function__9_with_raw_response,
impl_openai$resources$conversations$conversations$$$function__10_with_streaming_response,
impl_openai$resources$conversations$conversations$$$function__11_create,
impl_openai$resources$conversations$conversations$$$function__12_retrieve,
impl_openai$resources$conversations$conversations$$$function__13_update,
impl_openai$resources$conversations$conversations$$$function__14_delete,
impl_openai$resources$conversations$conversations$$$function__15___init__,
impl_openai$resources$conversations$conversations$$$function__16_items,
impl_openai$resources$conversations$conversations$$$function__17___init__,
impl_openai$resources$conversations$conversations$$$function__18_items,
impl_openai$resources$conversations$conversations$$$function__19___init__,
impl_openai$resources$conversations$conversations$$$function__20_items,
impl_openai$resources$conversations$conversations$$$function__21___init__,
impl_openai$resources$conversations$conversations$$$function__22_items,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$resources$conversations$conversations);
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
        module_openai$resources$conversations$conversations,
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
        function_table_openai$resources$conversations$conversations,
        sizeof(function_table_openai$resources$conversations$conversations) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.resources.conversations.conversations";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$resources$conversations$conversations(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$resources$conversations$conversations");

    // Store the module for future use.
    module_openai$resources$conversations$conversations = module;

    moduledict_openai$resources$conversations$conversations = MODULE_DICT(module_openai$resources$conversations$conversations);

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
        PRINT_STRING("openai$resources$conversations$conversations: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$resources$conversations$conversations: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$resources$conversations$conversations: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.resources.conversations.conversations" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$resources$conversations$conversations\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$resources$conversations$conversations,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$resources$conversations$conversations,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$resources$conversations$conversations,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$resources$conversations$conversations,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$resources$conversations$conversations,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$resources$conversations$conversations);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$resources$conversations$conversations);
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

        UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations;
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
PyObject *locals_openai$resources$conversations$conversations$$$class__1_Conversations_33 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
PyObject *locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
PyObject *locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_7;
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
UPDATE_STRING_DICT0(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$resources$conversations$conversations = MAKE_MODULE_FRAME(code_objects_dea29218101d871a0fd4c0edd5786d16, module_openai$resources$conversations$conversations);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$resources$conversations$conversations$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$resources$conversations$conversations$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_Dict,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Dict);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict, tmp_assign_source_6);
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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_7);
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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_8);
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
tmp_name_value_1 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 7;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain__legacy_response_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 9;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
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


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_items;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_1b6687b75e152742f9bc4e24b5b66227_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 10;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_Items,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Items);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Items, tmp_assign_source_12);
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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_AsyncItems,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_AsyncItems);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItems, tmp_assign_source_13);
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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_ItemsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ItemsWithRawResponse);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ItemsWithRawResponse, tmp_assign_source_14);
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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_AsyncItemsWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_AsyncItemsWithRawResponse);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItemsWithRawResponse, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_ItemsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ItemsWithStreamingResponse);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ItemsWithStreamingResponse, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_AsyncItemsWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_AsyncItemsWithStreamingResponse);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncItemsWithStreamingResponse, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_588f21ecebfad4c9dbc0f7aa769b8795_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 18;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_NOT_GIVEN,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN, tmp_assign_source_19);
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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_Body,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Body);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Body, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_Query,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Query);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Query, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_Headers,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Headers);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_NotGiven,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_NotGiven);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven, tmp_assign_source_23);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_maybe_transform_str_plain_async_maybe_transform_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 19;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_async_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform, tmp_assign_source_26);
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
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_cached_property_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 20;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_cached_property,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_cached_property);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__resource;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 21;
tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_28;
}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_19 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_SyncAPIResource,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_SyncAPIResource);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource, tmp_assign_source_29);
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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_AsyncAPIResource,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_AsyncAPIResource);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource, tmp_assign_source_30);
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
PyObject *tmp_assign_source_31;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__response;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 22;
tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_21 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_to_streamed_response_wrapper,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_22 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_async_to_streamed_response_wrapper,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper, tmp_assign_source_33);
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
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__base_client;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_make_request_options_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 23;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_make_request_options,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_make_request_options);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_df04e8b3af1722938d5a3de93dab68a3;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_16af26876362c35f61fb34e42e168dbe_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 24;
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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_conversation_create_params,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_conversation_create_params);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_conversation_create_params, tmp_assign_source_36);
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
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_conversation_update_params,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_conversation_update_params);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_conversation_update_params, tmp_assign_source_37);
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
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_8f4cfd1ed3283a1c9947c5431ec224c2;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_Metadata_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 25;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_Metadata,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_Metadata);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Metadata, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_0432ecddf23b48c7ad052c7d4ec49287;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_Conversation_tuple;
tmp_level_value_12 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 26;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_Conversation,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_Conversation);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Conversation, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_424fcb649f5fac2a4f7f4fcf8bdcc0c6;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_ResponseInputItemParam_tuple;
tmp_level_value_13 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 27;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_ResponseInputItemParam,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_ResponseInputItemParam);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInputItemParam, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_46ad31be6e690b3ae368aca9067dd9b5;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$resources$conversations$conversations;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_ConversationDeletedResource_tuple;
tmp_level_value_14 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 28;
tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$resources$conversations$conversations,
        mod_consts.const_str_plain_ConversationDeletedResource,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ConversationDeletedResource);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationDeletedResource, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_LIST2(tstate, mod_consts.const_str_plain_Conversations,mod_consts.const_str_plain_AsyncConversations);
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_42);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_openai$resources$conversations$conversations$SyncAPIResource(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncAPIResource);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto try_except_handler_8;
}
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
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
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_46;
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
PyObject *tmp_assign_source_47;
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
tmp_tuple_element_2 = mod_consts.const_str_plain_Conversations;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 33;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_47;
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
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 33;
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
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_48;
}
branch_end_1:;
{
PyObject *tmp_assign_source_49;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$resources$conversations$conversations$$$class__1_Conversations_33 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_36a868fe718e2817fe4ddf80a279bac6;
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_Conversations;
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_33;
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
}
frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2 = MAKE_CLASS_FRAME(tstate, code_objects_9547c9668c82c0e871d9b97b8e7afdc0, module_openai$resources$conversations$conversations, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = module_var_accessor_openai$resources$conversations$conversations$cached_property(tstate);
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

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_cb7e0d37d32fd009bafc3240a6a276e1);

tmp_args_element_value_1 = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__1_items(tstate, tmp_annotations_1);

frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2->m_frame.f_lineno = 34;
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
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_items, tmp_dictset_value);
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
tmp_called_value_3 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_openai$resources$conversations$conversations$cached_property(tstate);
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

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_3c5e34bfddd161e0514c8b9e1b007d92);

tmp_args_element_value_2 = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__2_with_raw_response(tstate, tmp_annotations_2);

frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2->m_frame.f_lineno = 38;
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
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
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
tmp_called_value_4 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_openai$resources$conversations$conversations$cached_property(tstate);
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

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_50098b73d42b699400cdee3fff66d301);

tmp_args_element_value_3 = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__3_with_streaming_response(tstate, tmp_annotations_3);

frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2->m_frame.f_lineno = 48;
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
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
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
tmp_dict_key_1 = mod_consts.const_str_plain_items;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
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
tmp_dict_key_1 = mod_consts.const_str_plain_metadata;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
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
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
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
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_1);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_c403c85d54ba35c1a7ed79402c1840d2);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__4_create(tstate, tmp_kw_defaults_1, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_create, tmp_dictset_value);
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
tmp_dict_value_2 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
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
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_020c038121411c2ff9c2967c48e7fab7);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__5_retrieve(tstate, tmp_kw_defaults_2, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_retrieve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_annotations_6;
tmp_dict_key_3 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_3 = Py_None;
tmp_kw_defaults_3 = _PyDict_NewPresized( 4 );
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
tmp_dict_value_3 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
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
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_46b3a5636ba5ba3e88057ab043a09e49);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__6_update(tstate, tmp_kw_defaults_3, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_annotations_7;
tmp_dict_key_4 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_4 = Py_None;
tmp_kw_defaults_4 = _PyDict_NewPresized( 4 );
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
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
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
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_8b0b4f830959fa6d1d5abbcf56df4f64);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__7_delete(tstate, tmp_kw_defaults_4, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain_delete, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$class__1_Conversations_2);

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
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
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
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
}
branch_no_3:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Conversations;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$resources$conversations$conversations$$$class__1_Conversations_33;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 33;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_10;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_50;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_49 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33);
locals_openai$resources$conversations$conversations$$$class__1_Conversations_33 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$conversations$conversations$$$class__1_Conversations_33);
locals_openai$resources$conversations$conversations$$$class__1_Conversations_33 = NULL;
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
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_Conversations, tmp_assign_source_49);
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
PyObject *tmp_assign_source_51;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_openai$resources$conversations$conversations$AsyncAPIResource(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncAPIResource);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;

    goto try_except_handler_11;
}
tmp_assign_source_51 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_52 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
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


exception_lineno = 210;

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


exception_lineno = 210;

    goto try_except_handler_11;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_11;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_54 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_54;
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


exception_lineno = 210;

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
PyObject *tmp_assign_source_55;
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


exception_lineno = 210;

    goto try_except_handler_11;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_AsyncConversations;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 210;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_55;
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


exception_lineno = 210;

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


exception_lineno = 210;

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


exception_lineno = 210;

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


exception_lineno = 210;

    goto try_except_handler_11;
}
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 210;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 210;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_56;
}
branch_end_4:;
{
PyObject *tmp_assign_source_57;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_36a868fe718e2817fe4ddf80a279bac6;
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncConversations;
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_210;
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_13;
}
frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3 = MAKE_CLASS_FRAME(tstate, code_objects_3c0ba3dec98364833253bdc5ea5f116e, module_openai$resources$conversations$conversations, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_8;
tmp_called_value_7 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_openai$resources$conversations$conversations$cached_property(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_303f7ac2f1c1e7fdf1299064c3b0621d);

tmp_args_element_value_4 = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__8_items(tstate, tmp_annotations_8);

frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3->m_frame.f_lineno = 211;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_items, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_9;
tmp_called_value_8 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = module_var_accessor_openai$resources$conversations$conversations$cached_property(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_1dbb621a38a1526764d44b1e7cfd2351);

tmp_args_element_value_5 = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__9_with_raw_response(tstate, tmp_annotations_9);

frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3->m_frame.f_lineno = 215;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_10;
tmp_called_value_9 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = module_var_accessor_openai$resources$conversations$conversations$cached_property(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_2b81b05d5cd9f2b8cb7ccd5747e22b1c);

tmp_args_element_value_6 = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__10_with_streaming_response(tstate, tmp_annotations_10);

frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3->m_frame.f_lineno = 225;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_annotations_11;
tmp_dict_key_5 = mod_consts.const_str_plain_items;
tmp_dict_value_5 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_5 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_metadata;
tmp_dict_value_5 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
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
tmp_dict_value_5 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
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
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_c403c85d54ba35c1a7ed79402c1840d2);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__11_create(tstate, tmp_kw_defaults_5, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_annotations_12;
tmp_dict_key_6 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_6 = Py_None;
tmp_kw_defaults_6 = _PyDict_NewPresized( 4 );
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
tmp_dict_value_6 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;
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
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_020c038121411c2ff9c2967c48e7fab7);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__12_retrieve(tstate, tmp_kw_defaults_6, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_retrieve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
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
tmp_dict_value_7 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
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
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_46b3a5636ba5ba3e88057ab043a09e49);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__13_update(tstate, tmp_kw_defaults_7, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_8;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
PyObject *tmp_annotations_14;
tmp_dict_key_8 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_8 = Py_None;
tmp_kw_defaults_8 = _PyDict_NewPresized( 4 );
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
tmp_dict_value_8 = PyObject_GetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$resources$conversations$conversations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
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
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_8b0b4f830959fa6d1d5abbcf56df4f64);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__14_delete(tstate, tmp_kw_defaults_8, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain_delete, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$class__2_AsyncConversations_3);

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
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

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


exception_lineno = 210;

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
tmp_res = PyObject_SetItem(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_13;
}
branch_no_6:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_AsyncConversations;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 210;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_13;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_58;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_57 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_57);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210);
locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210);
locals_openai$resources$conversations$conversations$$$class__2_AsyncConversations_210 = NULL;
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
exception_lineno = 210;
goto try_except_handler_11;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversations, tmp_assign_source_57);
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
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_60;
}
// Tried code:
{
PyObject *tmp_assign_source_61;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_36a868fe718e2817fe4ddf80a279bac6;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ConversationsWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_389;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_53f1aa345b5c6641b88511a7049e8b19);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__15___init__(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_4 = MAKE_CLASS_FRAME(tstate, code_objects_1cb848b4c981971dd58614274a4d713a, module_openai$resources$conversations$conversations, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_4);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_16;
tmp_called_value_11 = module_var_accessor_openai$resources$conversations$conversations$cached_property(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_4922735ee3681c17827f98bcf6d0c006);

tmp_args_element_value_7 = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__16_items(tstate, tmp_annotations_16);

frame_frame_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_4->m_frame.f_lineno = 406;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389, mod_consts.const_str_plain_items, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_16;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_8bca05d836d97d9489defc4d99c52473_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
tmp_called_value_12 = (PyObject *)&PyType_Type;
tmp_tuple_element_9 = mod_consts.const_str_plain_ConversationsWithRawResponse;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 389;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;

    goto try_except_handler_16;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_62;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_61 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_61);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389);
locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389);
locals_openai$resources$conversations$conversations$$$class__3_ConversationsWithRawResponse_389 = NULL;
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
exception_lineno = 389;
goto try_except_handler_14;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationsWithRawResponse, tmp_assign_source_61);
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
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_64;
}
// Tried code:
{
PyObject *tmp_assign_source_65;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
tmp_dictset_value = mod_consts.const_str_digest_36a868fe718e2817fe4ddf80a279bac6;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncConversationsWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_411;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_7981d31f35dfaf9c0afef5b47a0dc4d3);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__17___init__(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_5 = MAKE_CLASS_FRAME(tstate, code_objects_19ea955f28c1fb38d97677723cb8cb31, module_openai$resources$conversations$conversations, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_5);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_5) == 2);

// Framed code:
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_18;
tmp_called_value_13 = module_var_accessor_openai$resources$conversations$conversations$cached_property(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 428;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_833cb78df49b1f24f96c912aad71d470);

tmp_args_element_value_8 = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__18_items(tstate, tmp_annotations_18);

frame_frame_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_5->m_frame.f_lineno = 428;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411, mod_consts.const_str_plain_items, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_19;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_8bca05d836d97d9489defc4d99c52473_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
tmp_called_value_14 = (PyObject *)&PyType_Type;
tmp_tuple_element_10 = mod_consts.const_str_plain_AsyncConversationsWithRawResponse;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 411;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;

    goto try_except_handler_19;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_66;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_65 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_65);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411);
locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411);
locals_openai$resources$conversations$conversations$$$class__4_AsyncConversationsWithRawResponse_411 = NULL;
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
exception_lineno = 411;
goto try_except_handler_17;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversationsWithRawResponse, tmp_assign_source_65);
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
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_68;
}
// Tried code:
{
PyObject *tmp_assign_source_69;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
tmp_dictset_value = mod_consts.const_str_digest_36a868fe718e2817fe4ddf80a279bac6;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ConversationsWithStreamingResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_433;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_53f1aa345b5c6641b88511a7049e8b19);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__19___init__(tstate, tmp_annotations_19);

tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_6 = MAKE_CLASS_FRAME(tstate, code_objects_116c6368ed70ca826f7b9e9608d1caa5, module_openai$resources$conversations$conversations, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_6);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_6) == 2);

// Framed code:
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_20;
tmp_called_value_15 = module_var_accessor_openai$resources$conversations$conversations$cached_property(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 450;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_9b51c8cb833cdb3f0912b8ee100914bc);

tmp_args_element_value_9 = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__20_items(tstate, tmp_annotations_20);

frame_frame_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_6->m_frame.f_lineno = 450;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433, mod_consts.const_str_plain_items, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_22;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_8bca05d836d97d9489defc4d99c52473_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_7;
tmp_called_value_16 = (PyObject *)&PyType_Type;
tmp_tuple_element_11 = mod_consts.const_str_plain_ConversationsWithStreamingResponse;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 433;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;

    goto try_except_handler_22;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_70;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_69 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_69);
goto try_return_handler_22;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
Py_DECREF(locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433);
locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433 = NULL;
goto try_return_handler_21;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433);
locals_openai$resources$conversations$conversations$$$class__5_ConversationsWithStreamingResponse_433 = NULL;
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
exception_lineno = 433;
goto try_except_handler_20;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_ConversationsWithStreamingResponse, tmp_assign_source_69);
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
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_72;
}
// Tried code:
{
PyObject *tmp_assign_source_73;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
tmp_dictset_value = mod_consts.const_str_digest_36a868fe718e2817fe4ddf80a279bac6;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_455;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_7981d31f35dfaf9c0afef5b47a0dc4d3);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__21___init__(tstate, tmp_annotations_21);

tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_7 = MAKE_CLASS_FRAME(tstate, code_objects_57783f1cd059ecd1f898641a60274d4b, module_openai$resources$conversations$conversations, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_7);
assert(Py_REFCNT(frame_frame_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_7) == 2);

// Framed code:
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_22;
tmp_called_value_17 = module_var_accessor_openai$resources$conversations$conversations$cached_property(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 472;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_2d1e41d160f9064098a1d6743759ffd1);

tmp_args_element_value_10 = MAKE_FUNCTION_openai$resources$conversations$conversations$$$function__22_items(tstate, tmp_annotations_22);

frame_frame_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_7->m_frame.f_lineno = 472;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455, mod_consts.const_str_plain_items, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_25;
skip_nested_handling_6:;
tmp_dictset_value = mod_consts.const_tuple_8bca05d836d97d9489defc4d99c52473_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_8;
tmp_called_value_18 = (PyObject *)&PyType_Type;
tmp_tuple_element_12 = mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$resources$conversations$conversations->m_frame.f_lineno = 455;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;

    goto try_except_handler_25;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_74;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_73 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_73);
goto try_return_handler_25;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
Py_DECREF(locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455);
locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455 = NULL;
goto try_return_handler_24;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455);
locals_openai$resources$conversations$conversations$$$class__6_AsyncConversationsWithStreamingResponse_455 = NULL;
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
exception_lineno = 455;
goto try_except_handler_23;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncConversationsWithStreamingResponse, tmp_assign_source_73);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$conversations$conversations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$conversations$conversations->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$conversations$conversations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$resources$conversations$conversations);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_7:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$resources$conversations$conversations", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.resources.conversations.conversations" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$resources$conversations$conversations);
    return module_openai$resources$conversations$conversations;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$conversations$conversations, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$resources$conversations$conversations", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

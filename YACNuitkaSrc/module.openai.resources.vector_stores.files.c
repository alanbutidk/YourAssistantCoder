/* Generated code for Python module 'openai$resources$vector_stores$files'
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



/* The "module_openai$resources$vector_stores$files" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$resources$vector_stores$files;
PyDictObject *moduledict_openai$resources$vector_stores$files;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_FilesWithRawResponse;
PyObject *const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b;
PyObject *const_str_plain_FilesWithStreamingResponse;
PyObject *const_str_digest_83b043a94791b7a89fe1b103b91c36a3;
PyObject *const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
PyObject *const_dict_aa381b89ff32e5867549f1cd5db32135;
PyObject *const_str_plain__post;
PyObject *const_str_digest_7f104ce753f4f477fcc560ef7c385309;
PyObject *const_str_digest_0bfcf269629626c3e3a28a177837b532;
PyObject *const_str_plain_maybe_transform;
PyObject *const_str_plain_file_id;
PyObject *const_str_plain_attributes;
PyObject *const_str_plain_chunking_strategy;
PyObject *const_str_plain_file_create_params;
PyObject *const_str_plain_FileCreateParams;
PyObject *const_str_plain_make_request_options;
PyObject *const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple;
PyObject *const_str_plain_VectorStoreFile;
PyObject *const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple;
PyObject *const_str_digest_8876997a1f8fde703a99f8e0cfb8793c;
PyObject *const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762;
PyObject *const_str_plain__get;
PyObject *const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf;
PyObject *const_tuple_str_plain_options_str_plain_cast_to_tuple;
PyObject *const_str_digest_8ed08ab275d7af79ac96315d4301e13c;
PyObject *const_str_plain_file_update_params;
PyObject *const_str_plain_FileUpdateParams;
PyObject *const_str_digest_5a51f98f382a1c4527cac0de44681296;
PyObject *const_str_plain__get_api_list;
PyObject *const_str_plain_SyncCursorPage;
PyObject *const_str_plain_after;
PyObject *const_str_plain_before;
PyObject *const_str_plain_filter;
PyObject *const_str_plain_limit;
PyObject *const_str_plain_order;
PyObject *const_str_plain_file_list_params;
PyObject *const_str_plain_FileListParams;
PyObject *const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple;
PyObject *const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple;
PyObject *const_str_digest_bd0353e07607147dab1c3399e3c6cb53;
PyObject *const_str_plain__delete;
PyObject *const_str_plain_VectorStoreFileDeleted;
PyObject *const_str_digest_9342da94a77fc80a204ecf4ae2b73d6b;
PyObject *const_str_plain_create;
PyObject *const_tuple_a9a7f65171f9244d3e0e6e7a196b6f39_tuple;
PyObject *const_str_plain_poll;
PyObject *const_tuple_str_plain_vector_store_id_str_plain_poll_interval_ms_tuple;
PyObject *const_str_digest_3b76c92b2757b106a93ee8f8eb08342b;
PyObject *const_dict_1aba825c6825fc25942426c4d612ec19;
PyObject *const_str_plain_is_given;
PyObject *const_str_digest_d932935a9f16dadc241d177d3b40e9f3;
PyObject *const_str_plain_self;
PyObject *const_str_plain_with_raw_response;
PyObject *const_str_plain_retrieve;
PyObject *const_str_plain_vector_store_id;
PyObject *const_str_plain_headers;
PyObject *const_tuple_str_plain_vector_store_id_str_plain_extra_headers_tuple;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_status;
PyObject *const_str_plain_in_progress;
PyObject *const_str_plain_poll_interval_ms;
PyObject *const_tuple_str_digest_55abc265b5635b79194a1eb2cca3dc35_tuple;
PyObject *const_int_pos_1000;
PyObject *const_str_plain__sleep;
PyObject *const_str_plain_cancelled;
PyObject *const_str_plain_completed;
PyObject *const_str_plain_failed;
PyObject *const_str_digest_3c2ac8aacf28583808151d8c4cc19fa4;
PyObject *const_str_plain__client;
PyObject *const_str_plain_files;
PyObject *const_str_plain_assistants;
PyObject *const_tuple_str_plain_file_str_plain_purpose_tuple;
PyObject *const_str_plain_id;
PyObject *const_tuple_81cacb406356249c4a554ffc3784e02c_tuple;
PyObject *const_str_digest_b2e8338ea487ff521d4da2e8974fb2ca;
PyObject *const_str_plain_create_and_poll;
PyObject *const_tuple_6284c56d6c8da251f803ce20d812980e_tuple;
PyObject *const_str_digest_67096e13348000d3662ba0514e4063f9;
PyObject *const_str_digest_d1f7ab114277f87d05e67de6d947ae0a;
PyObject *const_str_plain_SyncPage;
PyObject *const_str_plain_FileContentResponse;
PyObject *const_str_digest_f1639cf97dbf34d4f6c8b4dd5d3eea2f;
PyObject *const_str_plain_AsyncFilesWithRawResponse;
PyObject *const_str_plain_AsyncFilesWithStreamingResponse;
PyObject *const_str_plain_extra_headers;
PyObject *const_str_plain_async_maybe_transform;
PyObject *const_str_plain_extra_query;
PyObject *const_str_plain_extra_body;
PyObject *const_str_plain_timeout;
PyObject *const_str_digest_7e2840bf3388ba7894fad9e576738907;
PyObject *const_str_digest_95e671d79b0647693a16cc19e2208db8;
PyObject *const_str_plain_update;
PyObject *const_str_digest_0c18acbfdb09c0d8b92c6d77000be5f2;
PyObject *const_str_plain_AsyncCursorPage;
PyObject *const_str_plain_delete;
PyObject *const_str_digest_f0b63ebcb1eeb51e0461daa1f66237ae;
PyObject *const_str_digest_3104dc06cc31e18d2d0a551476fc7046;
PyObject *const_str_digest_e912026f89eb9b7d1a2deb22b18f8748;
PyObject *const_str_plain_upload;
PyObject *const_str_digest_8507cf031d19d52971b8758c4b06eb18;
PyObject *const_tuple_f88631a80962055b2386c2e0b8717989_tuple;
PyObject *const_str_plain_upload_and_poll;
PyObject *const_str_digest_058a32f7dac747fe2db55d99d0487338;
PyObject *const_str_plain_AsyncPage;
PyObject *const_str_plain__files;
PyObject *const_str_plain__legacy_response;
PyObject *const_str_plain_to_raw_response_wrapper;
PyObject *const_str_plain_list;
PyObject *const_str_plain_content;
PyObject *const_str_plain_async_to_raw_response_wrapper;
PyObject *const_str_plain_to_streamed_response_wrapper;
PyObject *const_str_plain_async_to_streamed_response_wrapper;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Dict;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Literal_str_plain_assert_never_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_assert_never;
PyObject *const_str_plain_httpx;
PyObject *const_tuple_str_plain__legacy_response_tuple;
PyObject *const_int_pos_3;
PyObject *const_tuple_str_plain_FileChunkingStrategyParam_tuple;
PyObject *const_str_plain_FileChunkingStrategyParam;
PyObject *const_str_plain__types;
PyObject *const_tuple_d3f69ff1c97b29999250ccbe2edbb63c_tuple;
PyObject *const_str_plain_NOT_GIVEN;
PyObject *const_str_plain_Body;
PyObject *const_str_plain_Query;
PyObject *const_str_plain_Headers;
PyObject *const_str_plain_NotGiven;
PyObject *const_str_plain_FileTypes;
PyObject *const_str_plain__utils;
PyObject *const_tuple_55188189a993b0e7a968787ef852ce29_tuple;
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
PyObject *const_tuple_2cfc6dead7fbd8da8d427d103dbd8b53_tuple;
PyObject *const_str_plain__base_client;
PyObject *const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple;
PyObject *const_str_plain_AsyncPaginator;
PyObject *const_str_digest_2b6ee93579cfbe7f776b76a448c90b10;
PyObject *const_tuple_ebbab03a99578c116f4c187b27029b61_tuple;
PyObject *const_str_digest_57c2a12f079705aa6756be4eaf837e9b;
PyObject *const_str_digest_62566b753fb765bfb27ecce84cc221f5;
PyObject *const_tuple_str_plain_VectorStoreFile_tuple;
PyObject *const_str_digest_a9f9c53be393b679c036f3730d9977b9;
PyObject *const_tuple_str_plain_FileContentResponse_tuple;
PyObject *const_str_digest_bae68e86aacf3418c864473505157bc1;
PyObject *const_tuple_str_plain_VectorStoreFileDeleted_tuple;
PyObject *const_str_plain_Files;
PyObject *const_str_plain_AsyncFiles;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_66b2698c5ebc228f157a7677315beb07;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_28;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_b1b5363f077f3fa31a1369472fb8e410;
PyObject *const_str_digest_18ac5cde9a7abe631888316db76e17e2;
PyObject *const_dict_1a07f587000a0d966fc7d1a0258b404f;
PyObject *const_str_plain_with_streaming_response;
PyObject *const_str_digest_76a3555dfdd2d356895cc5adea2db327;
PyObject *const_dict_010f4cf74fd8897db6cc9c4ec9459273;
PyObject *const_str_digest_b9446c74ed882af4abce2f4b5edf1121;
PyObject *const_dict_700625a161eeae1605dfabd58288d36d;
PyObject *const_str_digest_96e553acdb4ca72f4bbd56456e32b0af;
PyObject *const_dict_c72dae88f52f1c7acef4ab7529ae5eef;
PyObject *const_str_digest_92f6392c6f343a72dc0a49cd3d1bd2c0;
PyObject *const_dict_73f22237a3aa6e02e7d450461e1defd6;
PyObject *const_str_digest_aab953f87fa28e05d4436ee3bde58818;
PyObject *const_dict_d88a472677142954e4ad9f224e100556;
PyObject *const_str_digest_86891960166cd96ab64b626eb1b217e4;
PyObject *const_dict_b740a6658f033c37877f4606dba3991a;
PyObject *const_str_digest_40be5bd8faa634cfba51a0bcf34aa735;
PyObject *const_dict_f4ef262fe52679f20fdc1811fdc91e37;
PyObject *const_str_digest_35524e2a433a37ed7357e9bc4ae56a3d;
PyObject *const_dict_32b891d438e2348b1f3caaa3c78d25ac;
PyObject *const_str_digest_d1aeb4dbba9ddfec9cda6e122b0fce10;
PyObject *const_dict_b8f4abf163f2b85fce68ac3a858379dc;
PyObject *const_str_digest_836771a22c2a80da359266778dfa7067;
PyObject *const_dict_527625162e71cc056197af28c2e64703;
PyObject *const_str_digest_b15ce2f76ecfb54607eb8157da3aaca7;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_436;
PyObject *const_dict_ce8faa4a25cf9c8ca8d2b32c0b91b174;
PyObject *const_str_digest_afae7bc0d04181bcdbc93e80792f312a;
PyObject *const_dict_3c5a322c3d688a7c67e311c53cffd48d;
PyObject *const_str_digest_acb3c71375c1b09af0b1b321c9c3816e;
PyObject *const_dict_10134161de16c3329935503c0e640ae4;
PyObject *const_str_digest_058f54bdcefcc9d1eb368994e3138eb4;
PyObject *const_dict_fdfa4fea3d4eeede56ee260f328865cf;
PyObject *const_str_digest_ba0cc06bfc08b258894d5ef6ed82ac0f;
PyObject *const_int_pos_846;
PyObject *const_dict_dc8921104b085a36b16a4b348cbbfbc5;
PyObject *const_str_digest_8508134ab89808e5cc378aa99f59d857;
PyObject *const_tuple_31ebdbd8308f90b8c60b4f87aefc5a63_tuple;
PyObject *const_int_pos_870;
PyObject *const_dict_8834452d4f6b8d57f97bc74a18acd464;
PyObject *const_str_digest_f2ad5f23feba609a6b95147ee33dd997;
PyObject *const_int_pos_894;
PyObject *const_str_digest_8199ec5ea80dc8be1fb4ef1486ebe077;
PyObject *const_int_pos_918;
PyObject *const_str_digest_fd49fc0723881e31f0ea3067048f3e2f;
PyObject *const_str_digest_adf2af7b81c2dc85c45e5e98f0c486f7;
PyObject *const_str_digest_a7ef7f8d71e05fd6cefb48327c3a18f6;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_files_tuple;
PyObject *const_tuple_8a9910e124d6d8b53d862a566ca3c284_tuple;
PyObject *const_tuple_2a1d983c32dad8c22e1d3426c9247fd8_tuple;
PyObject *const_tuple_4f2d2ada9fc37216d53387666593a1ef_tuple;
PyObject *const_tuple_44247206b45c076e953e191d846cd7d6_tuple;
PyObject *const_tuple_91bc56e56bba2622258376adf0af3860_tuple;
PyObject *const_tuple_1ba33cd6810e61cea6e6c776546d717e_tuple;
PyObject *const_tuple_0a62bb6d770998af3ca27bbd9cbef2b9_tuple;
PyObject *const_tuple_eed12930067cc73ee596af3d14b06e19_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[231];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.resources.vector_stores.files"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_FilesWithRawResponse);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_FilesWithStreamingResponse);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__post);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bfcf269629626c3e3a28a177837b532);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_id);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_attributes);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunking_strategy);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_create_params);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileCreateParams);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_request_options);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreFile);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_8876997a1f8fde703a99f8e0cfb8793c);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__get);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ed08ab275d7af79ac96315d4301e13c);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_update_params);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileUpdateParams);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a51f98f382a1c4527cac0de44681296);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_api_list);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncCursorPage);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_after);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_before);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_filter);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_limit);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_order);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_list_params);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileListParams);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd0353e07607147dab1c3399e3c6cb53);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__delete);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreFileDeleted);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_9342da94a77fc80a204ecf4ae2b73d6b);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_create);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_a9a7f65171f9244d3e0e6e7a196b6f39_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_poll);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vector_store_id_str_plain_poll_interval_ms_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b76c92b2757b106a93ee8f8eb08342b);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_1aba825c6825fc25942426c4d612ec19);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_given);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_d932935a9f16dadc241d177d3b40e9f3);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_id);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vector_store_id_str_plain_extra_headers_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_in_progress);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_poll_interval_ms);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_55abc265b5635b79194a1eb2cca3dc35_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_int_pos_1000);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__sleep);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_completed);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_failed);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c2ac8aacf28583808151d8c4cc19fa4);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_files);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_assistants);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_purpose_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_81cacb406356249c4a554ffc3784e02c_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2e8338ea487ff521d4da2e8974fb2ca);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_and_poll);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_6284c56d6c8da251f803ce20d812980e_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_67096e13348000d3662ba0514e4063f9);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1f7ab114277f87d05e67de6d947ae0a);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncPage);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileContentResponse);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1639cf97dbf34d4f6c8b4dd5d3eea2f);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFilesWithRawResponse);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_maybe_transform);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_body);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e2840bf3388ba7894fad9e576738907);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_95e671d79b0647693a16cc19e2208db8);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c18acbfdb09c0d8b92c6d77000be5f2);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncCursorPage);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0b63ebcb1eeb51e0461daa1f66237ae);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_3104dc06cc31e18d2d0a551476fc7046);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_e912026f89eb9b7d1a2deb22b18f8748);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_upload);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_8507cf031d19d52971b8758c4b06eb18);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_f88631a80962055b2386c2e0b8717989_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_upload_and_poll);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_058a32f7dac747fe2db55d99d0487338);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncPage);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain__files);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_list);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_streamed_response_wrapper);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dict);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_assert_never_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_never);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__legacy_response_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileChunkingStrategyParam_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileChunkingStrategyParam);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_d3f69ff1c97b29999250ccbe2edbb63c_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_Body);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_Query);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_Headers);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileTypes);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_55188189a993b0e7a968787ef852ce29_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain__resource);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIResource);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResource);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain__response);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_pagination);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_2cfc6dead7fbd8da8d427d103dbd8b53_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_client);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncPaginator);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b6ee93579cfbe7f776b76a448c90b10);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_ebbab03a99578c116f4c187b27029b61_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_57c2a12f079705aa6756be4eaf837e9b);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_62566b753fb765bfb27ecce84cc221f5);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreFile_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9f9c53be393b679c036f3730d9977b9);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileContentResponse_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_bae68e86aacf3418c864473505157bc1);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreFileDeleted_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_Files);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFiles);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_66b2698c5ebc228f157a7677315beb07);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_int_pos_28);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_b1b5363f077f3fa31a1369472fb8e410);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_18ac5cde9a7abe631888316db76e17e2);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_1a07f587000a0d966fc7d1a0258b404f);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_76a3555dfdd2d356895cc5adea2db327);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_010f4cf74fd8897db6cc9c4ec9459273);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9446c74ed882af4abce2f4b5edf1121);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_dict_700625a161eeae1605dfabd58288d36d);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_96e553acdb4ca72f4bbd56456e32b0af);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_c72dae88f52f1c7acef4ab7529ae5eef);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_92f6392c6f343a72dc0a49cd3d1bd2c0);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_dict_73f22237a3aa6e02e7d450461e1defd6);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_aab953f87fa28e05d4436ee3bde58818);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_dict_d88a472677142954e4ad9f224e100556);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_86891960166cd96ab64b626eb1b217e4);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_b740a6658f033c37877f4606dba3991a);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_40be5bd8faa634cfba51a0bcf34aa735);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_f4ef262fe52679f20fdc1811fdc91e37);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_35524e2a433a37ed7357e9bc4ae56a3d);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_32b891d438e2348b1f3caaa3c78d25ac);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1aeb4dbba9ddfec9cda6e122b0fce10);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_b8f4abf163f2b85fce68ac3a858379dc);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_836771a22c2a80da359266778dfa7067);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_527625162e71cc056197af28c2e64703);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_b15ce2f76ecfb54607eb8157da3aaca7);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_int_pos_436);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_dict_ce8faa4a25cf9c8ca8d2b32c0b91b174);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_afae7bc0d04181bcdbc93e80792f312a);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_dict_3c5a322c3d688a7c67e311c53cffd48d);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_acb3c71375c1b09af0b1b321c9c3816e);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_dict_10134161de16c3329935503c0e640ae4);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_058f54bdcefcc9d1eb368994e3138eb4);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_dict_fdfa4fea3d4eeede56ee260f328865cf);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba0cc06bfc08b258894d5ef6ed82ac0f);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_int_pos_846);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_dict_dc8921104b085a36b16a4b348cbbfbc5);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_8508134ab89808e5cc378aa99f59d857);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_31ebdbd8308f90b8c60b4f87aefc5a63_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_int_pos_870);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_dict_8834452d4f6b8d57f97bc74a18acd464);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2ad5f23feba609a6b95147ee33dd997);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_int_pos_894);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_8199ec5ea80dc8be1fb4ef1486ebe077);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_int_pos_918);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd49fc0723881e31f0ea3067048f3e2f);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_adf2af7b81c2dc85c45e5e98f0c486f7);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7ef7f8d71e05fd6cefb48327c3a18f6);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_files_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_8a9910e124d6d8b53d862a566ca3c284_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_2a1d983c32dad8c22e1d3426c9247fd8_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_4f2d2ada9fc37216d53387666593a1ef_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_44247206b45c076e953e191d846cd7d6_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_91bc56e56bba2622258376adf0af3860_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_1ba33cd6810e61cea6e6c776546d717e_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_0a62bb6d770998af3ca27bbd9cbef2b9_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_eed12930067cc73ee596af3d14b06e19_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_openai$resources$vector_stores$files(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_FilesWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FilesWithRawResponse);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_FilesWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FilesWithStreamingResponse);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135));
CHECK_OBJECT_DEEP(mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__post);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bfcf269629626c3e3a28a177837b532));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bfcf269629626c3e3a28a177837b532);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_transform);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_id);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_attributes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attributes);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunking_strategy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunking_strategy);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_create_params);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileCreateParams);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_request_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_request_options);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStoreFile);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_body_str_plain_options_str_plain_cast_to_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_8876997a1f8fde703a99f8e0cfb8793c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8876997a1f8fde703a99f8e0cfb8793c);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__get));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_options_str_plain_cast_to_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ed08ab275d7af79ac96315d4301e13c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ed08ab275d7af79ac96315d4301e13c);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_update_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_update_params);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileUpdateParams);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a51f98f382a1c4527cac0de44681296));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a51f98f382a1c4527cac0de44681296);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_api_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_api_list);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncCursorPage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncCursorPage);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_after);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_before));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_before);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filter);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_limit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_limit);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_order));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_order);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_list_params);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileListParams);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd0353e07607147dab1c3399e3c6cb53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd0353e07607147dab1c3399e3c6cb53);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__delete);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_VectorStoreFileDeleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VectorStoreFileDeleted);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_9342da94a77fc80a204ecf4ae2b73d6b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9342da94a77fc80a204ecf4ae2b73d6b);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_create));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_a9a7f65171f9244d3e0e6e7a196b6f39_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a9a7f65171f9244d3e0e6e7a196b6f39_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_poll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_poll);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vector_store_id_str_plain_poll_interval_ms_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_vector_store_id_str_plain_poll_interval_ms_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b76c92b2757b106a93ee8f8eb08342b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b76c92b2757b106a93ee8f8eb08342b);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_1aba825c6825fc25942426c4d612ec19));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1aba825c6825fc25942426c4d612ec19);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_given);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_d932935a9f16dadc241d177d3b40e9f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d932935a9f16dadc241d177d3b40e9f3);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_raw_response);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retrieve);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_store_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_store_id);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vector_store_id_str_plain_extra_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_vector_store_id_str_plain_extra_headers_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_in_progress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_in_progress);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_poll_interval_ms));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_poll_interval_ms);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_55abc265b5635b79194a1eb2cca3dc35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_55abc265b5635b79194a1eb2cca3dc35_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_int_pos_1000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1000);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sleep);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancelled);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_completed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completed);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_failed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_failed);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c2ac8aacf28583808151d8c4cc19fa4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c2ac8aacf28583808151d8c4cc19fa4);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_files);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_assistants));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assistants);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_purpose_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_str_plain_purpose_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_81cacb406356249c4a554ffc3784e02c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_81cacb406356249c4a554ffc3784e02c_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2e8338ea487ff521d4da2e8974fb2ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2e8338ea487ff521d4da2e8974fb2ca);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_and_poll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_and_poll);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_6284c56d6c8da251f803ce20d812980e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6284c56d6c8da251f803ce20d812980e_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_67096e13348000d3662ba0514e4063f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67096e13348000d3662ba0514e4063f9);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1f7ab114277f87d05e67de6d947ae0a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1f7ab114277f87d05e67de6d947ae0a);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncPage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncPage);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileContentResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileContentResponse);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1639cf97dbf34d4f6c8b4dd5d3eea2f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1639cf97dbf34d4f6c8b4dd5d3eea2f);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFilesWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncFilesWithRawResponse);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFilesWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_headers);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_maybe_transform);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_query);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_body);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e2840bf3388ba7894fad9e576738907));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e2840bf3388ba7894fad9e576738907);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_95e671d79b0647693a16cc19e2208db8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95e671d79b0647693a16cc19e2208db8);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c18acbfdb09c0d8b92c6d77000be5f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c18acbfdb09c0d8b92c6d77000be5f2);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncCursorPage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncCursorPage);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0b63ebcb1eeb51e0461daa1f66237ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f0b63ebcb1eeb51e0461daa1f66237ae);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_3104dc06cc31e18d2d0a551476fc7046));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3104dc06cc31e18d2d0a551476fc7046);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_e912026f89eb9b7d1a2deb22b18f8748));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e912026f89eb9b7d1a2deb22b18f8748);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_upload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_upload);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_8507cf031d19d52971b8758c4b06eb18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8507cf031d19d52971b8758c4b06eb18);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_f88631a80962055b2386c2e0b8717989_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f88631a80962055b2386c2e0b8717989_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_upload_and_poll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_upload_and_poll);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_058a32f7dac747fe2db55d99d0487338));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_058a32f7dac747fe2db55d99d0487338);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncPage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncPage);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain__files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__files);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__legacy_response);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_raw_response_wrapper);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_raw_response_wrapper);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_streamed_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_streamed_response_wrapper);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_streamed_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_streamed_response_wrapper);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dict);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_assert_never_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Literal_str_plain_assert_never_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_never));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_never);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__legacy_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__legacy_response_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileChunkingStrategyParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileChunkingStrategyParam_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileChunkingStrategyParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileChunkingStrategyParam);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_d3f69ff1c97b29999250ccbe2edbb63c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d3f69ff1c97b29999250ccbe2edbb63c_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_GIVEN);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_Body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Body);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_Query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Query);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_Headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Headers);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotGiven);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileTypes);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_55188189a993b0e7a968787ef852ce29_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_55188189a993b0e7a968787ef852ce29_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cached_property_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cached_property);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain__resource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__resource);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncAPIResource);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAPIResource);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain__response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__response);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_pagination));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pagination);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_2cfc6dead7fbd8da8d427d103dbd8b53_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2cfc6dead7fbd8da8d427d103dbd8b53_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__base_client);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncPaginator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncPaginator);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b6ee93579cfbe7f776b76a448c90b10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b6ee93579cfbe7f776b76a448c90b10);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_ebbab03a99578c116f4c187b27029b61_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ebbab03a99578c116f4c187b27029b61_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_57c2a12f079705aa6756be4eaf837e9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57c2a12f079705aa6756be4eaf837e9b);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_62566b753fb765bfb27ecce84cc221f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62566b753fb765bfb27ecce84cc221f5);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreFile_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VectorStoreFile_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9f9c53be393b679c036f3730d9977b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9f9c53be393b679c036f3730d9977b9);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileContentResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileContentResponse_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_bae68e86aacf3418c864473505157bc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bae68e86aacf3418c864473505157bc1);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VectorStoreFileDeleted_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VectorStoreFileDeleted_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_Files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Files);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFiles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncFiles);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_66b2698c5ebc228f157a7677315beb07));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66b2698c5ebc228f157a7677315beb07);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_int_pos_28));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_28);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_b1b5363f077f3fa31a1369472fb8e410));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b1b5363f077f3fa31a1369472fb8e410);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_18ac5cde9a7abe631888316db76e17e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18ac5cde9a7abe631888316db76e17e2);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_1a07f587000a0d966fc7d1a0258b404f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1a07f587000a0d966fc7d1a0258b404f);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_streaming_response);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_76a3555dfdd2d356895cc5adea2db327));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76a3555dfdd2d356895cc5adea2db327);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_010f4cf74fd8897db6cc9c4ec9459273));
CHECK_OBJECT_DEEP(mod_consts.const_dict_010f4cf74fd8897db6cc9c4ec9459273);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9446c74ed882af4abce2f4b5edf1121));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9446c74ed882af4abce2f4b5edf1121);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_dict_700625a161eeae1605dfabd58288d36d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_700625a161eeae1605dfabd58288d36d);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_96e553acdb4ca72f4bbd56456e32b0af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96e553acdb4ca72f4bbd56456e32b0af);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_c72dae88f52f1c7acef4ab7529ae5eef));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c72dae88f52f1c7acef4ab7529ae5eef);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_92f6392c6f343a72dc0a49cd3d1bd2c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92f6392c6f343a72dc0a49cd3d1bd2c0);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_dict_73f22237a3aa6e02e7d450461e1defd6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_73f22237a3aa6e02e7d450461e1defd6);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_aab953f87fa28e05d4436ee3bde58818));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aab953f87fa28e05d4436ee3bde58818);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_dict_d88a472677142954e4ad9f224e100556));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d88a472677142954e4ad9f224e100556);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_86891960166cd96ab64b626eb1b217e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86891960166cd96ab64b626eb1b217e4);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_b740a6658f033c37877f4606dba3991a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b740a6658f033c37877f4606dba3991a);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_40be5bd8faa634cfba51a0bcf34aa735));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_40be5bd8faa634cfba51a0bcf34aa735);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_f4ef262fe52679f20fdc1811fdc91e37));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f4ef262fe52679f20fdc1811fdc91e37);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_35524e2a433a37ed7357e9bc4ae56a3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35524e2a433a37ed7357e9bc4ae56a3d);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_32b891d438e2348b1f3caaa3c78d25ac));
CHECK_OBJECT_DEEP(mod_consts.const_dict_32b891d438e2348b1f3caaa3c78d25ac);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1aeb4dbba9ddfec9cda6e122b0fce10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1aeb4dbba9ddfec9cda6e122b0fce10);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_b8f4abf163f2b85fce68ac3a858379dc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b8f4abf163f2b85fce68ac3a858379dc);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_836771a22c2a80da359266778dfa7067));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_836771a22c2a80da359266778dfa7067);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_527625162e71cc056197af28c2e64703));
CHECK_OBJECT_DEEP(mod_consts.const_dict_527625162e71cc056197af28c2e64703);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_b15ce2f76ecfb54607eb8157da3aaca7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b15ce2f76ecfb54607eb8157da3aaca7);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_int_pos_436));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_436);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_dict_ce8faa4a25cf9c8ca8d2b32c0b91b174));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ce8faa4a25cf9c8ca8d2b32c0b91b174);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_afae7bc0d04181bcdbc93e80792f312a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_afae7bc0d04181bcdbc93e80792f312a);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_dict_3c5a322c3d688a7c67e311c53cffd48d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3c5a322c3d688a7c67e311c53cffd48d);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_acb3c71375c1b09af0b1b321c9c3816e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_acb3c71375c1b09af0b1b321c9c3816e);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_dict_10134161de16c3329935503c0e640ae4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_10134161de16c3329935503c0e640ae4);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_058f54bdcefcc9d1eb368994e3138eb4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_058f54bdcefcc9d1eb368994e3138eb4);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_dict_fdfa4fea3d4eeede56ee260f328865cf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fdfa4fea3d4eeede56ee260f328865cf);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba0cc06bfc08b258894d5ef6ed82ac0f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba0cc06bfc08b258894d5ef6ed82ac0f);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_int_pos_846));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_846);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_dict_dc8921104b085a36b16a4b348cbbfbc5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dc8921104b085a36b16a4b348cbbfbc5);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_8508134ab89808e5cc378aa99f59d857));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8508134ab89808e5cc378aa99f59d857);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_31ebdbd8308f90b8c60b4f87aefc5a63_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_31ebdbd8308f90b8c60b4f87aefc5a63_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_int_pos_870));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_870);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_dict_8834452d4f6b8d57f97bc74a18acd464));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8834452d4f6b8d57f97bc74a18acd464);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2ad5f23feba609a6b95147ee33dd997));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2ad5f23feba609a6b95147ee33dd997);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_int_pos_894));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_894);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_8199ec5ea80dc8be1fb4ef1486ebe077));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8199ec5ea80dc8be1fb4ef1486ebe077);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_int_pos_918));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_918);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd49fc0723881e31f0ea3067048f3e2f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd49fc0723881e31f0ea3067048f3e2f);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_adf2af7b81c2dc85c45e5e98f0c486f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_adf2af7b81c2dc85c45e5e98f0c486f7);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7ef7f8d71e05fd6cefb48327c3a18f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7ef7f8d71e05fd6cefb48327c3a18f6);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_files_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_files_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_8a9910e124d6d8b53d862a566ca3c284_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8a9910e124d6d8b53d862a566ca3c284_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_2a1d983c32dad8c22e1d3426c9247fd8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2a1d983c32dad8c22e1d3426c9247fd8_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_4f2d2ada9fc37216d53387666593a1ef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4f2d2ada9fc37216d53387666593a1ef_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_44247206b45c076e953e191d846cd7d6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44247206b45c076e953e191d846cd7d6_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_91bc56e56bba2622258376adf0af3860_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_91bc56e56bba2622258376adf0af3860_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_1ba33cd6810e61cea6e6c776546d717e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1ba33cd6810e61cea6e6c776546d717e_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_0a62bb6d770998af3ca27bbd9cbef2b9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0a62bb6d770998af3ca27bbd9cbef2b9_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_eed12930067cc73ee596af3d14b06e19_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_eed12930067cc73ee596af3d14b06e19_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 26
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
static PyObject *module_var_accessor_openai$resources$vector_stores$files$AsyncAPIResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$AsyncCursorPage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCursorPage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCursorPage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCursorPage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCursorPage);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$AsyncFilesWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncFilesWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncFilesWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncFilesWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncFilesWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$AsyncFilesWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncFilesWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncFilesWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$AsyncPage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncPage);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncPage, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncPage);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncPage, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPage);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$FileContentResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContentResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileContentResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileContentResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileContentResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileContentResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContentResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContentResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContentResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$FilesWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FilesWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FilesWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FilesWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FilesWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$FilesWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FilesWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FilesWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FilesWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FilesWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$SyncAPIResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$SyncCursorPage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncCursorPage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncCursorPage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncCursorPage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncCursorPage);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$SyncPage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncPage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncPage);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncPage, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncPage);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncPage, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncPage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncPage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncPage);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VectorStoreFile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VectorStoreFile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VectorStoreFile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VectorStoreFile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreFile);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$VectorStoreFileDeleted(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreFileDeleted);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VectorStoreFileDeleted);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VectorStoreFileDeleted, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VectorStoreFileDeleted);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VectorStoreFileDeleted, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreFileDeleted);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreFileDeleted);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreFileDeleted);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$_legacy_response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$async_maybe_transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$async_to_streamed_response_wrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$cached_property(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$file_create_params(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_create_params);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_file_create_params);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_file_create_params, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_file_create_params);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_file_create_params, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_create_params);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_create_params);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_file_create_params);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$file_list_params(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_list_params);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_file_list_params);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_file_list_params, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_file_list_params);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_file_list_params, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_list_params);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_list_params);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_file_list_params);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$file_update_params(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_update_params);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_file_update_params);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_file_update_params, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_file_update_params);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_file_update_params, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_update_params);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_update_params);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_file_update_params);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$is_given(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$make_request_options(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$maybe_transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$vector_stores$files$to_streamed_response_wrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$vector_stores$files->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$vector_stores$files->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$vector_stores$files->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_236b87544aab3fb296bdb56a944e6f26;
static PyCodeObject *code_objects_468d0600cc08c7562531f8db2895d978;
static PyCodeObject *code_objects_d7af9c9b54c5d23616f308bce82c61bb;
static PyCodeObject *code_objects_0573b22478a14b1844ae16cb59ae9f05;
static PyCodeObject *code_objects_342f610b04b8b66aef1382dfa4b29dfb;
static PyCodeObject *code_objects_1eb50ae4b0b097b6d2098430354ebe7e;
static PyCodeObject *code_objects_44f81b7debb1cb99b00f41c4ae749167;
static PyCodeObject *code_objects_7f1b8a2e3af3556237e35a1e50fc93de;
static PyCodeObject *code_objects_2f07cdf0f955fa2905ef0fc4a525a470;
static PyCodeObject *code_objects_00f677f3e175a35e8c7175e2ffa8147b;
static PyCodeObject *code_objects_26826a11e5092172b4015fae148b0aa0;
static PyCodeObject *code_objects_d78f6ef02549ea9e3e8b5b333fc9d3c2;
static PyCodeObject *code_objects_73fb69e0d08ada1f9b30a9e472120530;
static PyCodeObject *code_objects_71d7ee1fae277e509d08b9475f45660a;
static PyCodeObject *code_objects_04915f0a844dfc78fd732d4715157d66;
static PyCodeObject *code_objects_e9b76578e39fe6d7353d772724eb0bf3;
static PyCodeObject *code_objects_04b4955980bfc074f011bf89982b467a;
static PyCodeObject *code_objects_fa813d9a6c3593544d789348235f7d0b;
static PyCodeObject *code_objects_ec4dee52ba7a3ac3952ec1a08136909b;
static PyCodeObject *code_objects_ca2589e7652879bb9b9238b775970050;
static PyCodeObject *code_objects_cb7484b163c2c842a7e7ab63fbf4170d;
static PyCodeObject *code_objects_43f70109f1b38798185e6a485bd9e290;
static PyCodeObject *code_objects_adca53f039e4ea5e4a2121b6fa673f30;
static PyCodeObject *code_objects_26acdf72b4afbc4db61b4ab56e81164d;
static PyCodeObject *code_objects_d69d7463d1981bacbb6a28e1e7dbf794;
static PyCodeObject *code_objects_33b6924f72584e8ed98cad1a098df573;
static PyCodeObject *code_objects_79ce091fa3bbb921ef8165e242ad4bef;
static PyCodeObject *code_objects_2bea2507df584f2518015f08f6e41246;
static PyCodeObject *code_objects_51385e614ced91d753c9bbe195c44546;
static PyCodeObject *code_objects_33d310abdfe17ce7804665d92415dc4f;
static PyCodeObject *code_objects_06e741a47aefd2fef105901ae6850f7d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_adf2af7b81c2dc85c45e5e98f0c486f7); CHECK_OBJECT(module_filename_obj);
code_objects_236b87544aab3fb296bdb56a944e6f26 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a7ef7f8d71e05fd6cefb48327c3a18f6, mod_consts.const_str_digest_a7ef7f8d71e05fd6cefb48327c3a18f6, NULL, NULL, 0, 0, 0);
code_objects_468d0600cc08c7562531f8db2895d978 = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncFiles, mod_consts.const_str_plain_AsyncFiles, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d7af9c9b54c5d23616f308bce82c61bb = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Files, mod_consts.const_str_plain_Files, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0573b22478a14b1844ae16cb59ae9f05 = MAKE_CODE_OBJECT(module_filename_obj, 871, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f2ad5f23feba609a6b95147ee33dd997, mod_consts.const_tuple_str_plain_self_str_plain_files_tuple, NULL, 2, 0, 0);
code_objects_342f610b04b8b66aef1382dfa4b29dfb = MAKE_CODE_OBJECT(module_filename_obj, 919, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_fd49fc0723881e31f0ea3067048f3e2f, mod_consts.const_tuple_str_plain_self_str_plain_files_tuple, NULL, 2, 0, 0);
code_objects_1eb50ae4b0b097b6d2098430354ebe7e = MAKE_CODE_OBJECT(module_filename_obj, 847, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_8508134ab89808e5cc378aa99f59d857, mod_consts.const_tuple_str_plain_self_str_plain_files_tuple, NULL, 2, 0, 0);
code_objects_44f81b7debb1cb99b00f41c4ae749167 = MAKE_CODE_OBJECT(module_filename_obj, 895, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_8199ec5ea80dc8be1fb4ef1486ebe077, mod_consts.const_tuple_str_plain_self_str_plain_files_tuple, NULL, 2, 0, 0);
code_objects_7f1b8a2e3af3556237e35a1e50fc93de = MAKE_CODE_OBJECT(module_filename_obj, 807, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_content, mod_consts.const_str_digest_ba0cc06bfc08b258894d5ef6ed82ac0f, mod_consts.const_tuple_8a9910e124d6d8b53d862a566ca3c284_tuple, NULL, 2, 5, 0);
code_objects_2f07cdf0f955fa2905ef0fc4a525a470 = MAKE_CODE_OBJECT(module_filename_obj, 397, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_content, mod_consts.const_str_digest_b15ce2f76ecfb54607eb8157da3aaca7, mod_consts.const_tuple_8a9910e124d6d8b53d862a566ca3c284_tuple, NULL, 2, 5, 0);
code_objects_00f677f3e175a35e8c7175e2ffa8147b = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_7e2840bf3388ba7894fad9e576738907, mod_consts.const_tuple_2a1d983c32dad8c22e1d3426c9247fd8_tuple, NULL, 2, 7, 0);
code_objects_26826a11e5092172b4015fae148b0aa0 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_b9446c74ed882af4abce2f4b5edf1121, mod_consts.const_tuple_2a1d983c32dad8c22e1d3426c9247fd8_tuple, NULL, 2, 7, 0);
code_objects_d78f6ef02549ea9e3e8b5b333fc9d3c2 = MAKE_CODE_OBJECT(module_filename_obj, 710, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_and_poll, mod_consts.const_str_digest_3104dc06cc31e18d2d0a551476fc7046, mod_consts.const_tuple_4f2d2ada9fc37216d53387666593a1ef_tuple, NULL, 2, 4, 0);
code_objects_73fb69e0d08ada1f9b30a9e472120530 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_and_poll, mod_consts.const_str_digest_40be5bd8faa634cfba51a0bcf34aa735, mod_consts.const_tuple_4f2d2ada9fc37216d53387666593a1ef_tuple, NULL, 2, 4, 0);
code_objects_71d7ee1fae277e509d08b9475f45660a = MAKE_CODE_OBJECT(module_filename_obj, 669, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete, mod_consts.const_str_digest_f0b63ebcb1eeb51e0461daa1f66237ae, mod_consts.const_tuple_8a9910e124d6d8b53d862a566ca3c284_tuple, NULL, 2, 5, 0);
code_objects_04915f0a844dfc78fd732d4715157d66 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete, mod_consts.const_str_digest_86891960166cd96ab64b626eb1b217e4, mod_consts.const_tuple_8a9910e124d6d8b53d862a566ca3c284_tuple, NULL, 2, 5, 0);
code_objects_e9b76578e39fe6d7353d772724eb0bf3 = MAKE_CODE_OBJECT(module_filename_obj, 598, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_list, mod_consts.const_str_digest_058f54bdcefcc9d1eb368994e3138eb4, mod_consts.const_tuple_44247206b45c076e953e191d846cd7d6_tuple, NULL, 2, 9, 0);
code_objects_04b4955980bfc074f011bf89982b467a = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_list, mod_consts.const_str_digest_aab953f87fa28e05d4436ee3bde58818, mod_consts.const_tuple_44247206b45c076e953e191d846cd7d6_tuple, NULL, 2, 9, 0);
code_objects_fa813d9a6c3593544d789348235f7d0b = MAKE_CODE_OBJECT(module_filename_obj, 730, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_poll, mod_consts.const_str_digest_e912026f89eb9b7d1a2deb22b18f8748, mod_consts.const_tuple_91bc56e56bba2622258376adf0af3860_tuple, NULL, 2, 2, 0);
code_objects_ec4dee52ba7a3ac3952ec1a08136909b = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_poll, mod_consts.const_str_digest_35524e2a433a37ed7357e9bc4ae56a3d, mod_consts.const_tuple_91bc56e56bba2622258376adf0af3860_tuple, NULL, 2, 2, 0);
code_objects_ca2589e7652879bb9b9238b775970050 = MAKE_CODE_OBJECT(module_filename_obj, 516, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_retrieve, mod_consts.const_str_digest_95e671d79b0647693a16cc19e2208db8, mod_consts.const_tuple_8a9910e124d6d8b53d862a566ca3c284_tuple, NULL, 2, 5, 0);
code_objects_cb7484b163c2c842a7e7ab63fbf4170d = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_retrieve, mod_consts.const_str_digest_96e553acdb4ca72f4bbd56456e32b0af, mod_consts.const_tuple_8a9910e124d6d8b53d862a566ca3c284_tuple, NULL, 2, 5, 0);
code_objects_43f70109f1b38798185e6a485bd9e290 = MAKE_CODE_OBJECT(module_filename_obj, 553, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_0c18acbfdb09c0d8b92c6d77000be5f2, mod_consts.const_tuple_1ba33cd6810e61cea6e6c776546d717e_tuple, NULL, 2, 6, 0);
code_objects_adca53f039e4ea5e4a2121b6fa673f30 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_92f6392c6f343a72dc0a49cd3d1bd2c0, mod_consts.const_tuple_1ba33cd6810e61cea6e6c776546d717e_tuple, NULL, 2, 6, 0);
code_objects_26acdf72b4afbc4db61b4ab56e81164d = MAKE_CODE_OBJECT(module_filename_obj, 771, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_upload, mod_consts.const_str_digest_8507cf031d19d52971b8758c4b06eb18, mod_consts.const_tuple_0a62bb6d770998af3ca27bbd9cbef2b9_tuple, NULL, 1, 3, 0);
code_objects_d69d7463d1981bacbb6a28e1e7dbf794 = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_upload, mod_consts.const_str_digest_d1aeb4dbba9ddfec9cda6e122b0fce10, mod_consts.const_tuple_0a62bb6d770998af3ca27bbd9cbef2b9_tuple, NULL, 1, 3, 0);
code_objects_33b6924f72584e8ed98cad1a098df573 = MAKE_CODE_OBJECT(module_filename_obj, 788, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_upload_and_poll, mod_consts.const_str_digest_058a32f7dac747fe2db55d99d0487338, mod_consts.const_tuple_eed12930067cc73ee596af3d14b06e19_tuple, NULL, 1, 5, 0);
code_objects_79ce091fa3bbb921ef8165e242ad4bef = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_upload_and_poll, mod_consts.const_str_digest_836771a22c2a80da359266778dfa7067, mod_consts.const_tuple_eed12930067cc73ee596af3d14b06e19_tuple, NULL, 1, 5, 0);
code_objects_2bea2507df584f2518015f08f6e41246 = MAKE_CODE_OBJECT(module_filename_obj, 438, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_afae7bc0d04181bcdbc93e80792f312a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_51385e614ced91d753c9bbe195c44546 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_18ac5cde9a7abe631888316db76e17e2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_33d310abdfe17ce7804665d92415dc4f = MAKE_CODE_OBJECT(module_filename_obj, 448, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_acb3c71375c1b09af0b1b321c9c3816e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_06e741a47aefd2fef105901ae6850f7d = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_76a3555dfdd2d356895cc5adea2db327, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__15_create$$$coroutine__1_create(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__16_retrieve$$$coroutine__1_retrieve(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__17_update$$$coroutine__1_update(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__19_delete$$$coroutine__1_delete(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__20_create_and_poll$$$coroutine__1_create_and_poll(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__21_poll$$$coroutine__1_poll(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__22_upload$$$coroutine__1_upload(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__23_upload_and_poll$$$coroutine__1_upload_and_poll(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__10_upload(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__11_upload_and_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__12_content(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__13_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__14_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__15_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__16_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__17_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__18_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__19_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__1_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__20_create_and_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__21_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__22_upload(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__23_upload_and_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__24_content(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__25___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__26___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__27___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__28___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__2_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__3_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__4_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__5_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__6_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__7_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__8_create_and_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__9_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_openai$resources$vector_stores$files$$$function__1_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_51385e614ced91d753c9bbe195c44546, module_openai$resources$vector_stores$files, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response = cache_frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$vector_stores$files$FilesWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FilesWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response->m_frame.f_lineno = 37;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response == cache_frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__1_with_raw_response);

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


static PyObject *impl_openai$resources$vector_stores$files$$$function__2_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_06e741a47aefd2fef105901ae6850f7d, module_openai$resources$vector_stores$files, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response = cache_frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$vector_stores$files$FilesWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FilesWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response->m_frame.f_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response == cache_frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__2_with_streaming_response);

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


static PyObject *impl_openai$resources$vector_stores$files$$$function__3_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_vector_store_id = python_pars[1];
PyObject *par_file_id = python_pars[2];
PyObject *par_attributes = python_pars[3];
PyObject *par_chunking_strategy = python_pars[4];
PyObject *par_extra_headers = python_pars[5];
PyObject *par_extra_query = python_pars[6];
PyObject *par_extra_body = python_pars[7];
PyObject *par_timeout = python_pars[8];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__3_create;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__3_create = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__3_create)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__3_create);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__3_create == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__3_create = MAKE_FUNCTION_FRAME(tstate, code_objects_26826a11e5092172b4015fae148b0aa0, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__3_create->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__3_create = cache_frame_frame_openai$resources$vector_stores$files$$$function__3_create;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__3_create);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__3_create) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_1 = par_vector_store_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_2 = par_vector_store_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
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


exception_lineno = 90;
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
frame_frame_openai$resources$vector_stores$files$$$function__3_create->m_frame.f_lineno = 90;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 90;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
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


exception_lineno = 91;
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


exception_lineno = 91;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
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


exception_lineno = 92;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_vector_store_id);
tmp_format_value_2 = par_vector_store_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_0bfcf269629626c3e3a28a177837b532;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 94;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_file_id;
CHECK_OBJECT(par_file_id);
tmp_dict_value_1 = par_file_id;
tmp_args_element_value_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_attributes;
CHECK_OBJECT(par_attributes);
tmp_dict_value_1 = par_attributes;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_chunking_strategy;
CHECK_OBJECT(par_chunking_strategy);
tmp_dict_value_1 = par_chunking_strategy;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_2 = module_var_accessor_openai$resources$vector_stores$files$file_create_params(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_create_params);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_FileCreateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__3_create->m_frame.f_lineno = 94;
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

exception_lineno = 94;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 102;
type_description_1 = "ooooooooo";
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
frame_frame_openai$resources$vector_stores$files$$$function__3_create->m_frame.f_lineno = 102;
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

exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VectorStoreFile);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 105;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__3_create->m_frame.f_lineno = 92;
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


exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__3_create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__3_create->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__3_create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__3_create,
    type_description_1,
    par_self,
    par_vector_store_id,
    par_file_id,
    par_attributes,
    par_chunking_strategy,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__3_create == cache_frame_frame_openai$resources$vector_stores$files$$$function__3_create) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__3_create);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__3_create = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__3_create);

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
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);
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
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);
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


static PyObject *impl_openai$resources$vector_stores$files$$$function__4_retrieve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file_id = python_pars[1];
PyObject *par_vector_store_id = python_pars[2];
PyObject *par_extra_headers = python_pars[3];
PyObject *par_extra_query = python_pars[4];
PyObject *par_extra_body = python_pars[5];
PyObject *par_timeout = python_pars[6];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve = MAKE_FUNCTION_FRAME(tstate, code_objects_cb7484b163c2c842a7e7ab63fbf4170d, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve = cache_frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_1 = par_vector_store_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_2 = par_vector_store_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
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


exception_lineno = 133;
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
frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve->m_frame.f_lineno = 133;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 133;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_file_id);
tmp_operand_value_3 = par_file_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooo";
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
tmp_tuple_element_2 = mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_file_id);
tmp_operand_value_4 = par_file_id;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooooo";
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
frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve->m_frame.f_lineno = 135;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 135;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
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


exception_lineno = 136;
type_description_1 = "ooooooo";
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


exception_lineno = 136;
type_description_1 = "ooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
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


exception_lineno = 137;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_vector_store_id);
tmp_format_value_3 = par_vector_store_id;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
CHECK_OBJECT(par_file_id);
tmp_format_value_4 = par_file_id;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 139;
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
frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve->m_frame.f_lineno = 139;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 139;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VectorStoreFile);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 142;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve->m_frame.f_lineno = 137;
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


exception_lineno = 137;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve,
    type_description_1,
    par_self,
    par_file_id,
    par_vector_store_id,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve == cache_frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__4_retrieve);

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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
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


static PyObject *impl_openai$resources$vector_stores$files$$$function__5_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file_id = python_pars[1];
PyObject *par_vector_store_id = python_pars[2];
PyObject *par_attributes = python_pars[3];
PyObject *par_extra_headers = python_pars[4];
PyObject *par_extra_query = python_pars[5];
PyObject *par_extra_body = python_pars[6];
PyObject *par_timeout = python_pars[7];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__5_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__5_update = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__5_update)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__5_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__5_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__5_update = MAKE_FUNCTION_FRAME(tstate, code_objects_adca53f039e4ea5e4a2121b6fa673f30, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__5_update->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__5_update = cache_frame_frame_openai$resources$vector_stores$files$$$function__5_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__5_update);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__5_update) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_1 = par_vector_store_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_2 = par_vector_store_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
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


exception_lineno = 177;
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
frame_frame_openai$resources$vector_stores$files$$$function__5_update->m_frame.f_lineno = 177;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 177;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_file_id);
tmp_operand_value_3 = par_file_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
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
tmp_tuple_element_2 = mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_file_id);
tmp_operand_value_4 = par_file_id;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
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


exception_lineno = 179;
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
frame_frame_openai$resources$vector_stores$files$$$function__5_update->m_frame.f_lineno = 179;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 179;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
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


exception_lineno = 180;
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


exception_lineno = 180;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
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


exception_lineno = 181;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_vector_store_id);
tmp_format_value_3 = par_vector_store_id;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
CHECK_OBJECT(par_file_id);
tmp_format_value_4 = par_file_id;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_attributes;
CHECK_OBJECT(par_attributes);
tmp_dict_value_1 = par_attributes;
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_expression_value_2 = module_var_accessor_openai$resources$vector_stores$files$file_update_params(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_update_params);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_FileUpdateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__5_update->m_frame.f_lineno = 183;
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

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 184;
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
frame_frame_openai$resources$vector_stores$files$$$function__5_update->m_frame.f_lineno = 184;
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

exception_lineno = 184;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VectorStoreFile);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 187;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__5_update->m_frame.f_lineno = 181;
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


exception_lineno = 181;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__5_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__5_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__5_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__5_update,
    type_description_1,
    par_self,
    par_file_id,
    par_vector_store_id,
    par_attributes,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__5_update == cache_frame_frame_openai$resources$vector_stores$files$$$function__5_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__5_update);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__5_update = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__5_update);

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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
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


static PyObject *impl_openai$resources$vector_stores$files$$$function__6_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_vector_store_id = python_pars[1];
PyObject *par_after = python_pars[2];
PyObject *par_before = python_pars[3];
PyObject *par_filter = python_pars[4];
PyObject *par_limit = python_pars[5];
PyObject *par_order = python_pars[6];
PyObject *par_extra_headers = python_pars[7];
PyObject *par_extra_query = python_pars[8];
PyObject *par_extra_body = python_pars[9];
PyObject *par_timeout = python_pars[10];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__6_list;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__6_list = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__6_list)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__6_list);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__6_list == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__6_list = MAKE_FUNCTION_FRAME(tstate, code_objects_04b4955980bfc074f011bf89982b467a, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__6_list->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__6_list = cache_frame_frame_openai$resources$vector_stores$files$$$function__6_list;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__6_list);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__6_list) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_1 = par_vector_store_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooo";
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_2 = par_vector_store_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooooo";
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
frame_frame_openai$resources$vector_stores$files$$$function__6_list->m_frame.f_lineno = 237;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 237;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
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


exception_lineno = 238;
type_description_1 = "ooooooooooo";
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


exception_lineno = 238;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get_api_list);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_vector_store_id);
tmp_format_value_2 = par_vector_store_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_0bfcf269629626c3e3a28a177837b532;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_expression_value_2 = module_var_accessor_openai$resources$vector_stores$files$SyncCursorPage(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncCursorPage);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 241;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VectorStoreFile);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 241;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 241;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 242;
type_description_1 = "ooooooooooo";
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
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$maybe_transform(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_after;
CHECK_OBJECT(par_after);
tmp_dict_value_1 = par_after;
tmp_args_element_value_1 = _PyDict_NewPresized( 5 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_before;
CHECK_OBJECT(par_before);
tmp_dict_value_1 = par_before;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_filter;
CHECK_OBJECT(par_filter);
tmp_dict_value_1 = par_filter;
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
tmp_expression_value_3 = module_var_accessor_openai$resources$vector_stores$files$file_list_params(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_list_params);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 255;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_FileListParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 255;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__6_list->m_frame.f_lineno = 247;
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
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 247;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__6_list->m_frame.f_lineno = 242;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 242;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VectorStoreFile);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 258;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__6_list->m_frame.f_lineno = 239;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
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


exception_lineno = 239;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__6_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__6_list->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__6_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__6_list,
    type_description_1,
    par_self,
    par_vector_store_id,
    par_after,
    par_before,
    par_filter,
    par_limit,
    par_order,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__6_list == cache_frame_frame_openai$resources$vector_stores$files$$$function__6_list) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__6_list);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__6_list = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__6_list);

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
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_after);
Py_DECREF(par_after);
CHECK_OBJECT(par_before);
Py_DECREF(par_before);
CHECK_OBJECT(par_filter);
Py_DECREF(par_filter);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
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
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_after);
Py_DECREF(par_after);
CHECK_OBJECT(par_before);
Py_DECREF(par_before);
CHECK_OBJECT(par_filter);
Py_DECREF(par_filter);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
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


static PyObject *impl_openai$resources$vector_stores$files$$$function__7_delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file_id = python_pars[1];
PyObject *par_vector_store_id = python_pars[2];
PyObject *par_extra_headers = python_pars[3];
PyObject *par_extra_query = python_pars[4];
PyObject *par_extra_body = python_pars[5];
PyObject *par_timeout = python_pars[6];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__7_delete;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__7_delete = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__7_delete)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__7_delete);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__7_delete == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__7_delete = MAKE_FUNCTION_FRAME(tstate, code_objects_04915f0a844dfc78fd732d4715157d66, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__7_delete->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__7_delete = cache_frame_frame_openai$resources$vector_stores$files$$$function__7_delete;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__7_delete);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__7_delete) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_1 = par_vector_store_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_2 = par_vector_store_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
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


exception_lineno = 290;
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
frame_frame_openai$resources$vector_stores$files$$$function__7_delete->m_frame.f_lineno = 290;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 290;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_file_id);
tmp_operand_value_3 = par_file_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooo";
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
tmp_tuple_element_2 = mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_file_id);
tmp_operand_value_4 = par_file_id;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooo";
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
frame_frame_openai$resources$vector_stores$files$$$function__7_delete->m_frame.f_lineno = 292;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 292;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
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


exception_lineno = 293;
type_description_1 = "ooooooo";
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


exception_lineno = 293;
type_description_1 = "ooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
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


exception_lineno = 294;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_vector_store_id);
tmp_format_value_3 = par_vector_store_id;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
CHECK_OBJECT(par_file_id);
tmp_format_value_4 = par_file_id;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 296;
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
frame_frame_openai$resources$vector_stores$files$$$function__7_delete->m_frame.f_lineno = 296;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 296;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFileDeleted(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VectorStoreFileDeleted);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 299;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__7_delete->m_frame.f_lineno = 294;
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


exception_lineno = 294;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__7_delete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__7_delete->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__7_delete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__7_delete,
    type_description_1,
    par_self,
    par_file_id,
    par_vector_store_id,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__7_delete == cache_frame_frame_openai$resources$vector_stores$files$$$function__7_delete) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__7_delete);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__7_delete = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__7_delete);

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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
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


static PyObject *impl_openai$resources$vector_stores$files$$$function__8_create_and_poll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file_id = python_pars[1];
PyObject *par_vector_store_id = python_pars[2];
PyObject *par_attributes = python_pars[3];
PyObject *par_poll_interval_ms = python_pars[4];
PyObject *par_chunking_strategy = python_pars[5];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll = MAKE_FUNCTION_FRAME(tstate, code_objects_73fb69e0d08ada1f9b30a9e472120530, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll = cache_frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_vector_store_id);
tmp_kw_call_value_0_1 = par_vector_store_id;
CHECK_OBJECT(par_file_id);
tmp_kw_call_value_1_1 = par_file_id;
CHECK_OBJECT(par_chunking_strategy);
tmp_kw_call_value_2_1 = par_chunking_strategy;
CHECK_OBJECT(par_attributes);
tmp_kw_call_value_3_1 = par_attributes;
frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll->m_frame.f_lineno = 312;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_a9a7f65171f9244d3e0e6e7a196b6f39_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_poll);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_file_id);
tmp_kw_call_arg_value_0_1 = par_file_id;
CHECK_OBJECT(par_vector_store_id);
tmp_kw_call_dict_value_0_1 = par_vector_store_id;
CHECK_OBJECT(par_poll_interval_ms);
tmp_kw_call_dict_value_1_1 = par_poll_interval_ms;
frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll->m_frame.f_lineno = 316;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_vector_store_id_str_plain_poll_interval_ms_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll,
    type_description_1,
    par_self,
    par_file_id,
    par_vector_store_id,
    par_attributes,
    par_poll_interval_ms,
    par_chunking_strategy
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll == cache_frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__8_create_and_poll);

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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
CHECK_OBJECT(par_poll_interval_ms);
Py_DECREF(par_poll_interval_ms);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
CHECK_OBJECT(par_poll_interval_ms);
Py_DECREF(par_poll_interval_ms);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__9_poll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file_id = python_pars[1];
PyObject *par_vector_store_id = python_pars[2];
PyObject *par_poll_interval_ms = python_pars[3];
PyObject *var_headers = NULL;
PyObject *var_response = NULL;
PyObject *var_file = NULL;
PyObject *var_from_header = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__9_poll;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__9_poll = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = DICT_COPY(tstate, mod_consts.const_dict_1aba825c6825fc25942426c4d612ec19);
assert(var_headers == NULL);
var_headers = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__9_poll)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__9_poll);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__9_poll == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__9_poll = MAKE_FUNCTION_FRAME(tstate, code_objects_ec4dee52ba7a3ac3952ec1a08136909b, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__9_poll->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__9_poll = cache_frame_frame_openai$resources$vector_stores$files$$$function__9_poll;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__9_poll);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__9_poll) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_openai$resources$vector_stores$files$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 335;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_poll_interval_ms);
tmp_args_element_value_1 = par_poll_interval_ms;
frame_frame_openai$resources$vector_stores$files$$$function__9_poll->m_frame.f_lineno = 335;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 335;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(par_poll_interval_ms);
tmp_unicode_arg_1 = par_poll_interval_ms;
tmp_dictset_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_dictset_dict = var_headers;
tmp_dictset_key = mod_consts.const_str_digest_d932935a9f16dadc241d177d3b40e9f3;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_1:;
loop_start_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 339;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_with_raw_response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_retrieve);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_file_id == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 340;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = par_file_id;
if (par_vector_store_id == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 341;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = par_vector_store_id;
if (var_headers == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 342;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = var_headers;
frame_frame_openai$resources$vector_stores$files$$$function__9_poll->m_frame.f_lineno = 339;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_vector_store_id_str_plain_extra_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_response);
tmp_called_instance_1 = var_response;
frame_frame_openai$resources$vector_stores$files$$$function__9_poll->m_frame.f_lineno = 345;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_parse);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_file;
    var_file = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_file);
tmp_expression_value_3 = var_file;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_in_progress;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$is_given(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_poll_interval_ms == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_poll_interval_ms);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 347;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = par_poll_interval_ms;
frame_frame_openai$resources$vector_stores$files$$$function__9_poll->m_frame.f_lineno = 347;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_response);
tmp_expression_value_5 = var_response;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_headers);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__9_poll->m_frame.f_lineno = 348;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_55abc265b5635b79194a1eb2cca3dc35_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_from_header;
    var_from_header = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_from_header);
tmp_cmp_expr_left_2 = var_from_header;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(var_from_header);
tmp_int_arg_1 = var_from_header;
tmp_assign_source_5 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_poll_interval_ms;
    par_poll_interval_ms = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_int_pos_1000;
{
    PyObject *old = par_poll_interval_ms;
    par_poll_interval_ms = tmp_assign_source_6;
    Py_INCREF(par_poll_interval_ms);
    Py_XDECREF(old);
}

}
branch_end_4:;
branch_no_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 354;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_self;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__sleep);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_poll_interval_ms == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_poll_interval_ms);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 354;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_truediv_expr_left_1 = par_poll_interval_ms;
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_1000;
tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 354;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__9_poll->m_frame.f_lineno = 354;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_file);
tmp_expression_value_7 = var_file;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_cancelled;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_file);
tmp_expression_value_8 = var_file;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_completed;
tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_file);
tmp_expression_value_9 = var_file;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_failed;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_5 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(var_file);
tmp_return_value = var_file;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_5;
branch_no_5:;
CHECK_OBJECT(var_file);
tmp_return_value = var_file;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_5:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__9_poll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__9_poll->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__9_poll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__9_poll,
    type_description_1,
    par_self,
    par_file_id,
    par_vector_store_id,
    par_poll_interval_ms,
    var_headers,
    var_response,
    var_file,
    var_from_header
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__9_poll == cache_frame_frame_openai$resources$vector_stores$files$$$function__9_poll) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__9_poll);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__9_poll = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__9_poll);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_poll_interval_ms);
par_poll_interval_ms = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_file);
CHECK_OBJECT(var_file);
Py_DECREF(var_file);
var_file = NULL;
Py_XDECREF(var_from_header);
var_from_header = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_poll_interval_ms);
par_poll_interval_ms = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_file);
var_file = NULL;
Py_XDECREF(var_from_header);
var_from_header = NULL;
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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__10_upload(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_vector_store_id = python_pars[1];
PyObject *par_file = python_pars[2];
PyObject *par_chunking_strategy = python_pars[3];
PyObject *var_file_obj = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__10_upload;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__10_upload = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__10_upload)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__10_upload);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__10_upload == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__10_upload = MAKE_FUNCTION_FRAME(tstate, code_objects_d69d7463d1981bacbb6a28e1e7dbf794, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__10_upload->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__10_upload = cache_frame_frame_openai$resources$vector_stores$files$$$function__10_upload;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__10_upload);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__10_upload) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__client);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_files);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_file);
tmp_kw_call_value_0_1 = par_file;
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_assistants;
frame_frame_openai$resources$vector_stores$files$$$function__10_upload->m_frame.f_lineno = 375;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_file_str_plain_purpose_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_file_obj == NULL);
var_file_obj = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_create);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_vector_store_id);
tmp_kw_call_value_0_2 = par_vector_store_id;
CHECK_OBJECT(var_file_obj);
tmp_expression_value_5 = var_file_obj;
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_id);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 376;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_chunking_strategy);
tmp_kw_call_value_2_1 = par_chunking_strategy;
frame_frame_openai$resources$vector_stores$files$$$function__10_upload->m_frame.f_lineno = 376;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_81cacb406356249c4a554ffc3784e02c_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__10_upload, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__10_upload->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__10_upload, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__10_upload,
    type_description_1,
    par_self,
    par_vector_store_id,
    par_file,
    par_chunking_strategy,
    var_file_obj
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__10_upload == cache_frame_frame_openai$resources$vector_stores$files$$$function__10_upload) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__10_upload);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__10_upload = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__10_upload);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_file_obj);
CHECK_OBJECT(var_file_obj);
Py_DECREF(var_file_obj);
var_file_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_file_obj);
var_file_obj = NULL;
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
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__11_upload_and_poll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_vector_store_id = python_pars[1];
PyObject *par_file = python_pars[2];
PyObject *par_attributes = python_pars[3];
PyObject *par_poll_interval_ms = python_pars[4];
PyObject *par_chunking_strategy = python_pars[5];
PyObject *var_file_obj = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll = MAKE_FUNCTION_FRAME(tstate, code_objects_79ce091fa3bbb921ef8165e242ad4bef, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll = cache_frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__client);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_files);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_file);
tmp_kw_call_value_0_1 = par_file;
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_assistants;
frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll->m_frame.f_lineno = 388;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_file_str_plain_purpose_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_file_obj == NULL);
var_file_obj = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_create_and_poll);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_vector_store_id);
tmp_kw_call_value_0_2 = par_vector_store_id;
CHECK_OBJECT(var_file_obj);
tmp_expression_value_5 = var_file_obj;
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_id);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 391;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_chunking_strategy);
tmp_kw_call_value_2_1 = par_chunking_strategy;
CHECK_OBJECT(par_poll_interval_ms);
tmp_kw_call_value_3_1 = par_poll_interval_ms;
CHECK_OBJECT(par_attributes);
tmp_kw_call_value_4_1 = par_attributes;
frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll->m_frame.f_lineno = 389;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_6284c56d6c8da251f803ce20d812980e_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll,
    type_description_1,
    par_self,
    par_vector_store_id,
    par_file,
    par_attributes,
    par_poll_interval_ms,
    par_chunking_strategy,
    var_file_obj
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll == cache_frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__11_upload_and_poll);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_file_obj);
CHECK_OBJECT(var_file_obj);
Py_DECREF(var_file_obj);
var_file_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_file_obj);
var_file_obj = NULL;
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
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
CHECK_OBJECT(par_poll_interval_ms);
Py_DECREF(par_poll_interval_ms);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
CHECK_OBJECT(par_poll_interval_ms);
Py_DECREF(par_poll_interval_ms);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__12_content(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file_id = python_pars[1];
PyObject *par_vector_store_id = python_pars[2];
PyObject *par_extra_headers = python_pars[3];
PyObject *par_extra_query = python_pars[4];
PyObject *par_extra_body = python_pars[5];
PyObject *par_timeout = python_pars[6];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__12_content;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__12_content = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__12_content)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__12_content);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__12_content == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__12_content = MAKE_FUNCTION_FRAME(tstate, code_objects_2f07cdf0f955fa2905ef0fc4a525a470, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__12_content->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__12_content = cache_frame_frame_openai$resources$vector_stores$files$$$function__12_content;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__12_content);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__12_content) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_1 = par_vector_store_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_2 = par_vector_store_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
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


exception_lineno = 422;
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
frame_frame_openai$resources$vector_stores$files$$$function__12_content->m_frame.f_lineno = 422;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 422;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_file_id);
tmp_operand_value_3 = par_file_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooooooo";
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
tmp_tuple_element_2 = mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_file_id);
tmp_operand_value_4 = par_file_id;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooooooo";
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
frame_frame_openai$resources$vector_stores$files$$$function__12_content->m_frame.f_lineno = 424;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 424;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
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


exception_lineno = 425;
type_description_1 = "ooooooo";
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


exception_lineno = 425;
type_description_1 = "ooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get_api_list);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_vector_store_id);
tmp_format_value_3 = par_vector_store_id;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "ooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
CHECK_OBJECT(par_file_id);
tmp_format_value_4 = par_file_id;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "ooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_d1f7ab114277f87d05e67de6d947ae0a;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_expression_value_2 = module_var_accessor_openai$resources$vector_stores$files$SyncPage(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncPage);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 428;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_openai$resources$vector_stores$files$FileContentResponse(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileContentResponse);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 428;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 428;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 429;
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
frame_frame_openai$resources$vector_stores$files$$$function__12_content->m_frame.f_lineno = 429;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 429;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$vector_stores$files$FileContentResponse(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileContentResponse);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 432;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__12_content->m_frame.f_lineno = 426;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
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


exception_lineno = 426;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__12_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__12_content->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__12_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__12_content,
    type_description_1,
    par_self,
    par_file_id,
    par_vector_store_id,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__12_content == cache_frame_frame_openai$resources$vector_stores$files$$$function__12_content) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__12_content);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__12_content = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__12_content);

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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
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


static PyObject *impl_openai$resources$vector_stores$files$$$function__13_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_2bea2507df584f2518015f08f6e41246, module_openai$resources$vector_stores$files, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response = cache_frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$vector_stores$files$AsyncFilesWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncFilesWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response->m_frame.f_lineno = 445;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response == cache_frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__13_with_raw_response);

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


static PyObject *impl_openai$resources$vector_stores$files$$$function__14_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_33d310abdfe17ce7804665d92415dc4f, module_openai$resources$vector_stores$files, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response = cache_frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$vector_stores$files$AsyncFilesWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncFilesWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response->m_frame.f_lineno = 454;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response == cache_frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__14_with_streaming_response);

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


static PyObject *impl_openai$resources$vector_stores$files$$$function__15_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_vector_store_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_file_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_attributes = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_chunking_strategy = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[7]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[8]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[9];
tmp_closure_1[0] = par_attributes;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_chunking_strategy;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_body;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_extra_headers;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_extra_query;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_file_id;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_self;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_timeout;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = par_vector_store_id;
Py_INCREF(tmp_closure_1[8]);
tmp_return_value = MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__15_create$$$coroutine__1_create(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_vector_store_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
par_vector_store_id = NULL;
CHECK_OBJECT(par_file_id);
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
par_file_id = NULL;
CHECK_OBJECT(par_attributes);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
par_attributes = NULL;
CHECK_OBJECT(par_chunking_strategy);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);
par_chunking_strategy = NULL;
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
struct openai$resources$vector_stores$files$$$function__15_create$$$coroutine__1_create_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$vector_stores$files$$$function__15_create$$$coroutine__1_create_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$vector_stores$files$$$function__15_create$$$coroutine__1_create_locals *coroutine_heap = (struct openai$resources$vector_stores$files$$$function__15_create$$$coroutine__1_create_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_00f677f3e175a35e8c7175e2ffa8147b, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 497;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[8]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 497;
coroutine_heap->type_description_1 = "ccccccccc";
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 498;
coroutine_heap->type_description_1 = "ccccccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[8]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 498;
coroutine_heap->type_description_1 = "ccccccccc";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 498;
coroutine_heap->type_description_1 = "ccccccccc";
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
coroutine->m_frame->m_frame.f_lineno = 498;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 498;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccccccc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 499;
coroutine_heap->type_description_1 = "ccccccccc";
    goto tuple_build_exception_2;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 499;
coroutine_heap->type_description_1 = "ccccccccc";
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

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 499;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[3]);
    Nuitka_Cell_SET(coroutine->m_closure[3], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
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
coroutine->m_frame->m_frame.f_lineno = 500;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 500;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__post);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 500;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 501;
coroutine_heap->type_description_1 = "ccccccccc";
    goto tuple_build_exception_3;
}

tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[8]);
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 501;
coroutine_heap->type_description_1 = "ccccccccc";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_0bfcf269629626c3e3a28a177837b532;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
coroutine->m_frame->m_frame.f_lineno = 502;
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$async_maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_file_id;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 504;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_args_element_value_1 = _PyDict_NewPresized( 3 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_attributes;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_attributes);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 505;
coroutine_heap->type_description_1 = "ccccccccc";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_chunking_strategy;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_chunking_strategy);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 506;
coroutine_heap->type_description_1 = "ccccccccc";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
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
tmp_expression_value_6 = module_var_accessor_openai$resources$vector_stores$files$file_create_params(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_create_params);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 508;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_FileCreateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 508;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 502;
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

coroutine_heap->exception_lineno = 502;
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
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_3, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_3, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = yield_return_value;
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 510;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[3]));
tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 511;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 511;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 511;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine->m_frame->m_frame.f_lineno = 510;
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

coroutine_heap->exception_lineno = 510;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_VectorStoreFile);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

coroutine_heap->exception_lineno = 513;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 500;
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


coroutine_heap->exception_lineno = 500;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 500;
coroutine_heap->type_description_1 = "ccccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_3, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_2, sizeof(PyObject *), &tmp_tuple_element_3, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 500;
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
    coroutine->m_closure[8],
    coroutine->m_closure[5],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine->m_closure[3],
    coroutine->m_closure[4],
    coroutine->m_closure[2],
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

static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__15_create$$$coroutine__1_create(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$vector_stores$files$$$function__15_create$$$coroutine__1_create_context,
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_create,
        mod_consts.const_str_digest_7e2840bf3388ba7894fad9e576738907,
        code_objects_00f677f3e175a35e8c7175e2ffa8147b,
        closure,
        9,
#if 1
        sizeof(struct openai$resources$vector_stores$files$$$function__15_create$$$coroutine__1_create_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__16_retrieve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_file_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_vector_store_id = Nuitka_Cell_New1(python_pars[2]);
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
tmp_closure_1[3] = par_file_id;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_timeout;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_vector_store_id;
Py_INCREF(tmp_closure_1[6]);
tmp_return_value = MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__16_retrieve$$$coroutine__1_retrieve(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_file_id);
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
par_file_id = NULL;
CHECK_OBJECT(par_vector_store_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
par_vector_store_id = NULL;
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
struct openai$resources$vector_stores$files$$$function__16_retrieve$$$coroutine__1_retrieve_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$vector_stores$files$$$function__16_retrieve$$$coroutine__1_retrieve_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$vector_stores$files$$$function__16_retrieve$$$coroutine__1_retrieve_locals *coroutine_heap = (struct openai$resources$vector_stores$files$$$function__16_retrieve$$$coroutine__1_retrieve_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ca2589e7652879bb9b9238b775970050, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 540;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 540;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 541;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 541;
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


coroutine_heap->exception_lineno = 541;
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
coroutine->m_frame->m_frame.f_lineno = 541;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 541;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccccc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 542;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_3 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 542;
coroutine_heap->type_description_1 = "ccccccc";
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
tmp_tuple_element_2 = mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 543;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_2;
}

tmp_operand_value_4 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 543;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 543;
coroutine_heap->type_description_1 = "ccccccc";
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
coroutine->m_frame->m_frame.f_lineno = 543;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 543;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccccc";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_3);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 544;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_3;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 544;
coroutine_heap->type_description_1 = "ccccccc";
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


coroutine_heap->exception_lineno = 544;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
    Nuitka_Cell_SET(coroutine->m_closure[1], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 545;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 545;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 545;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 546;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_4;
}

tmp_format_value_3 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 546;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 546;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_4;
}

tmp_format_value_4 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 546;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 547;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[1]));
tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 548;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 548;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 548;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine->m_frame->m_frame.f_lineno = 547;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 547;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_VectorStoreFile);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 550;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 545;
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


coroutine_heap->exception_lineno = 545;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 545;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_3, sizeof(PyObject *), &tmp_tuple_element_4, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_3, sizeof(PyObject *), &tmp_tuple_element_4, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 545;
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
    coroutine->m_closure[4],
    coroutine->m_closure[3],
    coroutine->m_closure[6],
    coroutine->m_closure[1],
    coroutine->m_closure[2],
    coroutine->m_closure[0],
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

static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__16_retrieve$$$coroutine__1_retrieve(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$vector_stores$files$$$function__16_retrieve$$$coroutine__1_retrieve_context,
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_retrieve,
        mod_consts.const_str_digest_95e671d79b0647693a16cc19e2208db8,
        code_objects_ca2589e7652879bb9b9238b775970050,
        closure,
        7,
#if 1
        sizeof(struct openai$resources$vector_stores$files$$$function__16_retrieve$$$coroutine__1_retrieve_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__17_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_file_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_vector_store_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_attributes = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_attributes;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_body;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_headers;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_extra_query;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_file_id;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_self;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_timeout;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_vector_store_id;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__17_update$$$coroutine__1_update(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_file_id);
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
par_file_id = NULL;
CHECK_OBJECT(par_vector_store_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
par_vector_store_id = NULL;
CHECK_OBJECT(par_attributes);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
par_attributes = NULL;
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
struct openai$resources$vector_stores$files$$$function__17_update$$$coroutine__1_update_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$vector_stores$files$$$function__17_update$$$coroutine__1_update_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$vector_stores$files$$$function__17_update$$$coroutine__1_update_locals *coroutine_heap = (struct openai$resources$vector_stores$files$$$function__17_update$$$coroutine__1_update_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_43f70109f1b38798185e6a485bd9e290, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 584;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 584;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 585;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[7]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 585;
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


coroutine_heap->exception_lineno = 585;
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
coroutine->m_frame->m_frame.f_lineno = 585;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 585;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccccc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 586;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 586;
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
tmp_tuple_element_2 = mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 587;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_2;
}

tmp_operand_value_4 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 587;
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


coroutine_heap->exception_lineno = 587;
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
coroutine->m_frame->m_frame.f_lineno = 587;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 587;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccccc";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_3);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 588;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_3;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 588;
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


coroutine_heap->exception_lineno = 588;
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
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
coroutine->m_frame->m_frame.f_lineno = 589;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 589;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__post);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 589;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 590;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_4;
}

tmp_format_value_3 = Nuitka_Cell_GET(coroutine->m_closure[7]);
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 590;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 590;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_4;
}

tmp_format_value_4 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 590;
coroutine_heap->type_description_1 = "cccccccc";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
coroutine->m_frame->m_frame.f_lineno = 591;
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$async_maybe_transform(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 591;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_attributes;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_attributes);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 591;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_expression_value_6 = module_var_accessor_openai$resources$vector_stores$files$file_update_params(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_update_params);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 591;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_FileUpdateParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_args_element_value_1);

coroutine_heap->exception_lineno = 591;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 591;
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

coroutine_heap->exception_lineno = 591;
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

coroutine_heap->exception_lineno = 591;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_3, sizeof(PyObject *), &tmp_tuple_element_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_3, sizeof(PyObject *), &tmp_tuple_element_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 591;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = yield_return_value;
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[2]));
tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 593;
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

coroutine_heap->exception_lineno = 593;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 593;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine->m_frame->m_frame.f_lineno = 592;
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

coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_VectorStoreFile);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

coroutine_heap->exception_lineno = 595;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 589;
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


coroutine_heap->exception_lineno = 589;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 589;
coroutine_heap->type_description_1 = "cccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_3, sizeof(PyObject *), &tmp_tuple_element_4, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_3, sizeof(PyObject *), &tmp_tuple_element_4, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 589;
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
    coroutine->m_closure[5],
    coroutine->m_closure[4],
    coroutine->m_closure[7],
    coroutine->m_closure[0],
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

static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__17_update$$$coroutine__1_update(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$vector_stores$files$$$function__17_update$$$coroutine__1_update_context,
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_update,
        mod_consts.const_str_digest_0c18acbfdb09c0d8b92c6d77000be5f2,
        code_objects_43f70109f1b38798185e6a485bd9e290,
        closure,
        8,
#if 1
        sizeof(struct openai$resources$vector_stores$files$$$function__17_update$$$coroutine__1_update_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__18_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_vector_store_id = python_pars[1];
PyObject *par_after = python_pars[2];
PyObject *par_before = python_pars[3];
PyObject *par_filter = python_pars[4];
PyObject *par_limit = python_pars[5];
PyObject *par_order = python_pars[6];
PyObject *par_extra_headers = python_pars[7];
PyObject *par_extra_query = python_pars[8];
PyObject *par_extra_body = python_pars[9];
PyObject *par_timeout = python_pars[10];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__18_list;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__18_list = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__18_list)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__18_list);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__18_list == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__18_list = MAKE_FUNCTION_FRAME(tstate, code_objects_e9b76578e39fe6d7353d772724eb0bf3, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__18_list->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__18_list = cache_frame_frame_openai$resources$vector_stores$files$$$function__18_list;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__18_list);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__18_list) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_1 = par_vector_store_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "ooooooooooo";
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_2 = par_vector_store_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "ooooooooooo";
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
frame_frame_openai$resources$vector_stores$files$$$function__18_list->m_frame.f_lineno = 645;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 645;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
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


exception_lineno = 646;
type_description_1 = "ooooooooooo";
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


exception_lineno = 646;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get_api_list);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_vector_store_id);
tmp_format_value_2 = par_vector_store_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_0bfcf269629626c3e3a28a177837b532;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_expression_value_2 = module_var_accessor_openai$resources$vector_stores$files$AsyncCursorPage(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncCursorPage);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 649;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VectorStoreFile);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 649;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 649;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 650;
type_description_1 = "ooooooooooo";
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
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$maybe_transform(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 655;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_after;
CHECK_OBJECT(par_after);
tmp_dict_value_1 = par_after;
tmp_args_element_value_1 = _PyDict_NewPresized( 5 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_before;
CHECK_OBJECT(par_before);
tmp_dict_value_1 = par_before;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_filter;
CHECK_OBJECT(par_filter);
tmp_dict_value_1 = par_filter;
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
tmp_expression_value_3 = module_var_accessor_openai$resources$vector_stores$files$file_list_params(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_list_params);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 663;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_FileListParams);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 663;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__18_list->m_frame.f_lineno = 655;
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
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 655;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__18_list->m_frame.f_lineno = 650;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_76e2f8e54c543f34c072a44672341e2e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 650;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFile(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VectorStoreFile);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 666;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__18_list->m_frame.f_lineno = 647;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
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


exception_lineno = 647;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__18_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__18_list->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__18_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__18_list,
    type_description_1,
    par_self,
    par_vector_store_id,
    par_after,
    par_before,
    par_filter,
    par_limit,
    par_order,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__18_list == cache_frame_frame_openai$resources$vector_stores$files$$$function__18_list) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__18_list);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__18_list = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__18_list);

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
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_after);
Py_DECREF(par_after);
CHECK_OBJECT(par_before);
Py_DECREF(par_before);
CHECK_OBJECT(par_filter);
Py_DECREF(par_filter);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
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
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
CHECK_OBJECT(par_after);
Py_DECREF(par_after);
CHECK_OBJECT(par_before);
Py_DECREF(par_before);
CHECK_OBJECT(par_filter);
Py_DECREF(par_filter);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
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


static PyObject *impl_openai$resources$vector_stores$files$$$function__19_delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_file_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_vector_store_id = Nuitka_Cell_New1(python_pars[2]);
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
tmp_closure_1[3] = par_file_id;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_timeout;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_vector_store_id;
Py_INCREF(tmp_closure_1[6]);
tmp_return_value = MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__19_delete$$$coroutine__1_delete(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_file_id);
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
par_file_id = NULL;
CHECK_OBJECT(par_vector_store_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
par_vector_store_id = NULL;
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
struct openai$resources$vector_stores$files$$$function__19_delete$$$coroutine__1_delete_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *openai$resources$vector_stores$files$$$function__19_delete$$$coroutine__1_delete_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$vector_stores$files$$$function__19_delete$$$coroutine__1_delete_locals *coroutine_heap = (struct openai$resources$vector_stores$files$$$function__19_delete$$$coroutine__1_delete_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_71d7ee1fae277e509d08b9475f45660a, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 697;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 697;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 698;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 698;
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


coroutine_heap->exception_lineno = 698;
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
coroutine->m_frame->m_frame.f_lineno = 698;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 698;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccccc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 699;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_3 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 699;
coroutine_heap->type_description_1 = "ccccccc";
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
tmp_tuple_element_2 = mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 700;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_2;
}

tmp_operand_value_4 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 700;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 700;
coroutine_heap->type_description_1 = "ccccccc";
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
coroutine->m_frame->m_frame.f_lineno = 700;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 700;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccccccc";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_3);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 701;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_3;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 701;
coroutine_heap->type_description_1 = "ccccccc";
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


coroutine_heap->exception_lineno = 701;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
    Nuitka_Cell_SET(coroutine->m_closure[1], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 702;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 702;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__delete);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 702;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 703;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_4;
}

tmp_format_value_3 = Nuitka_Cell_GET(coroutine->m_closure[6]);
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 703;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 703;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_4;
}

tmp_format_value_4 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 703;
coroutine_heap->type_description_1 = "ccccccc";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 704;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[1]));
tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 705;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 705;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 705;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine->m_frame->m_frame.f_lineno = 704;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

coroutine_heap->exception_lineno = 704;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = module_var_accessor_openai$resources$vector_stores$files$VectorStoreFileDeleted(tstate);
if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_VectorStoreFileDeleted);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

coroutine_heap->exception_lineno = 707;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 702;
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


coroutine_heap->exception_lineno = 702;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 702;
coroutine_heap->type_description_1 = "ccccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_3, sizeof(PyObject *), &tmp_tuple_element_4, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_string_concat_values_3, sizeof(PyObject *), &tmp_tuple_element_4, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 702;
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
    coroutine->m_closure[4],
    coroutine->m_closure[3],
    coroutine->m_closure[6],
    coroutine->m_closure[1],
    coroutine->m_closure[2],
    coroutine->m_closure[0],
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

static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__19_delete$$$coroutine__1_delete(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$vector_stores$files$$$function__19_delete$$$coroutine__1_delete_context,
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_delete,
        mod_consts.const_str_digest_f0b63ebcb1eeb51e0461daa1f66237ae,
        code_objects_71d7ee1fae277e509d08b9475f45660a,
        closure,
        7,
#if 1
        sizeof(struct openai$resources$vector_stores$files$$$function__19_delete$$$coroutine__1_delete_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__20_create_and_poll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_file_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_vector_store_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_attributes = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_poll_interval_ms = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_chunking_strategy = Nuitka_Cell_New1(python_pars[5]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[6];
tmp_closure_1[0] = par_attributes;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_chunking_strategy;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_file_id;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_poll_interval_ms;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_vector_store_id;
Py_INCREF(tmp_closure_1[5]);
tmp_return_value = MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__20_create_and_poll$$$coroutine__1_create_and_poll(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_file_id);
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
par_file_id = NULL;
CHECK_OBJECT(par_vector_store_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
par_vector_store_id = NULL;
CHECK_OBJECT(par_attributes);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
par_attributes = NULL;
CHECK_OBJECT(par_poll_interval_ms);
CHECK_OBJECT(par_poll_interval_ms);
Py_DECREF(par_poll_interval_ms);
par_poll_interval_ms = NULL;
CHECK_OBJECT(par_chunking_strategy);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);
par_chunking_strategy = NULL;
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
struct openai$resources$vector_stores$files$$$function__20_create_and_poll$$$coroutine__1_create_and_poll_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *openai$resources$vector_stores$files$$$function__20_create_and_poll$$$coroutine__1_create_and_poll_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$vector_stores$files$$$function__20_create_and_poll$$$coroutine__1_create_and_poll_locals *coroutine_heap = (struct openai$resources$vector_stores$files$$$function__20_create_and_poll$$$coroutine__1_create_and_poll_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_d78f6ef02549ea9e3e8b5b333fc9d3c2, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 720;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 720;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_create);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 720;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 721;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 721;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_chunking_strategy);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 721;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_attributes);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 721;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 720;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_expression_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_a9a7f65171f9244d3e0e6e7a196b6f39_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 720;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 720;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 720;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 724;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 724;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_poll);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 724;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 725;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 726;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_poll_interval_ms);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 727;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 724;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_expression_value_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_vector_store_id_str_plain_poll_interval_ms_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 724;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 724;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 724;
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
    coroutine->m_closure[2],
    coroutine->m_closure[5],
    coroutine->m_closure[0],
    coroutine->m_closure[3],
    coroutine->m_closure[1]
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

static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__20_create_and_poll$$$coroutine__1_create_and_poll(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$vector_stores$files$$$function__20_create_and_poll$$$coroutine__1_create_and_poll_context,
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_create_and_poll,
        mod_consts.const_str_digest_3104dc06cc31e18d2d0a551476fc7046,
        code_objects_d78f6ef02549ea9e3e8b5b333fc9d3c2,
        closure,
        6,
#if 1
        sizeof(struct openai$resources$vector_stores$files$$$function__20_create_and_poll$$$coroutine__1_create_and_poll_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__21_poll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_file_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_vector_store_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_poll_interval_ms = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_file_id;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_poll_interval_ms;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_vector_store_id;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__21_poll$$$coroutine__1_poll(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_file_id);
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
par_file_id = NULL;
CHECK_OBJECT(par_vector_store_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
par_vector_store_id = NULL;
CHECK_OBJECT(par_poll_interval_ms);
CHECK_OBJECT(par_poll_interval_ms);
Py_DECREF(par_poll_interval_ms);
par_poll_interval_ms = NULL;
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
struct openai$resources$vector_stores$files$$$function__21_poll$$$coroutine__1_poll_locals {
PyObject *var_headers;
PyObject *var_response;
PyObject *var_file;
PyObject *var_from_header;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *openai$resources$vector_stores$files$$$function__21_poll$$$coroutine__1_poll_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$vector_stores$files$$$function__21_poll$$$coroutine__1_poll_locals *coroutine_heap = (struct openai$resources$vector_stores$files$$$function__21_poll$$$coroutine__1_poll_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_headers = NULL;
coroutine_heap->var_response = NULL;
coroutine_heap->var_file = NULL;
coroutine_heap->var_from_header = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = DICT_COPY(tstate, mod_consts.const_dict_1aba825c6825fc25942426c4d612ec19);
assert(coroutine_heap->var_headers == NULL);
coroutine_heap->var_headers = tmp_assign_source_1;
}
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_fa813d9a6c3593544d789348235f7d0b, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_openai$resources$vector_stores$files$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 743;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_poll_interval_ms);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 743;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 743;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 743;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_1);

coroutine_heap->exception_lineno = 743;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_unicode_arg_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_poll_interval_ms);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 744;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}

tmp_unicode_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_dictset_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (coroutine_heap->tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 744;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_headers);
coroutine_heap->tmp_dictset_dict = coroutine_heap->var_headers;
coroutine_heap->tmp_dictset_key = mod_consts.const_str_digest_d932935a9f16dadc241d177d3b40e9f3;
assert(PyDict_CheckExact(coroutine_heap->tmp_dictset_dict));
coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_dictset_dict, coroutine_heap->tmp_dictset_key, coroutine_heap->tmp_dictset_value);

CHECK_OBJECT(coroutine_heap->tmp_dictset_value);
Py_DECREF(coroutine_heap->tmp_dictset_value);
assert(!(coroutine_heap->tmp_res != 0));
}
branch_no_1:;
loop_start_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 747;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 747;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_with_raw_response);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 747;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_retrieve);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 747;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_file_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 748;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 749;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (coroutine_heap->var_headers == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 750;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = coroutine_heap->var_headers;
coroutine->m_frame->m_frame.f_lineno = 747;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_vector_store_id_str_plain_extra_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 747;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 747;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 747;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_response;
    coroutine_heap->var_response = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_called_instance_1 = coroutine_heap->var_response;
coroutine->m_frame->m_frame.f_lineno = 753;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_parse);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 753;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_file;
    coroutine_heap->var_file = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(coroutine_heap->var_file);
tmp_expression_value_5 = coroutine_heap->var_file;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 754;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_in_progress;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 754;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$is_given(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 755;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_poll_interval_ms);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 755;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 755;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 755;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 755;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_7 = coroutine_heap->var_response;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_headers);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 756;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 756;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 756;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_55abc265b5635b79194a1eb2cca3dc35_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 756;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_from_header;
    coroutine_heap->var_from_header = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(coroutine_heap->var_from_header);
tmp_cmp_expr_left_2 = coroutine_heap->var_from_header;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(coroutine_heap->var_from_header);
tmp_int_arg_1 = coroutine_heap->var_from_header;
tmp_assign_source_5 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 758;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
    Nuitka_Cell_SET(coroutine->m_closure[1], tmp_assign_source_5);
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_int_pos_1000;
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
    Nuitka_Cell_SET(coroutine->m_closure[1], tmp_assign_source_6);
    Py_INCREF(tmp_assign_source_6);
    Py_XDECREF(old);
}

}
branch_end_4:;
branch_no_3:;
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_3;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 762;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 762;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__sleep);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 762;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_poll_interval_ms);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 762;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}

tmp_truediv_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_1000;
tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_5);

coroutine_heap->exception_lineno = 762;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 762;
tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 762;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 762;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_truediv_expr_left_1, sizeof(PyObject *), &tmp_truediv_expr_right_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_8;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_truediv_expr_left_1, sizeof(PyObject *), &tmp_truediv_expr_right_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 762;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_11;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(coroutine_heap->var_file);
tmp_expression_value_11 = coroutine_heap->var_file;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 763;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_cancelled;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 763;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 763;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(coroutine_heap->var_file);
tmp_expression_value_12 = coroutine_heap->var_file;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 763;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_completed;
tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 763;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 763;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(coroutine_heap->var_file);
tmp_expression_value_13 = coroutine_heap->var_file;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 763;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_failed;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 763;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_5 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(coroutine_heap->var_file);
coroutine_heap->tmp_return_value = coroutine_heap->var_file;
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
goto branch_end_5;
branch_no_5:;
CHECK_OBJECT(coroutine_heap->var_file);
coroutine_heap->tmp_return_value = coroutine_heap->var_file;
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_end_5:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 746;
coroutine_heap->type_description_1 = "ccccoooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;

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

goto try_return_handler_1;

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
    coroutine->m_closure[2],
    coroutine->m_closure[0],
    coroutine->m_closure[3],
    coroutine->m_closure[1],
    coroutine_heap->var_headers,
    coroutine_heap->var_response,
    coroutine_heap->var_file,
    coroutine_heap->var_from_header
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
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_headers);
coroutine_heap->var_headers = NULL;
CHECK_OBJECT(coroutine_heap->var_response);
CHECK_OBJECT(coroutine_heap->var_response);
Py_DECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
CHECK_OBJECT(coroutine_heap->var_file);
CHECK_OBJECT(coroutine_heap->var_file);
Py_DECREF(coroutine_heap->var_file);
coroutine_heap->var_file = NULL;
Py_XDECREF(coroutine_heap->var_from_header);
coroutine_heap->var_from_header = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_headers);
coroutine_heap->var_headers = NULL;
Py_XDECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
Py_XDECREF(coroutine_heap->var_file);
coroutine_heap->var_file = NULL;
Py_XDECREF(coroutine_heap->var_from_header);
coroutine_heap->var_from_header = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__21_poll$$$coroutine__1_poll(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$vector_stores$files$$$function__21_poll$$$coroutine__1_poll_context,
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_poll,
        mod_consts.const_str_digest_e912026f89eb9b7d1a2deb22b18f8748,
        code_objects_fa813d9a6c3593544d789348235f7d0b,
        closure,
        4,
#if 1
        sizeof(struct openai$resources$vector_stores$files$$$function__21_poll$$$coroutine__1_poll_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__22_upload(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_vector_store_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_file = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_chunking_strategy = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_chunking_strategy;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_file;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_vector_store_id;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__22_upload$$$coroutine__1_upload(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_vector_store_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
par_vector_store_id = NULL;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_chunking_strategy);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);
par_chunking_strategy = NULL;
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
struct openai$resources$vector_stores$files$$$function__22_upload$$$coroutine__1_upload_locals {
PyObject *var_file_obj;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *openai$resources$vector_stores$files$$$function__22_upload$$$coroutine__1_upload_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$vector_stores$files$$$function__22_upload$$$coroutine__1_upload_locals *coroutine_heap = (struct openai$resources$vector_stores$files$$$function__22_upload$$$coroutine__1_upload_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_file_obj = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_26acdf72b4afbc4db61b4ab56e81164d, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 783;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 783;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__client);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 783;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_files);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 783;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_create);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 783;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_file);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 783;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_assistants;
coroutine->m_frame->m_frame.f_lineno = 783;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_expression_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_file_str_plain_purpose_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 783;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 783;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 783;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_file_obj == NULL);
coroutine_heap->var_file_obj = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_2_1;
coroutine->m_frame->m_frame.f_lineno = 784;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 784;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_create);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 784;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 785;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
CHECK_OBJECT(coroutine_heap->var_file_obj);
tmp_expression_value_9 = coroutine_heap->var_file_obj;
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_id);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 785;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_1_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_chunking_strategy);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 785;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 784;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1};

    tmp_expression_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_81cacb406356249c4a554ffc3784e02c_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 784;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 784;
coroutine_heap->type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 784;
coroutine_heap->type_description_1 = "cccco";
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

goto try_return_handler_1;

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
    coroutine->m_closure[2],
    coroutine->m_closure[3],
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_file_obj
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
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_file_obj);
CHECK_OBJECT(coroutine_heap->var_file_obj);
Py_DECREF(coroutine_heap->var_file_obj);
coroutine_heap->var_file_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_file_obj);
coroutine_heap->var_file_obj = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__22_upload$$$coroutine__1_upload(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$vector_stores$files$$$function__22_upload$$$coroutine__1_upload_context,
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_upload,
        mod_consts.const_str_digest_8507cf031d19d52971b8758c4b06eb18,
        code_objects_26acdf72b4afbc4db61b4ab56e81164d,
        closure,
        4,
#if 1
        sizeof(struct openai$resources$vector_stores$files$$$function__22_upload$$$coroutine__1_upload_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__23_upload_and_poll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_vector_store_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_file = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_attributes = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_poll_interval_ms = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_chunking_strategy = Nuitka_Cell_New1(python_pars[5]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[6];
tmp_closure_1[0] = par_attributes;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_chunking_strategy;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_file;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_poll_interval_ms;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_vector_store_id;
Py_INCREF(tmp_closure_1[5]);
tmp_return_value = MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__23_upload_and_poll$$$coroutine__1_upload_and_poll(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_vector_store_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
par_vector_store_id = NULL;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_attributes);
CHECK_OBJECT(par_attributes);
Py_DECREF(par_attributes);
par_attributes = NULL;
CHECK_OBJECT(par_poll_interval_ms);
CHECK_OBJECT(par_poll_interval_ms);
Py_DECREF(par_poll_interval_ms);
par_poll_interval_ms = NULL;
CHECK_OBJECT(par_chunking_strategy);
CHECK_OBJECT(par_chunking_strategy);
Py_DECREF(par_chunking_strategy);
par_chunking_strategy = NULL;
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
struct openai$resources$vector_stores$files$$$function__23_upload_and_poll$$$coroutine__1_upload_and_poll_locals {
PyObject *var_file_obj;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *openai$resources$vector_stores$files$$$function__23_upload_and_poll$$$coroutine__1_upload_and_poll_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$vector_stores$files$$$function__23_upload_and_poll$$$coroutine__1_upload_and_poll_locals *coroutine_heap = (struct openai$resources$vector_stores$files$$$function__23_upload_and_poll$$$coroutine__1_upload_and_poll_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_file_obj = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_33b6924f72584e8ed98cad1a098df573, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
coroutine->m_frame->m_frame.f_lineno = 798;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 798;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__client);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 798;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_files);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 798;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_create);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 798;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_file);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 798;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_assistants;
coroutine->m_frame->m_frame.f_lineno = 798;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_expression_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_file_str_plain_purpose_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 798;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 798;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 798;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_file_obj == NULL);
coroutine_heap->var_file_obj = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
coroutine->m_frame->m_frame.f_lineno = 799;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 799;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_create_and_poll);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 799;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_vector_store_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 800;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
CHECK_OBJECT(coroutine_heap->var_file_obj);
tmp_expression_value_9 = coroutine_heap->var_file_obj;
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_id);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 801;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_1_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_poll_interval_ms);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 802;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_1_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_chunking_strategy);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 803;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_1_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_attributes);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 804;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_4_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 799;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_f88631a80962055b2386c2e0b8717989_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 799;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 799;
coroutine_heap->type_description_1 = "cccccco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_value_4_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_value_4_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 799;
coroutine_heap->type_description_1 = "cccccco";
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

goto try_return_handler_1;

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
    coroutine->m_closure[5],
    coroutine->m_closure[2],
    coroutine->m_closure[0],
    coroutine->m_closure[3],
    coroutine->m_closure[1],
    coroutine_heap->var_file_obj
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
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_file_obj);
CHECK_OBJECT(coroutine_heap->var_file_obj);
Py_DECREF(coroutine_heap->var_file_obj);
coroutine_heap->var_file_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_file_obj);
coroutine_heap->var_file_obj = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$vector_stores$files$$$function__23_upload_and_poll$$$coroutine__1_upload_and_poll(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$vector_stores$files$$$function__23_upload_and_poll$$$coroutine__1_upload_and_poll_context,
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_upload_and_poll,
        mod_consts.const_str_digest_058a32f7dac747fe2db55d99d0487338,
        code_objects_33b6924f72584e8ed98cad1a098df573,
        closure,
        6,
#if 1
        sizeof(struct openai$resources$vector_stores$files$$$function__23_upload_and_poll$$$coroutine__1_upload_and_poll_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__24_content(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file_id = python_pars[1];
PyObject *par_vector_store_id = python_pars[2];
PyObject *par_extra_headers = python_pars[3];
PyObject *par_extra_query = python_pars[4];
PyObject *par_extra_body = python_pars[5];
PyObject *par_timeout = python_pars[6];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__24_content;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__24_content = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__24_content)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__24_content);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__24_content == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__24_content = MAKE_FUNCTION_FRAME(tstate, code_objects_7f1b8a2e3af3556237e35a1e50fc93de, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__24_content->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__24_content = cache_frame_frame_openai$resources$vector_stores$files$$$function__24_content;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__24_content);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__24_content) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_1 = par_vector_store_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 831;
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
tmp_tuple_element_1 = mod_consts.const_str_digest_35f543cd70fc0b986cc6649e7ad77013;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_vector_store_id);
tmp_operand_value_2 = par_vector_store_id;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 832;
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


exception_lineno = 832;
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
frame_frame_openai$resources$vector_stores$files$$$function__24_content->m_frame.f_lineno = 832;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 832;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_file_id);
tmp_operand_value_3 = par_file_id;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 833;
type_description_1 = "ooooooo";
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
tmp_tuple_element_2 = mod_consts.const_str_digest_8e67c8d39f8eeddc1187dd04f41c5762;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_file_id);
tmp_operand_value_4 = par_file_id;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 834;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 834;
type_description_1 = "ooooooo";
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
frame_frame_openai$resources$vector_stores$files$$$function__24_content->m_frame.f_lineno = 834;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 834;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = DICT_COPY(tstate, mod_consts.const_dict_aa381b89ff32e5867549f1cd5db32135);
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


exception_lineno = 835;
type_description_1 = "ooooooo";
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


exception_lineno = 835;
type_description_1 = "ooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get_api_list);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 836;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_7f104ce753f4f477fcc560ef7c385309;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_vector_store_id);
tmp_format_value_3 = par_vector_store_id;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "ooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_8ef78415bf3ffc5c3038eb8bbf5030bf;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
CHECK_OBJECT(par_file_id);
tmp_format_value_4 = par_file_id;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "ooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_d1f7ab114277f87d05e67de6d947ae0a;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_expression_value_2 = module_var_accessor_openai$resources$vector_stores$files$AsyncPage(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncPage);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 838;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_openai$resources$vector_stores$files$FileContentResponse(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileContentResponse);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 838;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 838;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$make_request_options(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 839;
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
frame_frame_openai$resources$vector_stores$files$$$function__24_content->m_frame.f_lineno = 839;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 839;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = module_var_accessor_openai$resources$vector_stores$files$FileContentResponse(tstate);
if (unlikely(tmp_kw_call_dict_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileContentResponse);
}

if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 842;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__24_content->m_frame.f_lineno = 836;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_page_str_plain_options_str_plain_model_tuple);
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


exception_lineno = 836;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__24_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__24_content->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__24_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__24_content,
    type_description_1,
    par_self,
    par_file_id,
    par_vector_store_id,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__24_content == cache_frame_frame_openai$resources$vector_stores$files$$$function__24_content) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__24_content);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__24_content = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__24_content);

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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
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
CHECK_OBJECT(par_file_id);
Py_DECREF(par_file_id);
CHECK_OBJECT(par_vector_store_id);
Py_DECREF(par_vector_store_id);
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


static PyObject *impl_openai$resources$vector_stores$files$$$function__25___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_files = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__25___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__25___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__25___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__25___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__25___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__25___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1eb50ae4b0b097b6d2098430354ebe7e, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__25___init__->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__25___init__ = cache_frame_frame_openai$resources$vector_stores$files$$$function__25___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__25___init__);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__25___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_files);
tmp_assattr_value_1 = par_files;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__files, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 848;
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
tmp_expression_value_1 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 850;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 850;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_2 = par_files;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 851;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__25___init__->m_frame.f_lineno = 850;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 850;
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


exception_lineno = 850;
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
tmp_expression_value_3 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 853;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 853;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_4 = par_files;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 854;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__25___init__->m_frame.f_lineno = 853;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 853;
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


exception_lineno = 853;
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
tmp_expression_value_5 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 856;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 856;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_6 = par_files;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 857;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__25___init__->m_frame.f_lineno = 856;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 856;
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


exception_lineno = 856;
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
tmp_expression_value_7 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 859;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_8 = par_files;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_list);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 860;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__25___init__->m_frame.f_lineno = 859;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
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


exception_lineno = 859;
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
tmp_expression_value_9 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 862;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 862;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_10 = par_files;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 863;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__25___init__->m_frame.f_lineno = 862;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 862;
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


exception_lineno = 862;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_7;
tmp_expression_value_11 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 865;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 865;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_12 = par_files;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_content);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 866;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__25___init__->m_frame.f_lineno = 865;
tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 865;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_content, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 865;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__25___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__25___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__25___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__25___init__,
    type_description_1,
    par_self,
    par_files
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__25___init__ == cache_frame_frame_openai$resources$vector_stores$files$$$function__25___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__25___init__);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__25___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__25___init__);

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
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__26___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_files = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__26___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__26___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__26___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__26___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__26___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__26___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0573b22478a14b1844ae16cb59ae9f05, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__26___init__->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__26___init__ = cache_frame_frame_openai$resources$vector_stores$files$$$function__26___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__26___init__);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__26___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_files);
tmp_assattr_value_1 = par_files;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__files, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
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
tmp_expression_value_1 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 874;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 874;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_2 = par_files;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 875;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__26___init__->m_frame.f_lineno = 874;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 874;
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


exception_lineno = 874;
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
tmp_expression_value_3 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 877;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 877;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_4 = par_files;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 878;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__26___init__->m_frame.f_lineno = 877;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 877;
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


exception_lineno = 877;
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
tmp_expression_value_5 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 880;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 880;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_6 = par_files;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 881;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__26___init__->m_frame.f_lineno = 880;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 880;
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


exception_lineno = 880;
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
tmp_expression_value_7 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 883;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_8 = par_files;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_list);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 884;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__26___init__->m_frame.f_lineno = 883;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
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


exception_lineno = 883;
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
tmp_expression_value_9 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 886;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_10 = par_files;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 887;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__26___init__->m_frame.f_lineno = 886;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
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


exception_lineno = 886;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_7;
tmp_expression_value_11 = module_var_accessor_openai$resources$vector_stores$files$_legacy_response(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 889;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 889;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_12 = par_files;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_content);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 890;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__26___init__->m_frame.f_lineno = 889;
tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 889;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_content, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 889;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__26___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__26___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__26___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__26___init__,
    type_description_1,
    par_self,
    par_files
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__26___init__ == cache_frame_frame_openai$resources$vector_stores$files$$$function__26___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__26___init__);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__26___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__26___init__);

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
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__27___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_files = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__27___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__27___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__27___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__27___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__27___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__27___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_44f81b7debb1cb99b00f41c4ae749167, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__27___init__->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__27___init__ = cache_frame_frame_openai$resources$vector_stores$files$$$function__27___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__27___init__);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__27___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_files);
tmp_assattr_value_1 = par_files;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__files, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
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
tmp_called_value_1 = module_var_accessor_openai$resources$vector_stores$files$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 898;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_1 = par_files;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 899;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__27___init__->m_frame.f_lineno = 898;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 898;
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


exception_lineno = 898;
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
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 901;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_2 = par_files;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 902;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__27___init__->m_frame.f_lineno = 901;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 901;
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


exception_lineno = 901;
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
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 904;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_3 = par_files;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 905;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__27___init__->m_frame.f_lineno = 904;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 904;
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


exception_lineno = 904;
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
tmp_called_value_4 = module_var_accessor_openai$resources$vector_stores$files$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 907;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_4 = par_files;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_list);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 908;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__27___init__->m_frame.f_lineno = 907;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 907;
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


exception_lineno = 907;
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
tmp_called_value_5 = module_var_accessor_openai$resources$vector_stores$files$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 910;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_5 = par_files;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__27___init__->m_frame.f_lineno = 910;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 910;
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


exception_lineno = 910;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_7;
tmp_called_value_6 = module_var_accessor_openai$resources$vector_stores$files$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 913;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_6 = par_files;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_content);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 914;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__27___init__->m_frame.f_lineno = 913;
tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 913;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_content, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 913;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__27___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__27___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__27___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__27___init__,
    type_description_1,
    par_self,
    par_files
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__27___init__ == cache_frame_frame_openai$resources$vector_stores$files$$$function__27___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__27___init__);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__27___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__27___init__);

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
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$vector_stores$files$$$function__28___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_files = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$function__28___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$vector_stores$files$$$function__28___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$vector_stores$files$$$function__28___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__28___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$vector_stores$files$$$function__28___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$vector_stores$files$$$function__28___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_342f610b04b8b66aef1382dfa4b29dfb, module_openai$resources$vector_stores$files, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$vector_stores$files$$$function__28___init__->m_type_description == NULL);
frame_frame_openai$resources$vector_stores$files$$$function__28___init__ = cache_frame_frame_openai$resources$vector_stores$files$$$function__28___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$function__28___init__);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$function__28___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_files);
tmp_assattr_value_1 = par_files;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__files, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 920;
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
tmp_called_value_1 = module_var_accessor_openai$resources$vector_stores$files$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 922;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_1 = par_files;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 923;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__28___init__->m_frame.f_lineno = 922;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 922;
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


exception_lineno = 922;
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
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 925;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_2 = par_files;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_retrieve);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 926;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__28___init__->m_frame.f_lineno = 925;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 925;
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


exception_lineno = 925;
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
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 928;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_3 = par_files;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 929;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__28___init__->m_frame.f_lineno = 928;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 928;
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


exception_lineno = 928;
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
tmp_called_value_4 = module_var_accessor_openai$resources$vector_stores$files$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 931;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_4 = par_files;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_list);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 932;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__28___init__->m_frame.f_lineno = 931;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 931;
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


exception_lineno = 931;
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
tmp_called_value_5 = module_var_accessor_openai$resources$vector_stores$files$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 934;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_5 = par_files;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_delete);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 935;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__28___init__->m_frame.f_lineno = 934;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 934;
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


exception_lineno = 934;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_7;
tmp_called_value_6 = module_var_accessor_openai$resources$vector_stores$files$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 937;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_files);
tmp_expression_value_6 = par_files;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_content);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 938;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$vector_stores$files$$$function__28___init__->m_frame.f_lineno = 937;
tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 937;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_content, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 937;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$function__28___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$function__28___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$function__28___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$function__28___init__,
    type_description_1,
    par_self,
    par_files
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$vector_stores$files$$$function__28___init__ == cache_frame_frame_openai$resources$vector_stores$files$$$function__28___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$vector_stores$files$$$function__28___init__);
    cache_frame_frame_openai$resources$vector_stores$files$$$function__28___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$function__28___init__);

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
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__10_upload(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__10_upload,
        mod_consts.const_str_plain_upload,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d1aeb4dbba9ddfec9cda6e122b0fce10,
#endif
        code_objects_d69d7463d1981bacbb6a28e1e7dbf794,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_b2e8338ea487ff521d4da2e8974fb2ca,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__11_upload_and_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__11_upload_and_poll,
        mod_consts.const_str_plain_upload_and_poll,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_836771a22c2a80da359266778dfa7067,
#endif
        code_objects_79ce091fa3bbb921ef8165e242ad4bef,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_67096e13348000d3662ba0514e4063f9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__12_content(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__12_content,
        mod_consts.const_str_plain_content,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b15ce2f76ecfb54607eb8157da3aaca7,
#endif
        code_objects_2f07cdf0f955fa2905ef0fc4a525a470,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_f1639cf97dbf34d4f6c8b4dd5d3eea2f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__13_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__13_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_afae7bc0d04181bcdbc93e80792f312a,
#endif
        code_objects_2bea2507df584f2518015f08f6e41246,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__14_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__14_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_acb3c71375c1b09af0b1b321c9c3816e,
#endif
        code_objects_33d310abdfe17ce7804665d92415dc4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__15_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__15_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7e2840bf3388ba7894fad9e576738907,
#endif
        code_objects_00f677f3e175a35e8c7175e2ffa8147b,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_8876997a1f8fde703a99f8e0cfb8793c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__16_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__16_retrieve,
        mod_consts.const_str_plain_retrieve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_95e671d79b0647693a16cc19e2208db8,
#endif
        code_objects_ca2589e7652879bb9b9238b775970050,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_8ed08ab275d7af79ac96315d4301e13c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__17_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__17_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0c18acbfdb09c0d8b92c6d77000be5f2,
#endif
        code_objects_43f70109f1b38798185e6a485bd9e290,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_5a51f98f382a1c4527cac0de44681296,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__18_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__18_list,
        mod_consts.const_str_plain_list,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_058f54bdcefcc9d1eb368994e3138eb4,
#endif
        code_objects_e9b76578e39fe6d7353d772724eb0bf3,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_bd0353e07607147dab1c3399e3c6cb53,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__19_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__19_delete,
        mod_consts.const_str_plain_delete,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f0b63ebcb1eeb51e0461daa1f66237ae,
#endif
        code_objects_71d7ee1fae277e509d08b9475f45660a,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_9342da94a77fc80a204ecf4ae2b73d6b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__1_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__1_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_18ac5cde9a7abe631888316db76e17e2,
#endif
        code_objects_51385e614ced91d753c9bbe195c44546,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__20_create_and_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__20_create_and_poll,
        mod_consts.const_str_plain_create_and_poll,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3104dc06cc31e18d2d0a551476fc7046,
#endif
        code_objects_d78f6ef02549ea9e3e8b5b333fc9d3c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_3b76c92b2757b106a93ee8f8eb08342b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__21_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__21_poll,
        mod_consts.const_str_plain_poll,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e912026f89eb9b7d1a2deb22b18f8748,
#endif
        code_objects_fa813d9a6c3593544d789348235f7d0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_3c2ac8aacf28583808151d8c4cc19fa4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__22_upload(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__22_upload,
        mod_consts.const_str_plain_upload,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8507cf031d19d52971b8758c4b06eb18,
#endif
        code_objects_26acdf72b4afbc4db61b4ab56e81164d,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_b2e8338ea487ff521d4da2e8974fb2ca,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__23_upload_and_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__23_upload_and_poll,
        mod_consts.const_str_plain_upload_and_poll,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_058a32f7dac747fe2db55d99d0487338,
#endif
        code_objects_33b6924f72584e8ed98cad1a098df573,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_67096e13348000d3662ba0514e4063f9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__24_content(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__24_content,
        mod_consts.const_str_plain_content,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ba0cc06bfc08b258894d5ef6ed82ac0f,
#endif
        code_objects_7f1b8a2e3af3556237e35a1e50fc93de,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_f1639cf97dbf34d4f6c8b4dd5d3eea2f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__25___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__25___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8508134ab89808e5cc378aa99f59d857,
#endif
        code_objects_1eb50ae4b0b097b6d2098430354ebe7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__26___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__26___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f2ad5f23feba609a6b95147ee33dd997,
#endif
        code_objects_0573b22478a14b1844ae16cb59ae9f05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__27___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__27___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8199ec5ea80dc8be1fb4ef1486ebe077,
#endif
        code_objects_44f81b7debb1cb99b00f41c4ae749167,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__28___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__28___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fd49fc0723881e31f0ea3067048f3e2f,
#endif
        code_objects_342f610b04b8b66aef1382dfa4b29dfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__2_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__2_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_76a3555dfdd2d356895cc5adea2db327,
#endif
        code_objects_06e741a47aefd2fef105901ae6850f7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__3_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__3_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b9446c74ed882af4abce2f4b5edf1121,
#endif
        code_objects_26826a11e5092172b4015fae148b0aa0,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_8876997a1f8fde703a99f8e0cfb8793c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__4_retrieve(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__4_retrieve,
        mod_consts.const_str_plain_retrieve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_96e553acdb4ca72f4bbd56456e32b0af,
#endif
        code_objects_cb7484b163c2c842a7e7ab63fbf4170d,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_8ed08ab275d7af79ac96315d4301e13c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__5_update(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__5_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_92f6392c6f343a72dc0a49cd3d1bd2c0,
#endif
        code_objects_adca53f039e4ea5e4a2121b6fa673f30,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_5a51f98f382a1c4527cac0de44681296,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__6_list(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__6_list,
        mod_consts.const_str_plain_list,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aab953f87fa28e05d4436ee3bde58818,
#endif
        code_objects_04b4955980bfc074f011bf89982b467a,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_bd0353e07607147dab1c3399e3c6cb53,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__7_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__7_delete,
        mod_consts.const_str_plain_delete,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_86891960166cd96ab64b626eb1b217e4,
#endif
        code_objects_04915f0a844dfc78fd732d4715157d66,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_9342da94a77fc80a204ecf4ae2b73d6b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__8_create_and_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__8_create_and_poll,
        mod_consts.const_str_plain_create_and_poll,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_40be5bd8faa634cfba51a0bcf34aa735,
#endif
        code_objects_73fb69e0d08ada1f9b30a9e472120530,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_3b76c92b2757b106a93ee8f8eb08342b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__9_poll(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$vector_stores$files$$$function__9_poll,
        mod_consts.const_str_plain_poll,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_35524e2a433a37ed7357e9bc4ae56a3d,
#endif
        code_objects_ec4dee52ba7a3ac3952ec1a08136909b,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$vector_stores$files,
        mod_consts.const_str_digest_3c2ac8aacf28583808151d8c4cc19fa4,
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

static function_impl_code const function_table_openai$resources$vector_stores$files[] = {
impl_openai$resources$vector_stores$files$$$function__1_with_raw_response,
impl_openai$resources$vector_stores$files$$$function__2_with_streaming_response,
impl_openai$resources$vector_stores$files$$$function__3_create,
impl_openai$resources$vector_stores$files$$$function__4_retrieve,
impl_openai$resources$vector_stores$files$$$function__5_update,
impl_openai$resources$vector_stores$files$$$function__6_list,
impl_openai$resources$vector_stores$files$$$function__7_delete,
impl_openai$resources$vector_stores$files$$$function__8_create_and_poll,
impl_openai$resources$vector_stores$files$$$function__9_poll,
impl_openai$resources$vector_stores$files$$$function__10_upload,
impl_openai$resources$vector_stores$files$$$function__11_upload_and_poll,
impl_openai$resources$vector_stores$files$$$function__12_content,
impl_openai$resources$vector_stores$files$$$function__13_with_raw_response,
impl_openai$resources$vector_stores$files$$$function__14_with_streaming_response,
impl_openai$resources$vector_stores$files$$$function__15_create,
impl_openai$resources$vector_stores$files$$$function__16_retrieve,
impl_openai$resources$vector_stores$files$$$function__17_update,
impl_openai$resources$vector_stores$files$$$function__18_list,
impl_openai$resources$vector_stores$files$$$function__19_delete,
impl_openai$resources$vector_stores$files$$$function__20_create_and_poll,
impl_openai$resources$vector_stores$files$$$function__21_poll,
impl_openai$resources$vector_stores$files$$$function__22_upload,
impl_openai$resources$vector_stores$files$$$function__23_upload_and_poll,
impl_openai$resources$vector_stores$files$$$function__24_content,
impl_openai$resources$vector_stores$files$$$function__25___init__,
impl_openai$resources$vector_stores$files$$$function__26___init__,
impl_openai$resources$vector_stores$files$$$function__27___init__,
impl_openai$resources$vector_stores$files$$$function__28___init__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$resources$vector_stores$files);
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
        module_openai$resources$vector_stores$files,
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
        function_table_openai$resources$vector_stores$files,
        sizeof(function_table_openai$resources$vector_stores$files) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.resources.vector_stores.files";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$resources$vector_stores$files(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$resources$vector_stores$files");

    // Store the module for future use.
    module_openai$resources$vector_stores$files = module;

    moduledict_openai$resources$vector_stores$files = MODULE_DICT(module_openai$resources$vector_stores$files);

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
        PRINT_STRING("openai$resources$vector_stores$files: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$resources$vector_stores$files: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$resources$vector_stores$files: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.resources.vector_stores.files" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$resources$vector_stores$files\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$resources$vector_stores$files,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$resources$vector_stores$files,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$resources$vector_stores$files,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$resources$vector_stores$files,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$resources$vector_stores$files,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$resources$vector_stores$files);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$resources$vector_stores$files);
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

        UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files;
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
PyObject *locals_openai$resources$vector_stores$files$$$class__1_Files_28 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
PyObject *locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918 = NULL;
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
UPDATE_STRING_DICT0(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$resources$vector_stores$files = MAKE_MODULE_FRAME(code_objects_236b87544aab3fb296bdb56a944e6f26, module_openai$resources$vector_stores$files);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$resources$vector_stores$files$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$resources$vector_stores$files$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
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
UPDATE_STRING_DICT0(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_6);
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
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_Dict,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Dict);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict, tmp_assign_source_7);
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
        (PyObject *)moduledict_openai$resources$vector_stores$files,
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
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_8);
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
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_9);
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
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Literal_str_plain_assert_never_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 6;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_assert_never,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_assert_never);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_never, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 8;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__legacy_response_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 10;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain__legacy_response,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain__legacy_response);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_plain_types;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_FileChunkingStrategyParam_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 11;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_FileChunkingStrategyParam,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_FileChunkingStrategyParam);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FileChunkingStrategyParam, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_d3f69ff1c97b29999250ccbe2edbb63c_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 12;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_NOT_GIVEN,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_Body,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Body);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_Body, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_Query,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Query);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_Query, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_Headers,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Headers);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_NotGiven,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_NotGiven);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_FileTypes,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_FileTypes);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FileTypes, tmp_assign_source_22);
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
PyObject *tmp_assign_source_23;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_55188189a993b0e7a968787ef852ce29_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 13;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_is_given,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_is_given);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_15 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_async_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform, tmp_assign_source_26);
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
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_cached_property_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 14;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_cached_property,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_cached_property);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__resource;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 15;
tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_28;
}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_18 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_SyncAPIResource,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_SyncAPIResource);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_19 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_AsyncAPIResource,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_AsyncAPIResource);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource, tmp_assign_source_30);
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
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__response;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 16;
tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_20 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_to_streamed_response_wrapper,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_21 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_async_to_streamed_response_wrapper,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper, tmp_assign_source_33);
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
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_pagination;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_2cfc6dead7fbd8da8d427d103dbd8b53_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 17;
tmp_assign_source_34 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_34;
}
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_22 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_SyncPage,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_SyncPage);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncPage, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_23 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_AsyncPage,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_AsyncPage);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPage, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_24 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_SyncCursorPage,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_SyncCursorPage);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncCursorPage, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_25 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_AsyncCursorPage,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_AsyncCursorPage);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncCursorPage, tmp_assign_source_38);
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
PyObject *tmp_assign_source_39;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__base_client;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_AsyncPaginator_str_plain_make_request_options_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 18;
tmp_assign_source_39 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_8__module == NULL);
tmp_import_from_8__module = tmp_assign_source_39;
}
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_26 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_AsyncPaginator,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_AsyncPaginator);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncPaginator, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_27 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_make_request_options,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_make_request_options);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options, tmp_assign_source_41);
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
PyObject *tmp_assign_source_42;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_2b6ee93579cfbe7f776b76a448c90b10;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_ebbab03a99578c116f4c187b27029b61_tuple;
tmp_level_value_12 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 19;
tmp_assign_source_42 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_9__module == NULL);
tmp_import_from_9__module = tmp_assign_source_42;
}
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_28 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_file_list_params,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_file_list_params);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_list_params, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_29 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_file_create_params,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_file_create_params);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_create_params, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_30 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_file_update_params,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_file_update_params);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_file_update_params, tmp_assign_source_45);
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
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_57c2a12f079705aa6756be4eaf837e9b;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_FileChunkingStrategyParam_tuple;
tmp_level_value_13 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 20;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_FileChunkingStrategyParam,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_FileChunkingStrategyParam);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FileChunkingStrategyParam, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_62566b753fb765bfb27ecce84cc221f5;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_VectorStoreFile_tuple;
tmp_level_value_14 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 21;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_VectorStoreFile,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_VectorStoreFile);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreFile, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_digest_a9f9c53be393b679c036f3730d9977b9;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_FileContentResponse_tuple;
tmp_level_value_15 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 22;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_FileContentResponse,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_FileContentResponse);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FileContentResponse, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_digest_bae68e86aacf3418c864473505157bc1;
tmp_globals_arg_value_16 = (PyObject *)moduledict_openai$resources$vector_stores$files;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_VectorStoreFileDeleted_tuple;
tmp_level_value_16 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 23;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_openai$resources$vector_stores$files,
        mod_consts.const_str_plain_VectorStoreFileDeleted,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_VectorStoreFileDeleted);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_VectorStoreFileDeleted, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_LIST2(tstate, mod_consts.const_str_plain_Files,mod_consts.const_str_plain_AsyncFiles);
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_50);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_51;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_openai$resources$vector_stores$files$SyncAPIResource(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncAPIResource);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

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


exception_lineno = 28;

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


exception_lineno = 28;

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


exception_lineno = 28;

    goto try_except_handler_10;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

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


exception_lineno = 28;

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


exception_lineno = 28;

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


exception_lineno = 28;

    goto try_except_handler_10;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Files;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 28;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

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


exception_lineno = 28;

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
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_17, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

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


exception_lineno = 28;

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


exception_lineno = 28;

    goto try_except_handler_10;
}
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 28;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 28;
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
locals_openai$resources$vector_stores$files$$$class__1_Files_28 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_66b2698c5ebc228f157a7677315beb07;
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_Files;
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_28;
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_12;
}
frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2 = MAKE_CLASS_FRAME(tstate, code_objects_d7af9c9b54c5d23616f308bce82c61bb, module_openai$resources$vector_stores$files, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = module_var_accessor_openai$resources$vector_stores$files$cached_property(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_b1b5363f077f3fa31a1369472fb8e410);

tmp_args_element_value_1 = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__1_with_raw_response(tstate, tmp_annotations_1);

frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2->m_frame.f_lineno = 29;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_value_3 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_openai$resources$vector_stores$files$cached_property(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_1a07f587000a0d966fc7d1a0258b404f);

tmp_args_element_value_2 = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__2_with_streaming_response(tstate, tmp_annotations_2);

frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2->m_frame.f_lineno = 39;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_3;
tmp_dict_key_1 = mod_consts.const_str_plain_attributes;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
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
tmp_dict_key_1 = mod_consts.const_str_plain_chunking_strategy;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
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
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
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
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_010f4cf74fd8897db6cc9c4ec9459273);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__3_create(tstate, tmp_kw_defaults_1, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_4;
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
tmp_dict_value_2 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
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
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_700625a161eeae1605dfabd58288d36d);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__4_retrieve(tstate, tmp_kw_defaults_2, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_retrieve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_annotations_5;
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
tmp_dict_value_3 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
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
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_c72dae88f52f1c7acef4ab7529ae5eef);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__5_update(tstate, tmp_kw_defaults_3, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_annotations_6;
tmp_dict_key_4 = mod_consts.const_str_plain_after;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_4 = _PyDict_NewPresized( 9 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_before;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;
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
tmp_dict_key_4 = mod_consts.const_str_plain_filter;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;
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
tmp_dict_key_4 = mod_consts.const_str_plain_limit;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
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
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
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
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
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
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_73f22237a3aa6e02e7d450461e1defd6);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__6_list(tstate, tmp_kw_defaults_4, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_list, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_annotations_7;
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
tmp_dict_value_5 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
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
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_d88a472677142954e4ad9f224e100556);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__7_delete(tstate, tmp_kw_defaults_5, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_delete, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_annotations_8;
tmp_dict_key_6 = mod_consts.const_str_plain_attributes;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_6 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_poll_interval_ms;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
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
tmp_dict_key_6 = mod_consts.const_str_plain_chunking_strategy;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
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
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_b740a6658f033c37877f4606dba3991a);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__8_create_and_poll(tstate, tmp_kw_defaults_6, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_create_and_poll, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_7;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
PyObject *tmp_annotations_9;
tmp_dict_key_7 = mod_consts.const_str_plain_poll_interval_ms;
tmp_dict_value_7 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_7 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_f4ef262fe52679f20fdc1811fdc91e37);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__9_poll(tstate, tmp_kw_defaults_7, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_poll, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_8;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
PyObject *tmp_annotations_10;
tmp_dict_key_8 = mod_consts.const_str_plain_chunking_strategy;
tmp_dict_value_8 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_8 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_32b891d438e2348b1f3caaa3c78d25ac);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__10_upload(tstate, tmp_kw_defaults_8, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_upload, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_9;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
PyObject *tmp_annotations_11;
tmp_dict_key_9 = mod_consts.const_str_plain_attributes;
tmp_dict_value_9 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_9 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_poll_interval_ms;
tmp_dict_value_9 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 384;
type_description_2 = "o";
    goto dict_build_exception_7;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_7;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_chunking_strategy;
tmp_dict_value_9 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_2 = "o";
    goto dict_build_exception_7;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_7;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_kw_defaults_9);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_b8f4abf163f2b85fce68ac3a858379dc);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__11_upload_and_poll(tstate, tmp_kw_defaults_9, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_upload_and_poll, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_10;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
PyObject *tmp_annotations_12;
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
tmp_dict_value_10 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_10 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 407;
type_description_2 = "o";
    goto dict_build_exception_8;
}
        Py_INCREF(tmp_dict_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_8;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_kw_defaults_10);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_527625162e71cc056197af28c2e64703);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__12_content(tstate, tmp_kw_defaults_10, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain_content, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$class__1_Files_2);

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
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

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


exception_lineno = 28;

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
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__1_Files_28, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_12;
}
branch_no_3:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Files;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$resources$vector_stores$files$$$class__1_Files_28;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 28;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

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
Py_DECREF(locals_openai$resources$vector_stores$files$$$class__1_Files_28);
locals_openai$resources$vector_stores$files$$$class__1_Files_28 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$vector_stores$files$$$class__1_Files_28);
locals_openai$resources$vector_stores$files$$$class__1_Files_28 = NULL;
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
exception_lineno = 28;
goto try_except_handler_10;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_Files, tmp_assign_source_57);
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
tmp_tuple_element_5 = module_var_accessor_openai$resources$vector_stores$files$AsyncAPIResource(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncAPIResource);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 436;

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


exception_lineno = 436;

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


exception_lineno = 436;

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


exception_lineno = 436;

    goto try_except_handler_13;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;

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


exception_lineno = 436;

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


exception_lineno = 436;

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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;

    goto try_except_handler_13;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_AsyncFiles;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 436;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;

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


exception_lineno = 436;

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
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_18, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;

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


exception_lineno = 436;

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


exception_lineno = 436;

    goto try_except_handler_13;
}
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 436;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 436;
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
locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_66b2698c5ebc228f157a7677315beb07;
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncFiles;
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_436;
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;

    goto try_except_handler_15;
}
frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3 = MAKE_CLASS_FRAME(tstate, code_objects_468d0600cc08c7562531f8db2895d978, module_openai$resources$vector_stores$files, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3);
assert(Py_REFCNT(frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_13;
tmp_called_value_6 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_openai$resources$vector_stores$files$cached_property(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 437;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_ce8faa4a25cf9c8ca8d2b32c0b91b174);

tmp_args_element_value_3 = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__13_with_raw_response(tstate, tmp_annotations_13);

frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3->m_frame.f_lineno = 437;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_14;
tmp_called_value_7 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_openai$resources$vector_stores$files$cached_property(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 447;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_3c5a322c3d688a7c67e311c53cffd48d);

tmp_args_element_value_4 = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__14_with_streaming_response(tstate, tmp_annotations_14);

frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3->m_frame.f_lineno = 447;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_11;
PyObject *tmp_dict_key_11;
PyObject *tmp_dict_value_11;
PyObject *tmp_annotations_15;
tmp_dict_key_11 = mod_consts.const_str_plain_attributes;
tmp_dict_value_11 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_11 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 461;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_11 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_chunking_strategy;
tmp_dict_value_11 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_11 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 462;
type_description_2 = "o";
    goto dict_build_exception_9;
}
        Py_INCREF(tmp_dict_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_9;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_11 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_11 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_11 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_timeout;
tmp_dict_value_11 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_11 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_2 = "o";
    goto dict_build_exception_9;
}
        Py_INCREF(tmp_dict_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_9;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
goto dict_build_no_exception_9;
// Exception handling pass through code for dict_build:
dict_build_exception_9:;
Py_DECREF(tmp_kw_defaults_11);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_9:;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_010f4cf74fd8897db6cc9c4ec9459273);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__15_create(tstate, tmp_kw_defaults_11, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_12;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
PyObject *tmp_annotations_16;
tmp_dict_key_12 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_12 = Py_None;
tmp_kw_defaults_12 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_12, tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_12 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_12, tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_12 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_12, tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_timeout;
tmp_dict_value_12 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_12 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 526;
type_description_2 = "o";
    goto dict_build_exception_10;
}
        Py_INCREF(tmp_dict_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_10;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
goto dict_build_no_exception_10;
// Exception handling pass through code for dict_build:
dict_build_exception_10:;
Py_DECREF(tmp_kw_defaults_12);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_10:;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_700625a161eeae1605dfabd58288d36d);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__16_retrieve(tstate, tmp_kw_defaults_12, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_retrieve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_13;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
PyObject *tmp_annotations_17;
tmp_dict_key_13 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_13 = Py_None;
tmp_kw_defaults_13 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_13, tmp_dict_key_13, tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_13 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_13, tmp_dict_key_13, tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_13 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_13, tmp_dict_key_13, tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_timeout;
tmp_dict_value_13 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_13 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 564;
type_description_2 = "o";
    goto dict_build_exception_11;
}
        Py_INCREF(tmp_dict_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_11;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_13, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
goto dict_build_no_exception_11;
// Exception handling pass through code for dict_build:
dict_build_exception_11:;
Py_DECREF(tmp_kw_defaults_13);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_11:;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_c72dae88f52f1c7acef4ab7529ae5eef);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__17_update(tstate, tmp_kw_defaults_13, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_14;
PyObject *tmp_dict_key_14;
PyObject *tmp_dict_value_14;
PyObject *tmp_annotations_18;
tmp_dict_key_14 = mod_consts.const_str_plain_after;
tmp_dict_value_14 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_14 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 602;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_14 = _PyDict_NewPresized( 9 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_before;
tmp_dict_value_14 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_14 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 603;
type_description_2 = "o";
    goto dict_build_exception_12;
}
        Py_INCREF(tmp_dict_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_12;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_filter;
tmp_dict_value_14 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_14 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 604;
type_description_2 = "o";
    goto dict_build_exception_12;
}
        Py_INCREF(tmp_dict_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_12;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_limit;
tmp_dict_value_14 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_14 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 605;
type_description_2 = "o";
    goto dict_build_exception_12;
}
        Py_INCREF(tmp_dict_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_12;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_order;
tmp_dict_value_14 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_14 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 606;
type_description_2 = "o";
    goto dict_build_exception_12;
}
        Py_INCREF(tmp_dict_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_12;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_14 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_14 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_14 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_timeout;
tmp_dict_value_14 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_14 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 612;
type_description_2 = "o";
    goto dict_build_exception_12;
}
        Py_INCREF(tmp_dict_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_12;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));
goto dict_build_no_exception_12;
// Exception handling pass through code for dict_build:
dict_build_exception_12:;
Py_DECREF(tmp_kw_defaults_14);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_12:;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_10134161de16c3329935503c0e640ae4);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__18_list(tstate, tmp_kw_defaults_14, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_list, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_15;
PyObject *tmp_dict_key_15;
PyObject *tmp_dict_value_15;
PyObject *tmp_annotations_19;
tmp_dict_key_15 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_15 = Py_None;
tmp_kw_defaults_15 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_15, tmp_dict_key_15, tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_15 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_15, tmp_dict_key_15, tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_15 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_15, tmp_dict_key_15, tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_timeout;
tmp_dict_value_15 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_15 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 679;
type_description_2 = "o";
    goto dict_build_exception_13;
}
        Py_INCREF(tmp_dict_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_13;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_15, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));
goto dict_build_no_exception_13;
// Exception handling pass through code for dict_build:
dict_build_exception_13:;
Py_DECREF(tmp_kw_defaults_15);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_13:;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_d88a472677142954e4ad9f224e100556);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__19_delete(tstate, tmp_kw_defaults_15, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_delete, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_16;
PyObject *tmp_dict_key_16;
PyObject *tmp_dict_value_16;
PyObject *tmp_annotations_20;
tmp_dict_key_16 = mod_consts.const_str_plain_attributes;
tmp_dict_value_16 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_16 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 715;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_16 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_16, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));
tmp_dict_key_16 = mod_consts.const_str_plain_poll_interval_ms;
tmp_dict_value_16 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_16 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 716;
type_description_2 = "o";
    goto dict_build_exception_14;
}
        Py_INCREF(tmp_dict_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_14;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_16, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));
tmp_dict_key_16 = mod_consts.const_str_plain_chunking_strategy;
tmp_dict_value_16 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_16 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 717;
type_description_2 = "o";
    goto dict_build_exception_14;
}
        Py_INCREF(tmp_dict_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_14;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_16, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));
goto dict_build_no_exception_14;
// Exception handling pass through code for dict_build:
dict_build_exception_14:;
Py_DECREF(tmp_kw_defaults_16);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_14:;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_b740a6658f033c37877f4606dba3991a);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__20_create_and_poll(tstate, tmp_kw_defaults_16, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_create_and_poll, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_17;
PyObject *tmp_dict_key_17;
PyObject *tmp_dict_value_17;
PyObject *tmp_annotations_21;
tmp_dict_key_17 = mod_consts.const_str_plain_poll_interval_ms;
tmp_dict_value_17 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_17 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 735;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_17 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_17, tmp_dict_key_17, tmp_dict_value_17);
Py_DECREF(tmp_dict_value_17);
assert(!(tmp_res != 0));
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_f4ef262fe52679f20fdc1811fdc91e37);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__21_poll(tstate, tmp_kw_defaults_17, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_poll, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 730;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_18;
PyObject *tmp_dict_key_18;
PyObject *tmp_dict_value_18;
PyObject *tmp_annotations_22;
tmp_dict_key_18 = mod_consts.const_str_plain_chunking_strategy;
tmp_dict_value_18 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_18 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 776;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_18 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_18, tmp_dict_key_18, tmp_dict_value_18);
Py_DECREF(tmp_dict_value_18);
assert(!(tmp_res != 0));
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_32b891d438e2348b1f3caaa3c78d25ac);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__22_upload(tstate, tmp_kw_defaults_18, tmp_annotations_22);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_upload, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_19;
PyObject *tmp_dict_key_19;
PyObject *tmp_dict_value_19;
PyObject *tmp_annotations_23;
tmp_dict_key_19 = mod_consts.const_str_plain_attributes;
tmp_dict_value_19 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_19 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 793;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_19 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_19, tmp_dict_key_19, tmp_dict_value_19);
Py_DECREF(tmp_dict_value_19);
assert(!(tmp_res != 0));
tmp_dict_key_19 = mod_consts.const_str_plain_poll_interval_ms;
tmp_dict_value_19 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_19 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 794;
type_description_2 = "o";
    goto dict_build_exception_15;
}
        Py_INCREF(tmp_dict_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_15;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_19, tmp_dict_key_19, tmp_dict_value_19);
Py_DECREF(tmp_dict_value_19);
assert(!(tmp_res != 0));
tmp_dict_key_19 = mod_consts.const_str_plain_chunking_strategy;
tmp_dict_value_19 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_19 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 795;
type_description_2 = "o";
    goto dict_build_exception_15;
}
        Py_INCREF(tmp_dict_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_15;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_19, tmp_dict_key_19, tmp_dict_value_19);
Py_DECREF(tmp_dict_value_19);
assert(!(tmp_res != 0));
goto dict_build_no_exception_15;
// Exception handling pass through code for dict_build:
dict_build_exception_15:;
Py_DECREF(tmp_kw_defaults_19);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_15:;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_b8f4abf163f2b85fce68ac3a858379dc);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__23_upload_and_poll(tstate, tmp_kw_defaults_19, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_upload_and_poll, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_20;
PyObject *tmp_dict_key_20;
PyObject *tmp_dict_value_20;
PyObject *tmp_annotations_24;
tmp_dict_key_20 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_20 = Py_None;
tmp_kw_defaults_20 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_20, tmp_dict_key_20, tmp_dict_value_20);
assert(!(tmp_res != 0));
tmp_dict_key_20 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_20 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_20, tmp_dict_key_20, tmp_dict_value_20);
assert(!(tmp_res != 0));
tmp_dict_key_20 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_20 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_20, tmp_dict_key_20, tmp_dict_value_20);
assert(!(tmp_res != 0));
tmp_dict_key_20 = mod_consts.const_str_plain_timeout;
tmp_dict_value_20 = PyObject_GetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_20 = module_var_accessor_openai$resources$vector_stores$files$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 817;
type_description_2 = "o";
    goto dict_build_exception_16;
}
        Py_INCREF(tmp_dict_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_16;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_20, tmp_dict_key_20, tmp_dict_value_20);
Py_DECREF(tmp_dict_value_20);
assert(!(tmp_res != 0));
goto dict_build_no_exception_16;
// Exception handling pass through code for dict_build:
dict_build_exception_16:;
Py_DECREF(tmp_kw_defaults_20);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_16:;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_fdfa4fea3d4eeede56ee260f328865cf);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__24_content(tstate, tmp_kw_defaults_20, tmp_annotations_24);

tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain_content, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 807;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$resources$vector_stores$files$$$class__2_AsyncFiles_3);

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
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;

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


exception_lineno = 436;

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
tmp_res = PyObject_SetItem(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;

    goto try_except_handler_15;
}
branch_no_6:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_AsyncFiles;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 436;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;

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
Py_DECREF(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436);
locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436);
locals_openai$resources$vector_stores$files$$$class__2_AsyncFiles_436 = NULL;
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
exception_lineno = 436;
goto try_except_handler_13;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFiles, tmp_assign_source_65);
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
locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_66b2698c5ebc228f157a7677315beb07;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_FilesWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_846;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_dc8921104b085a36b16a4b348cbbfbc5);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__25___init__(tstate, tmp_annotations_25);

tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_31ebdbd8308f90b8c60b4f87aefc5a63_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
tmp_called_value_9 = (PyObject *)&PyType_Type;
tmp_tuple_element_9 = mod_consts.const_str_plain_FilesWithRawResponse;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 846;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 846;

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
Py_DECREF(locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846);
locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846);
locals_openai$resources$vector_stores$files$$$class__3_FilesWithRawResponse_846 = NULL;
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
exception_lineno = 846;
goto try_except_handler_16;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithRawResponse, tmp_assign_source_69);
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
locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
tmp_dictset_value = mod_consts.const_str_digest_66b2698c5ebc228f157a7677315beb07;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncFilesWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_870;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_8834452d4f6b8d57f97bc74a18acd464);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__26___init__(tstate, tmp_annotations_26);

tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_31ebdbd8308f90b8c60b4f87aefc5a63_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
tmp_called_value_10 = (PyObject *)&PyType_Type;
tmp_tuple_element_10 = mod_consts.const_str_plain_AsyncFilesWithRawResponse;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 870;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 870;

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
Py_DECREF(locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870);
locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870);
locals_openai$resources$vector_stores$files$$$class__4_AsyncFilesWithRawResponse_870 = NULL;
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
exception_lineno = 870;
goto try_except_handler_19;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithRawResponse, tmp_assign_source_73);
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
locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
tmp_dictset_value = mod_consts.const_str_digest_66b2698c5ebc228f157a7677315beb07;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_FilesWithStreamingResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_894;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_dc8921104b085a36b16a4b348cbbfbc5);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__27___init__(tstate, tmp_annotations_27);

tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_31ebdbd8308f90b8c60b4f87aefc5a63_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_7;
tmp_called_value_11 = (PyObject *)&PyType_Type;
tmp_tuple_element_11 = mod_consts.const_str_plain_FilesWithStreamingResponse;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 894;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 894;

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
Py_DECREF(locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894);
locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894);
locals_openai$resources$vector_stores$files$$$class__5_FilesWithStreamingResponse_894 = NULL;
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
exception_lineno = 894;
goto try_except_handler_22;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_FilesWithStreamingResponse, tmp_assign_source_77);
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
locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
tmp_dictset_value = mod_consts.const_str_digest_66b2698c5ebc228f157a7677315beb07;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncFilesWithStreamingResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_918;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_8834452d4f6b8d57f97bc74a18acd464);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$vector_stores$files$$$function__28___init__(tstate, tmp_annotations_28);

tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_31ebdbd8308f90b8c60b4f87aefc5a63_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_8;
tmp_called_value_12 = (PyObject *)&PyType_Type;
tmp_tuple_element_12 = mod_consts.const_str_plain_AsyncFilesWithStreamingResponse;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$resources$vector_stores$files->m_frame.f_lineno = 918;
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 918;

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
Py_DECREF(locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918);
locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918);
locals_openai$resources$vector_stores$files$$$class__6_AsyncFilesWithStreamingResponse_918 = NULL;
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
exception_lineno = 918;
goto try_except_handler_25;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFilesWithStreamingResponse, tmp_assign_source_81);
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

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$vector_stores$files, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$vector_stores$files->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$vector_stores$files, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$resources$vector_stores$files);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$resources$vector_stores$files", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.resources.vector_stores.files" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$resources$vector_stores$files);
    return module_openai$resources$vector_stores$files;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$vector_stores$files, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$resources$vector_stores$files", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

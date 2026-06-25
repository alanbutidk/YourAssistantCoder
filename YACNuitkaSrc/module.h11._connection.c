/* Generated code for Python module 'h11$_connection'
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



/* The "module_h11$_connection" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h11$_connection;
PyDictObject *moduledict_h11$_connection;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_get_comma_header;
PyObject *const_str_plain_headers;
PyObject *const_bytes_digest_9da065c0aa42303ecee7b6bac724a21f;
PyObject *const_bytes_digest_acce455c5759406bfc136f9768ac4b4b;
PyObject *const_str_plain_http_version;
PyObject *const_bytes_digest_f5f844450bde69e5c8b575fa76761105;
PyObject *const_str_plain_Request;
PyObject *const_str_plain_Response;
PyObject *const_str_plain_status_code;
PyObject *const_tuple_int_pos_204_int_pos_304_tuple;
PyObject *const_bytes_digest_16294e856671b7a57be382ed81f7ec90;
PyObject *const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf;
PyObject *const_int_pos_200;
PyObject *const_int_pos_300;
PyObject *const_tuple_cc4e10bb5014a7a1fbd1c88aa56aae83_tuple;
PyObject *const_bytes_digest_433c2c07eab3439e32102f1f6544c3f3;
PyObject *const_bytes_digest_4635a62d9796bc026f9dbf29b7d0484c;
PyObject *const_tuple_str_plain_chunked_tuple_empty_tuple;
PyObject *const_bytes_digest_2648a3ef8be0a06d01368f687ec6dc81;
PyObject *const_str_digest_db51a9f73f100ec22d319265c4417c10;
PyObject *const_tuple_str_digest_a7fb7ceaaf12d8190808c4881583e156_tuple_empty_tuple;
PyObject *const_str_plain__max_incomplete_event_size;
PyObject *const_str_plain_CLIENT;
PyObject *const_str_plain_SERVER;
PyObject *const_str_digest_50f3a7ae74329aaf89d48c9fec4f164b;
PyObject *const_str_plain_our_role;
PyObject *const_str_plain_their_role;
PyObject *const_str_plain_ConnectionState;
PyObject *const_str_plain__cstate;
PyObject *const_str_plain__get_io_object;
PyObject *const_str_plain_WRITERS;
PyObject *const_str_plain__writer;
PyObject *const_str_plain_READERS;
PyObject *const_str_plain__reader;
PyObject *const_str_plain_ReceiveBuffer;
PyObject *const_str_plain__receive_buffer;
PyObject *const_str_plain__receive_buffer_closed;
PyObject *const_str_plain_their_http_version;
PyObject *const_str_plain__request_method;
PyObject *const_str_plain_client_is_waiting_for_100_continue;
PyObject *const_str_plain_states;
PyObject *const_str_digest_91813c2eab7500d7ad44b204f9e8bfc5;
PyObject *const_str_digest_f77f27e4c37e1cd3c0f687bdb725b5c0;
PyObject *const_str_digest_ceb16479de4d035ae839ef7d98745b4d;
PyObject *const_str_plain_start_next_cycle;
PyObject *const_str_plain__respond_to_state_changes;
PyObject *const_str_digest_da84ae8c9e65027fd2adf13851b9dad8;
PyObject *const_str_plain_process_error;
PyObject *const_str_plain_InformationalResponse;
PyObject *const_int_pos_101;
PyObject *const_str_plain__SWITCH_UPGRADE;
PyObject *const_str_plain__SWITCH_CONNECT;
PyObject *const_str_plain_pending_switch_proposals;
PyObject *const_str_plain_method;
PyObject *const_str_plain_process_client_switch_proposal;
PyObject *const_bytes_digest_0436e5549225e81aa44901c57b44f56c;
PyObject *const_str_plain__server_switch_event;
PyObject *const_str_plain_process_event;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_event;
PyObject *const_str_plain__keep_alive;
PyObject *const_str_plain_process_keep_alive_disabled;
PyObject *const_str_plain_has_expect_100_continue;
PyObject *const_str_plain_Data;
PyObject *const_str_plain_EndOfMessage;
PyObject *const_str_plain_SEND_BODY;
PyObject *const_str_plain__body_framing;
PyObject *const_str_plain_our_state;
PyObject *const_str_plain_their_state;
PyObject *const_str_digest_4a70396109afd3e80222805cf2676e83;
PyObject *const_str_digest_be5b70bd4ade1bc9470981f984bec2dc;
PyObject *const_str_digest_c79a80aaf57dda96e0c4f28ca709c8c5;
PyObject *const_str_plain_DONE;
PyObject *const_str_plain_PAUSED;
PyObject *const_str_plain_MIGHT_SWITCH_PROTOCOL;
PyObject *const_str_plain_SWITCHED_PROTOCOL;
PyObject *const_str_plain_read_eof;
PyObject *const_str_plain_ConnectionClosed;
PyObject *const_str_plain_NEED_DATA;
PyObject *const_str_plain_ERROR;
PyObject *const_str_plain_RemoteProtocolError;
PyObject *const_tuple_str_digest_28d47fcd83bb08c6c98821461807a0ca_tuple;
PyObject *const_str_plain__extract_next_receive_event;
PyObject *const_str_plain__process_event;
PyObject *const_str_plain_Event;
PyObject *const_tuple_str_digest_2e2de7134233c328f8b9bffc75c4966d_int_pos_431_tuple;
PyObject *const_tuple_str_plain_error_status_hint_tuple;
PyObject *const_tuple_str_digest_6e25efd1308ae1390434109762aa5972_tuple;
PyObject *const_str_plain__process_error;
PyObject *const_str_plain_LocalProtocolError;
PyObject *const_str_plain__reraise_as_remote_protocol_error;
PyObject *const_str_digest_a2f48f4d9ec2943160402731f07f1b6a;
PyObject *const_str_plain_send_with_data_passthrough;
PyObject *const_str_digest_80cbda31c06c7a931e317bff90d64633;
PyObject *const_tuple_str_digest_6328cbc8a492766bc7ec8524481b664a_tuple;
PyObject *const_str_plain__clean_up_response_headers_for_sending;
PyObject *const_str_plain_append;
PyObject *const_str_digest_5f353c4ad3bb734a735cc3a42aa466f3;
PyObject *const_str_digest_ce65b7c25bb00d2a6a74022068529f0a;
PyObject *const_bytes_digest_e5091103592c29f88b8d32a1f74e8701;
PyObject *const_tuple_1cd2f40676e57b922f48761a8f6c68bb_tuple;
PyObject *const_str_plain_set_comma_header;
PyObject *const_str_plain_keep_alive;
PyObject *const_str_plain_discard;
PyObject *const_tuple_bytes_digest_7e3253cce8ab2e01fdee6e8686cd7836_tuple;
PyObject *const_str_plain_add;
PyObject *const_tuple_bytes_digest_acce455c5759406bfc136f9768ac4b4b_tuple;
PyObject *const_str_plain_sorted;
PyObject *const_str_plain_reason;
PyObject *const_tuple_35de9077ebb9ff9b74be81d9d9c98818_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Dict;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_overload;
PyObject *const_str_plain_Tuple;
PyObject *const_str_plain_Type;
PyObject *const_str_plain__events;
PyObject *const_tuple_c5efb1bf7be2c83d6732f1385fe85eb2_tuple;
PyObject *const_str_plain__headers;
PyObject *const_tuple_f540344003411d84f16dcea1e0990bf9_tuple;
PyObject *const_str_plain__readers;
PyObject *const_tuple_str_plain_READERS_str_plain_ReadersType_tuple;
PyObject *const_str_plain_ReadersType;
PyObject *const_str_plain__receivebuffer;
PyObject *const_tuple_str_plain_ReceiveBuffer_tuple;
PyObject *const_str_plain__state;
PyObject *const_tuple_57b8c32db5cfa09f80b36e793c5085f3_tuple;
PyObject *const_str_plain__util;
PyObject *const_tuple_60df8832d16686d4ace5501b91bd5bf7_tuple;
PyObject *const_str_plain_Sentinel;
PyObject *const_str_plain__writers;
PyObject *const_tuple_str_plain_WRITERS_str_plain_WritersType_tuple;
PyObject *const_str_plain_WritersType;
PyObject *const_str_plain_Connection;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_37eb1aee9505ec1ee2508883b99ccc82;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_51;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_55;
PyObject *const_int_pos_16384;
PyObject *const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE;
PyObject *const_str_plain_return;
PyObject *const_str_plain_request_method;
PyObject *const_str_digest_d878e63a3e76a0b25f6c5127395c28bf;
PyObject *const_int_pos_151;
PyObject *const_str_plain_max_incomplete_event_size;
PyObject *const_str_digest_062b9bbeb5779a728e3f5f602168f47b;
PyObject *const_str_digest_6c288f771dd3085b9be1a3a9936d535e;
PyObject *const_str_digest_680cb04fa1eba81f1846770b2658b030;
PyObject *const_str_digest_64b2bb144a8531a09cd1324d4895083d;
PyObject *const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1;
PyObject *const_str_plain_they_are_waiting_for_100_continue;
PyObject *const_str_digest_c4276a5c8f8c3b5176fd8d60b6b1afbd;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_str_digest_66400bc2f50958e04c3f6c783bf1ff78;
PyObject *const_str_plain_role;
PyObject *const_str_digest_b343ed55aadb4a6c86c9b9447896ec77;
PyObject *const_str_digest_6da077508d890b13435882de9e08461a;
PyObject *const_str_digest_5b75069a3ab07b92f67b667174387dee;
PyObject *const_str_plain_io_dict;
PyObject *const_str_digest_38d02a0badcdc2b0860ba393b192cf84;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_old_states;
PyObject *const_str_digest_4f4d72d2cc65b019ed1995c66de1551c;
PyObject *const_tuple_type_bytes_type_bool_tuple;
PyObject *const_str_plain_trailing_data;
PyObject *const_str_digest_3d3afa47418fcecc7af57bd9d44fa6ce;
PyObject *const_dict_271566c83b48ae5bc9aa9828645655bc;
PyObject *const_str_plain_receive_data;
PyObject *const_str_digest_0aec4280cf0f378213fe82517bc7727d;
PyObject *const_str_digest_f1fa0978a7acfd66778c9e9499b313a2;
PyObject *const_str_plain_next_event;
PyObject *const_str_digest_48a076b029332b0254f4241557b26587;
PyObject *const_str_digest_f6c3d5f5afb3931b95dea582324a0d12;
PyObject *const_str_digest_eb474b1dc1ab8f6af5220f1755e80441;
PyObject *const_str_plain_send_failed;
PyObject *const_str_digest_20a9c4319b7699acb90402bb8d197461;
PyObject *const_str_plain_response;
PyObject *const_str_digest_fee8232298f5c3156d2f4fd25ec1169e;
PyObject *const_tuple_a749cf313af967a670a4169d3e3381af_tuple;
PyObject *const_str_digest_0d2cdd2b16a8fa744009a15770ebab45;
PyObject *const_str_digest_46d98f8bd2cc9466f3de03d28cf340ab;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_4674db6ea12eb1243de3aaad123c83be_tuple;
PyObject *const_tuple_4156b2393c920d2cdd01efa03ea49e89_tuple;
PyObject *const_tuple_ac764dd7df2eec3772dcbf12cc560051_tuple;
PyObject *const_tuple_str_plain_self_str_plain_state_str_plain_event_tuple;
PyObject *const_tuple_b11eae5a7124e9be5e1301b1a05c323a_tuple;
PyObject *const_tuple_str_plain_event_str_plain_connection_tuple;
PyObject *const_tuple_str_plain_self_str_plain_role_str_plain_old_states_tuple;
PyObject *const_tuple_556d7bbab0c31cc82d810be452f1a029_tuple;
PyObject *const_tuple_str_plain_self_str_plain_old_states_str_plain_event_tuple;
PyObject *const_tuple_str_plain_self_str_plain_event_tuple;
PyObject *const_tuple_str_plain_self_str_plain_event_str_plain_exc_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
PyObject *const_tuple_str_plain_self_str_plain_event_str_plain_data_list_tuple;
PyObject *const_tuple_d257acd41c5b523492fdba742c2ec090_tuple;
PyObject *const_tuple_str_plain_self_str_plain_old_states_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[211];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("h11._connection"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_comma_header);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_9da065c0aa42303ecee7b6bac724a21f);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_acce455c5759406bfc136f9768ac4b4b);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_version);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_204_int_pos_304_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_16294e856671b7a57be382ed81f7ec90);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_pos_200);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_int_pos_300);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_cc4e10bb5014a7a1fbd1c88aa56aae83_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_433c2c07eab3439e32102f1f6544c3f3);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_4635a62d9796bc026f9dbf29b7d0484c);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chunked_tuple_empty_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_2648a3ef8be0a06d01368f687ec6dc81);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_db51a9f73f100ec22d319265c4417c10);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a7fb7ceaaf12d8190808c4881583e156_tuple_empty_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__max_incomplete_event_size);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLIENT);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_50f3a7ae74329aaf89d48c9fec4f164b);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_our_role);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_their_role);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionState);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__cstate);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_io_object);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_WRITERS);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__writer);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_READERS);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__reader);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReceiveBuffer);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__receive_buffer);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__receive_buffer_closed);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_their_http_version);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__request_method);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_is_waiting_for_100_continue);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_states);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_91813c2eab7500d7ad44b204f9e8bfc5);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_f77f27e4c37e1cd3c0f687bdb725b5c0);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_ceb16479de4d035ae839ef7d98745b4d);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_next_cycle);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__respond_to_state_changes);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_da84ae8c9e65027fd2adf13851b9dad8);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_error);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_InformationalResponse);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_int_pos_101);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__SWITCH_UPGRADE);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__SWITCH_CONNECT);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_pending_switch_proposals);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_client_switch_proposal);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_0436e5549225e81aa44901c57b44f56c);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__server_switch_event);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_event);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_event);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__keep_alive);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_keep_alive_disabled);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_expect_100_continue);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_Data);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_EndOfMessage);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_SEND_BODY);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__body_framing);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_our_state);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_their_state);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a70396109afd3e80222805cf2676e83);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_be5b70bd4ade1bc9470981f984bec2dc);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_c79a80aaf57dda96e0c4f28ca709c8c5);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_DONE);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_PAUSED);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_SWITCHED_PROTOCOL);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_eof);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosed);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_NEED_DATA);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteProtocolError);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_28d47fcd83bb08c6c98821461807a0ca_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__extract_next_receive_event);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain__process_event);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2e2de7134233c328f8b9bffc75c4966d_int_pos_431_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_status_hint_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6e25efd1308ae1390434109762aa5972_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain__process_error);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__reraise_as_remote_protocol_error);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2f48f4d9ec2943160402731f07f1b6a);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_with_data_passthrough);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_80cbda31c06c7a931e317bff90d64633);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6328cbc8a492766bc7ec8524481b664a_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__clean_up_response_headers_for_sending);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f353c4ad3bb734a735cc3a42aa466f3);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce65b7c25bb00d2a6a74022068529f0a);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_e5091103592c29f88b8d32a1f74e8701);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_1cd2f40676e57b922f48761a8f6c68bb_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_comma_header);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_keep_alive);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_discard);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_7e3253cce8ab2e01fdee6e8686cd7836_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_acce455c5759406bfc136f9768ac4b4b_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_reason);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_35de9077ebb9ff9b74be81d9d9c98818_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dict);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_Type);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain__events);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_c5efb1bf7be2c83d6732f1385fe85eb2_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__headers);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_f540344003411d84f16dcea1e0990bf9_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__readers);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_READERS_str_plain_ReadersType_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadersType);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__receivebuffer);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReceiveBuffer_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain__state);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_57b8c32db5cfa09f80b36e793c5085f3_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_60df8832d16686d4ace5501b91bd5bf7_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sentinel);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain__writers);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WRITERS_str_plain_WritersType_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_WritersType);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_Connection);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_37eb1aee9505ec1ee2508883b99ccc82);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_int_pos_51);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_int_pos_55);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_int_pos_16384);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_method);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_d878e63a3e76a0b25f6c5127395c28bf);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_151);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_incomplete_event_size);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_062b9bbeb5779a728e3f5f602168f47b);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c288f771dd3085b9be1a3a9936d535e);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_680cb04fa1eba81f1846770b2658b030);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_64b2bb144a8531a09cd1324d4895083d);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_they_are_waiting_for_100_continue);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4276a5c8f8c3b5176fd8d60b6b1afbd);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_66400bc2f50958e04c3f6c783bf1ff78);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_role);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_b343ed55aadb4a6c86c9b9447896ec77);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_6da077508d890b13435882de9e08461a);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b75069a3ab07b92f67b667174387dee);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_io_dict);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_38d02a0badcdc2b0860ba393b192cf84);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_old_states);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f4d72d2cc65b019ed1995c66de1551c);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bool_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_trailing_data);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d3afa47418fcecc7af57bd9d44fa6ce);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_271566c83b48ae5bc9aa9828645655bc);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_receive_data);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_0aec4280cf0f378213fe82517bc7727d);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1fa0978a7acfd66778c9e9499b313a2);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_next_event);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_48a076b029332b0254f4241557b26587);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb474b1dc1ab8f6af5220f1755e80441);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_failed);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_20a9c4319b7699acb90402bb8d197461);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_fee8232298f5c3156d2f4fd25ec1169e);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_a749cf313af967a670a4169d3e3381af_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d2cdd2b16a8fa744009a15770ebab45);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_46d98f8bd2cc9466f3de03d28cf340ab);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_4674db6ea12eb1243de3aaad123c83be_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_4156b2393c920d2cdd01efa03ea49e89_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_ac764dd7df2eec3772dcbf12cc560051_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_str_plain_event_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_b11eae5a7124e9be5e1301b1a05c323a_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_str_plain_connection_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_role_str_plain_old_states_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_556d7bbab0c31cc82d810be452f1a029_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_old_states_str_plain_event_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_str_plain_exc_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_str_plain_data_list_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_d257acd41c5b523492fdba742c2ec090_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_old_states_tuple);
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
void checkModuleConstants_h11$_connection(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_comma_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_comma_header);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_9da065c0aa42303ecee7b6bac724a21f));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_9da065c0aa42303ecee7b6bac724a21f);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_acce455c5759406bfc136f9768ac4b4b));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_acce455c5759406bfc136f9768ac4b4b);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_version);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_204_int_pos_304_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_204_int_pos_304_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_16294e856671b7a57be382ed81f7ec90));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_16294e856671b7a57be382ed81f7ec90);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_pos_200));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_200);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_int_pos_300));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_300);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_cc4e10bb5014a7a1fbd1c88aa56aae83_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cc4e10bb5014a7a1fbd1c88aa56aae83_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_433c2c07eab3439e32102f1f6544c3f3));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_433c2c07eab3439e32102f1f6544c3f3);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_4635a62d9796bc026f9dbf29b7d0484c));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_4635a62d9796bc026f9dbf29b7d0484c);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chunked_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_chunked_tuple_empty_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_2648a3ef8be0a06d01368f687ec6dc81));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_2648a3ef8be0a06d01368f687ec6dc81);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_db51a9f73f100ec22d319265c4417c10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db51a9f73f100ec22d319265c4417c10);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a7fb7ceaaf12d8190808c4881583e156_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a7fb7ceaaf12d8190808c4881583e156_tuple_empty_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__max_incomplete_event_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__max_incomplete_event_size);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLIENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLIENT);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SERVER);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_50f3a7ae74329aaf89d48c9fec4f164b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50f3a7ae74329aaf89d48c9fec4f164b);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_our_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_our_role);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_their_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_their_role);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionState);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__cstate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cstate);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_io_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_io_object);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_WRITERS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WRITERS);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__writer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__writer);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_READERS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_READERS);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__reader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__reader);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReceiveBuffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReceiveBuffer);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__receive_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__receive_buffer);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__receive_buffer_closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__receive_buffer_closed);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_their_http_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_their_http_version);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__request_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__request_method);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_is_waiting_for_100_continue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_is_waiting_for_100_continue);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_states));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_states);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_91813c2eab7500d7ad44b204f9e8bfc5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91813c2eab7500d7ad44b204f9e8bfc5);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_f77f27e4c37e1cd3c0f687bdb725b5c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f77f27e4c37e1cd3c0f687bdb725b5c0);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_ceb16479de4d035ae839ef7d98745b4d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ceb16479de4d035ae839ef7d98745b4d);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_next_cycle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_next_cycle);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__respond_to_state_changes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__respond_to_state_changes);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_da84ae8c9e65027fd2adf13851b9dad8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da84ae8c9e65027fd2adf13851b9dad8);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_error);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_InformationalResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InformationalResponse);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_int_pos_101));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_101);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__SWITCH_UPGRADE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SWITCH_UPGRADE);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__SWITCH_CONNECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SWITCH_CONNECT);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_pending_switch_proposals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pending_switch_proposals);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_client_switch_proposal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_client_switch_proposal);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_0436e5549225e81aa44901c57b44f56c));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_0436e5549225e81aa44901c57b44f56c);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__server_switch_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__server_switch_event);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_event);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_event);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__keep_alive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__keep_alive);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_keep_alive_disabled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_keep_alive_disabled);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_expect_100_continue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_expect_100_continue);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_Data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Data);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_EndOfMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EndOfMessage);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_SEND_BODY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SEND_BODY);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__body_framing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__body_framing);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_our_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_our_state);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_their_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_their_state);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a70396109afd3e80222805cf2676e83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a70396109afd3e80222805cf2676e83);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_be5b70bd4ade1bc9470981f984bec2dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be5b70bd4ade1bc9470981f984bec2dc);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_c79a80aaf57dda96e0c4f28ca709c8c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c79a80aaf57dda96e0c4f28ca709c8c5);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_DONE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DONE);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_PAUSED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PAUSED);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_SWITCHED_PROTOCOL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SWITCHED_PROTOCOL);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_eof);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionClosed);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_NEED_DATA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NEED_DATA);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RemoteProtocolError);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_28d47fcd83bb08c6c98821461807a0ca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_28d47fcd83bb08c6c98821461807a0ca_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__extract_next_receive_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extract_next_receive_event);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain__process_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__process_event);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2e2de7134233c328f8b9bffc75c4966d_int_pos_431_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2e2de7134233c328f8b9bffc75c4966d_int_pos_431_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_status_hint_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_status_hint_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6e25efd1308ae1390434109762aa5972_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_6e25efd1308ae1390434109762aa5972_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain__process_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__process_error);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocalProtocolError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LocalProtocolError);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__reraise_as_remote_protocol_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__reraise_as_remote_protocol_error);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2f48f4d9ec2943160402731f07f1b6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2f48f4d9ec2943160402731f07f1b6a);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_with_data_passthrough));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_with_data_passthrough);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_80cbda31c06c7a931e317bff90d64633));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80cbda31c06c7a931e317bff90d64633);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6328cbc8a492766bc7ec8524481b664a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_6328cbc8a492766bc7ec8524481b664a_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__clean_up_response_headers_for_sending));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__clean_up_response_headers_for_sending);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f353c4ad3bb734a735cc3a42aa466f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f353c4ad3bb734a735cc3a42aa466f3);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce65b7c25bb00d2a6a74022068529f0a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce65b7c25bb00d2a6a74022068529f0a);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_e5091103592c29f88b8d32a1f74e8701));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_e5091103592c29f88b8d32a1f74e8701);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_1cd2f40676e57b922f48761a8f6c68bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1cd2f40676e57b922f48761a8f6c68bb_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_comma_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_comma_header);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_keep_alive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_keep_alive);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_discard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_discard);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_7e3253cce8ab2e01fdee6e8686cd7836_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_digest_7e3253cce8ab2e01fdee6e8686cd7836_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_acce455c5759406bfc136f9768ac4b4b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_digest_acce455c5759406bfc136f9768ac4b4b_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reason);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_35de9077ebb9ff9b74be81d9d9c98818_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_35de9077ebb9ff9b74be81d9d9c98818_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dict);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Type);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain__events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__events);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_c5efb1bf7be2c83d6732f1385fe85eb2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c5efb1bf7be2c83d6732f1385fe85eb2_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__headers);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_f540344003411d84f16dcea1e0990bf9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f540344003411d84f16dcea1e0990bf9_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__readers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__readers);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_READERS_str_plain_ReadersType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_READERS_str_plain_ReadersType_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadersType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadersType);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__receivebuffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__receivebuffer);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReceiveBuffer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReceiveBuffer_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain__state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__state);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_57b8c32db5cfa09f80b36e793c5085f3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_57b8c32db5cfa09f80b36e793c5085f3_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain__util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__util);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_60df8832d16686d4ace5501b91bd5bf7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_60df8832d16686d4ace5501b91bd5bf7_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sentinel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sentinel);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain__writers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__writers);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WRITERS_str_plain_WritersType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WRITERS_str_plain_WritersType_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_WritersType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WritersType);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_Connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Connection);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_37eb1aee9505ec1ee2508883b99ccc82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37eb1aee9505ec1ee2508883b99ccc82);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_int_pos_51));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_51);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_int_pos_55));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_55);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_int_pos_16384));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16384);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_method);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_d878e63a3e76a0b25f6c5127395c28bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d878e63a3e76a0b25f6c5127395c28bf);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_151));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_151);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_incomplete_event_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_incomplete_event_size);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_062b9bbeb5779a728e3f5f602168f47b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_062b9bbeb5779a728e3f5f602168f47b);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c288f771dd3085b9be1a3a9936d535e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c288f771dd3085b9be1a3a9936d535e);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_680cb04fa1eba81f1846770b2658b030));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_680cb04fa1eba81f1846770b2658b030);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_64b2bb144a8531a09cd1324d4895083d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64b2bb144a8531a09cd1324d4895083d);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_they_are_waiting_for_100_continue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_they_are_waiting_for_100_continue);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4276a5c8f8c3b5176fd8d60b6b1afbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4276a5c8f8c3b5176fd8d60b6b1afbd);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_66400bc2f50958e04c3f6c783bf1ff78));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66400bc2f50958e04c3f6c783bf1ff78);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_role);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_b343ed55aadb4a6c86c9b9447896ec77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b343ed55aadb4a6c86c9b9447896ec77);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_6da077508d890b13435882de9e08461a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6da077508d890b13435882de9e08461a);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b75069a3ab07b92f67b667174387dee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b75069a3ab07b92f67b667174387dee);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_io_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io_dict);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_38d02a0badcdc2b0860ba393b192cf84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38d02a0badcdc2b0860ba393b192cf84);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_old_states));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_old_states);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f4d72d2cc65b019ed1995c66de1551c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f4d72d2cc65b019ed1995c66de1551c);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_bool_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_trailing_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trailing_data);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d3afa47418fcecc7af57bd9d44fa6ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d3afa47418fcecc7af57bd9d44fa6ce);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_271566c83b48ae5bc9aa9828645655bc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_271566c83b48ae5bc9aa9828645655bc);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_receive_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_receive_data);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_0aec4280cf0f378213fe82517bc7727d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0aec4280cf0f378213fe82517bc7727d);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1fa0978a7acfd66778c9e9499b313a2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1fa0978a7acfd66778c9e9499b313a2);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_next_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_next_event);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_48a076b029332b0254f4241557b26587));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48a076b029332b0254f4241557b26587);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb474b1dc1ab8f6af5220f1755e80441));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb474b1dc1ab8f6af5220f1755e80441);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_failed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_failed);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_20a9c4319b7699acb90402bb8d197461));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20a9c4319b7699acb90402bb8d197461);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_fee8232298f5c3156d2f4fd25ec1169e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fee8232298f5c3156d2f4fd25ec1169e);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_a749cf313af967a670a4169d3e3381af_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a749cf313af967a670a4169d3e3381af_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d2cdd2b16a8fa744009a15770ebab45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d2cdd2b16a8fa744009a15770ebab45);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_46d98f8bd2cc9466f3de03d28cf340ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46d98f8bd2cc9466f3de03d28cf340ab);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_4674db6ea12eb1243de3aaad123c83be_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4674db6ea12eb1243de3aaad123c83be_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_4156b2393c920d2cdd01efa03ea49e89_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4156b2393c920d2cdd01efa03ea49e89_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_ac764dd7df2eec3772dcbf12cc560051_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ac764dd7df2eec3772dcbf12cc560051_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_str_plain_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_state_str_plain_event_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_b11eae5a7124e9be5e1301b1a05c323a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b11eae5a7124e9be5e1301b1a05c323a_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_str_plain_connection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_event_str_plain_connection_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_role_str_plain_old_states_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_role_str_plain_old_states_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_556d7bbab0c31cc82d810be452f1a029_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_556d7bbab0c31cc82d810be452f1a029_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_old_states_str_plain_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_old_states_str_plain_event_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_event_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_str_plain_exc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_event_str_plain_exc_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_str_plain_data_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_event_str_plain_data_list_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_d257acd41c5b523492fdba742c2ec090_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d257acd41c5b523492fdba742c2ec090_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_old_states_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_old_states_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 44
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
static PyObject *module_var_accessor_h11$_connection$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$CLIENT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLIENT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLIENT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLIENT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLIENT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Callable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$ConnectionClosed(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionClosed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionClosed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionClosed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionClosed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$ConnectionState(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionState);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$DEFAULT_MAX_INCOMPLETE_EVENT_SIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$DONE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_DONE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DONE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DONE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DONE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DONE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_DONE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_DONE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DONE);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Data(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Data);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Data);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Data, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Data);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Data, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Data);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Data);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Data);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Dict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Dict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Dict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Dict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Dict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$ERROR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ERROR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ERROR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ERROR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ERROR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$EndOfMessage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EndOfMessage);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EndOfMessage, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EndOfMessage);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EndOfMessage, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Event(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Event);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Event, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Event);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Event, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$InformationalResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InformationalResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InformationalResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InformationalResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InformationalResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$List(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$LocalProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocalProtocolError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocalProtocolError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocalProtocolError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocalProtocolError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$MIGHT_SWITCH_PROTOCOL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$NEED_DATA(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_NEED_DATA);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NEED_DATA);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NEED_DATA, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NEED_DATA);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NEED_DATA, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_NEED_DATA);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_NEED_DATA);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NEED_DATA);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$PAUSED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_PAUSED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PAUSED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PAUSED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PAUSED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PAUSED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_PAUSED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_PAUSED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PAUSED);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$READERS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_READERS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_READERS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_READERS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_READERS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_READERS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_READERS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_READERS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_READERS);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$ReadersType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadersType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadersType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadersType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadersType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadersType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadersType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadersType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadersType);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$ReceiveBuffer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReceiveBuffer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReceiveBuffer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReceiveBuffer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReceiveBuffer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$RemoteProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RemoteProtocolError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RemoteProtocolError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RemoteProtocolError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RemoteProtocolError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Request(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Request);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Request, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Request);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Request, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Response);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Response, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Response);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Response, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Response);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$SEND_BODY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_BODY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SEND_BODY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SEND_BODY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SEND_BODY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SEND_BODY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_BODY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_BODY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_BODY);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$SERVER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SERVER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SERVER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SERVER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SERVER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$SWITCHED_PROTOCOL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SWITCHED_PROTOCOL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SWITCHED_PROTOCOL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SWITCHED_PROTOCOL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SWITCHED_PROTOCOL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SWITCHED_PROTOCOL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SWITCHED_PROTOCOL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SWITCHED_PROTOCOL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SWITCHED_PROTOCOL);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Sentinel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Sentinel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sentinel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sentinel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sentinel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sentinel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Sentinel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Sentinel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Sentinel);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Tuple(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$WRITERS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_WRITERS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WRITERS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WRITERS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WRITERS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WRITERS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_WRITERS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_WRITERS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WRITERS);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$WritersType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_WritersType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WritersType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WritersType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WritersType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WritersType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_WritersType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_WritersType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WritersType);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$_SWITCH_CONNECT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__SWITCH_CONNECT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SWITCH_CONNECT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SWITCH_CONNECT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SWITCH_CONNECT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SWITCH_CONNECT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__SWITCH_CONNECT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__SWITCH_CONNECT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SWITCH_CONNECT);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$_SWITCH_UPGRADE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__SWITCH_UPGRADE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SWITCH_UPGRADE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SWITCH_UPGRADE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SWITCH_UPGRADE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SWITCH_UPGRADE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__SWITCH_UPGRADE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__SWITCH_UPGRADE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SWITCH_UPGRADE);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$_body_framing(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__body_framing);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__body_framing);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__body_framing, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__body_framing);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__body_framing, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__body_framing);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__body_framing);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__body_framing);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$_keep_alive(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__keep_alive);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__keep_alive);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__keep_alive, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__keep_alive);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__keep_alive, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__keep_alive);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__keep_alive);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__keep_alive);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$get_comma_header(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_get_comma_header);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_comma_header);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_comma_header, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_comma_header);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_comma_header, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_get_comma_header);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_get_comma_header);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_comma_header);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$has_expect_100_continue(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_has_expect_100_continue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_has_expect_100_continue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_has_expect_100_continue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_has_expect_100_continue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_has_expect_100_continue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_has_expect_100_continue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_has_expect_100_continue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_has_expect_100_continue);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$overload(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_connection$set_comma_header(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_set_comma_header);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_comma_header);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_comma_header, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_comma_header);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_comma_header, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_set_comma_header);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_set_comma_header);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_comma_header);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ad77145bdc63e170c2b7988823012a47;
static PyCodeObject *code_objects_9658a18f32074241bfe47d3c97f43ac5;
static PyCodeObject *code_objects_352583062829626d5fcb3b1d5612e814;
static PyCodeObject *code_objects_6791c5cc63779b06de55890424b58ca8;
static PyCodeObject *code_objects_9b76fb32d74221f69c4683348f4e666c;
static PyCodeObject *code_objects_b1de30e81e2c7875c60d98fba6c69793;
static PyCodeObject *code_objects_9560fa4a2cc9227c4314ea6b06535226;
static PyCodeObject *code_objects_521e492e3b4b7e85d062cc772cc20f22;
static PyCodeObject *code_objects_7afed41ade1e432236a8c173fa6c8b58;
static PyCodeObject *code_objects_432313b798286f116a21a3a40ff583ef;
static PyCodeObject *code_objects_ad03585831bf96a6a4296f5f02398d1a;
static PyCodeObject *code_objects_0703bd937366d59395f06111ca549ac7;
static PyCodeObject *code_objects_02ad19034a2dadea418657b72a29b68c;
static PyCodeObject *code_objects_ca84182c6f87e8480cac0ee5278a7d1d;
static PyCodeObject *code_objects_3be99a68966017490f73fb453bdc8d11;
static PyCodeObject *code_objects_f1fffa8fec20c017f9443c1f6d524c8f;
static PyCodeObject *code_objects_f0cab7c93b58bc3b88424b57ea55fc20;
static PyCodeObject *code_objects_781e203328013b149e2d8383c12ad0d4;
static PyCodeObject *code_objects_cd777ff80a7f304ab3b90a54496dc935;
static PyCodeObject *code_objects_36241d3eaa833b9a2bb4a32f44986fd5;
static PyCodeObject *code_objects_3ab4db9e9b75d557628b5a012428a0dc;
static PyCodeObject *code_objects_9286e92189b89894955bbbd65bda7fe2;
static PyCodeObject *code_objects_48c13df3ee33c42a16c59f257d33d1ed;
static PyCodeObject *code_objects_a4643c1ea9ae1d1e745658cd602a76ac;
static PyCodeObject *code_objects_b78b6f6e6dc436b93fe0057938a3219a;
static PyCodeObject *code_objects_5720251c4ae50dfced6d2ec6dee58370;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0d2cdd2b16a8fa744009a15770ebab45); CHECK_OBJECT(module_filename_obj);
code_objects_ad77145bdc63e170c2b7988823012a47 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_46d98f8bd2cc9466f3de03d28cf340ab, mod_consts.const_str_digest_46d98f8bd2cc9466f3de03d28cf340ab, NULL, NULL, 0, 0, 0);
code_objects_9658a18f32074241bfe47d3c97f43ac5 = MAKE_CODE_OBJECT(module_filename_obj, 151, 0, mod_consts.const_str_plain_Connection, mod_consts.const_str_plain_Connection, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_352583062829626d5fcb3b1d5612e814 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_062b9bbeb5779a728e3f5f602168f47b, mod_consts.const_tuple_4674db6ea12eb1243de3aaad123c83be_tuple, NULL, 3, 0, 0);
code_objects_6791c5cc63779b06de55890424b58ca8 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__body_framing, mod_consts.const_str_plain__body_framing, mod_consts.const_tuple_4156b2393c920d2cdd01efa03ea49e89_tuple, NULL, 2, 0, 0);
code_objects_9b76fb32d74221f69c4683348f4e666c = MAKE_CODE_OBJECT(module_filename_obj, 602, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__clean_up_response_headers_for_sending, mod_consts.const_str_digest_fee8232298f5c3156d2f4fd25ec1169e, mod_consts.const_tuple_ac764dd7df2eec3772dcbf12cc560051_tuple, NULL, 2, 0, 0);
code_objects_b1de30e81e2c7875c60d98fba6c69793 = MAKE_CODE_OBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__extract_next_receive_event, mod_consts.const_str_digest_f1fa0978a7acfd66778c9e9499b313a2, mod_consts.const_tuple_str_plain_self_str_plain_state_str_plain_event_tuple, NULL, 1, 0, 0);
code_objects_9560fa4a2cc9227c4314ea6b06535226 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_io_object, mod_consts.const_str_digest_38d02a0badcdc2b0860ba393b192cf84, mod_consts.const_tuple_b11eae5a7124e9be5e1301b1a05c323a_tuple, NULL, 4, 0, 0);
code_objects_521e492e3b4b7e85d062cc772cc20f22 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__keep_alive, mod_consts.const_str_plain__keep_alive, mod_consts.const_tuple_str_plain_event_str_plain_connection_tuple, NULL, 1, 0, 0);
code_objects_7afed41ade1e432236a8c173fa6c8b58 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__process_error, mod_consts.const_str_digest_b343ed55aadb4a6c86c9b9447896ec77, mod_consts.const_tuple_str_plain_self_str_plain_role_str_plain_old_states_tuple, NULL, 2, 0, 0);
code_objects_432313b798286f116a21a3a40ff583ef = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__process_event, mod_consts.const_str_digest_5b75069a3ab07b92f67b667174387dee, mod_consts.const_tuple_556d7bbab0c31cc82d810be452f1a029_tuple, NULL, 3, 0, 0);
code_objects_ad03585831bf96a6a4296f5f02398d1a = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__respond_to_state_changes, mod_consts.const_str_digest_4f4d72d2cc65b019ed1995c66de1551c, mod_consts.const_tuple_str_plain_self_str_plain_old_states_str_plain_event_tuple, NULL, 3, 0, 0);
code_objects_0703bd937366d59395f06111ca549ac7 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__server_switch_event, mod_consts.const_str_digest_6da077508d890b13435882de9e08461a, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple, NULL, 2, 0, 0);
code_objects_02ad19034a2dadea418657b72a29b68c = MAKE_CODE_OBJECT(module_filename_obj, 438, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_next_event, mod_consts.const_str_digest_48a076b029332b0254f4241557b26587, mod_consts.const_tuple_str_plain_self_str_plain_event_str_plain_exc_tuple, NULL, 1, 0, 0);
code_objects_ca84182c6f87e8480cac0ee5278a7d1d = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_our_state, mod_consts.const_str_digest_680cb04fa1eba81f1846770b2658b030, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3be99a68966017490f73fb453bdc8d11 = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_receive_data, mod_consts.const_str_digest_0aec4280cf0f378213fe82517bc7727d, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_f1fffa8fec20c017f9443c1f6d524c8f = MAKE_CODE_OBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_send, mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple, NULL, 2, 0, 0);
code_objects_f0cab7c93b58bc3b88424b57ea55fc20 = MAKE_CODE_OBJECT(module_filename_obj, 508, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_send, mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple, NULL, 2, 0, 0);
code_objects_781e203328013b149e2d8383c12ad0d4 = MAKE_CODE_OBJECT(module_filename_obj, 514, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_send, mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple, NULL, 2, 0, 0);
code_objects_cd777ff80a7f304ab3b90a54496dc935 = MAKE_CODE_OBJECT(module_filename_obj, 517, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_send, mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12, mod_consts.const_tuple_str_plain_self_str_plain_event_str_plain_data_list_tuple, NULL, 2, 0, 0);
code_objects_36241d3eaa833b9a2bb4a32f44986fd5 = MAKE_CODE_OBJECT(module_filename_obj, 577, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_send_failed, mod_consts.const_str_digest_20a9c4319b7699acb90402bb8d197461, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3ab4db9e9b75d557628b5a012428a0dc = MAKE_CODE_OBJECT(module_filename_obj, 544, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_send_with_data_passthrough, mod_consts.const_str_digest_eb474b1dc1ab8f6af5220f1755e80441, mod_consts.const_tuple_d257acd41c5b523492fdba742c2ec090_tuple, NULL, 2, 0, 0);
code_objects_9286e92189b89894955bbbd65bda7fe2 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_start_next_cycle, mod_consts.const_str_digest_66400bc2f50958e04c3f6c783bf1ff78, mod_consts.const_tuple_str_plain_self_str_plain_old_states_tuple, NULL, 1, 0, 0);
code_objects_48c13df3ee33c42a16c59f257d33d1ed = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_states, mod_consts.const_str_digest_6c288f771dd3085b9be1a3a9936d535e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a4643c1ea9ae1d1e745658cd602a76ac = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_their_state, mod_consts.const_str_digest_64b2bb144a8531a09cd1324d4895083d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b78b6f6e6dc436b93fe0057938a3219a = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_they_are_waiting_for_100_continue, mod_consts.const_str_digest_c4276a5c8f8c3b5176fd8d60b6b1afbd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5720251c4ae50dfced6d2ec6dee58370 = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_trailing_data, mod_consts.const_str_digest_3d3afa47418fcecc7af57bd9d44fa6ce, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__10__server_switch_event(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__11__process_event(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__12__get_io_object(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__13__respond_to_state_changes(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__14_trailing_data(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__15_receive_data(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__16__extract_next_receive_event(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__17_next_event(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__18_send(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__19_send(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__1__keep_alive(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__20_send(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__21_send(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__22_send_with_data_passthrough(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__23_send_failed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__24__clean_up_response_headers_for_sending(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__2__body_framing(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__3___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__4_states(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__5_our_state(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__6_their_state(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__7_they_are_waiting_for_100_continue(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__8_start_next_cycle(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_connection$$$function__9__process_error(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_h11$_connection$$$function__1__keep_alive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_event = python_pars[0];
PyObject *var_connection = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__1__keep_alive;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__1__keep_alive = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__1__keep_alive)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__1__keep_alive);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__1__keep_alive == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__1__keep_alive = MAKE_FUNCTION_FRAME(tstate, code_objects_521e492e3b4b7e85d062cc772cc20f22, module_h11$_connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__1__keep_alive->m_type_description == NULL);
frame_frame_h11$_connection$$$function__1__keep_alive = cache_frame_frame_h11$_connection$$$function__1__keep_alive;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__1__keep_alive);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__1__keep_alive) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_h11$_connection$get_comma_header(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_comma_header);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_event);
tmp_expression_value_1 = par_event;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_bytes_digest_9da065c0aa42303ecee7b6bac724a21f;
frame_frame_h11$_connection$$$function__1__keep_alive->m_frame.f_lineno = 85;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_connection == NULL);
var_connection = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_bytes_digest_acce455c5759406bfc136f9768ac4b4b;
CHECK_OBJECT(var_connection);
tmp_cmp_expr_right_1 = var_connection;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_event);
tmp_expression_value_2 = par_event;
tmp_name_value_1 = mod_consts.const_str_plain_http_version;
tmp_default_value_1 = mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105;
tmp_cmp_expr_left_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, tmp_default_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__1__keep_alive, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__1__keep_alive->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__1__keep_alive, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__1__keep_alive,
    type_description_1,
    par_event,
    var_connection
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__1__keep_alive == cache_frame_frame_h11$_connection$$$function__1__keep_alive) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__1__keep_alive);
    cache_frame_frame_h11$_connection$$$function__1__keep_alive = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__1__keep_alive);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_connection);
CHECK_OBJECT(var_connection);
Py_DECREF(var_connection);
var_connection = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_connection);
var_connection = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_event);
Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_connection$$$function__2__body_framing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request_method = python_pars[0];
PyObject *par_event = python_pars[1];
PyObject *var_transfer_encodings = NULL;
PyObject *var_content_lengths = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__2__body_framing;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__2__body_framing = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__2__body_framing)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__2__body_framing);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__2__body_framing == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__2__body_framing = MAKE_FUNCTION_FRAME(tstate, code_objects_6791c5cc63779b06de55890424b58ca8, module_h11$_connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__2__body_framing->m_type_description == NULL);
frame_frame_h11$_connection$$$function__2__body_framing = cache_frame_frame_h11$_connection$$$function__2__body_framing;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__2__body_framing);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__2__body_framing) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_event);
tmp_type_arg_1 = par_event;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_tuple_element_1 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 100;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooo";
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
frame_frame_h11$_connection$$$function__2__body_framing->m_frame.f_lineno = 100;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 100;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_type_arg_2;
CHECK_OBJECT(par_event);
tmp_type_arg_2 = par_event;
tmp_cmp_expr_left_2 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 114;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_event);
tmp_expression_value_1 = par_event;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_tuple_int_pos_204_int_pos_304_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_request_method);
tmp_cmp_expr_left_4 = par_request_method;
tmp_cmp_expr_right_4 = mod_consts.const_bytes_digest_16294e856671b7a57be382ed81f7ec90;
tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_request_method);
tmp_cmp_expr_left_5 = par_request_method;
tmp_cmp_expr_right_5 = mod_consts.const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_event);
tmp_expression_value_2 = par_event;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_status_code);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = mod_consts.const_int_pos_200;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_6 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_2;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_7 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_7 = mod_consts.const_int_pos_300;
tmp_outline_return_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 118;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
tmp_or_right_value_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_2 = tmp_and_left_value_1;
and_end_1:;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = mod_consts.const_tuple_cc4e10bb5014a7a1fbd1c88aa56aae83_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_event);
tmp_expression_value_3 = par_event;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_200;
tmp_operand_value_2 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
frame_frame_h11$_connection$$$function__2__body_framing->m_frame.f_lineno = 124;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 124;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_5:;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_h11$_connection$get_comma_header(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_comma_header);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_event);
tmp_expression_value_4 = par_event;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_headers);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_bytes_digest_433c2c07eab3439e32102f1f6544c3f3;
frame_frame_h11$_connection$$$function__2__body_framing->m_frame.f_lineno = 127;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_transfer_encodings == NULL);
var_transfer_encodings = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
CHECK_OBJECT(var_transfer_encodings);
tmp_truth_name_2 = CHECK_IF_TRUE(var_transfer_encodings);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_3;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_transfer_encodings);
tmp_cmp_expr_left_9 = var_transfer_encodings;
tmp_cmp_expr_right_9 = MAKE_LIST1(tstate, mod_consts.const_bytes_digest_4635a62d9796bc026f9dbf29b7d0484c);
tmp_operand_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_3;
frame_frame_h11$_connection$$$function__2__body_framing->m_frame.f_lineno = 129;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 129;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_7:;
tmp_return_value = mod_consts.const_tuple_str_plain_chunked_tuple_empty_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_h11$_connection$get_comma_header(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_comma_header);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_event);
tmp_expression_value_5 = par_event;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_headers);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_bytes_digest_2648a3ef8be0a06d01368f687ec6dc81;
frame_frame_h11$_connection$$$function__2__body_framing->m_frame.f_lineno = 133;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_content_lengths == NULL);
var_content_lengths = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_3;
CHECK_OBJECT(var_content_lengths);
tmp_truth_name_3 = CHECK_IF_TRUE(var_content_lengths);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_db51a9f73f100ec22d319265c4417c10;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_content_lengths);
tmp_expression_value_6 = var_content_lengths;
tmp_subscript_value_1 = const_int_0;
tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_tuple_element_2, 0, tmp_tuple_element_3);
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
goto frame_return_exit_1;
}
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_type_arg_3;
CHECK_OBJECT(par_event);
tmp_type_arg_3 = par_event;
tmp_cmp_expr_left_10 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_cmp_expr_left_10 == NULL));
tmp_cmp_expr_right_10 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_cmp_expr_right_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_10);

exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_return_value = mod_consts.const_tuple_cc4e10bb5014a7a1fbd1c88aa56aae83_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_9;
branch_no_9:;
tmp_return_value = mod_consts.const_tuple_str_digest_a7fb7ceaaf12d8190808c4881583e156_tuple_empty_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_9:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__2__body_framing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__2__body_framing->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__2__body_framing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__2__body_framing,
    type_description_1,
    par_request_method,
    par_event,
    var_transfer_encodings,
    var_content_lengths
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__2__body_framing == cache_frame_frame_h11$_connection$$$function__2__body_framing) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__2__body_framing);
    cache_frame_frame_h11$_connection$$$function__2__body_framing = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__2__body_framing);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_transfer_encodings);
var_transfer_encodings = NULL;
Py_XDECREF(var_content_lengths);
var_content_lengths = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_transfer_encodings);
var_transfer_encodings = NULL;
Py_XDECREF(var_content_lengths);
var_content_lengths = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request_method);
Py_DECREF(par_request_method);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request_method);
Py_DECREF(par_request_method);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_connection$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_our_role = python_pars[1];
PyObject *par_max_incomplete_event_size = python_pars[2];
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_352583062829626d5fcb3b1d5612e814, module_h11$_connection, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__3___init__->m_type_description == NULL);
frame_frame_h11$_connection$$$function__3___init__ = cache_frame_frame_h11$_connection$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__3___init__);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_max_incomplete_event_size);
tmp_assattr_value_1 = par_max_incomplete_event_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__max_incomplete_event_size, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_our_role);
tmp_cmp_expr_left_1 = par_our_role;
tmp_tuple_element_1 = module_var_accessor_h11$_connection$CLIENT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_h11$_connection$SERVER(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooo";
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
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_50f3a7ae74329aaf89d48c9fec4f164b;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_our_role);
tmp_operand_value_1 = par_our_role;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_h11$_connection$$$function__3___init__->m_frame.f_lineno = 175;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 175;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_our_role);
tmp_assattr_value_2 = par_our_role;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_our_role, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_our_role);
tmp_cmp_expr_left_2 = par_our_role;
tmp_cmp_expr_right_2 = module_var_accessor_h11$_connection$CLIENT(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_h11$_connection$SERVER(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_their_role, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = module_var_accessor_h11$_connection$CLIENT(tstate);
if (unlikely(tmp_assattr_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_assattr_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_their_role, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_end_2:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_5;
tmp_called_value_1 = module_var_accessor_h11$_connection$ConnectionState(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionState);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__3___init__->m_frame.f_lineno = 182;
tmp_assattr_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__cstate, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__get_io_object);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_our_role);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = Py_None;
tmp_args_element_value_3 = module_var_accessor_h11$_connection$WRITERS(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WRITERS);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__3___init__->m_frame.f_lineno = 186;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assattr_value_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__writer, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__get_io_object);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_their_role);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = Py_None;
tmp_args_element_value_6 = module_var_accessor_h11$_connection$READERS(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_READERS);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__3___init__->m_frame.f_lineno = 187;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assattr_value_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__reader, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_called_value_4;
PyObject *tmp_assattr_target_8;
tmp_called_value_4 = module_var_accessor_h11$_connection$ReceiveBuffer(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReceiveBuffer);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__3___init__->m_frame.f_lineno = 190;
tmp_assattr_value_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__receive_buffer, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__receive_buffer_closed, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_their_http_version, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__request_method, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
tmp_assattr_value_12 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_client_is_waiting_for_100_continue, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__3___init__,
    type_description_1,
    par_self,
    par_our_role,
    par_max_incomplete_event_size
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__3___init__ == cache_frame_frame_h11$_connection$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__3___init__);
    cache_frame_frame_h11$_connection$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__3___init__);

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
CHECK_OBJECT(par_our_role);
Py_DECREF(par_our_role);
CHECK_OBJECT(par_max_incomplete_event_size);
Py_DECREF(par_max_incomplete_event_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_our_role);
Py_DECREF(par_our_role);
CHECK_OBJECT(par_max_incomplete_event_size);
Py_DECREF(par_max_incomplete_event_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_connection$$$function__4_states(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__4_states;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__4_states = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__4_states)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__4_states);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__4_states == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__4_states = MAKE_FUNCTION_FRAME(tstate, code_objects_48c13df3ee33c42a16c59f257d33d1ed, module_h11$_connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__4_states->m_type_description == NULL);
frame_frame_h11$_connection$$$function__4_states = cache_frame_frame_h11$_connection$$$function__4_states;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__4_states);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__4_states) == 2);

// Framed code:
{
PyObject *tmp_dict_seq_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_states);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_dict_seq_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__4_states, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__4_states->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__4_states, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__4_states,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__4_states == cache_frame_frame_h11$_connection$$$function__4_states) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__4_states);
    cache_frame_frame_h11$_connection$$$function__4_states = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__4_states);

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


static PyObject *impl_h11$_connection$$$function__5_our_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__5_our_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__5_our_state = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__5_our_state)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__5_our_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__5_our_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__5_our_state = MAKE_FUNCTION_FRAME(tstate, code_objects_ca84182c6f87e8480cac0ee5278a7d1d, module_h11$_connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__5_our_state->m_type_description == NULL);
frame_frame_h11$_connection$$$function__5_our_state = cache_frame_frame_h11$_connection$$$function__5_our_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__5_our_state);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__5_our_state) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_states);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_our_role);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);

exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__5_our_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__5_our_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__5_our_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__5_our_state,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__5_our_state == cache_frame_frame_h11$_connection$$$function__5_our_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__5_our_state);
    cache_frame_frame_h11$_connection$$$function__5_our_state = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__5_our_state);

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


static PyObject *impl_h11$_connection$$$function__6_their_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__6_their_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__6_their_state = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__6_their_state)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__6_their_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__6_their_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__6_their_state = MAKE_FUNCTION_FRAME(tstate, code_objects_a4643c1ea9ae1d1e745658cd602a76ac, module_h11$_connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__6_their_state->m_type_description == NULL);
frame_frame_h11$_connection$$$function__6_their_state = cache_frame_frame_h11$_connection$$$function__6_their_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__6_their_state);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__6_their_state) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_states);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_their_role);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);

exception_lineno = 229;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__6_their_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__6_their_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__6_their_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__6_their_state,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__6_their_state == cache_frame_frame_h11$_connection$$$function__6_their_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__6_their_state);
    cache_frame_frame_h11$_connection$$$function__6_their_state = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__6_their_state);

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


static PyObject *impl_h11$_connection$$$function__7_they_are_waiting_for_100_continue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue = MAKE_FUNCTION_FRAME(tstate, code_objects_b78b6f6e6dc436b93fe0057938a3219a, module_h11$_connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue->m_type_description == NULL);
frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue = cache_frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_their_role);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_h11$_connection$CLIENT(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 233;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_client_is_waiting_for_100_continue);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue == cache_frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue);
    cache_frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__7_they_are_waiting_for_100_continue);

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


static PyObject *impl_h11$_connection$$$function__8_start_next_cycle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_old_states = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__8_start_next_cycle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__8_start_next_cycle = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__8_start_next_cycle)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__8_start_next_cycle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__8_start_next_cycle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__8_start_next_cycle = MAKE_FUNCTION_FRAME(tstate, code_objects_9286e92189b89894955bbbd65bda7fe2, module_h11$_connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__8_start_next_cycle->m_type_description == NULL);
frame_frame_h11$_connection$$$function__8_start_next_cycle = cache_frame_frame_h11$_connection$$$function__8_start_next_cycle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__8_start_next_cycle);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__8_start_next_cycle) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_seq_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_states);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_dict_seq_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_old_states == NULL);
var_old_states = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__cstate);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__8_start_next_cycle->m_frame.f_lineno = 248;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_start_next_cycle);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__request_method, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_client_is_waiting_for_100_continue);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
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
frame_frame_h11$_connection$$$function__8_start_next_cycle->m_frame.f_lineno = 252;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 252;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_old_states);
tmp_args_element_value_1 = var_old_states;
frame_frame_h11$_connection$$$function__8_start_next_cycle->m_frame.f_lineno = 253;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__respond_to_state_changes, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__8_start_next_cycle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__8_start_next_cycle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__8_start_next_cycle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__8_start_next_cycle,
    type_description_1,
    par_self,
    var_old_states
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__8_start_next_cycle == cache_frame_frame_h11$_connection$$$function__8_start_next_cycle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__8_start_next_cycle);
    cache_frame_frame_h11$_connection$$$function__8_start_next_cycle = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__8_start_next_cycle);

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
CHECK_OBJECT(var_old_states);
CHECK_OBJECT(var_old_states);
Py_DECREF(var_old_states);
var_old_states = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_old_states);
var_old_states = NULL;
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


static PyObject *impl_h11$_connection$$$function__9__process_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_role = python_pars[1];
PyObject *var_old_states = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__9__process_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__9__process_error = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__9__process_error)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__9__process_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__9__process_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__9__process_error = MAKE_FUNCTION_FRAME(tstate, code_objects_7afed41ade1e432236a8c173fa6c8b58, module_h11$_connection, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__9__process_error->m_type_description == NULL);
frame_frame_h11$_connection$$$function__9__process_error = cache_frame_frame_h11$_connection$$$function__9__process_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__9__process_error);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__9__process_error) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_seq_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_states);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_dict_seq_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_old_states == NULL);
var_old_states = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__cstate);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_role);
tmp_args_element_value_1 = par_role;
frame_frame_h11$_connection$$$function__9__process_error->m_frame.f_lineno = 257;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_process_error, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_old_states);
tmp_args_element_value_2 = var_old_states;
frame_frame_h11$_connection$$$function__9__process_error->m_frame.f_lineno = 258;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__respond_to_state_changes, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__9__process_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__9__process_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__9__process_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__9__process_error,
    type_description_1,
    par_self,
    par_role,
    var_old_states
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__9__process_error == cache_frame_frame_h11$_connection$$$function__9__process_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__9__process_error);
    cache_frame_frame_h11$_connection$$$function__9__process_error = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__9__process_error);

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
CHECK_OBJECT(var_old_states);
CHECK_OBJECT(var_old_states);
Py_DECREF(var_old_states);
var_old_states = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_old_states);
var_old_states = NULL;
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
CHECK_OBJECT(par_role);
Py_DECREF(par_role);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_role);
Py_DECREF(par_role);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_connection$$$function__10__server_switch_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__10__server_switch_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__10__server_switch_event = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__10__server_switch_event)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__10__server_switch_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__10__server_switch_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__10__server_switch_event = MAKE_FUNCTION_FRAME(tstate, code_objects_0703bd937366d59395f06111ca549ac7, module_h11$_connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__10__server_switch_event->m_type_description == NULL);
frame_frame_h11$_connection$$$function__10__server_switch_event = cache_frame_frame_h11$_connection$$$function__10__server_switch_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__10__server_switch_event);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__10__server_switch_event) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_event);
tmp_type_arg_1 = par_event;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = module_var_accessor_h11$_connection$InformationalResponse(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InformationalResponse);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 261;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_event);
tmp_expression_value_1 = par_event;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_101;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = module_var_accessor_h11$_connection$_SWITCH_UPGRADE(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SWITCH_UPGRADE);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_type_arg_2;
CHECK_OBJECT(par_event);
tmp_type_arg_2 = par_event;
tmp_cmp_expr_left_3 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_cmp_expr_left_3 == NULL));
tmp_cmp_expr_right_3 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 263;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
tmp_cmp_expr_left_4 = module_var_accessor_h11$_connection$_SWITCH_CONNECT(tstate);
if (unlikely(tmp_cmp_expr_left_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SWITCH_CONNECT);
}

if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pending_switch_proposals);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_event);
tmp_expression_value_4 = par_event;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_status_code);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = mod_consts.const_int_pos_200;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_5 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_1;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_6 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_300;
tmp_outline_return_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = module_var_accessor_h11$_connection$_SWITCH_CONNECT(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SWITCH_CONNECT);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__10__server_switch_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__10__server_switch_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__10__server_switch_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__10__server_switch_event,
    type_description_1,
    par_self,
    par_event
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__10__server_switch_event == cache_frame_frame_h11$_connection$$$function__10__server_switch_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__10__server_switch_event);
    cache_frame_frame_h11$_connection$$$function__10__server_switch_event = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__10__server_switch_event);

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


static PyObject *impl_h11$_connection$$$function__11__process_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_role = python_pars[1];
PyObject *par_event = python_pars[2];
PyObject *var_old_states = NULL;
PyObject *var_server_switch_event = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__11__process_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__11__process_event = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__11__process_event)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__11__process_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__11__process_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__11__process_event = MAKE_FUNCTION_FRAME(tstate, code_objects_432313b798286f116a21a3a40ff583ef, module_h11$_connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__11__process_event->m_type_description == NULL);
frame_frame_h11$_connection$$$function__11__process_event = cache_frame_frame_h11$_connection$$$function__11__process_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__11__process_event);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__11__process_event) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_seq_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_states);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_dict_seq_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_old_states == NULL);
var_old_states = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_role);
tmp_cmp_expr_left_1 = par_role;
tmp_cmp_expr_right_1 = module_var_accessor_h11$_connection$CLIENT(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_event);
tmp_type_arg_1 = par_event;
tmp_cmp_expr_left_2 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 276;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_event);
tmp_expression_value_3 = par_event;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_method);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_bytes_digest_727d98763c7dabf0c7a989b00b4275bf;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_process_client_switch_proposal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_h11$_connection$_SWITCH_CONNECT(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SWITCH_CONNECT);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 278;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 278;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
tmp_called_value_2 = module_var_accessor_h11$_connection$get_comma_header(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_comma_header);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_event);
tmp_expression_value_6 = par_event;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_headers);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_bytes_digest_0436e5549225e81aa44901c57b44f56c;
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 279;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 279;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_process_client_switch_proposal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_h11$_connection$_SWITCH_UPGRADE(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SWITCH_UPGRADE);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 280;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 280;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_None;
assert(var_server_switch_event == NULL);
Py_INCREF(tmp_assign_source_2);
var_server_switch_event = tmp_assign_source_2;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_role);
tmp_cmp_expr_left_4 = par_role;
tmp_cmp_expr_right_4 = module_var_accessor_h11$_connection$SERVER(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SERVER);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_event);
tmp_args_element_value_5 = par_event;
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 283;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__server_switch_event, tmp_args_element_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_server_switch_event;
    assert(old != NULL);
    var_server_switch_event = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_4:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_type_arg_2;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__cstate);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_role);
tmp_args_element_value_6 = par_role;
CHECK_OBJECT(par_event);
tmp_type_arg_2 = par_event;
tmp_args_element_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_args_element_value_7 == NULL));
CHECK_OBJECT(var_server_switch_event);
tmp_args_element_value_8 = var_server_switch_event;
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 284;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_process_event,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_type_arg_3;
CHECK_OBJECT(par_event);
tmp_type_arg_3 = par_event;
tmp_cmp_expr_left_5 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_cmp_expr_left_5 == NULL));
tmp_cmp_expr_right_5 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 288;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_event);
tmp_expression_value_10 = par_event;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_method);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__request_method, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
{
bool tmp_condition_result_6;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_type_arg_4;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_role);
tmp_cmp_expr_left_6 = par_role;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_their_role);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_event);
tmp_type_arg_4 = par_event;
tmp_cmp_expr_left_7 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_cmp_expr_left_7 == NULL));
tmp_tuple_element_1 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 292;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_7, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_7, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_h11$_connection$InformationalResponse(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InformationalResponse);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_7, 2, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_right_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 1) ? true : false;
tmp_condition_result_6 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_6 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_10;
tmp_called_value_4 = module_var_accessor_h11$_connection$cast(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = module_var_accessor_h11$_connection$Union(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_h11$_connection$InformationalResponse(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InformationalResponse);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 2, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_event);
tmp_args_element_value_10 = par_event;
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 296;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_event;
    assert(old != NULL);
    par_event = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_event);
tmp_expression_value_13 = par_event;
tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_http_version);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_their_http_version, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_6:;
{
bool tmp_condition_result_7;
int tmp_and_left_truth_3;
bool tmp_and_left_value_3;
bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_type_arg_5;
PyObject *tmp_tuple_element_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_args_element_value_13;
if (par_event == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 305;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_type_arg_5 = par_event;
tmp_cmp_expr_left_8 = BUILTIN_TYPE1(tmp_type_arg_5);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 305;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_8, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 305;
type_description_1 = "ooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_8, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_right_8);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
tmp_called_value_5 = module_var_accessor_h11$_connection$_keep_alive(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__keep_alive);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 305;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_h11$_connection$cast(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_14 = module_var_accessor_h11$_connection$Union(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "ooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (par_event == NULL) {
Py_DECREF(tmp_args_element_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_13 = par_event;
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 306;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 305;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res == 0) ? true : false;
tmp_condition_result_7 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_7 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_5;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__cstate);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 308;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_process_keep_alive_disabled);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_type_arg_6;
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_14;
int tmp_truth_name_2;
if (par_event == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 311;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_type_arg_6 = par_event;
tmp_cmp_expr_left_9 = BUILTIN_TYPE1(tmp_type_arg_6);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_9);

exception_lineno = 311;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
tmp_called_value_7 = module_var_accessor_h11$_connection$has_expect_100_continue(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_has_expect_100_continue);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (par_event == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 311;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_14 = par_event;
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 311;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_14);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_6);

exception_lineno = 311;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
tmp_condition_result_8 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_8 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_client_is_waiting_for_100_continue, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_type_arg_7;
PyObject *tmp_tuple_element_5;
if (par_event == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 313;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_type_arg_7 = par_event;
tmp_cmp_expr_left_10 = BUILTIN_TYPE1(tmp_type_arg_7);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = module_var_accessor_h11$_connection$InformationalResponse(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InformationalResponse);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_10);

exception_lineno = 313;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_10, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "ooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_10, 1, tmp_tuple_element_5);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_right_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_client_is_waiting_for_100_continue, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_9:;
{
bool tmp_condition_result_10;
int tmp_and_left_truth_5;
bool tmp_and_left_value_5;
bool tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_type_arg_8;
PyObject *tmp_tuple_element_6;
CHECK_OBJECT(par_role);
tmp_cmp_expr_left_11 = par_role;
tmp_cmp_expr_right_11 = module_var_accessor_h11$_connection$CLIENT(tstate);
if (unlikely(tmp_cmp_expr_right_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CLIENT);
}

if (tmp_cmp_expr_right_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_5 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
tmp_and_left_truth_5 = tmp_and_left_value_5 != false ? 1 : 0;
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
if (par_event == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 315;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_type_arg_8 = par_event;
tmp_cmp_expr_left_12 = BUILTIN_TYPE1(tmp_type_arg_8);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_6 = module_var_accessor_h11$_connection$Data(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Data);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 315;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_12, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_h11$_connection$EndOfMessage(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EndOfMessage);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "ooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_12, 1, tmp_tuple_element_6);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_right_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
CHECK_OBJECT(tmp_cmp_expr_right_12);
Py_DECREF(tmp_cmp_expr_right_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_5 = (tmp_res == 1) ? true : false;
tmp_condition_result_10 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_10 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_client_is_waiting_for_100_continue, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_10:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__respond_to_state_changes);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_old_states);
tmp_args_element_value_15 = var_old_states;
if (par_event == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 318;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_16 = par_event;
frame_frame_h11$_connection$$$function__11__process_event->m_frame.f_lineno = 318;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__11__process_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__11__process_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__11__process_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__11__process_event,
    type_description_1,
    par_self,
    par_role,
    par_event,
    var_old_states,
    var_server_switch_event
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__11__process_event == cache_frame_frame_h11$_connection$$$function__11__process_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__11__process_event);
    cache_frame_frame_h11$_connection$$$function__11__process_event = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__11__process_event);

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
Py_XDECREF(par_event);
par_event = NULL;
CHECK_OBJECT(var_old_states);
CHECK_OBJECT(var_old_states);
Py_DECREF(var_old_states);
var_old_states = NULL;
CHECK_OBJECT(var_server_switch_event);
CHECK_OBJECT(var_server_switch_event);
Py_DECREF(var_server_switch_event);
var_server_switch_event = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_event);
par_event = NULL;
Py_XDECREF(var_old_states);
var_old_states = NULL;
Py_XDECREF(var_server_switch_event);
var_server_switch_event = NULL;
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
CHECK_OBJECT(par_role);
Py_DECREF(par_role);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_role);
Py_DECREF(par_role);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_connection$$$function__12__get_io_object(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_role = python_pars[1];
PyObject *par_event = python_pars[2];
PyObject *par_io_dict = python_pars[3];
PyObject *var_state = NULL;
PyObject *var_framing_type = NULL;
PyObject *var_args = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__12__get_io_object;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__12__get_io_object = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__12__get_io_object)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__12__get_io_object);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__12__get_io_object == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__12__get_io_object = MAKE_FUNCTION_FRAME(tstate, code_objects_9560fa4a2cc9227c4314ea6b06535226, module_h11$_connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__12__get_io_object->m_type_description == NULL);
frame_frame_h11$_connection$$$function__12__get_io_object = cache_frame_frame_h11$_connection$$$function__12__get_io_object;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__12__get_io_object);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__12__get_io_object) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_states);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_role);
tmp_subscript_value_1 = par_role;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_state == NULL);
var_state = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_state);
tmp_cmp_expr_left_1 = var_state;
tmp_cmp_expr_right_1 = module_var_accessor_h11$_connection$SEND_BODY(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SEND_BODY);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_6;
tmp_called_value_1 = module_var_accessor_h11$_connection$_body_framing(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__body_framing);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = module_var_accessor_h11$_connection$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = (PyObject *)&PyBytes_Type;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__request_method);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_h11$_connection$$$function__12__get_io_object->m_frame.f_lineno = 332;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = module_var_accessor_h11$_connection$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);

exception_lineno = 332;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_5 = module_var_accessor_h11$_connection$Union(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);

exception_lineno = 332;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);

exception_lineno = 332;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_subscript_value_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 332;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_event);
tmp_args_element_value_6 = par_event;
frame_frame_h11$_connection$$$function__12__get_io_object->m_frame.f_lineno = 332;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 332;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_h11$_connection$$$function__12__get_io_object->m_frame.f_lineno = 331;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_framing_type == NULL);
Py_INCREF(tmp_assign_source_5);
var_framing_type = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_args == NULL);
Py_INCREF(tmp_assign_source_6);
var_args = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyObject *tmp_subscript_value_4;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_io_dict);
tmp_expression_value_7 = par_io_dict;
tmp_subscript_value_3 = module_var_accessor_h11$_connection$SEND_BODY(tstate);
if (unlikely(tmp_subscript_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SEND_BODY);
}

if (tmp_subscript_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 334;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_3);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_framing_type);
tmp_subscript_value_4 = var_framing_type;
tmp_direct_call_arg1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_args);
tmp_direct_call_arg2_1 = var_args;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(par_io_dict);
tmp_expression_value_8 = par_io_dict;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_role);
tmp_tuple_element_2 = par_role;
tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_state);
tmp_tuple_element_2 = var_state;
PyTuple_SET_ITEM0(tmp_args_element_value_7, 1, tmp_tuple_element_2);
frame_frame_h11$_connection$$$function__12__get_io_object->m_frame.f_lineno = 338;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__12__get_io_object, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__12__get_io_object->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__12__get_io_object, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__12__get_io_object,
    type_description_1,
    par_self,
    par_role,
    par_event,
    par_io_dict,
    var_state,
    var_framing_type,
    var_args
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__12__get_io_object == cache_frame_frame_h11$_connection$$$function__12__get_io_object) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__12__get_io_object);
    cache_frame_frame_h11$_connection$$$function__12__get_io_object = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__12__get_io_object);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_state);
CHECK_OBJECT(var_state);
Py_DECREF(var_state);
var_state = NULL;
Py_XDECREF(var_framing_type);
var_framing_type = NULL;
Py_XDECREF(var_args);
var_args = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_state);
var_state = NULL;
Py_XDECREF(var_framing_type);
var_framing_type = NULL;
Py_XDECREF(var_args);
var_args = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_role);
Py_DECREF(par_role);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
CHECK_OBJECT(par_io_dict);
Py_DECREF(par_io_dict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_role);
Py_DECREF(par_role);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
CHECK_OBJECT(par_io_dict);
Py_DECREF(par_io_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_connection$$$function__13__respond_to_state_changes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_old_states = python_pars[1];
PyObject *par_event = python_pars[2];
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__13__respond_to_state_changes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__13__respond_to_state_changes = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__13__respond_to_state_changes)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__13__respond_to_state_changes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__13__respond_to_state_changes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__13__respond_to_state_changes = MAKE_FUNCTION_FRAME(tstate, code_objects_ad03585831bf96a6a4296f5f02398d1a, module_h11$_connection, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__13__respond_to_state_changes->m_type_description == NULL);
frame_frame_h11$_connection$$$function__13__respond_to_state_changes = cache_frame_frame_h11$_connection$$$function__13__respond_to_state_changes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__13__respond_to_state_changes);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__13__respond_to_state_changes) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_our_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_old_states);
tmp_expression_value_2 = par_old_states;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_our_role);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 348;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 348;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__get_io_object);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_our_role);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 349;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_event);
tmp_args_element_value_2 = par_event;
tmp_args_element_value_3 = module_var_accessor_h11$_connection$WRITERS(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WRITERS);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 349;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__13__respond_to_state_changes->m_frame.f_lineno = 349;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__writer, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_their_state);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_old_states);
tmp_expression_value_7 = par_old_states;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_their_role);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 350;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 350;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooo";
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__get_io_object);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_their_role);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 351;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_event);
tmp_args_element_value_5 = par_event;
tmp_args_element_value_6 = module_var_accessor_h11$_connection$READERS(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_READERS);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 351;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__13__respond_to_state_changes->m_frame.f_lineno = 351;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__reader, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__13__respond_to_state_changes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__13__respond_to_state_changes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__13__respond_to_state_changes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__13__respond_to_state_changes,
    type_description_1,
    par_self,
    par_old_states,
    par_event
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__13__respond_to_state_changes == cache_frame_frame_h11$_connection$$$function__13__respond_to_state_changes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__13__respond_to_state_changes);
    cache_frame_frame_h11$_connection$$$function__13__respond_to_state_changes = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__13__respond_to_state_changes);

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
CHECK_OBJECT(par_old_states);
Py_DECREF(par_old_states);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_old_states);
Py_DECREF(par_old_states);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_connection$$$function__14_trailing_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__14_trailing_data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__14_trailing_data = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__14_trailing_data)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__14_trailing_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__14_trailing_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__14_trailing_data = MAKE_FUNCTION_FRAME(tstate, code_objects_5720251c4ae50dfced6d2ec6dee58370, module_h11$_connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__14_trailing_data->m_type_description == NULL);
frame_frame_h11$_connection$$$function__14_trailing_data = cache_frame_frame_h11$_connection$$$function__14_trailing_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__14_trailing_data);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__14_trailing_data) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_bytes_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_bytes_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__receive_buffer);
if (tmp_bytes_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
CHECK_OBJECT(tmp_bytes_arg_1);
Py_DECREF(tmp_bytes_arg_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__receive_buffer_closed);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__14_trailing_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__14_trailing_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__14_trailing_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__14_trailing_data,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__14_trailing_data == cache_frame_frame_h11$_connection$$$function__14_trailing_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__14_trailing_data);
    cache_frame_frame_h11$_connection$$$function__14_trailing_data = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__14_trailing_data);

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


static PyObject *impl_h11$_connection$$$function__15_receive_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__15_receive_data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__15_receive_data = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__15_receive_data)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__15_receive_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__15_receive_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__15_receive_data = MAKE_FUNCTION_FRAME(tstate, code_objects_3be99a68966017490f73fb453bdc8d11, module_h11$_connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__15_receive_data->m_type_description == NULL);
frame_frame_h11$_connection$$$function__15_receive_data = cache_frame_frame_h11$_connection$$$function__15_receive_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__15_receive_data);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__15_receive_data) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_data);
tmp_truth_name_1 = CHECK_IF_TRUE(par_data);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "oo";
    goto frame_exception_exit_1;
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__receive_buffer_closed);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 404;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_be5b70bd4ade1bc9470981f984bec2dc;
frame_frame_h11$_connection$$$function__15_receive_data->m_frame.f_lineno = 405;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 405;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__receive_buffer);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_data);
tmp_iadd_expr_right_1 = par_data;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_2;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__receive_buffer, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__receive_buffer_closed, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__15_receive_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__15_receive_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__15_receive_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__15_receive_data,
    type_description_1,
    par_self,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__15_receive_data == cache_frame_frame_h11$_connection$$$function__15_receive_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__15_receive_data);
    cache_frame_frame_h11$_connection$$$function__15_receive_data = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__15_receive_data);

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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_connection$$$function__16__extract_next_receive_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_state = NULL;
PyObject *var_event = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__16__extract_next_receive_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__16__extract_next_receive_event = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__16__extract_next_receive_event)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__16__extract_next_receive_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__16__extract_next_receive_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__16__extract_next_receive_event = MAKE_FUNCTION_FRAME(tstate, code_objects_b1de30e81e2c7875c60d98fba6c69793, module_h11$_connection, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__16__extract_next_receive_event->m_type_description == NULL);
frame_frame_h11$_connection$$$function__16__extract_next_receive_event = cache_frame_frame_h11$_connection$$$function__16__extract_next_receive_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__16__extract_next_receive_event);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__16__extract_next_receive_event) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_their_state);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_state == NULL);
var_state = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_state);
tmp_cmp_expr_left_1 = var_state;
tmp_cmp_expr_right_1 = module_var_accessor_h11$_connection$DONE(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DONE);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 418;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__receive_buffer);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 418;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = module_var_accessor_h11$_connection$PAUSED(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PAUSED);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 419;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_state);
tmp_cmp_expr_left_2 = var_state;
tmp_cmp_expr_right_2 = module_var_accessor_h11$_connection$MIGHT_SWITCH_PROTOCOL(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_state);
tmp_cmp_expr_left_3 = var_state;
tmp_cmp_expr_right_3 = module_var_accessor_h11$_connection$SWITCHED_PROTOCOL(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SWITCHED_PROTOCOL);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = module_var_accessor_h11$_connection$PAUSED(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PAUSED);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__reader);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
frame_frame_h11$_connection$$$function__16__extract_next_receive_event->m_frame.f_lineno = 422;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 422;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__reader);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__receive_buffer);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 423;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__16__extract_next_receive_event->m_frame.f_lineno = 423;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_event == NULL);
var_event = tmp_assign_source_2;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_event);
tmp_cmp_expr_left_5 = var_event;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__receive_buffer);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__receive_buffer_closed);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 425;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__reader);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain_read_eof);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__reader);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__16__extract_next_receive_event->m_frame.f_lineno = 431;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_read_eof);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_event;
    assert(old != NULL);
    var_event = tmp_assign_source_3;
    Py_DECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_h11$_connection$ConnectionClosed(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionClosed);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 433;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__16__extract_next_receive_event->m_frame.f_lineno = 433;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_event;
    assert(old != NULL);
    var_event = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_end_6:;
branch_no_5:;
branch_no_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_event);
tmp_cmp_expr_left_6 = var_event;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = module_var_accessor_h11$_connection$NEED_DATA(tstate);
if (unlikely(tmp_assign_source_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NEED_DATA);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 435;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_event;
    assert(old != NULL);
    var_event = tmp_assign_source_5;
    Py_INCREF(var_event);
    Py_DECREF(old);
}

}
branch_no_7:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__16__extract_next_receive_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__16__extract_next_receive_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__16__extract_next_receive_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__16__extract_next_receive_event,
    type_description_1,
    par_self,
    var_state,
    var_event
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__16__extract_next_receive_event == cache_frame_frame_h11$_connection$$$function__16__extract_next_receive_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__16__extract_next_receive_event);
    cache_frame_frame_h11$_connection$$$function__16__extract_next_receive_event = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__16__extract_next_receive_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_event);
tmp_return_value = var_event;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_state);
CHECK_OBJECT(var_state);
Py_DECREF(var_state);
var_state = NULL;
Py_XDECREF(var_event);
var_event = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_state);
var_state = NULL;
Py_XDECREF(var_event);
var_event = NULL;
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


static PyObject *impl_h11$_connection$$$function__17_next_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_event = NULL;
PyObject *var_exc = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__17_next_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__17_next_event = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__17_next_event)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__17_next_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__17_next_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__17_next_event = MAKE_FUNCTION_FRAME(tstate, code_objects_02ad19034a2dadea418657b72a29b68c, module_h11$_connection, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__17_next_event->m_type_description == NULL);
frame_frame_h11$_connection$$$function__17_next_event = cache_frame_frame_h11$_connection$$$function__17_next_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__17_next_event);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__17_next_event) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_their_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_h11$_connection$ERROR(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ERROR);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 478;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_h11$_connection$RemoteProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RemoteProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 479;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__17_next_event->m_frame.f_lineno = 479;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_28d47fcd83bb08c6c98821461807a0ca_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 479;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_h11$_connection$$$function__17_next_event->m_frame.f_lineno = 481;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__extract_next_receive_event);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_event == NULL);
var_event = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_list_element_1;
CHECK_OBJECT(var_event);
tmp_cmp_expr_left_2 = var_event;
tmp_list_element_1 = module_var_accessor_h11$_connection$NEED_DATA(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NEED_DATA);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 482;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_cmp_expr_right_2, 0, tmp_list_element_1);
tmp_list_element_1 = module_var_accessor_h11$_connection$PAUSED(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PAUSED);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 482;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM0(tmp_cmp_expr_right_2, 1, tmp_list_element_1);
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_2);
goto try_except_handler_2;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ooo";
    goto try_except_handler_2;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__process_event);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_their_role);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 483;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = module_var_accessor_h11$_connection$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 483;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = module_var_accessor_h11$_connection$Event(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 483;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_event);
tmp_args_element_value_4 = var_event;
frame_frame_h11$_connection$$$function__17_next_event->m_frame.f_lineno = 483;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 483;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_h11$_connection$$$function__17_next_event->m_frame.f_lineno = 483;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_event);
tmp_cmp_expr_left_3 = var_event;
tmp_cmp_expr_right_3 = module_var_accessor_h11$_connection$NEED_DATA(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NEED_DATA);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 484;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__receive_buffer);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__max_incomplete_event_size);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 485;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_h11$_connection$RemoteProtocolError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RemoteProtocolError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 488;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_h11$_connection$$$function__17_next_event->m_frame.f_lineno = 488;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_2e2de7134233c328f8b9bffc75c4966d_int_pos_431_tuple, 0), mod_consts.const_tuple_str_plain_error_status_hint_tuple);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 488;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto try_except_handler_2;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__receive_buffer_closed);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 491;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_h11$_connection$RemoteProtocolError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RemoteProtocolError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 494;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_h11$_connection$$$function__17_next_event->m_frame.f_lineno = 494;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_6e25efd1308ae1390434109762aa5972_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 494;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto try_except_handler_2;
}
branch_no_5:;
branch_no_3:;
CHECK_OBJECT(var_event);
tmp_return_value = var_event;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__17_next_event, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__17_next_event, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
assert(var_exc == NULL);
Py_INCREF(tmp_assign_source_2);
var_exc = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__process_error);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_their_role);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 497;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_h11$_connection$$$function__17_next_event->m_frame.f_lineno = 497;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_exc);
tmp_isinstance_inst_1 = var_exc;
tmp_isinstance_cls_1 = module_var_accessor_h11$_connection$LocalProtocolError(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 498;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(var_exc);
tmp_called_instance_2 = var_exc;
frame_frame_h11$_connection$$$function__17_next_event->m_frame.f_lineno = 499;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__reraise_as_remote_protocol_error);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 501;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_h11$_connection$$$function__17_next_event->m_frame)) {
        frame_frame_h11$_connection$$$function__17_next_event->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_4;
branch_end_7:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exc);
var_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_1:;
Py_XDECREF(var_exc);
var_exc = NULL;

goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 480;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_h11$_connection$$$function__17_next_event->m_frame)) {
        frame_frame_h11$_connection$$$function__17_next_event->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_6:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__17_next_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__17_next_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__17_next_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__17_next_event,
    type_description_1,
    par_self,
    var_event,
    var_exc
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__17_next_event == cache_frame_frame_h11$_connection$$$function__17_next_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__17_next_event);
    cache_frame_frame_h11$_connection$$$function__17_next_event = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__17_next_event);

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
Py_XDECREF(var_event);
var_event = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_event);
var_event = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_h11$_connection$$$function__21_send(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
PyObject *var_data_list = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__21_send;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__21_send = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__21_send)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__21_send);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__21_send == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__21_send = MAKE_FUNCTION_FRAME(tstate, code_objects_cd777ff80a7f304ab3b90a54496dc935, module_h11$_connection, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__21_send->m_type_description == NULL);
frame_frame_h11$_connection$$$function__21_send = cache_frame_frame_h11$_connection$$$function__21_send;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__21_send);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__21_send) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_event);
tmp_args_element_value_1 = par_event;
frame_frame_h11$_connection$$$function__21_send->m_frame.f_lineno = 538;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_send_with_data_passthrough, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_data_list == NULL);
var_data_list = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_data_list);
tmp_cmp_expr_left_1 = var_data_list;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
CHECK_OBJECT(var_data_list);
tmp_iterable_value_1 = var_data_list;
tmp_return_value = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__21_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__21_send->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__21_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__21_send,
    type_description_1,
    par_self,
    par_event,
    var_data_list
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__21_send == cache_frame_frame_h11$_connection$$$function__21_send) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__21_send);
    cache_frame_frame_h11$_connection$$$function__21_send = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__21_send);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_data_list);
CHECK_OBJECT(var_data_list);
Py_DECREF(var_data_list);
var_data_list = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data_list);
var_data_list = NULL;
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


static PyObject *impl_h11$_connection$$$function__22_send_with_data_passthrough(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
PyObject *var_data_list = NULL;
PyObject *var_writer = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__22_send_with_data_passthrough;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__22_send_with_data_passthrough = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__22_send_with_data_passthrough)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__22_send_with_data_passthrough);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__22_send_with_data_passthrough == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__22_send_with_data_passthrough = MAKE_FUNCTION_FRAME(tstate, code_objects_3ab4db9e9b75d557628b5a012428a0dc, module_h11$_connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__22_send_with_data_passthrough->m_type_description == NULL);
frame_frame_h11$_connection$$$function__22_send_with_data_passthrough = cache_frame_frame_h11$_connection$$$function__22_send_with_data_passthrough;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__22_send_with_data_passthrough);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__22_send_with_data_passthrough) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_our_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_h11$_connection$ERROR(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ERROR);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 552;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_h11$_connection$LocalProtocolError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 553;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__22_send_with_data_passthrough->m_frame.f_lineno = 553;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_6328cbc8a492766bc7ec8524481b664a_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 553;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_event);
tmp_type_arg_1 = par_event;
tmp_cmp_expr_left_2 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 555;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_event);
tmp_args_element_value_1 = par_event;
frame_frame_h11$_connection$$$function__22_send_with_data_passthrough->m_frame.f_lineno = 556;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__clean_up_response_headers_for_sending, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_event;
    assert(old != NULL);
    par_event = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__writer);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_writer == NULL);
var_writer = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__process_event);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_our_role);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 563;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_event);
tmp_args_element_value_3 = par_event;
frame_frame_h11$_connection$$$function__22_send_with_data_passthrough->m_frame.f_lineno = 563;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_type_arg_2;
CHECK_OBJECT(par_event);
tmp_type_arg_2 = par_event;
tmp_cmp_expr_left_3 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_cmp_expr_left_3 == NULL));
tmp_cmp_expr_right_3 = module_var_accessor_h11$_connection$ConnectionClosed(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionClosed);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 564;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_writer);
tmp_cmp_expr_left_4 = var_writer;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
frame_frame_h11$_connection$$$function__22_send_with_data_passthrough->m_frame.f_lineno = 569;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 569;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto try_except_handler_2;
}
branch_no_4:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_data_list == NULL);
var_data_list = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_writer);
tmp_called_value_3 = var_writer;
CHECK_OBJECT(par_event);
tmp_args_element_value_4 = par_event;
CHECK_OBJECT(var_data_list);
tmp_expression_value_5 = var_data_list;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_h11$_connection$$$function__22_send_with_data_passthrough->m_frame.f_lineno = 571;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 571;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
CHECK_OBJECT(var_data_list);
tmp_return_value = var_data_list;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__22_send_with_data_passthrough, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__22_send_with_data_passthrough, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__process_error);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_our_role);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 574;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
frame_frame_h11$_connection$$$function__22_send_with_data_passthrough->m_frame.f_lineno = 574;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 575;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_h11$_connection$$$function__22_send_with_data_passthrough->m_frame)) {
        frame_frame_h11$_connection$$$function__22_send_with_data_passthrough->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__22_send_with_data_passthrough, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__22_send_with_data_passthrough->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__22_send_with_data_passthrough, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__22_send_with_data_passthrough,
    type_description_1,
    par_self,
    par_event,
    var_data_list,
    var_writer
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__22_send_with_data_passthrough == cache_frame_frame_h11$_connection$$$function__22_send_with_data_passthrough) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__22_send_with_data_passthrough);
    cache_frame_frame_h11$_connection$$$function__22_send_with_data_passthrough = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__22_send_with_data_passthrough);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_event);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
par_event = NULL;
Py_XDECREF(var_data_list);
var_data_list = NULL;
CHECK_OBJECT(var_writer);
CHECK_OBJECT(var_writer);
Py_DECREF(var_writer);
var_writer = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_event);
par_event = NULL;
Py_XDECREF(var_data_list);
var_data_list = NULL;
Py_XDECREF(var_writer);
var_writer = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_h11$_connection$$$function__23_send_failed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__23_send_failed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__23_send_failed = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__23_send_failed)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__23_send_failed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__23_send_failed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__23_send_failed = MAKE_FUNCTION_FRAME(tstate, code_objects_36241d3eaa833b9a2bb4a32f44986fd5, module_h11$_connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__23_send_failed->m_type_description == NULL);
frame_frame_h11$_connection$$$function__23_send_failed = cache_frame_frame_h11$_connection$$$function__23_send_failed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__23_send_failed);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__23_send_failed) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__process_error);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_our_role);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 585;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__23_send_failed->m_frame.f_lineno = 585;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__23_send_failed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__23_send_failed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__23_send_failed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__23_send_failed,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__23_send_failed == cache_frame_frame_h11$_connection$$$function__23_send_failed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__23_send_failed);
    cache_frame_frame_h11$_connection$$$function__23_send_failed = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__23_send_failed);

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


static PyObject *impl_h11$_connection$$$function__24__clean_up_response_headers_for_sending(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_response = python_pars[1];
PyObject *var_headers = NULL;
nuitka_bool var_need_close = NUITKA_BOOL_UNASSIGNED;
PyObject *var_method_for_choosing_headers = NULL;
PyObject *var_framing_type = NULL;
PyObject *var__ = NULL;
PyObject *var_connection = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending)) {
    Py_XDECREF(cache_frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending = MAKE_FUNCTION_FRAME(tstate, code_objects_9b76fb32d74221f69c4683348f4e666c, module_h11$_connection, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_type_description == NULL);
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending = cache_frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending);
assert(Py_REFCNT(frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_response);
tmp_type_arg_1 = par_response;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 603;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
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
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 603;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 603;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooboooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_response);
tmp_expression_value_1 = par_response;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 605;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
assert(var_headers == NULL);
var_headers = tmp_assign_source_1;
}
{
nuitka_bool tmp_assign_source_2;
tmp_assign_source_2 = NUITKA_BOOL_FALSE;
var_need_close = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_h11$_connection$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 615;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = (PyObject *)&PyBytes_Type;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__request_method);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 615;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
assert(var_method_for_choosing_headers == NULL);
var_method_for_choosing_headers = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_method_for_choosing_headers);
tmp_cmp_expr_left_2 = var_method_for_choosing_headers;
tmp_cmp_expr_right_2 = mod_consts.const_bytes_digest_16294e856671b7a57be382ed81f7ec90;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "oooboooo";
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = mod_consts.const_bytes_digest_e5091103592c29f88b8d32a1f74e8701;
{
    PyObject *old = var_method_for_choosing_headers;
    assert(old != NULL);
    var_method_for_choosing_headers = tmp_assign_source_4;
    Py_INCREF(var_method_for_choosing_headers);
    Py_DECREF(old);
}

}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_h11$_connection$_body_framing(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__body_framing);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 618;
type_description_1 = "oooboooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_method_for_choosing_headers);
tmp_args_element_value_3 = var_method_for_choosing_headers;
CHECK_OBJECT(par_response);
tmp_args_element_value_4 = par_response;
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 618;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 618;
type_description_1 = "oooboooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 618;
type_description_1 = "oooboooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 618;
type_description_1 = "oooboooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 618;
type_description_1 = "oooboooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 618;
type_description_1 = "oooboooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
assert(var_framing_type == NULL);
Py_INCREF(tmp_assign_source_8);
var_framing_type = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_9);
var__ = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_framing_type);
tmp_cmp_expr_left_3 = var_framing_type;
tmp_cmp_expr_right_3 = mod_consts.const_tuple_1cd2f40676e57b922f48761a8f6c68bb_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_h11$_connection$set_comma_header(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_comma_header);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 631;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_args_element_value_5 = var_headers;
tmp_args_element_value_6 = mod_consts.const_bytes_digest_2648a3ef8be0a06d01368f687ec6dc81;
tmp_args_element_value_7 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 631;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_headers;
    assert(old != NULL);
    var_headers = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_their_http_version);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_their_http_version);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_bytes_digest_f5f844450bde69e5c8b575fa76761105;
tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_4 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_4 = module_var_accessor_h11$_connection$set_comma_header(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_comma_header);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 637;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_args_element_value_8 = var_headers;
tmp_args_element_value_9 = mod_consts.const_bytes_digest_433c2c07eab3439e32102f1f6544c3f3;
tmp_args_element_value_10 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 637;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_headers;
    assert(old != NULL);
    var_headers = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__request_method);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 642;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_bytes_digest_16294e856671b7a57be382ed81f7ec90;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 642;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_TRUE;
var_need_close = tmp_assign_source_12;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_value_5 = module_var_accessor_h11$_connection$set_comma_header(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_comma_header);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 645;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_args_element_value_11 = var_headers;
tmp_args_element_value_12 = mod_consts.const_bytes_digest_433c2c07eab3439e32102f1f6544c3f3;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_bytes_digest_4635a62d9796bc026f9dbf29b7d0484c);
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 645;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_headers;
    assert(old != NULL);
    var_headers = tmp_assign_source_13;
    Py_DECREF(old);
}

}
branch_end_4:;
branch_no_3:;
{
bool tmp_condition_result_6;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__cstate);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_keep_alive);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
assert(var_need_close != NUITKA_BOOL_UNASSIGNED);
tmp_or_right_value_2 = var_need_close == NUITKA_BOOL_TRUE;
tmp_condition_result_6 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_6 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_set_arg_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_called_value_6 = module_var_accessor_h11$_connection$get_comma_header(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_comma_header);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 649;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_args_element_value_14 = var_headers;
tmp_args_element_value_15 = mod_consts.const_bytes_digest_9da065c0aa42303ecee7b6bac724a21f;
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 649;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_set_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
assert(var_connection == NULL);
var_connection = tmp_assign_source_14;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_connection);
tmp_called_instance_1 = var_connection;
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 650;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_discard,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_digest_7e3253cce8ab2e01fdee6e8686cd7836_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_connection);
tmp_called_instance_2 = var_connection;
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 651;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_add,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_digest_acce455c5759406bfc136f9768ac4b4b_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_19;
tmp_called_value_7 = module_var_accessor_h11$_connection$set_comma_header(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_comma_header);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 652;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_args_element_value_16 = var_headers;
tmp_args_element_value_17 = mod_consts.const_bytes_digest_9da065c0aa42303ecee7b6bac724a21f;
tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_8 != NULL);
CHECK_OBJECT(var_connection);
tmp_args_element_value_19 = var_connection;
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 652;
tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_19);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 652;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_headers;
    assert(old != NULL);
    var_headers = tmp_assign_source_15;
    Py_DECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_10;
tmp_called_value_9 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 654;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_kw_call_value_0_1 = var_headers;
CHECK_OBJECT(par_response);
tmp_expression_value_8 = par_response;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_status_code);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response);
tmp_expression_value_9 = par_response;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_http_version);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 657;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response);
tmp_expression_value_10 = par_response;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_reason);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 658;
type_description_1 = "oooboooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame.f_lineno = 654;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, kw_values, mod_consts.const_tuple_35de9077ebb9ff9b74be81d9d9c98818_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "oooboooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending,
    type_description_1,
    par_self,
    par_response,
    var_headers,
    (int)var_need_close,
    var_method_for_choosing_headers,
    var_framing_type,
    var__,
    var_connection
);


// Release cached frame if used for exception.
if (frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending == cache_frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending);
    cache_frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending = NULL;
}

assertFrameObject(frame_frame_h11$_connection$$$function__24__clean_up_response_headers_for_sending);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
assert(var_need_close != NUITKA_BOOL_UNASSIGNED);
var_need_close = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(var_method_for_choosing_headers);
CHECK_OBJECT(var_method_for_choosing_headers);
Py_DECREF(var_method_for_choosing_headers);
var_method_for_choosing_headers = NULL;
CHECK_OBJECT(var_framing_type);
CHECK_OBJECT(var_framing_type);
Py_DECREF(var_framing_type);
var_framing_type = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
Py_XDECREF(var_connection);
var_connection = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_headers);
var_headers = NULL;
var_need_close = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_method_for_choosing_headers);
var_method_for_choosing_headers = NULL;
Py_XDECREF(var_framing_type);
var_framing_type = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_connection);
var_connection = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__10__server_switch_event(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__10__server_switch_event,
        mod_consts.const_str_plain__server_switch_event,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6da077508d890b13435882de9e08461a,
#endif
        code_objects_0703bd937366d59395f06111ca549ac7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__11__process_event(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__11__process_event,
        mod_consts.const_str_plain__process_event,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5b75069a3ab07b92f67b667174387dee,
#endif
        code_objects_432313b798286f116a21a3a40ff583ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__12__get_io_object(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__12__get_io_object,
        mod_consts.const_str_plain__get_io_object,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_38d02a0badcdc2b0860ba393b192cf84,
#endif
        code_objects_9560fa4a2cc9227c4314ea6b06535226,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__13__respond_to_state_changes(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__13__respond_to_state_changes,
        mod_consts.const_str_plain__respond_to_state_changes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4f4d72d2cc65b019ed1995c66de1551c,
#endif
        code_objects_ad03585831bf96a6a4296f5f02398d1a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__14_trailing_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__14_trailing_data,
        mod_consts.const_str_plain_trailing_data,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3d3afa47418fcecc7af57bd9d44fa6ce,
#endif
        code_objects_5720251c4ae50dfced6d2ec6dee58370,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        mod_consts.const_str_digest_4a70396109afd3e80222805cf2676e83,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__15_receive_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__15_receive_data,
        mod_consts.const_str_plain_receive_data,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0aec4280cf0f378213fe82517bc7727d,
#endif
        code_objects_3be99a68966017490f73fb453bdc8d11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        mod_consts.const_str_digest_c79a80aaf57dda96e0c4f28ca709c8c5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__16__extract_next_receive_event(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__16__extract_next_receive_event,
        mod_consts.const_str_plain__extract_next_receive_event,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f1fa0978a7acfd66778c9e9499b313a2,
#endif
        code_objects_b1de30e81e2c7875c60d98fba6c69793,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__17_next_event(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__17_next_event,
        mod_consts.const_str_plain_next_event,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_48a076b029332b0254f4241557b26587,
#endif
        code_objects_02ad19034a2dadea418657b72a29b68c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        mod_consts.const_str_digest_a2f48f4d9ec2943160402731f07f1b6a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__18_send(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_send,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12,
#endif
        code_objects_f1fffa8fec20c017f9443c1f6d524c8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__19_send(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_send,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12,
#endif
        code_objects_f0cab7c93b58bc3b88424b57ea55fc20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__1__keep_alive(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__1__keep_alive,
        mod_consts.const_str_plain__keep_alive,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_521e492e3b4b7e85d062cc772cc20f22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__20_send(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_send,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12,
#endif
        code_objects_781e203328013b149e2d8383c12ad0d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__21_send(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__21_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f6c3d5f5afb3931b95dea582324a0d12,
#endif
        code_objects_cd777ff80a7f304ab3b90a54496dc935,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        mod_consts.const_str_digest_80cbda31c06c7a931e317bff90d64633,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__22_send_with_data_passthrough(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__22_send_with_data_passthrough,
        mod_consts.const_str_plain_send_with_data_passthrough,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eb474b1dc1ab8f6af5220f1755e80441,
#endif
        code_objects_3ab4db9e9b75d557628b5a012428a0dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        mod_consts.const_str_digest_5f353c4ad3bb734a735cc3a42aa466f3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__23_send_failed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__23_send_failed,
        mod_consts.const_str_plain_send_failed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_20a9c4319b7699acb90402bb8d197461,
#endif
        code_objects_36241d3eaa833b9a2bb4a32f44986fd5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        mod_consts.const_str_digest_ce65b7c25bb00d2a6a74022068529f0a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__24__clean_up_response_headers_for_sending(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__24__clean_up_response_headers_for_sending,
        mod_consts.const_str_plain__clean_up_response_headers_for_sending,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fee8232298f5c3156d2f4fd25ec1169e,
#endif
        code_objects_9b76fb32d74221f69c4683348f4e666c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__2__body_framing(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__2__body_framing,
        mod_consts.const_str_plain__body_framing,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6791c5cc63779b06de55890424b58ca8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__3___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_062b9bbeb5779a728e3f5f602168f47b,
#endif
        code_objects_352583062829626d5fcb3b1d5612e814,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__4_states(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__4_states,
        mod_consts.const_str_plain_states,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6c288f771dd3085b9be1a3a9936d535e,
#endif
        code_objects_48c13df3ee33c42a16c59f257d33d1ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        mod_consts.const_str_digest_91813c2eab7500d7ad44b204f9e8bfc5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__5_our_state(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__5_our_state,
        mod_consts.const_str_plain_our_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_680cb04fa1eba81f1846770b2658b030,
#endif
        code_objects_ca84182c6f87e8480cac0ee5278a7d1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        mod_consts.const_str_digest_f77f27e4c37e1cd3c0f687bdb725b5c0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__6_their_state(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__6_their_state,
        mod_consts.const_str_plain_their_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_64b2bb144a8531a09cd1324d4895083d,
#endif
        code_objects_a4643c1ea9ae1d1e745658cd602a76ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        mod_consts.const_str_digest_ceb16479de4d035ae839ef7d98745b4d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__7_they_are_waiting_for_100_continue(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__7_they_are_waiting_for_100_continue,
        mod_consts.const_str_plain_they_are_waiting_for_100_continue,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c4276a5c8f8c3b5176fd8d60b6b1afbd,
#endif
        code_objects_b78b6f6e6dc436b93fe0057938a3219a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__8_start_next_cycle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__8_start_next_cycle,
        mod_consts.const_str_plain_start_next_cycle,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_66400bc2f50958e04c3f6c783bf1ff78,
#endif
        code_objects_9286e92189b89894955bbbd65bda7fe2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
        mod_consts.const_str_digest_da84ae8c9e65027fd2adf13851b9dad8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_connection$$$function__9__process_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_connection$$$function__9__process_error,
        mod_consts.const_str_plain__process_error,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b343ed55aadb4a6c86c9b9447896ec77,
#endif
        code_objects_7afed41ade1e432236a8c173fa6c8b58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_connection,
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

static function_impl_code const function_table_h11$_connection[] = {
impl_h11$_connection$$$function__1__keep_alive,
impl_h11$_connection$$$function__2__body_framing,
impl_h11$_connection$$$function__3___init__,
impl_h11$_connection$$$function__4_states,
impl_h11$_connection$$$function__5_our_state,
impl_h11$_connection$$$function__6_their_state,
impl_h11$_connection$$$function__7_they_are_waiting_for_100_continue,
impl_h11$_connection$$$function__8_start_next_cycle,
impl_h11$_connection$$$function__9__process_error,
impl_h11$_connection$$$function__10__server_switch_event,
impl_h11$_connection$$$function__11__process_event,
impl_h11$_connection$$$function__12__get_io_object,
impl_h11$_connection$$$function__13__respond_to_state_changes,
impl_h11$_connection$$$function__14_trailing_data,
impl_h11$_connection$$$function__15_receive_data,
impl_h11$_connection$$$function__16__extract_next_receive_event,
impl_h11$_connection$$$function__17_next_event,
impl_h11$_connection$$$function__21_send,
impl_h11$_connection$$$function__22_send_with_data_passthrough,
impl_h11$_connection$$$function__23_send_failed,
impl_h11$_connection$$$function__24__clean_up_response_headers_for_sending,
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

    return Nuitka_Function_GetFunctionState(function, function_table_h11$_connection);
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
        module_h11$_connection,
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
        function_table_h11$_connection,
        sizeof(function_table_h11$_connection) / sizeof(function_impl_code)
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
static char const *module_full_name = "h11._connection";
#endif

// Internal entry point for module code.
PyObject *module_code_h11$_connection(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("h11$_connection");

    // Store the module for future use.
    module_h11$_connection = module;

    moduledict_h11$_connection = MODULE_DICT(module_h11$_connection);

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
        PRINT_STRING("h11$_connection: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("h11$_connection: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("h11$_connection: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "h11._connection" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inith11$_connection\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_h11$_connection,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_h11$_connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_h11$_connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_h11$_connection);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_h11$_connection);
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

        UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection;
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
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_h11$_connection$$$class__1_NEED_DATA_51 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_h11$_connection$$$class__2_PAUSED_55 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_h11$_connection$$$class__3_Connection_151 = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_connection$$$class__3_Connection_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_h11$_connection = MAKE_MODULE_FRAME(code_objects_ad77145bdc63e170c2b7988823012a47, module_h11$_connection);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection);
assert(Py_REFCNT(frame_frame_h11$_connection) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_h11$_connection$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_h11$_connection$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
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
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_5);
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
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_6);
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
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Dict,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Dict);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Tuple,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Tuple);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Type,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Type);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Type, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__events;
tmp_globals_arg_value_1 = (PyObject *)moduledict_h11$_connection;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_c5efb1bf7be2c83d6732f1385fe85eb2_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_h11$_connection->m_frame.f_lineno = 16;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_ConnectionClosed,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ConnectionClosed);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Data,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Data);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Data, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_EndOfMessage,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_EndOfMessage);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfMessage, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Event,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Event);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Event, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_InformationalResponse,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_InformationalResponse);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponse, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_17 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_22);
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
PyObject *tmp_assign_source_23;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__headers;
tmp_globals_arg_value_2 = (PyObject *)moduledict_h11$_connection;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_f540344003411d84f16dcea1e0990bf9_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_h11$_connection->m_frame.f_lineno = 25;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_18 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_get_comma_header,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_get_comma_header);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_get_comma_header, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_19 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_has_expect_100_continue,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_has_expect_100_continue);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_has_expect_100_continue, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_20 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_set_comma_header,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_set_comma_header);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_set_comma_header, tmp_assign_source_26);
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
PyObject *tmp_assign_source_27;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__readers;
tmp_globals_arg_value_3 = (PyObject *)moduledict_h11$_connection;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_READERS_str_plain_ReadersType_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_h11$_connection->m_frame.f_lineno = 26;
tmp_assign_source_27 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_27;
}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_21 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_READERS,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_READERS);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_READERS, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_22 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_ReadersType,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_ReadersType);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadersType, tmp_assign_source_29);
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
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__receivebuffer;
tmp_globals_arg_value_4 = (PyObject *)moduledict_h11$_connection;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ReceiveBuffer_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_h11$_connection->m_frame.f_lineno = 27;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_ReceiveBuffer,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_ReceiveBuffer);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__state;
tmp_globals_arg_value_5 = (PyObject *)moduledict_h11$_connection;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_57b8c32db5cfa09f80b36e793c5085f3_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_h11$_connection->m_frame.f_lineno = 28;
tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_24 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain__SWITCH_CONNECT,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain__SWITCH_CONNECT);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__SWITCH_CONNECT, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_25 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain__SWITCH_UPGRADE,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain__SWITCH_UPGRADE);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__SWITCH_UPGRADE, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_26 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_CLIENT,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_CLIENT);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_CLIENT, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_27 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_ConnectionState,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_ConnectionState);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionState, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_28 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_DONE,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_DONE);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_DONE, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_29 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_ERROR,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ERROR);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_30 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_MIGHT_SWITCH_PROTOCOL, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_31 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_SEND_BODY,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_SEND_BODY);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SEND_BODY, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_32 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_SERVER,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_SERVER);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SERVER, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_33 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_SWITCHED_PROTOCOL,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_SWITCHED_PROTOCOL);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_SWITCHED_PROTOCOL, tmp_assign_source_41);
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
PyObject *tmp_assign_source_42;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_6 = (PyObject *)moduledict_h11$_connection;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_60df8832d16686d4ace5501b91bd5bf7_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_h11$_connection->m_frame.f_lineno = 40;
tmp_assign_source_42 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_42;
}
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_34 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_LocalProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_LocalProtocolError);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalProtocolError, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_35 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_RemoteProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_RemoteProtocolError);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteProtocolError, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_36 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_Sentinel,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_Sentinel);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Sentinel, tmp_assign_source_45);
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
PyObject *tmp_assign_source_46;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__writers;
tmp_globals_arg_value_7 = (PyObject *)moduledict_h11$_connection;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_WRITERS_str_plain_WritersType_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_h11$_connection->m_frame.f_lineno = 45;
tmp_assign_source_46 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_46;
}
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_37;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_37 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_WRITERS,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_WRITERS);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_WRITERS, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_38 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_h11$_connection,
        mod_consts.const_str_plain_WritersType,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_WritersType);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_WritersType, tmp_assign_source_48);
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
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_LIST3(tstate, mod_consts.const_str_plain_Connection,mod_consts.const_str_plain_NEED_DATA,mod_consts.const_str_plain_PAUSED);
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_49);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_50;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto try_except_handler_8;
}
tmp_assign_source_50 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_51 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_dict_value_1 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto try_except_handler_8;
}
tmp_assign_source_52 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_metaclass_value_1;
bool tmp_condition_result_1;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_metaclass_value_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_metaclass_value_1 == NULL) {
    tmp_metaclass_value_1 = Py_None;
    Py_INCREF_IMMORTAL(tmp_metaclass_value_1);
}
assert(!(tmp_metaclass_value_1 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_2:;
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_53;
}
{
bool tmp_condition_result_3;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_3;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_1__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
branch_no_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_54;
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


exception_lineno = 51;

    goto try_except_handler_8;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_NEED_DATA;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_h11$_connection->m_frame.f_lineno = 51;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_54;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_8;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

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


exception_lineno = 51;

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


exception_lineno = 51;

    goto try_except_handler_8;
}
frame_frame_h11$_connection->m_frame.f_lineno = 51;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 51;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_55;
}
branch_end_2:;
{
PyObject *tmp_assign_source_56;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_h11$_connection$$$class__1_NEED_DATA_51 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_37eb1aee9505ec1ee2508883b99ccc82;
tmp_res = PyObject_SetItem(locals_h11$_connection$$$class__1_NEED_DATA_51, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_NEED_DATA;
tmp_res = PyObject_SetItem(locals_h11$_connection$$$class__1_NEED_DATA_51, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_51;
tmp_res = PyObject_SetItem(locals_h11$_connection$$$class__1_NEED_DATA_51, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_10;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_connection$$$class__1_NEED_DATA_51, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_10;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_h11$_connection$$$class__1_NEED_DATA_51, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_10;
}
branch_no_4:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_NEED_DATA;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_h11$_connection$$$class__1_NEED_DATA_51;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_h11$_connection->m_frame.f_lineno = 51;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_10;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_57;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_56 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_56);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_h11$_connection$$$class__1_NEED_DATA_51);
locals_h11$_connection$$$class__1_NEED_DATA_51 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_connection$$$class__1_NEED_DATA_51);
locals_h11$_connection$$$class__1_NEED_DATA_51 = NULL;
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
exception_lineno = 51;
goto try_except_handler_8;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_NEED_DATA, tmp_assign_source_56);
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
PyObject *tmp_assign_source_58;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto try_except_handler_11;
}
tmp_assign_source_58 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_58, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_59 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_metaclass;
tmp_dict_value_2 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto try_except_handler_11;
}
tmp_assign_source_60 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_metaclass_value_2;
bool tmp_condition_result_7;
PyObject *tmp_key_value_4;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_key_value_5;
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
tmp_key_value_4 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_5 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_key_value_5 = mod_consts.const_str_plain_metaclass;
tmp_metaclass_value_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
if (tmp_metaclass_value_2 == NULL) {
    tmp_metaclass_value_2 = Py_None;
    Py_INCREF_IMMORTAL(tmp_metaclass_value_2);
}
assert(!(tmp_metaclass_value_2 == NULL));
goto condexpr_end_3;
condexpr_false_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_11;
}
tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_11;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_4:;
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_61 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_61;
}
{
bool tmp_condition_result_9;
PyObject *tmp_key_value_6;
PyObject *tmp_dict_arg_value_6;
tmp_key_value_6 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_6 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_2__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_11;
}
branch_no_5:;
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_11;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_62;
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


exception_lineno = 55;

    goto try_except_handler_11;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_PAUSED;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_h11$_connection->m_frame.f_lineno = 55;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_62;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_11;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

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


exception_lineno = 55;

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


exception_lineno = 55;

    goto try_except_handler_11;
}
frame_frame_h11$_connection->m_frame.f_lineno = 55;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_63;
}
branch_end_6:;
{
PyObject *tmp_assign_source_64;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_h11$_connection$$$class__2_PAUSED_55 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_37eb1aee9505ec1ee2508883b99ccc82;
tmp_res = PyObject_SetItem(locals_h11$_connection$$$class__2_PAUSED_55, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_PAUSED;
tmp_res = PyObject_SetItem(locals_h11$_connection$$$class__2_PAUSED_55, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_55;
tmp_res = PyObject_SetItem(locals_h11$_connection$$$class__2_PAUSED_55, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_13;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h11$_connection$$$class__2_PAUSED_55, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_13;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_h11$_connection$$$class__2_PAUSED_55, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_13;
}
branch_no_8:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_PAUSED;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_h11$_connection$$$class__2_PAUSED_55;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_h11$_connection->m_frame.f_lineno = 55;
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_13;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_65;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_64 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_64);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_h11$_connection$$$class__2_PAUSED_55);
locals_h11$_connection$$$class__2_PAUSED_55 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_connection$$$class__2_PAUSED_55);
locals_h11$_connection$$$class__2_PAUSED_55 = NULL;
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
exception_lineno = 55;
goto try_except_handler_11;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_PAUSED, tmp_assign_source_64);
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
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = mod_consts.const_int_pos_16384;
UPDATE_STRING_DICT0(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_9;
tmp_dict_key_3 = mod_consts.const_str_plain_event;
tmp_expression_value_13 = module_var_accessor_h11$_connection$Union(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

    goto frame_exception_exit_1;
}
tmp_tuple_element_9 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

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
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_assign_source_67 = MAKE_FUNCTION_h11$_connection$$$function__1__keep_alive(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__keep_alive, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_request_method;
tmp_dict_value_4 = (PyObject *)&PyBytes_Type;
tmp_annotations_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_11;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_event;
tmp_expression_value_14 = module_var_accessor_h11$_connection$Union(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto dict_build_exception_1;
}
tmp_tuple_element_10 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto dict_build_exception_1;
}
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_10);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_subscript_value_4);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_15 = module_var_accessor_h11$_connection$Tuple(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto dict_build_exception_1;
}
tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_7;
PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_11);
tmp_expression_value_16 = module_var_accessor_h11$_connection$Union(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto tuple_build_exception_5;
}
tmp_expression_value_17 = module_var_accessor_h11$_connection$Tuple(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto tuple_build_exception_5;
}
tmp_subscript_value_7 = const_tuple_empty;
tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_7);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto tuple_build_exception_5;
}
tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_8;
PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_12);
tmp_expression_value_18 = module_var_accessor_h11$_connection$Tuple(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto tuple_build_exception_6;
}
tmp_subscript_value_8 = (PyObject *)&PyLong_Type;
tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_8);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_subscript_value_6);
goto tuple_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_subscript_value_5);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_assign_source_68 = MAKE_FUNCTION_h11$_connection$$$function__2__body_framing(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain__body_framing, tmp_assign_source_68);
}
{
PyObject *tmp_outline_return_value_3;
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_70;
}
// Tried code:
{
PyObject *tmp_assign_source_71;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_h11$_connection$$$class__3_Connection_151 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_37eb1aee9505ec1ee2508883b99ccc82;
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_d878e63a3e76a0b25f6c5127395c28bf;
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Connection;
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_151;
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_h11$_connection$$$class__3_Connection_2 = MAKE_CLASS_FRAME(tstate, code_objects_9658a18f32074241bfe47d3c97f43ac5, module_h11$_connection, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_connection$$$class__3_Connection_2);
assert(Py_REFCNT(frame_frame_h11$_connection$$$class__3_Connection_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_13;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_9;
tmp_tuple_element_13 = module_var_accessor_h11$_connection$DEFAULT_MAX_INCOMPLETE_EVENT_SIZE(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_INCOMPLETE_EVENT_SIZE);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_13);
tmp_dict_key_5 = mod_consts.const_str_plain_our_role;
tmp_expression_value_19 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_defaults_1);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_9 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_defaults_1);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_defaults_1);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_3 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_max_incomplete_event_size;
tmp_dict_value_5 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__3___init__(tstate, tmp_defaults_1, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_11;
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_expression_value_20 = module_var_accessor_h11$_connection$Dict(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dict);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_21 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_11 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_11);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_12;
PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_14);
tmp_expression_value_22 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
tmp_subscript_value_12 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_12);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_subscript_value_10);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));

tmp_args_element_value_1 = MAKE_FUNCTION_h11$_connection$$$function__4_states(tstate, tmp_annotations_4);

frame_frame_h11$_connection$$$class__3_Connection_2->m_frame.f_lineno = 206;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain_states, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_13;
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_expression_value_23 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_13 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_13);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_5 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));

tmp_args_element_value_2 = MAKE_FUNCTION_h11$_connection$$$function__5_our_state(tstate, tmp_annotations_5);

frame_frame_h11$_connection$$$class__3_Connection_2->m_frame.f_lineno = 217;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain_our_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_14;
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_expression_value_24 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_14 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_14);
if (tmp_dict_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_6 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));

tmp_args_element_value_3 = MAKE_FUNCTION_h11$_connection$$$function__6_their_state(tstate, tmp_annotations_6);

frame_frame_h11$_connection$$$class__3_Connection_2->m_frame.f_lineno = 224;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain_their_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_7;
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);

tmp_args_element_value_4 = MAKE_FUNCTION_h11$_connection$$$function__7_they_are_waiting_for_100_continue(tstate, tmp_annotations_7);

frame_frame_h11$_connection$$$class__3_Connection_2->m_frame.f_lineno = 231;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain_they_are_waiting_for_100_continue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__8_start_next_cycle(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain_start_next_cycle, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_15;
tmp_dict_key_9 = mod_consts.const_str_plain_role;
tmp_expression_value_25 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_15 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_15);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_9 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__9__process_error(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain__process_error, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
tmp_dict_key_10 = mod_consts.const_str_plain_event;
tmp_dict_value_10 = module_var_accessor_h11$_connection$Event(tstate);
if (unlikely(tmp_dict_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_dict_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_10 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_16;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_17;
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_return;
tmp_expression_value_26 = module_var_accessor_h11$_connection$Optional(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_27 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_subscript_value_17 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_subscript_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_17);
if (tmp_subscript_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_16);
CHECK_OBJECT(tmp_subscript_value_16);
Py_DECREF(tmp_subscript_value_16);
if (tmp_dict_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_10);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__10__server_switch_event(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain__server_switch_event, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_11;
PyObject *tmp_dict_key_11;
PyObject *tmp_dict_value_11;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_18;
tmp_dict_key_11 = mod_consts.const_str_plain_role;
tmp_expression_value_28 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_18 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_18);
if (tmp_dict_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_11 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_event;
tmp_dict_value_11 = module_var_accessor_h11$_connection$Event(tstate);
if (unlikely(tmp_dict_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_dict_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_return;
tmp_dict_value_11 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_annotations_11);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__11__process_event(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain__process_event, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_19;
tmp_dict_key_12 = mod_consts.const_str_plain_role;
tmp_expression_value_29 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_19 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_19);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_12 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_20;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_21;
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_22;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_23;
PyObject *tmp_tuple_element_16;
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_event;
tmp_expression_value_30 = module_var_accessor_h11$_connection$Optional(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_subscript_value_20 = module_var_accessor_h11$_connection$Event(tstate);
if (unlikely(tmp_subscript_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_subscript_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_20);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_io_dict;
tmp_expression_value_31 = module_var_accessor_h11$_connection$Union(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_tuple_element_15 = module_var_accessor_h11$_connection$ReadersType(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadersType);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_21, 0, tmp_tuple_element_15);
tmp_tuple_element_15 = module_var_accessor_h11$_connection$WritersType(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WritersType);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_2 = "o";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM0(tmp_subscript_value_21, 1, tmp_tuple_element_15);
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_subscript_value_21);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_21);
CHECK_OBJECT(tmp_subscript_value_21);
Py_DECREF(tmp_subscript_value_21);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_return;
tmp_expression_value_32 = module_var_accessor_h11$_connection$Optional(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_expression_value_33 = module_var_accessor_h11$_connection$Callable(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_tuple_element_16 = Py_Ellipsis;
tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_23, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = module_var_accessor_h11$_connection$Any(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_2 = "o";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM0(tmp_subscript_value_23, 1, tmp_tuple_element_16);
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_subscript_value_23);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_subscript_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_23);
CHECK_OBJECT(tmp_subscript_value_23);
Py_DECREF(tmp_subscript_value_23);
if (tmp_subscript_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_22);
CHECK_OBJECT(tmp_subscript_value_22);
Py_DECREF(tmp_subscript_value_22);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_annotations_12);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__12__get_io_object(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain__get_io_object, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_13;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_24;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_25;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_13 = mod_consts.const_str_plain_old_states;
tmp_expression_value_34 = module_var_accessor_h11$_connection$Dict(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dict);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_35 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_25 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_25);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_26;
PyTuple_SET_ITEM(tmp_subscript_value_24, 0, tmp_tuple_element_17);
tmp_expression_value_36 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 344;
type_description_2 = "o";
    goto tuple_build_exception_10;
}
tmp_subscript_value_26 = module_var_accessor_h11$_connection$Sentinel(tstate);
if (unlikely(tmp_subscript_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sentinel);
}

if (tmp_subscript_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 344;
type_description_2 = "o";
    goto tuple_build_exception_10;
}
tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_26);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_2 = "o";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_subscript_value_24, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_subscript_value_24);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_24);
CHECK_OBJECT(tmp_subscript_value_24);
Py_DECREF(tmp_subscript_value_24);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_13 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_27;
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_event;
tmp_expression_value_37 = module_var_accessor_h11$_connection$Optional(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_subscript_value_27 = module_var_accessor_h11$_connection$Event(tstate);
if (unlikely(tmp_subscript_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_subscript_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_27);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_return;
tmp_dict_value_13 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_annotations_13);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__13__respond_to_state_changes(tstate, tmp_defaults_2, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain__respond_to_state_changes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_14;
PyObject *tmp_dict_key_14;
PyObject *tmp_dict_value_14;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_28;
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
tmp_dict_key_14 = mod_consts.const_str_plain_return;
tmp_expression_value_38 = module_var_accessor_h11$_connection$Tuple(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_28 = mod_consts.const_tuple_type_bytes_type_bool_tuple;
tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_28);
if (tmp_dict_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_14 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));

tmp_args_element_value_5 = MAKE_FUNCTION_h11$_connection$$$function__14_trailing_data(tstate, tmp_annotations_14);

frame_frame_h11$_connection$$$class__3_Connection_2->m_frame.f_lineno = 353;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain_trailing_data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_271566c83b48ae5bc9aa9828645655bc);

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__15_receive_data(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain_receive_data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_16;
PyObject *tmp_dict_key_15;
PyObject *tmp_dict_value_15;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_29;
PyObject *tmp_tuple_element_18;
tmp_dict_key_15 = mod_consts.const_str_plain_return;
tmp_expression_value_39 = module_var_accessor_h11$_connection$Union(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_18 = module_var_accessor_h11$_connection$Event(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_29 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_30;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_31;
PyTuple_SET_ITEM0(tmp_subscript_value_29, 0, tmp_tuple_element_18);
tmp_expression_value_40 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
tmp_subscript_value_30 = module_var_accessor_h11$_connection$NEED_DATA(tstate);
if (unlikely(tmp_subscript_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NEED_DATA);
}

if (tmp_subscript_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_30);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_subscript_value_29, 1, tmp_tuple_element_18);
tmp_expression_value_41 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
tmp_subscript_value_31 = module_var_accessor_h11$_connection$PAUSED(tstate);
if (unlikely(tmp_subscript_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PAUSED);
}

if (tmp_subscript_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_31);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_subscript_value_29, 2, tmp_tuple_element_18);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_subscript_value_29);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_29);
CHECK_OBJECT(tmp_subscript_value_29);
Py_DECREF(tmp_subscript_value_29);
if (tmp_dict_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_16 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__16__extract_next_receive_event(tstate, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain__extract_next_receive_event, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_17;
PyObject *tmp_dict_key_16;
PyObject *tmp_dict_value_16;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_32;
PyObject *tmp_tuple_element_19;
tmp_dict_key_16 = mod_consts.const_str_plain_return;
tmp_expression_value_42 = module_var_accessor_h11$_connection$Union(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_19 = module_var_accessor_h11$_connection$Event(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_33;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_34;
PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_19);
tmp_expression_value_43 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_2 = "o";
    goto tuple_build_exception_12;
}
tmp_subscript_value_33 = module_var_accessor_h11$_connection$NEED_DATA(tstate);
if (unlikely(tmp_subscript_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NEED_DATA);
}

if (tmp_subscript_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_2 = "o";
    goto tuple_build_exception_12;
}
tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_33);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_2 = "o";
    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_19);
tmp_expression_value_44 = module_var_accessor_h11$_connection$Type(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_2 = "o";
    goto tuple_build_exception_12;
}
tmp_subscript_value_34 = module_var_accessor_h11$_connection$PAUSED(tstate);
if (unlikely(tmp_subscript_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PAUSED);
}

if (tmp_subscript_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_2 = "o";
    goto tuple_build_exception_12;
}
tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_34);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_2 = "o";
    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_subscript_value_32, 2, tmp_tuple_element_19);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_subscript_value_32);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_32);
CHECK_OBJECT(tmp_subscript_value_32);
Py_DECREF(tmp_subscript_value_32);
if (tmp_dict_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_17 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__17_next_event(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain_next_event, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_18;
PyObject *tmp_dict_key_17;
PyObject *tmp_dict_value_17;
tmp_called_value_10 = module_var_accessor_h11$_connection$overload(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 503;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_key_17 = mod_consts.const_str_plain_event;
tmp_dict_value_17 = module_var_accessor_h11$_connection$ConnectionClosed(tstate);
if (unlikely(tmp_dict_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionClosed);
}

if (tmp_dict_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 504;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_18 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_17, tmp_dict_value_17);
assert(!(tmp_res != 0));
tmp_dict_key_17 = mod_consts.const_str_plain_return;
tmp_dict_value_17 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_17, tmp_dict_value_17);
assert(!(tmp_res != 0));

tmp_args_element_value_6 = MAKE_FUNCTION_h11$_connection$$$function__18_send(tstate, tmp_annotations_18);

frame_frame_h11$_connection$$$class__3_Connection_2->m_frame.f_lineno = 503;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, const_str_plain_send, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_19;
PyObject *tmp_dict_key_18;
PyObject *tmp_dict_value_18;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_35;
PyObject *tmp_tuple_element_20;
tmp_called_value_11 = module_var_accessor_h11$_connection$overload(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_key_18 = mod_consts.const_str_plain_event;
tmp_expression_value_45 = module_var_accessor_h11$_connection$Union(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 509;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_20 = module_var_accessor_h11$_connection$Request(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 509;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_35 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_subscript_value_35, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_h11$_connection$InformationalResponse(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InformationalResponse);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 509;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_subscript_value_35, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 509;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_subscript_value_35, 2, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_h11$_connection$Data(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Data);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 509;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_subscript_value_35, 3, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_h11$_connection$EndOfMessage(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EndOfMessage);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 509;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_subscript_value_35, 4, tmp_tuple_element_20);
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_subscript_value_35);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_35);
CHECK_OBJECT(tmp_subscript_value_35);
Py_DECREF(tmp_subscript_value_35);
if (tmp_dict_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_19 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_18, tmp_dict_value_18);
Py_DECREF(tmp_dict_value_18);
assert(!(tmp_res != 0));
tmp_dict_key_18 = mod_consts.const_str_plain_return;
tmp_dict_value_18 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_18, tmp_dict_value_18);
assert(!(tmp_res != 0));

tmp_args_element_value_7 = MAKE_FUNCTION_h11$_connection$$$function__19_send(tstate, tmp_annotations_19);

frame_frame_h11$_connection$$$class__3_Connection_2->m_frame.f_lineno = 507;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, const_str_plain_send, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_20;
PyObject *tmp_dict_key_19;
PyObject *tmp_dict_value_19;
tmp_called_value_12 = module_var_accessor_h11$_connection$overload(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_key_19 = mod_consts.const_str_plain_event;
tmp_dict_value_19 = module_var_accessor_h11$_connection$Event(tstate);
if (unlikely(tmp_dict_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_dict_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_20 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_36;
tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_19, tmp_dict_value_19);
assert(!(tmp_res != 0));
tmp_dict_key_19 = mod_consts.const_str_plain_return;
tmp_expression_value_46 = module_var_accessor_h11$_connection$Optional(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_subscript_value_36 = (PyObject *)&PyBytes_Type;
tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_36);
if (tmp_dict_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_2 = "o";
    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_19, tmp_dict_value_19);
Py_DECREF(tmp_dict_value_19);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_annotations_20);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;

tmp_args_element_value_8 = MAKE_FUNCTION_h11$_connection$$$function__20_send(tstate, tmp_annotations_20);

frame_frame_h11$_connection$$$class__3_Connection_2->m_frame.f_lineno = 513;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, const_str_plain_send, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_21;
PyObject *tmp_dict_key_20;
PyObject *tmp_dict_value_20;
tmp_dict_key_20 = mod_consts.const_str_plain_event;
tmp_dict_value_20 = module_var_accessor_h11$_connection$Event(tstate);
if (unlikely(tmp_dict_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_dict_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 517;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_21 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_47;
PyObject *tmp_subscript_value_37;
tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_20, tmp_dict_value_20);
assert(!(tmp_res != 0));
tmp_dict_key_20 = mod_consts.const_str_plain_return;
tmp_expression_value_47 = module_var_accessor_h11$_connection$Optional(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 517;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_subscript_value_37 = (PyObject *)&PyBytes_Type;
tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_37);
if (tmp_dict_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_2 = "o";
    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_20, tmp_dict_value_20);
Py_DECREF(tmp_dict_value_20);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_annotations_21);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__21_send(tstate, tmp_annotations_21);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, const_str_plain_send, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_22;
PyObject *tmp_dict_key_21;
PyObject *tmp_dict_value_21;
tmp_dict_key_21 = mod_consts.const_str_plain_event;
tmp_dict_value_21 = module_var_accessor_h11$_connection$Event(tstate);
if (unlikely(tmp_dict_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_dict_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 544;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_22 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_48;
PyObject *tmp_subscript_value_38;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_39;
tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_21, tmp_dict_value_21);
assert(!(tmp_res != 0));
tmp_dict_key_21 = mod_consts.const_str_plain_return;
tmp_expression_value_48 = module_var_accessor_h11$_connection$Optional(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 544;
type_description_2 = "o";
    goto dict_build_exception_8;
}
tmp_expression_value_49 = module_var_accessor_h11$_connection$List(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 544;
type_description_2 = "o";
    goto dict_build_exception_8;
}
tmp_subscript_value_39 = (PyObject *)&PyBytes_Type;
tmp_subscript_value_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_39);
if (tmp_subscript_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_2 = "o";
    goto dict_build_exception_8;
}
tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_38);
CHECK_OBJECT(tmp_subscript_value_38);
Py_DECREF(tmp_subscript_value_38);
if (tmp_dict_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_2 = "o";
    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_21, tmp_dict_value_21);
Py_DECREF(tmp_dict_value_21);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_annotations_22);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__22_send_with_data_passthrough(tstate, tmp_annotations_22);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain_send_with_data_passthrough, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__23_send_failed(tstate, tmp_annotations_23);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain_send_failed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_24;
PyObject *tmp_dict_key_22;
PyObject *tmp_dict_value_22;
tmp_dict_key_22 = mod_consts.const_str_plain_response;
tmp_dict_value_22 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_dict_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_dict_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 602;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_24 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_22, tmp_dict_value_22);
assert(!(tmp_res != 0));
tmp_dict_key_22 = mod_consts.const_str_plain_return;
tmp_dict_value_22 = module_var_accessor_h11$_connection$Response(tstate);
if (unlikely(tmp_dict_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Response);
}

if (tmp_dict_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 602;
type_description_2 = "o";
    goto dict_build_exception_9;
}
tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_22, tmp_dict_value_22);
assert(!(tmp_res != 0));
goto dict_build_no_exception_9;
// Exception handling pass through code for dict_build:
dict_build_exception_9:;
Py_DECREF(tmp_annotations_24);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_9:;

tmp_dictset_value = MAKE_FUNCTION_h11$_connection$$$function__24__clean_up_response_headers_for_sending(tstate, tmp_annotations_24);

tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain__clean_up_response_headers_for_sending, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 602;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection$$$class__3_Connection_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection$$$class__3_Connection_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection$$$class__3_Connection_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_connection$$$class__3_Connection_2,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_h11$_connection$$$class__3_Connection_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_16;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_a749cf313af967a670a4169d3e3381af_tuple;
tmp_result = DICT_SET_ITEM(locals_h11$_connection$$$class__3_Connection_151, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_5;
tmp_called_value_13 = (PyObject *)&PyType_Type;
tmp_tuple_element_21 = mod_consts.const_str_plain_Connection;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = locals_h11$_connection$$$class__3_Connection_151;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_h11$_connection->m_frame.f_lineno = 151;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_16;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_72;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_71 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_71);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_h11$_connection$$$class__3_Connection_151);
locals_h11$_connection$$$class__3_Connection_151 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_connection$$$class__3_Connection_151);
locals_h11$_connection$$$class__3_Connection_151 = NULL;
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
exception_lineno = 151;
goto try_except_handler_14;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_h11$_connection, (Nuitka_StringObject *)mod_consts.const_str_plain_Connection, tmp_assign_source_71);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_h11$_connection);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("h11$_connection", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "h11._connection" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_h11$_connection);
    return module_h11$_connection;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_connection, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("h11$_connection", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
